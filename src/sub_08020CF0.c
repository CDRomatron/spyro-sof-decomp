
s32 sub_08004478(s32, s32);
s32 sub_08004520(s32);
s32 sub_08050228(s32, void *, s32);
s32 sub_0805209C(void *, s32);

void sub_08020D40(u8 *arg0) {
    void *p = arg0 + 0xC;
    sub_08050228(*(s32 *)(arg0 + 0x38), p, *(s32 *)(arg0 + 0x44));
    sub_08004478(*(s32 *)(arg0 + 0x3C), sub_08004520(*(s32 *)(arg0 + 0x38)));
    sub_0805209C(arg0 + 0x24, *(s32 *)(arg0 + 0x44) + 0x4000);
}

s32 sub_08004020(s32);
s32 sub_0800FE28(void *, s32, s32);
u8 sub_08050148(void);
s32 sub_08052BB4(void *);
void _call_via_r1_080641CC(void *, void *);

u8 sub_08020CF0(u8 *arg0) {
    u8 *p = arg0;
    u32 fp;
    u8 t;
    sub_08004020(*(s32 *)(arg0 + 0x38));
    fp = *(u32 *)(arg0 + 0x40);
    if (fp != 0) {
        _call_via_r1_080641CC(arg0, (void *)fp);
    }
    if (*(u8 *)(arg0 + 0x49) != 0) {
        t = sub_08050148();
        if (t == 0) {
            *(u8 *)(arg0 + 0x49) = t;
            sub_0800FE28(arg0, *(s32 *)(arg0 + 0x34), 0x25);
        }
    }
    *(s32 *)(p + 0x44) = sub_08052BB4(p + 0xC);
    return *(u8 *)(p + 0x4B);
}
