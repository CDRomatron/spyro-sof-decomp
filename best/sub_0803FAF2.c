
extern void sub_08004478(s32);
extern void sub_0805209C(void *, s32);
void sub_0803FAF2(s32 x, u8 *p) {
    sub_08004478(x);
    sub_0805209C(p + 0x24, *(s32 *)(p + 0x40) + (0x80 << 7));
}
