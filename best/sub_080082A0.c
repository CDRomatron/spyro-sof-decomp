
extern void sub_08003BF8(s32);
extern vu16 D_03001160;
void sub_080082A0(void) {
    u8 *r4 = *(u8 **)0x030008B4;
    u16 a = D_03001160;
    D_03001160 = 0xE00 | D_03001160;
    (void)a;
    sub_08003BF8(*(s32 *)(r4 + 0x2F4));
    sub_08003BF8(*(s32 *)(r4 + 0x2F0));
}
