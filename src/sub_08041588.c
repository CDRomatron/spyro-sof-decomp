/* identical to sub_08040F24 (matched), with its names changed by decompdecomp */

extern s32 sub_08004020(s32);
extern s32 sub_08052BB4(void *);
extern void _call_via_r1_080641CC(void *, void *);

u8 sub_08041588(u8 *arg0) {
    u8 *p = arg0;
    u32 fp;
    sub_08004020(*(s32 *)(arg0 + 0x34));
    fp = *(u32 *)(arg0 + 0x3C);
    if (fp != 0) {
        _call_via_r1_080641CC(arg0, (void *)fp);
    }
    *(s32 *)(p + 0x40) = sub_08052BB4(p + 0xC);
    return *(u8 *)(p + 0x46);
}

extern s32 sub_0800FA98(s32, s32, s32, s32, s32, s32);
extern void sub_08040D88(void *, s32);
extern s32 sub_08052140(void *, s32);

void sub_08040FFC(void *arg0) {
    void *p = arg0 + 0xC;
    if ((sub_08052140(p, 0x2000) << 0x18) == 0) {
        sub_08040D88(arg0, 0);
        return;
    }
    if ((sub_08052140(p, 0x800) << 0x18) != 0) {
        sub_0800FA98(6, *(s32 *)(arg0 + 0xC), *(s32 *)(p + 4), *(s32 *)(p + 8), 0, 0x800);
    }
}

void sub_08041018(void *arg0) {
    void *p = arg0 + 0xC;
    if ((sub_08052140(p, 0x2000) << 0x18) == 0) {
        sub_08040D88(arg0, 0);
        return;
    }
    if ((sub_08052140(p, 0x800) << 0x18) != 0) {
        sub_0800FA98(6, *(s32 *)(arg0 + 0xC), *(s32 *)(p + 4), *(s32 *)(p + 8), 0, 0x800);
    }
}

void sub_08040EFA(void) { }
