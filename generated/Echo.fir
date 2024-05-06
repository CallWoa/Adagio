FIRRTL version 1.2.0
circuit Echo :
  module Tx :
    input clock : Clock
    input reset : Reset
    output io : { txd : UInt<1>, channel : { flip data : UInt<8>, ready : UInt<1>, flip valid : UInt<1>}} @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 39:14]

    reg shiftReg : UInt, clock with :
      reset => (reset, UInt<11>("h7ff")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 44:25]
    reg cntReg : UInt<20>, clock with :
      reset => (reset, UInt<20>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 45:23]
    reg bitsReg : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 46:24]
    node _io_channel_ready_T = eq(cntReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 48:31]
    node _io_channel_ready_T_1 = eq(bitsReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 48:52]
    node _io_channel_ready_T_2 = and(_io_channel_ready_T, _io_channel_ready_T_1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 48:40]
    io.channel.ready <= _io_channel_ready_T_2 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 48:20]
    node _io_txd_T = bits(shiftReg, 0, 0) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 49:21]
    io.txd <= _io_txd_T @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 49:10]
    node _T = eq(cntReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 51:16]
    when _T : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 51:25]
      cntReg <= UInt<9>("h1b1") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 52:12]
      node _T_1 = neq(bitsReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 53:19]
      when _T_1 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 53:28]
        node shift = shr(shiftReg, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 54:28]
        node _shiftReg_T = bits(shift, 9, 0) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 55:33]
        node _shiftReg_T_1 = cat(UInt<1>("h1"), _shiftReg_T) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 55:22]
        shiftReg <= _shiftReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 55:16]
        node _bitsReg_T = sub(bitsReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 56:26]
        node _bitsReg_T_1 = tail(_bitsReg_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 56:26]
        bitsReg <= _bitsReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 56:15]
      else :
        when io.channel.valid : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 58:31]
          node _shiftReg_T_2 = cat(UInt<2>("h3"), io.channel.data) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 60:28]
          node _shiftReg_T_3 = cat(_shiftReg_T_2, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 60:24]
          shiftReg <= _shiftReg_T_3 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 60:18]
          bitsReg <= UInt<4>("hb") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 61:17]
        else :
          shiftReg <= UInt<11>("h7ff") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 63:18]
    else :
      node _cntReg_T = sub(cntReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 67:22]
      node _cntReg_T_1 = tail(_cntReg_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 67:22]
      cntReg <= _cntReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 67:12]


  module Buffer :
    input clock : Clock
    input reset : Reset
    output io : { in : { flip data : UInt<8>, ready : UInt<1>, flip valid : UInt<1>}, flip out : { flip data : UInt<8>, ready : UInt<1>, flip valid : UInt<1>}} @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]

    reg stateReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 20:25]
    reg dataReg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 21:24]
    node _io_in_ready_T = eq(stateReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 23:28]
    io.in.ready <= _io_in_ready_T @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 23:16]
    node _io_out_valid_T = eq(stateReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 24:28]
    io.out.valid <= _io_out_valid_T @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 24:16]
    node _T = eq(stateReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 26:18]
    when _T : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 26:29]
      when io.in.valid : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 27:24]
        dataReg <= io.in.data @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 28:15]
        stateReg <= UInt<1>("h1") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 29:16]
    else :
      when io.out.ready : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 32:25]
        stateReg <= UInt<1>("h0") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 33:16]
    io.out.data <= dataReg @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 36:15]

  module BufferTx :
    input clock : Clock
    input reset : Reset
    output io : { txd : UInt<1>, channel : { flip data : UInt<8>, ready : UInt<1>, flip valid : UInt<1>}} @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 72:14]

    inst tx of Tx @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 76:18]
    tx.clock <= clock
    tx.reset <= reset
    inst buf of Buffer @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 77:19]
    buf.clock <= clock
    buf.reset <= reset
    buf.io.in.valid <= io.channel.valid @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:13]
    io.channel.ready <= buf.io.in.ready @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:13]
    buf.io.in.data <= io.channel.data @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:13]
    buf.io.out <= tx.io.channel @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 80:17]
    io.txd <= tx.io.txd @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 81:10]

  module Rx :
    input clock : Clock
    input reset : Reset
    output io : { flip rxd : UInt<1>, flip channel : { flip data : UInt<8>, ready : UInt<1>, flip valid : UInt<1>}} @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 103:14]

    reg rxReg_REG : UInt, clock with :
      reset => (reset, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 111:30]
    rxReg_REG <= io.rxd @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 111:30]
    reg rxReg : UInt, clock with :
      reset => (reset, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 111:22]
    rxReg <= rxReg_REG @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 111:22]
    reg shiftReg : UInt<8>, clock with :
      reset => (reset, UInt<8>("h41")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 112:25]
    reg cntReg : UInt<20>, clock with :
      reset => (reset, UInt<20>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 113:23]
    reg bitsReg : UInt<4>, clock with :
      reset => (reset, UInt<4>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:24]
    reg valReg : UInt<1>, clock with :
      reset => (reset, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 115:23]
    node _T = neq(cntReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:16]
    when _T : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:25]
      node _cntReg_T = sub(cntReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 118:22]
      node _cntReg_T_1 = tail(_cntReg_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 118:22]
      cntReg <= _cntReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 118:12]
    else :
      node _T_1 = neq(bitsReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 119:24]
      when _T_1 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 119:33]
        cntReg <= UInt<9>("h1b1") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 120:12]
        node _shiftReg_T = shr(shiftReg, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:37]
        node _shiftReg_T_1 = cat(rxReg, _shiftReg_T) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:20]
        shiftReg <= _shiftReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:14]
        node _bitsReg_T = sub(bitsReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 122:24]
        node _bitsReg_T_1 = tail(_bitsReg_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 122:24]
        bitsReg <= _bitsReg_T_1 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 122:13]
        node _T_2 = eq(bitsReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 123:19]
        when _T_2 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 123:28]
          valReg <= UInt<1>("h1") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 124:14]
      else :
        node _T_3 = eq(rxReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 127:22]
        when _T_3 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 127:31]
          cntReg <= UInt<10>("h28a") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 128:12]
          bitsReg <= UInt<4>("h8") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 129:13]
    node _T_4 = and(valReg, io.channel.ready) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 132:16]
    when _T_4 : @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 132:37]
      valReg <= UInt<1>("h0") @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 133:12]
    io.channel.data <= shiftReg @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 136:19]
    io.channel.valid <= valReg @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 137:20]

  module Echo :
    input clock : Clock
    input reset : UInt<1>
    output io : { txd : UInt<1>, flip rxd : UInt<1>} @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 141:14]

    inst tx of BufferTx @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 146:18]
    tx.clock <= clock
    tx.reset <= reset
    inst rx of Rx @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 147:18]
    rx.clock <= clock
    rx.reset <= reset
    io.txd <= tx.io.txd @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 148:10]
    rx.io.rxd <= io.rxd @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 149:13]
    rx.io.channel <= tx.io.channel @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 150:17]

