
extern s32 sub_08063D80(s32, s32);

s32 sub_080088B0(s32 *a, s32 *b) {
    s32 r = sub_08063D80(a[0] * b[0], 0x100);
    s32 t = sub_08063D80(a[1] * b[1], 0x100);
    return r + t + sub_08063D80(a[2] * b[2], 0x100);
}
