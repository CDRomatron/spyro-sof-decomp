
void sub_08008A04(void) { }

extern u16 sub_08063D78(s16, s16);
u16 sub_08008A06(s16 a, s16 b) { return sub_08063D78(a, b); }

extern volatile s32 D_03002674;
extern u32 D_03001CB0[];
u32 sub_080089C8(void) {
    u32 x = 0x1105;
    u32 *p = D_03001CB0;
    s32 i;
    D_03002674 = 0;
    *p++ = x;
    for (i = 0x26F; i != 0; i--) {
        x *= 0x10DCD;
        *p++ = x;
    }
    return 1;
}

extern void sub_08003BF8(s32);
extern vu16 D_03001160;
void sub_080082A0(void) {
    u8 *r4 = *(u8 **)0x030008B4;
    D_03001160 = 0xE00 | D_03001160;
    sub_08003BF8(*(s32 *)(r4 + 0x2F4));
    sub_08003BF8(*(s32 *)(r4 + 0x2F0));
}
