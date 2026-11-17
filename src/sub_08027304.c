
extern s32 sub_0802636C(void *, s32);

s32 sub_0802733C(void *arg1, s32 arg2) {
    u8 *p = arg1;
    if (arg2 == 8) { p += 0x55; *p = 0; }
    return 1;
}

extern void sub_08050228(s32, void *, s32);
extern void sub_0805209C(void *, s32);

void sub_08027304(u8 *arg0) {
    void *p = arg0 + 0xC;
    sub_08050228(*(s32 *)(arg0 + 0x24), p, 0);
    sub_0805209C(arg0 + 0x2C, 0);
}

extern void sub_08007764(u8);
extern s32 sub_0800897C(void);
extern void sub_0800FDB4(u8 *, s32, s32 *);
extern void sub_080528D4(s32, s32, s32, s32);

void sub_08027294(u8 *arg0) {
    s32 sp0, sp4, sp8;
    s32 r5;
    sub_08007764(*(u8 *)(arg0 + 0x67));
    r5 = *(s32 *)(arg0 + 0x24);
    if (r5 != 0) {
        u8 *p = arg0 + 0xC;
        sub_080528D4(r5, *(s32 *)(arg0 + 0xC), *(s32 *)(p + 4), *(s32 *)(p + 8));
        sp0 = 0;
        sp4 = 0;
        sp8 = (sub_0800897C() & 0x3FF) + 0x600;
        sub_0800FDB4(arg0, *(s32 *)(arg0 + 0x24), &sp0);
    }
}

s32 sub_08027240(s32 a, u8 *p, u32 c, s32 d) {
    u16 v = (u16)c;
    if (v == 9) {
        if (d == 8) {
            if (*(s32 *)(p + 0x54) != 0) sub_0802636C(p, 8);
            else sub_0802636C(p, 3);
        } else if (d == 0x52) {
            u8 *q = p + 0x64;
            *q = (u8)(*q - 1);
        }
    }
    return 0;
}
