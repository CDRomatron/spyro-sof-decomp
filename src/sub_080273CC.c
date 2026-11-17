/* identical to sub_0802733C (matched), with its names changed by decompdecomp */

s32 sub_080273CC(s32 a, u8 *p, s32 arg2) {
    if (arg2 == 8) { p += 0x55; *p = 0; }
    return 1;
}

extern void sub_08007764(u8);
extern s32 sub_0800897C(void);
extern void sub_0800FDB4(u8 *, s32, s32 *);
extern void sub_080528D4(s32, s32, s32, s32);

void sub_08027294(u8 *arg0) {
    s32 sp[3];
    s32 r5;
    sub_08007764(*(u8 *)(arg0 + 0x67));
    r5 = *(s32 *)(arg0 + 0x24);
    if (r5 != 0) {
        u8 *p = arg0 + 0xC;
        sub_080528D4(r5, *(s32 *)(arg0 + 0xC), *(s32 *)(p + 4), *(s32 *)(p + 8));
        sp[0] = 0;
        sp[1] = 0;
        sp[2] = (sub_0800897C() & 0x3FF) + 0x600;
        sub_0800FDB4(arg0, *(s32 *)(arg0 + 0x24), sp);
    }
}

extern void sub_0802636C(void *, s32);

s32 sub_08027240(s32 a, u8 *p, u32 c, s32 d) {
    u16 v = (u16)c;
    if (v == 9) {
        switch (d) {
        case 8:
            if (*(s32 *)(p + 0x54) != 0) sub_0802636C(p, 8);
            else sub_0802636C(p, 3);
            break;
        case 0x52: {
            u8 *q = p + 0x64;
            *q = (u8)(*q - 1);
            break;
        }
        }
    }
    return 0;
}
