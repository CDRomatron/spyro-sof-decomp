
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern void sub_08003BF8(s32); extern void sub_08003BD4(s32);
extern void sub_0800C2A0(s32); extern void sub_0800D730(s32,s32);
void sub_08054A04(void *arg0, s32 arg1) {
    u32 i; u8 *p; s32 off;
    p = (u8*)((s8*)arg0 + 0x1015); off = 0;
    for (i = 0; i < (u32)M2C_FIELD(arg0, s32 *, 0x106C); i++) {
        if (*p == arg1) sub_08003BF8(M2C_FIELD((s8*)arg0 + off, s32 *, 0x100C));
        p += 0xC; off += 0xC;
    }
}
void sub_08054AAC(void *arg0) {
    u32 i; s32 off = 0;
    for (i = 0; i < (u32)M2C_FIELD(arg0, s32 *, 0x106C); i++) {
        sub_08003BD4(M2C_FIELD((s8*)arg0 + off, s32 *, 0x100C));
        off += 0xC;
    }
    M2C_FIELD(arg0, u32 *, 0x106C) = 0U;
}
void sub_08054768(s32 arg0, s32 arg1) {
    s32 test = arg1 << 0x18;
    void *base = *(void **)0x030026C4;
    u32 i; u8 *p;
    if (test != 0) {
        p = base;
        for (i = 0; i <= 8U; i++) {
            if ((M2C_FIELD(p, u16 *, 8) != 0) && (M2C_FIELD(p, u16 *, 0xE) == arg0)) sub_0800D730(M2C_FIELD(p, s32 *, 0), 0x78);
            p = (u8*)((s8*)p + 0x10);
        }
        return;
    }
    p = base;
    for (i = 0; i <= 8U; i++) {
        if ((M2C_FIELD(p, u16 *, 8) != 0) && (M2C_FIELD(p, u16 *, 0xE) == arg0)) sub_0800C2A0(M2C_FIELD(p, s32 *, 0));
        p = (u8*)((s8*)p + 0x10);
    }
}
