
s32 sub_08004478(s32, s32);
s32 sub_08004520(s32);
s32 sub_08050228(s32, void *, s32);
s32 sub_0805209C(void *, s32);

void sub_0801086C(u8 *arg0) {
    sub_08050228(*(s32 *)(arg0 + 0x34), arg0 + 0xC, *(s32 *)(arg0 + 0x40));
    sub_08004478(*(s32 *)(arg0 + 0x38), sub_08004520(*(s32 *)(arg0 + 0x34)));
    sub_0805209C(arg0 + 0x24, *(s32 *)(arg0 + 0x40) + 0x4000);
}

s32 sub_08004020(s32);
s32 sub_08052BB4(void *);
s32 sub_080641CC(void *);

u8 sub_0801083C(u8 *arg0) {
    sub_08004020(*(s32 *)(arg0 + 0x34));
    if (*(s32 *)(arg0 + 0x3C) != 0) {
        sub_080641CC(arg0);
    }
    *(s32 *)(arg0 + 0x40) = sub_08052BB4(arg0 + 0xC);
    return *(u8 *)(arg0 + 0x47);
}

s32 sub_08010914(s32, s32);

void sub_08010906(s32 arg0) {
    sub_08010914(arg0, 1);
}

s32 sub_08052724(u16, s32);

s32 sub_0801074C(u16 arg0, s32 arg1, s32 arg2) {
    sub_08052724(arg0, arg2);
    return 0;
}
