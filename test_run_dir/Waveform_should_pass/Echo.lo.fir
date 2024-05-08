FIRRTL version 1.2.0
circuit Echo :
  module Tx :
    input clock : Clock
    input reset : UInt<1>
    output io_txd : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 39:14]
    input io_channel_data : UInt<8> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 39:14]
    output io_channel_ready : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 39:14]
    input io_channel_valid : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 39:14]

    reg shiftReg : UInt<11>, clock with :
      reset => (UInt<1>("h0"), shiftReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 45:25]
    reg cntReg : UInt<20>, clock with :
      reset => (UInt<1>("h0"), cntReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 46:23]
    reg bitsReg : UInt<4>, clock with :
      reset => (UInt<1>("h0"), bitsReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 47:24]
    node _io_channel_ready_T = eq(cntReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 49:31]
    node _io_channel_ready_T_1 = eq(bitsReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 49:52]
    node _io_channel_ready_T_2 = and(_io_channel_ready_T, _io_channel_ready_T_1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 49:40]
    node _io_txd_T = bits(shiftReg, 0, 0) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 50:21]
    node _T = eq(cntReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 52:16]
    node _T_1 = neq(bitsReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 54:19]
    node shift = shr(shiftReg, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 55:28]
    node _shiftReg_T = bits(shift, 9, 0) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 56:33]
    node _shiftReg_T_1 = cat(UInt<1>("h1"), _shiftReg_T) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 56:22]
    node _bitsReg_T = sub(bitsReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 57:26]
    node _bitsReg_T_1 = tail(_bitsReg_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 57:26]
    node _shiftReg_T_2 = cat(UInt<2>("h3"), io_channel_data) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 61:28]
    node _shiftReg_T_3 = cat(_shiftReg_T_2, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 61:24]
    node _GEN_0 = mux(io_channel_valid, _shiftReg_T_3, UInt<11>("h7ff")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 59:31 61:18 64:18]
    node _GEN_1 = mux(io_channel_valid, UInt<4>("hb"), bitsReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 59:31 62:17 47:24]
    node _GEN_2 = mux(_T_1, _shiftReg_T_1, _GEN_0) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 54:28 56:16]
    node _GEN_3 = mux(_T_1, _bitsReg_T_1, _GEN_1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 54:28 57:15]
    node _cntReg_T = sub(cntReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 68:22]
    node _cntReg_T_1 = tail(_cntReg_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 68:22]
    node _GEN_4 = mux(_T, UInt<9>("h1b1"), _cntReg_T_1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 52:25 53:12 68:12]
    node _GEN_5 = mux(_T, _GEN_2, shiftReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 45:25 52:25]
    node _GEN_6 = mux(_T, _GEN_3, bitsReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 47:24 52:25]
    io_txd <= _io_txd_T @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 50:10]
    io_channel_ready <= _io_channel_ready_T_2 @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 49:20]
    shiftReg <= mux(reset, UInt<11>("h7ff"), _GEN_5) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 45:{25,25}]
    cntReg <= mux(reset, UInt<20>("h0"), _GEN_4) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 46:{23,23}]
    bitsReg <= mux(reset, UInt<4>("h0"), _GEN_6) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 47:{24,24}]

  module Buffer :
    input clock : Clock
    input reset : UInt<1>
    input io_in_data : UInt<8> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]
    output io_in_ready : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]
    input io_in_valid : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]
    output io_out_data : UInt<8> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]
    input io_out_ready : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]
    output io_out_valid : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]

    reg stateReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), stateReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 20:25]
    reg dataReg : UInt<8>, clock with :
      reset => (UInt<1>("h0"), dataReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 21:24]
    node _io_in_ready_T = eq(stateReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 23:28]
    node _io_out_valid_T = eq(stateReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 24:28]
    node _T = eq(stateReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 26:18]
    node _GEN_0 = mux(io_in_valid, io_in_data, dataReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 27:24 28:15 21:24]
    node _GEN_1 = mux(io_in_valid, UInt<1>("h1"), stateReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 27:24 29:16 20:25]
    node _GEN_2 = mux(io_out_ready, UInt<1>("h0"), stateReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 32:25 33:16 20:25]
    node _GEN_3 = mux(_T, _GEN_0, dataReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 21:24 26:29]
    node _GEN_4 = mux(_T, _GEN_1, _GEN_2) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 26:29]
    io_in_ready <= _io_in_ready_T @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 23:16]
    io_out_data <= dataReg @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 36:15]
    io_out_valid <= _io_out_valid_T @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 24:16]
    stateReg <= mux(reset, UInt<1>("h0"), _GEN_4) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 20:{25,25}]
    dataReg <= mux(reset, UInt<8>("h0"), _GEN_3) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 21:{24,24}]

  module BufferTx :
    input clock : Clock
    input reset : UInt<1>
    output io_txd : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 73:14]
    input io_channel_data : UInt<8> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 73:14]
    output io_channel_ready : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 73:14]
    input io_channel_valid : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 73:14]

    inst tx of Tx @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 77:18]
    inst buf of Buffer @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 78:19]
    io_txd <= tx.io_txd @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 82:10]
    io_channel_ready <= buf.io_in_ready @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 80:13]
    tx.clock <= clock
    tx.reset <= reset
    tx.io_channel_data <= buf.io_out_data @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 81:17]
    tx.io_channel_valid <= buf.io_out_valid @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 81:17]
    buf.clock <= clock
    buf.reset <= reset
    buf.io_in_data <= io_channel_data @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 80:13]
    buf.io_in_valid <= io_channel_valid @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 80:13]
    buf.io_out_ready <= tx.io_channel_ready @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 81:17]

  module Rx :
    input clock : Clock
    input reset : UInt<1>
    input io_rxd : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 104:14]
    output io_channel_data : UInt<8> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 104:14]
    input io_channel_ready : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 104:14]
    output io_channel_valid : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 104:14]

    reg rxReg_REG : UInt<1>, clock with :
      reset => (UInt<1>("h0"), rxReg_REG) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 113:30]
    reg rxReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), rxReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 113:22]
    reg shiftReg : UInt<8>, clock with :
      reset => (UInt<1>("h0"), shiftReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:25]
    reg cntReg : UInt<20>, clock with :
      reset => (UInt<1>("h0"), cntReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 115:23]
    reg bitsReg : UInt<4>, clock with :
      reset => (UInt<1>("h0"), bitsReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 116:24]
    reg valReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), valReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:23]
    node _T = neq(cntReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 119:16]
    node _cntReg_T = sub(cntReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 120:22]
    node _cntReg_T_1 = tail(_cntReg_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 120:22]
    node _T_1 = neq(bitsReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:24]
    node _shiftReg_T = shr(shiftReg, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 123:37]
    node _shiftReg_T_1 = cat(rxReg, _shiftReg_T) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 123:20]
    node _bitsReg_T = sub(bitsReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 124:24]
    node _bitsReg_T_1 = tail(_bitsReg_T, 1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 124:24]
    node _T_2 = eq(bitsReg, UInt<1>("h1")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 125:19]
    node _GEN_0 = mux(_T_2, UInt<1>("h1"), valReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 125:28 126:14 117:23]
    node _T_3 = eq(rxReg, UInt<1>("h0")) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 129:22]
    node _GEN_1 = mux(_T_3, UInt<10>("h28a"), cntReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 129:31 130:12 115:23]
    node _GEN_2 = mux(_T_3, UInt<4>("h8"), bitsReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 129:31 131:13 116:24]
    node _GEN_3 = mux(_T_1, UInt<9>("h1b1"), _GEN_1) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:33 122:12]
    node _GEN_4 = mux(_T_1, _shiftReg_T_1, shiftReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:33 123:14 114:25]
    node _GEN_5 = mux(_T_1, _bitsReg_T_1, _GEN_2) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:33 124:13]
    node _GEN_6 = mux(_T_1, _GEN_0, valReg) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:23 121:33]
    node _GEN_7 = mux(_T, _cntReg_T_1, _GEN_3) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 119:25 120:12]
    node _GEN_8 = mux(_T, shiftReg, _GEN_4) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:25 119:25]
    node _GEN_9 = mux(_T, bitsReg, _GEN_5) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 116:24 119:25]
    node _GEN_10 = mux(_T, valReg, _GEN_6) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:23 119:25]
    node _T_4 = and(valReg, io_channel_ready) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 134:16]
    node _GEN_11 = mux(_T_4, UInt<1>("h0"), _GEN_10) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 134:37 135:12]
    io_channel_data <= shiftReg @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 138:19]
    io_channel_valid <= valReg @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 139:20]
    rxReg_REG <= mux(reset, UInt<1>("h1"), io_rxd) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 113:{30,30,30}]
    rxReg <= mux(reset, UInt<1>("h1"), rxReg_REG) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 113:{22,22,22}]
    shiftReg <= mux(reset, UInt<8>("h41"), _GEN_8) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:{25,25}]
    cntReg <= mux(reset, UInt<20>("h0"), _GEN_7) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 115:{23,23}]
    bitsReg <= mux(reset, UInt<4>("h0"), _GEN_9) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 116:{24,24}]
    valReg <= mux(reset, UInt<1>("h0"), _GEN_11) @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:{23,23}]

  module Echo :
    input clock : Clock
    input reset : UInt<1>
    output io_txd : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 143:14]
    input io_rxd : UInt<1> @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 143:14]

    inst tx of BufferTx @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 148:18]
    inst rx of Rx @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 149:18]
    io_txd <= tx.io_txd @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 150:10]
    tx.clock <= clock
    tx.reset <= reset
    tx.io_channel_data <= rx.io_channel_data @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 152:17]
    tx.io_channel_valid <= rx.io_channel_valid @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 152:17]
    rx.clock <= clock
    rx.reset <= reset
    rx.io_rxd <= io_rxd @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 151:13]
    rx.io_channel_ready <= tx.io_channel_ready @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 152:17]
