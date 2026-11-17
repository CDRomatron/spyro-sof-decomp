
extern s32 sub_08002BE0(void *, s32);
extern s32 sub_080043A4(s32);
extern s32 sub_0800FC7C(void *);

void sub_0803C4FC(u8 *arg0) {
    void *p;
    sub_080043A4(*(s32 *)(arg0 + 0x24));
    p = *(void **)(arg0 + 0x2C);
    if (p != NULL) {
        sub_08002BE0(p, *(u16 *)(*(void **)(arg0 + 0x28) + 0x14) * 4);
    }
    sub_0800FC7C(*(void **)(arg0 + 0x28));
    sub_08002BE0(arg0, 0x40);
}

extern s32 sub_08003C58(s32, s32);
extern s32 sub_08004454(s32, s32, s32);
extern s32 sub_08004508(void);
extern s32 sub_080077C4(u8);

s32 sub_0803C5B4(s32 p0, u8 *p1, s32 p2) {
    s32 a = p0;
    u8 *b = p1;
    s32 c = p2;
    if (sub_08004508() == 0x2E0002) {
        if (c == 8) {
            sub_08003C58(a, 0x2E0000);
            sub_08004454(a, 0, 0);
            *(u8 *)(b + 0x3E) = 3;
            *(s32 *)(b + 0x30) = 0;
            sub_080077C4(*(u8 *)(b + 0x3C));
        }
    }
    return 1;
}

extern s32 sub_0800FE28(void *, s32, s32);

void sub_0803C600(u8 *arg0) {
    s32 a = *(s32 *)(arg0 + 0x38);
    s32 b = *(s32 *)(arg0 + 0x2C);
    sub_0800FE28(arg0, *(s32 *)(b + a * 4), 0x57);
}
