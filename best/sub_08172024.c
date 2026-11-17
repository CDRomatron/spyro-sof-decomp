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

/* Warning: missing "bx $lr" in last block of sub_08172024 (initial). */

s32 sub_08172024(u32 arg0, u32 arg2, s32 arg3) {
    u32 temp_r1;

    temp_r1 = (u32) (((((((((arg2 * 2 * 4 * 4 * 0x10 * 0x10 * 0x10) << 5) << 6) * 0x10) << 0x18) << 0x18) << 0x18) * 0x10) << 8) >> 4;
    return ((u32) (temp_r1 >> 8) >> 0x10) + ((s32) ((s32) (temp_r1 >> 0xC) >> 0xC) >> 0x1C);
}
