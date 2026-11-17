
u8 sub_080073D8(u32 arg0) {
    return *(u8 *)(0x081721A2 + (u8)arg0);
}

extern u8 D_03001650[];
u16 sub_080073E8(void) {
    return *(u16 *)(D_03001650 + 0x608);
}

u16 sub_08007402(s32 a, s32 b, u8 *p) {
    volatile u16 *q = (volatile u16 *)(p + 0x632);
    return (*q)++;
}
