/* machine draft (m2c) for agbcc -mthumb-interwork -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

/* Warning: missing "bx $lr" in last block of sub_0802E914 (_0802E990). */

M2C_UNK sub_08007B5C(u8);                           /* extern */

void *sub_0802E914(void *arg0) {
    s32 temp_r0;
    u16 temp_r0_2;
    void *temp_r2;

    temp_r2 = arg0 + 0xC;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + M2C_FIELD(arg0, s32 *, 0x34));
    M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x38));
    M2C_FIELD(temp_r2, s32 *, 8) = (s32) (M2C_FIELD(temp_r2, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0x3C));
    temp_r0_2 = M2C_FIELD(arg0, u16 *, 0x64) - 1;
    M2C_FIELD(arg0, u16 *, 0x64) = temp_r0_2;
    temp_r0 = temp_r0_2 << 0x10;
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x66) * 0xC) + M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), s32 *, 0xC)), s32 *, 8);
        M2C_FIELD(arg0, u8 *, 0x66) = (u8) (M2C_FIELD(arg0, u8 *, 0x66) + 1);
        sub_08007B5C(M2C_FIELD(arg0, u8 *, 0x66));
        if ((u32) M2C_FIELD(arg0, u8 *, 0x66) >= (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x44), u16 *, 0x14)) {
            M2C_FIELD(arg0, s8 *, 0x68) = 1;
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x1800);
        }
        return arg0;
    }
    return (void *) temp_r0;
}
