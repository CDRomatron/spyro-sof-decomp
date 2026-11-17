
extern s32 sub_0800FD8C(void *, s32, s32);
extern s32 sub_080529D4(void);

u8 sub_080213D8(u8 *arg0) {
    u8 *p = arg0;
    u8 *q = arg0 + 0x5F;
    u32 fp;
    if (*q != 0) {
        *q = 0;
        sub_080534A0(5);
        sub_0800FD8C(p, sub_080529D4(), 0xC000);
    }
    fp = *(u32 *)(arg0 + 0x48);
    if (fp != 0) {
        _call_via_r1_080641CC(arg0, (void *)fp);
    }
    return *(u8 *)(p + 0x60);
}

extern s32 sub_08002BE0(void *, s32);
extern s32 sub_080043A4(s32);
extern s32 sub_0800781C(s32, s32);

void sub_080213A4(u8 *arg0) {
    s32 *p;
    u32 i;
    sub_0800781C(0x67, 0);
    sub_080043A4(*(s32 *)(arg0 + 0x44));
    i = 0;
    p = (s32 *)(arg0 + 0x34);
    do {
        sub_080043A4(*p++);
        i++;
    } while (i <= 3U);
    sub_08002BE0(arg0, 0x64);
}
