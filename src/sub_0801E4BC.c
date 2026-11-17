
extern s32 sub_08063D80(s32, s32);
extern s32 D_081771A4[];

void sub_0801E4BC(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 a;
    u32 r;
    a = arg2;
    if (arg2 < 0) a = -arg2;
    a = a & 0xFFFF;
    r = sub_08063D80(D_081771A4[a >> 12] * arg3, 0x100);
    if (r > (u32)a) r = (u32)a;
    if (arg2 < 0) *arg1 = *arg1 - r;
    else *arg1 = *arg1 + r;
}
