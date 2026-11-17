
extern s32 sub_08003220(u32);

s32 sub_0801E414(u32 arg2) {
    if (arg2 == 2) goto end;
    if (arg2 > 2) goto end;
    if (arg2 != 1) goto end;
    sub_08003220(0x0817148C);
end:
    return 1;
}

extern s32 sub_08004408(s32, s32);
extern s32 sub_0801A130(s32, s32);

s32 sub_0801E374(s32 arg0, u8 *arg1, u32 arg2) {
    if (arg2 == 2) goto case2;
    if (arg2 <= 2) goto end;
    if (arg2 == 4) goto end;
    if (arg2 == 8) goto case8;
    goto end;
case2:
    sub_08004408(arg0, 0);
    goto end;
case8:
    sub_0801A130((s32)arg1, 2);
    *(u16 *)(arg1 + 0x152) = 0x1E;
    *(u32 *)(arg1 + 0x138) = *(u32 *)(arg1 + 0x134);
end:
    return 1;
}
