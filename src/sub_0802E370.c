/* identical to sub_0801086C (matched), with its names changed by decompdecomp */

s32 sub_08004478(s32, s32);
s32 sub_08004520(s32);
s32 sub_08050228(s32, void *, s32);
s32 sub_0805209C(void *, s32);

void sub_0802E370(u8 *arg0) {
    void *p = arg0 + 0xC;
    sub_08050228(*(s32 *)(arg0 + 0x34), p, *(s32 *)(arg0 + 0x40));
    sub_08004478(*(s32 *)(arg0 + 0x38), sub_08004520(*(s32 *)(arg0 + 0x34)));
    sub_0805209C(arg0 + 0x24, *(s32 *)(arg0 + 0x40) + 0x4000);
}

s32 sub_08004020(s32);
s32 sub_08052BB4(void *);
s32 sub_080641CC(void *);

u8 sub_0801083C(u8 *arg0) {
    u8 *p = arg0;
    sub_08004020(*(s32 *)(arg0 + 0x34));
    if (*(s32 *)(arg0 + 0x3C) != 0) {
        sub_080641CC(arg0);
    }
    *(s32 *)(p + 0x40) = sub_08052BB4(p + 0xC);
    return *(u8 *)(p + 0x47);
}
