
extern s32 sub_08063D80(s32, s32);

s32 sub_08008874(s32 *a, s32 *b) {
    s32 r = sub_08063D80(a[0] * b[0], 0x100);
    return r + sub_08063D80(a[1] * b[1], 0x100);
}
