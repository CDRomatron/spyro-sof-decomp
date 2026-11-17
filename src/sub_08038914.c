
extern void sub_08050228(s32, void *, s32);
void sub_08038744(u8 *arg0) {
    void *p = arg0 + 0xC;
    sub_08050228(*(s32 *)(arg0 + 0x30), p, 0);
}

extern s32 sub_08004020(s32);
extern void sub_080528D4(void *, s32, s32, s32);
extern void sub_080641CC(void *, s32);
u8 sub_08038710(u8 *arg0) {
    u8 *p = arg0;
    u8 *r4 = arg0 + 0x24;
    sub_08004020(*(s32 *)(arg0 + 0x30));
    sub_080528D4(arg0, *(s32 *)(arg0 + 0x24), *(s32 *)(r4 + 4), *(s32 *)(r4 + 8));
    {
        s32 flag = *(s32 *)(arg0 + 0x34);
        if (flag != 0) sub_080641CC(arg0, flag);
    }
    return p[0x3D];
}

s32 sub_08038914(s32 a, u8 *p, s32 arg2) {
    if (arg2 == 8) { p += 0x38; *p = 0; }
    return 1;
}

s32 sub_08038AA0(s32 a, u8 *p, u32 c, u32 *src) {
    u16 v = (u16)c;
    if (v != 4) return 0;
    *(s32 *)(p + 0x34) = (s32)src[0];
    *(s32 *)(p + 0x38) = (s32)src[1];
    *(s32 *)(p + 0x3C) = (s32)src[2];
    return 1;
}
