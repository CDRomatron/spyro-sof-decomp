
extern s32 sub_08003220(u32);

s32 sub_0801E494(s32 arg0, s32 arg1, u32 arg2) {
    if (arg2 == 2) goto end;
    if (arg2 > 2) goto end;
    if (arg2 != 1) goto end;
    sub_08003220(0x08171668);
end:
    return 1;
}

extern s32 sub_08063D80(s32, s32);
extern s32 D_081771A4[];

void sub_0801E4BC(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s32 a;
    s32 r;
    a = arg2;
    if (arg2 < 0) a = -arg2;
    a = (u16)a;
    r = sub_08063D80(D_081771A4[a >> 12] * arg3, 0x100);
    if (r > a) r = a;
    if (arg2 < 0) *arg1 = *arg1 - r;
    else *arg1 = *arg1 + r;
}

s32 sub_0801E594(s32 a, u8 *p, s32 arg2) {
    if (arg2 == 8) { p += 0x42; *p = 0; }
    return 1;
}

extern s32 sub_0801A130(s32, s32);

s32 sub_0801E33C(s32 arg0, s32 arg1, u32 arg2) {
    if (arg2 == 8) sub_0801A130(arg1, 2);
    return 1;
}
