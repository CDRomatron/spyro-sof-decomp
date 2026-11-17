
u16 sub_08007402(s32 a, s32 b, u8 *p) {
    volatile u16 *q;
    u16 v0, v2;
    s32 v1;
    q = (volatile u16 *)(p + 0x632);
    v0 = *q;
    v1 = *q;
    v1 = v1 + 1;
    v2 = *q;
    *q = (u16)v1;
    return v0;
}
