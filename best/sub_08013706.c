
extern void sub_08004020(u32);
extern void _call_via_r1_080641CC(void *, void *);
extern s32 sub_08052140(void *, u32);
extern void sub_0800FA98(u32, u32, u32, u32, u32, u32);
extern void *sub_08052BB4(void *);

s32 sub_08013B5C(u8 *arg0) {
    u8 *p = arg0 + 0xC;
    u32 fp;
    sub_08004020(*(u32 *)(arg0 + 0x34));
    fp = *(u32 *)(arg0 + 0x3C);
    if (fp != 0)
        _call_via_r1_080641CC(arg0, (void *)fp);
    if ((sub_08052140(p, 0x800) << 24) != 0) {
        sub_0800FA98(6, *(u32 *)(arg0 + 0xC), *(u32 *)(p + 4), *(u32 *)(p + 8), 0, 0x800);
    }
    *(void **)(arg0 + 0x40) = sub_08052BB4(p);
    return 1;
}

s32 sub_08013BE8(u32 arg0, u8 *arg1, u16 arg2, u32 arg3) {
    s32 r = 0;
    if (arg2 == 9) {
        if (arg3 == 0x17) {
            *(u16 *)(arg1 + 0x44) = 0xB3;
        }
        r = 1;
    }
    return r;
}

extern void sub_0800F538(void);
extern void sub_080534A0(u32);

s32 sub_08013A74(u16 arg0, u32 arg1, u8 *arg2) {
    if (arg0 >= 1 && arg0 <= 2) {
        sub_0800F538();
        sub_080534A0(3);
        *(arg2 + 0x71) = 1;
    }
    return 1;
}

extern s32 sub_080502E8(void *);
extern void sub_080528D4(u32, u32, u32, s32);

s32 sub_08013706(u32 a, u32 b, u32 *c) {
    s32 t = sub_080502E8(c);
    sub_080528D4(b, a, c[1], t);
    return b;
}
