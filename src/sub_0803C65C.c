/* identical to sub_0803C530 (matched), with its names changed by decompdecomp */

extern s32 sub_08050228(s32, void *, s32);

typedef struct { s32 a, b, c; } T12;
void sub_0803C65C(u8 *arg0) {
    T12 local = *(T12 *)(arg0 + 0xC);
    sub_08050228(*(s32 *)(arg0 + 0x24), &local, 0);
}

extern s32 sub_08002BE0(void *, s32);
extern s32 sub_080043A4(s32);
extern s32 sub_0800FC7C(void *);

void sub_0803C4FC(u8 *arg0) {
    void *p = arg0 + 0x2C;
    sub_080043A4(*(s32 *)(arg0 + 0x24));
    if (p != NULL) {
        void *q = *(void **)(arg0 + 0x28);
        s32 n = *(u16 *)(q + 0x14);
        sub_08002BE0(p, n * 4);
    }
    sub_0800FC7C(*(void **)(arg0 + 0x28));
    sub_08002BE0(arg0, 0x40);
}

extern s32 sub_08003C58(s32, s32);
extern s32 sub_08004454(s32, s32, s32);
extern s32 sub_08004508(void);
extern s32 sub_080077C4(u8);

s32 sub_0803C5B4(s32 arg0, u8 *arg1, s32 arg2) {
    if (sub_08004508() == 0x2E0002) {
        if (arg2 == 8) {
            sub_08003C58(arg0, 0x2E0000);
            sub_08004454(arg0, 0, 0);
            *(u8 *)(arg1 + 0x3E) = 3;
            *(s32 *)(arg1 + 0x30) = 0;
            sub_080077C4(*(u8 *)(arg1 + 0x3C));
        }
    }
    return 1;
}

extern s32 sub_0800FE28(void *, s32, s32);

void sub_0803C600(u8 *arg0) {
    sub_0800FE28(arg0, *(s32 *)(*(s32 *)(arg0 + 0x2C) + (*(s32 *)(arg0 + 0x38) << 2)), 0x57);
}
