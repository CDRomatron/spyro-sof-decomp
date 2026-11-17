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

s32 sub_08065BC0(u32 arg0, s32 arg1, u32 arg2, s32 arg3) {
    u32 sp0;
    s32 sp4;
    u32 sp8;
    s32 spC;
    u16 temp_r5;
    u32 temp_r2;
    u32 temp_r4;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
    spC = arg3;
    temp_r5 = (u16) sp0 * (u16) sp8;
    temp_r2 = (sp0 >> 0x10) * (u16) sp8;
    temp_r4 = ((u16) sp0 * (sp8 >> 0x10)) + (temp_r5 >> 0x10) + temp_r2;
    if (temp_r4 < temp_r2) {

    }
    return ((u16) temp_r4 << 0x10) | temp_r5;
}
