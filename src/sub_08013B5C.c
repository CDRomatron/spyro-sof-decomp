
extern void sub_08004020(u32);
extern void _call_via_r1_080641CC(void *, void *);
extern s32 sub_08052140(void *, u32);
extern void sub_0800FA98(u32, u32, u32, u32, u32, u32);
extern void *sub_08052BB4(void *);

s32 sub_08013B5C(u8 *arg0) {
    u8 *q = arg0;
    u8 *p = arg0 + 0xC;
    u32 fp;
    sub_08004020(*(u32 *)(arg0 + 0x34));
    fp = *(u32 *)(arg0 + 0x3C);
    if (fp != 0)
        _call_via_r1_080641CC(arg0, (void *)fp);
    if ((sub_08052140(p, 0x800) << 24) != 0) {
        sub_0800FA98(6, *(u32 *)(arg0 + 0xC), *(u32 *)(p + 4), *(u32 *)(p + 8), 0, 0x800);
    }
    *(void **)(q + 0x40) = sub_08052BB4(p);
    return 1;
}

extern void sub_0800F538(void);
extern void sub_080534A0(u32);

s32 sub_08013A74(u16 arg0, u32 arg1, u8 *arg2) {
    switch (arg0) {
    case 1:
    case 2:
        sub_0800F538();
        sub_080534A0(3);
        *(arg2 + 0x71) = 1;
        break;
    }
    return 1;
}
