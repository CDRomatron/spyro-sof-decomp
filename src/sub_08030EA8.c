
s32 sub_08004478(s32, s32);
s32 sub_08004520(s32);
s32 sub_08050228(s32, void *, s32);
s32 sub_0805209C(void *, s32);
s32 sub_0805399C(void);
s32 sub_08052140(s32, s32);
s32 sub_08030A10(void *, s32);
s32 sub_08030CE8(void *);

void sub_08030EA8(u8 *arg0) {
    void *p = arg0 + 0xC;
    sub_08050228(*(s32 *)(arg0 + 0x44), p, *(s32 *)(arg0 + 0x3C));
    sub_08004478(*(s32 *)(arg0 + 0x94), sub_08004520(*(s32 *)(arg0 + 0x44)));
    sub_0805209C(arg0 + 0x84, *(s32 *)(arg0 + 0x3C));
}

void sub_0803153C(u8 *arg0) {
    void *p = arg0 + 0xC;
    sub_08050228(*(s32 *)(arg0 + 0x58), p, *(s32 *)(arg0 + 0x6C));
    sub_08004478(*(s32 *)(arg0 + 0x5C), sub_08004520(*(s32 *)(arg0 + 0x58)));
    sub_0805209C(arg0 + 0x24, *(s32 *)(arg0 + 0x6C) + 0x4000);
}

void sub_08030F58(u8 *arg0) {
    if ((sub_0805399C() == 3) && ((sub_08052140((s32)(arg0 + 0x24), 0x2C00) << 0x18) != 0)) {
        sub_08030A10(arg0, 2);
        *(u16 *)(arg0 + 0x22) = (u16)(1 | *(u16 *)(arg0 + 0x22));
    }
    sub_08030CE8(arg0);
}

void sub_08031010(u16 a, u8 b, s32 c) { }
