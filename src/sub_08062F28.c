/* identical to m4aSoundVSyncOff in SPYRO 3-U (matched), with its names changed by decompdecomp */
#define ID_NUMBER_F964 0x68736D53
#define REG_DMA1CNT_F964 (*(vu32 *)0x040000C4)
#define REG_DMA1CNT_H_F964 (*(vu16 *)0x040000C6)

void sub_08062F28(void) {
    u32 *soundInfo = *(u32 **)0x03007FF0;
    if (soundInfo[0] >= ID_NUMBER_F964 && soundInfo[0] <= ID_NUMBER_F964 + 1) {
        vu32 temp;
        soundInfo[0] += 10;
        if (REG_DMA1CNT_F964 & (0x0200 << 16))
            REG_DMA1CNT_F964 = (0x8440 << 16) | 4;
        REG_DMA1CNT_H_F964 = 0x0400;
        temp = 0;
        sub_08063D7C((void *)&temp, (u8 *)soundInfo + 0x350, 0x0500018C);
    }
}
