
s32 sub_08038AA0(s32 a, u8 *p, u32 c, u32 *src) {
    u16 v = (u16)c;
    s32 r;
    if (v == 4) goto body;
    r = 0;
    goto end;
body:
    *(s32 *)(p + 0x34) = (s32)src[0];
    *(s32 *)(p + 0x38) = (s32)src[1];
    *(s32 *)(p + 0x3C) = (s32)src[2];
    r = 1;
end:
    return r;
}
