FIRRTL version 1.2.0
circuit UART :
  module Tx :
    input clock : Clock
    input reset : Reset
    output io : { txd : UInt<1>, channel : { flip data : UInt<8>, ready : UInt<1>, flip valid : UInt<1>}} @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 40:14]

    reg shiftReg : UInt, clock with :
      reset => (reset, UInt<11>("h7ff")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 46:25]
    reg cntReg : UInt<20>, clock with :
      reset => (reset, UInt<20>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 47:23]
    reg bitsReg : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 48:24]
    node _io_channel_ready_T = eq(cntReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 50:31]
    node _io_channel_ready_T_1 = eq(bitsReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 50:52]
    node _io_channel_ready_T_2 = and(_io_channel_ready_T, _io_channel_ready_T_1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 50:40]
    io.channel.ready <= _io_channel_ready_T_2 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 50:20]
    node _io_txd_T = bits(shiftReg, 0, 0) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 51:21]
    io.txd <= _io_txd_T @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 51:10]
    node _T = eq(cntReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 53:16]
    when _T : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 53:25]
      cntReg <= UInt<9>("h1b1") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 54:12]
      node _T_1 = neq(bitsReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 55:19]
      when _T_1 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 55:28]
        node shift = shr(shiftReg, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 56:28]
        node _shiftReg_T = bits(shift, 9, 0) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 57:33]
        node _shiftReg_T_1 = cat(UInt<1>("h1"), _shiftReg_T) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 57:22]
        shiftReg <= _shiftReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 57:16]
        node _bitsReg_T = sub(bitsReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 58:26]
        node _bitsReg_T_1 = tail(_bitsReg_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 58:26]
        bitsReg <= _bitsReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 58:15]
      else :
        when io.channel.valid : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 60:31]
          node _shiftReg_T_2 = cat(UInt<2>("h3"), io.channel.data) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 62:28]
          node _shiftReg_T_3 = cat(_shiftReg_T_2, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 62:24]
          shiftReg <= _shiftReg_T_3 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 62:18]
          bitsReg <= UInt<4>("hb") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 63:17]
        else :
          shiftReg <= UInt<11>("h7ff") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 65:18]
    else :
      node _cntReg_T = sub(cntReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 69:22]
      node _cntReg_T_1 = tail(_cntReg_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 69:22]
      cntReg <= _cntReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 69:12]


  module Buffer :
    input clock : Clock
    input reset : Reset
    output io : { in : { flip data : UInt<8>, ready : UInt<1>, flip valid : UInt<1>}, flip out : { flip data : UInt<8>, ready : UInt<1>, flip valid : UInt<1>}} @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 15:14]

    reg stateReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 21:25]
    reg dataReg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 22:24]
    node _io_in_ready_T = eq(stateReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 24:28]
    io.in.ready <= _io_in_ready_T @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 24:16]
    node _io_out_valid_T = eq(stateReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 25:28]
    io.out.valid <= _io_out_valid_T @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 25:16]
    node _T = eq(stateReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 27:18]
    when _T : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 27:29]
      when io.in.valid : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 28:24]
        dataReg <= io.in.data @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 29:15]
        stateReg <= UInt<1>("h1") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 30:16]
    else :
      when io.out.ready : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 33:25]
        stateReg <= UInt<1>("h0") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 34:16]
    io.out.data <= dataReg @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 37:15]

  module BufferTx :
    input clock : Clock
    input reset : Reset
    output io : { txd : UInt<1>, channel : { flip data : UInt<8>, ready : UInt<1>, flip valid : UInt<1>}} @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 74:14]

    inst tx of Tx @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 78:18]
    tx.clock <= clock
    tx.reset <= reset
    inst buf of Buffer @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:19]
    buf.clock <= clock
    buf.reset <= reset
    buf.io.in.valid <= io.channel.valid @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 81:13]
    io.channel.ready <= buf.io.in.ready @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 81:13]
    buf.io.in.data <= io.channel.data @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 81:13]
    buf.io.out <= tx.io.channel @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 82:17]
    io.txd <= tx.io.txd @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 83:10]

  module Rx :
    input clock : Clock
    input reset : Reset
    output io : { flip rxd : UInt<1>, flip channel : { flip data : UInt<8>, ready : UInt<1>, flip valid : UInt<1>}} @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 105:14]

    reg rxReg_REG : UInt, clock with :
      reset => (reset, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:30]
    rxReg_REG <= io.rxd @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:30]
    reg rxReg : UInt, clock with :
      reset => (reset, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:22]
    rxReg <= rxReg_REG @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:22]
    reg shiftReg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h41")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 115:25]
    reg cntReg : UInt<20>, clock with :
      reset => (reset, UInt<20>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 116:23]
    reg bitsReg : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:24]
    reg valReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 118:23]
    node _T = neq(cntReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 120:16]
    when _T : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 120:25]
      node _cntReg_T = sub(cntReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:22]
      node _cntReg_T_1 = tail(_cntReg_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:22]
      cntReg <= _cntReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:12]
    else :
      node _T_1 = neq(bitsReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 122:24]
      when _T_1 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 122:33]
        cntReg <= UInt<9>("h1b1") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 123:12]
        node _shiftReg_T = shr(shiftReg, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 124:37]
        node _shiftReg_T_1 = cat(rxReg, _shiftReg_T) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 124:20]
        shiftReg <= _shiftReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 124:14]
        node _bitsReg_T = sub(bitsReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 125:24]
        node _bitsReg_T_1 = tail(_bitsReg_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 125:24]
        bitsReg <= _bitsReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 125:13]
        node _T_2 = eq(bitsReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 126:19]
        when _T_2 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 126:28]
          valReg <= UInt<1>("h1") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 127:14]
      else :
        node _T_3 = eq(rxReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 130:22]
        when _T_3 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 130:31]
          cntReg <= UInt<10>("h28a") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 131:12]
          bitsReg <= UInt<4>("h8") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 132:13]
    node _T_4 = and(valReg, io.channel.ready) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 135:16]
    when _T_4 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 135:37]
      valReg <= UInt<1>("h0") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 136:12]
    io.channel.data <= shiftReg @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 139:19]
    io.channel.valid <= valReg @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 140:20]

  module UART :
    input clock : Clock
    input reset : UInt<1>
    output io : { flip ctrl : { flip tx_done : UInt<1>, flip rx_valid : UInt<1>, tx_en : UInt<1>}, flip mixPc : UInt<1>, lane : { txd : UInt<1>, flip rxd : UInt<1>}, flip rf : { flip w_en : UInt<1>, flip r_addr : UInt<8>, flip w_addr : UInt<8>, r_data : UInt<64>, flip w_data : UInt<64>}} @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]

    node MAX_ADDR = mux(io.mixPc, UInt<8>("hff"), UInt<8>("hbf")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 176:21]
    reg rx_byteCnt : UInt<3>, clock with :
      reset => (reset, UInt<3>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 178:27]
    reg rx_regCnt : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 179:26]
    reg rx_byteReg : UInt<64>, clock with :
      reset => (reset, UInt<64>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 180:27]
    reg rx_done : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 181:24]
    reg tx_byteCnt : UInt<3>, clock with :
      reset => (reset, UInt<3>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 183:27]
    reg tx_regCnt : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 184:26]
    reg tx_byteReg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 185:27]
    reg tx_done : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 186:24]
    inst tx of BufferTx @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 190:18]
    tx.clock <= clock
    tx.reset <= reset
    io.lane.txd <= tx.io.txd @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 191:15]
    tx.io.channel.valid <= io.ctrl.tx_en @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 192:23]
    tx.io.channel.data <= tx_byteReg @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 193:22]
    inst rx of Rx @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 196:18]
    rx.clock <= clock
    rx.reset <= reset
    rx.io.rxd <= io.lane.rxd @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 197:13]
    node _rx_io_channel_ready_T = eq(io.ctrl.tx_en, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 198:26]
    rx.io.channel.ready <= _rx_io_channel_ready_T @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 198:23]
    node _T = and(rx.io.channel.valid, rx.io.channel.ready) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 204:18]
    when _T : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 204:42]
      node _rx_byteReg_T = shl(rx_byteReg, 8) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 205:31]
      node _rx_byteReg_T_1 = or(_rx_byteReg_T, rx.io.channel.data) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 205:44]
      rx_byteReg <= _rx_byteReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 205:16]
      node _rx_byteCnt_T = add(rx_byteReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 206:30]
      node _rx_byteCnt_T_1 = tail(_rx_byteCnt_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 206:30]
      rx_byteCnt <= _rx_byteCnt_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 206:16]
    node _T_1 = eq(rx_byteCnt, UInt<3>("h7")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 209:19]
    when _T_1 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 209:28]
      io.rf.w_en <= UInt<1>("h1") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 210:16]
      node _T_2 = eq(rx_regCnt, MAX_ADDR) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 211:20]
      when _T_2 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 211:34]
        rx_regCnt <= UInt<1>("h0") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 212:17]
        rx_done <= UInt<1>("h1") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 213:15]
      else :
        node _rx_regCnt_T = add(rx_regCnt, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 215:30]
        node _rx_regCnt_T_1 = tail(_rx_regCnt_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 215:30]
        rx_regCnt <= _rx_regCnt_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 215:17]
    else :
      io.rf.w_en <= UInt<1>("h0") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 218:16]
    reg shift_reg : UInt<64>, clock with :
      reset => (reset, UInt<64>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 223:26]
    node _T_3 = and(io.ctrl.tx_en, tx.io.channel.ready) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 224:22]
    when _T_3 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 224:35]
      node _T_4 = eq(tx_byteCnt, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 225:21]
      when _T_4 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 225:30]
        shift_reg <= io.rf.r_data @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 226:17]
      node _tx_byteReg_T = bits(shift_reg, 63, 56) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 228:28]
      tx_byteReg <= _tx_byteReg_T @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 228:16]
      node _tx_byteCnt_T = add(tx_byteCnt, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 229:30]
      node _tx_byteCnt_T_1 = tail(_tx_byteCnt_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 229:30]
      tx_byteCnt <= _tx_byteCnt_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 229:16]
      node _shift_reg_T = shl(shift_reg, 8) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 230:28]
      shift_reg <= _shift_reg_T @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 230:15]
    node _T_5 = eq(tx_byteCnt, UInt<3>("h7")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 232:19]
    when _T_5 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 232:28]
      node _T_6 = eq(tx_regCnt, MAX_ADDR) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 233:20]
      when _T_6 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 233:34]
        tx_regCnt <= UInt<1>("h0") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 234:17]
        tx_done <= UInt<1>("h1") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 235:15]
      else :
        node _tx_regCnt_T = add(rx_regCnt, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 237:30]
        node _tx_regCnt_T_1 = tail(_tx_regCnt_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 237:30]
        tx_regCnt <= _tx_regCnt_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 237:17]
    io.ctrl.rx_valid <= rx_done @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 243:20]
    io.ctrl.tx_done <= tx_done @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 244:19]
    node _io_rf_r_addr_T = add(tx_regCnt, UInt<8>("h80")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 246:29]
    node _io_rf_r_addr_T_1 = tail(_io_rf_r_addr_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 246:29]
    io.rf.r_addr <= _io_rf_r_addr_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 246:16]
    io.rf.w_addr <= rx_regCnt @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 247:16]
    io.rf.w_data <= rx_byteReg @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 248:16]

