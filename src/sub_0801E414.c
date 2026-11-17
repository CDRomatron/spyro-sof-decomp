
extern s32 sub_08003220(u32);

s32 sub_0801E414(s32 arg0, s32 arg1, u32 arg2) {
    if (arg2 == 2) goto end;
    if (arg2 > 2) goto end;
    if (arg2 != 1) goto end;
    sub_08003220(0x0817148C);
end:
    return 1;
}
