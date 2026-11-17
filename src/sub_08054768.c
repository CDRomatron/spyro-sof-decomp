
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern void sub_0800C2A0(s32); extern void sub_0800D730(s32,s32);
void sub_08054768(s32 arg0, s32 arg1) {
    s32 test; u32 i; u32 i2; void *temp_r0; u8 *p; u8 *p2;
    test = arg1 << 0x18;
    temp_r0 = *(void **)0x030026C4;
    if (test != 0) {
        i = 0;
        p = temp_r0;
        do {
            if ((M2C_FIELD(p, u16 *, 8) != 0) && (M2C_FIELD(p, u16 *, 0xE) == arg0)) sub_0800D730(M2C_FIELD(p, s32 *, 0), 0x78);
            p = (u8*)((s8*)p + 0x10); i += 1;
        } while (i <= 8U);
        return;
    }
    i2 = 0;
    p2 = temp_r0;
    do {
        if ((M2C_FIELD(p2, u16 *, 8) != 0) && (M2C_FIELD(p2, u16 *, 0xE) == arg0)) sub_0800C2A0(M2C_FIELD(p2, s32 *, 0));
        p2 = (u8*)((s8*)p2 + 0x10); i2 += 1;
    } while (i2 <= 8U);
}
