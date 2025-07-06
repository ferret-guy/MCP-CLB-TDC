from pathlib import Path

from auto_ble import LUT_IN, AutoBLE
from bitstream import (
    BLEXY,
    CLBIN,
    CLBPPSOUT0,
    CLBPPSOUT1,
    CLBPPSOUT2,
    CLBPPSOUT3,
    CLBPPSOUT4,
    CLBPPSOUT5,
    CLBPPSOUT6,
    CLBPPSOUT7,
    PPS_OUT0,
    PPS_OUT1,
    PPS_OUT2,
    PPS_OUT3,
    PPS_OUT4,
    PPS_OUT5,
    PPS_OUT6,
    PPS_OUT7,
    Bitstream,
    CLBInputSync,
)
from clb_graph import generate_dot_from_config


def mux(sel, a, b):
    """b if sel else a"""
    return (a & ~sel) | (b & sel)


if __name__ == "__main__":

    bs = Bitstream()

    for i in range(len(bs.MUXS)):
        bs.MUXS[i].CLBIN = CLBIN.CLBIN0PPS
        bs.MUXS[i].INSYNC = CLBInputSync.SYNC

    bs.MUXS[5].CLBIN = CLBIN.CLBIN0PPS
    bs.MUXS[5].INSYNC = CLBInputSync.DIRECT_IN
    IN_DIR = LUT_IN.IN5

    bs.MUXS[12].CLBIN = CLBIN.CLBIN1PPS
    bs.MUXS[12].INSYNC = CLBInputSync.DIRECT_IN
    START_IN_DIR = LUT_IN.IN12

    IN_SYNCA = LUT_IN.IN8
    IN_SYNCB = LUT_IN.IN15

    output_luts_config = {
        # Delay
        # BLEXY.BLE_24_X1Y8: AutoBLE(IN_DIR),
        BLEXY.BLE_26_X3Y8: AutoBLE(IN_DIR),
        BLEXY.BLE_27_X4Y8: AutoBLE(LUT_IN.CLB_BLE_26),
        BLEXY.BLE_28_X1Y9: AutoBLE(LUT_IN.CLB_BLE_27),
        BLEXY.BLE_29_X2Y9: AutoBLE(LUT_IN.CLB_BLE_28),
        BLEXY.BLE_30_X3Y9: AutoBLE(LUT_IN.CLB_BLE_29),
        BLEXY.BLE_8_X1Y4: AutoBLE(LUT_IN.CLB_BLE_30),
        # A Bank
        BLEXY.BLE_5_X2Y3: AutoBLE(mux(IN_SYNCA, LUT_IN.CLB_BLE_8, LUT_IN.CLB_BLE_5)),
        BLEXY.BLE_14_X3Y5: AutoBLE(mux(IN_SYNCA, LUT_IN.CLB_BLE_5, LUT_IN.CLB_BLE_14)),
        BLEXY.BLE_1_X2Y2: AutoBLE(mux(IN_SYNCA, LUT_IN.CLB_BLE_14, LUT_IN.CLB_BLE_1)),
        BLEXY.BLE_9_X2Y4: AutoBLE(mux(IN_SYNCA, LUT_IN.CLB_BLE_1, LUT_IN.CLB_BLE_9)),
        # B Bank
        BLEXY.BLE_0_X1Y2: AutoBLE(mux(IN_SYNCB, LUT_IN.CLB_BLE_8, LUT_IN.CLB_BLE_0)),
        BLEXY.BLE_10_X3Y4: AutoBLE(mux(IN_SYNCB, LUT_IN.CLB_BLE_0, LUT_IN.CLB_BLE_10)),
        BLEXY.BLE_3_X4Y2: AutoBLE(mux(IN_SYNCB, LUT_IN.CLB_BLE_10, LUT_IN.CLB_BLE_3)),
        BLEXY.BLE_13_X2Y5: AutoBLE(mux(IN_SYNCB, LUT_IN.CLB_BLE_3, LUT_IN.CLB_BLE_13)),
        # Timer gate
        BLEXY.BLE_2_X3Y2: AutoBLE(START_IN_DIR ^ IN_SYNCA),
        # Output Buf
        # BLEXY.BLE_0_X1Y2 sno buf needed
        BLEXY.BLE_4_X1Y3: AutoBLE(LUT_IN.CLB_BLE_10),
        BLEXY.BLE_11_X4Y4: AutoBLE(LUT_IN.CLB_BLE_3),
        BLEXY.BLE_12_X1Y5: AutoBLE(LUT_IN.CLB_BLE_13),
        BLEXY.BLE_16_X1Y6: AutoBLE(LUT_IN.CLB_BLE_5),
        BLEXY.BLE_20_X1Y7: AutoBLE(LUT_IN.CLB_BLE_14),
        BLEXY.BLE_25_X2Y8: AutoBLE(LUT_IN.CLB_BLE_1),
        BLEXY.BLE_31_X4Y9: AutoBLE(LUT_IN.CLB_BLE_9),
    }

    bs.LUTS.update(output_luts_config)

    bs.PPS_OUT[PPS_OUT0].OUT = CLBPPSOUT0.CLB_BLE_0
    bs.PPS_OUT[PPS_OUT1].OUT = CLBPPSOUT1.CLB_BLE_4
    bs.PPS_OUT[PPS_OUT2].OUT = CLBPPSOUT2.CLB_BLE_11
    bs.PPS_OUT[PPS_OUT3].OUT = CLBPPSOUT3.CLB_BLE_12
    bs.PPS_OUT[PPS_OUT4].OUT = CLBPPSOUT4.CLB_BLE_16
    bs.PPS_OUT[PPS_OUT5].OUT = CLBPPSOUT5.CLB_BLE_20
    bs.PPS_OUT[PPS_OUT6].OUT = CLBPPSOUT6.CLB_BLE_25
    bs.PPS_OUT[PPS_OUT7].OUT = CLBPPSOUT7.CLB_BLE_31

    bs.save_bitstream_s(Path(r"clbBitstream.s"))

    print(bs)

    print(generate_dot_from_config(bs))
