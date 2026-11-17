
s32 sub_08007DF8(void) {
    u16 sp0;
    u16 old = *(u16 *)0x030008A8;
    s32 r = 1;
    u8 *p = (u8 *)&sp0;
    u32 i = 0;
    do {
        u8 *src = *(u8 **)0x030008A0;
        *p = *src;
        *(u16 *)0x030008A8 += *src;
        p++;
        *(u8 **)0x030008A0 = src + 1;
        i++;
    } while (i < 2U);
    if (old != sp0) r = 0;
    return r;
}
