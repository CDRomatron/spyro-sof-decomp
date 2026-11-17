
extern s32 sub_08002BE0(void *, s32);
extern s32 sub_080043A4(s32);
extern s32 sub_0800FC7C(void *);

void sub_0803C4FC(u8 *arg0) {
    u8 *p = arg0;
    void *q;
    sub_080043A4(*(s32 *)(arg0 + 0x24));
    q = *(void **)(arg0 + 0x2C);
    if (q != NULL) {
        sub_08002BE0(q, *(u16 *)(*(void **)(arg0 + 0x28) + 0x14) * 4);
    }
    sub_0800FC7C(*(void **)(p + 0x28));
    sub_08002BE0(p, 0x40);
}

extern s32 sub_08003C58(s32, s32);
extern s32 sub_08004454(s32, s32, s32);
extern s32 sub_08004508(void);
extern s32 sub_080077C4(u8);

s32 sub_0803C5B4(s32 arg0, u8 *arg1, s32 arg2) {
    s32 zero = 0;
    if (sub_08004508() == 0x2E0002) {
        if (arg2 == 8) {
            sub_08003C58(arg0, 0x2E0000);
            sub_08004454(arg0, 0, 0);
            *(u8 *)(arg1 + 0x3E) = 3;
            *(s32 *)(arg1 + 0x30) = zero;
            sub_080077C4(*(u8 *)(arg1 + 0x3C));
        }
    }
    return 1;
}
