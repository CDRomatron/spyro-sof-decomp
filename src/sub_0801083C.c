
s32 sub_08004020(s32);
s32 sub_08052BB4(void *);
void _call_via_r1_080641CC(void *, void *);

u8 sub_0801083C(u8 *arg0) {
    u8 *p = arg0;
    u32 fp;
    sub_08004020(*(s32 *)(arg0 + 0x34));
    fp = *(u32 *)(arg0 + 0x3C);
    if (fp != 0) {
        _call_via_r1_080641CC(arg0, (void *)fp);
    }
    *(s32 *)(p + 0x40) = sub_08052BB4(p + 0xC);
    return *(u8 *)(p + 0x47);
}
