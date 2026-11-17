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

void sub_08052880(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r5;
    void *temp_r5_2;

    temp_r5 = *(void **)0x030026C0;
    temp_r5_2 = temp_r5 + (M2C_FIELD(temp_r5, u16 *, 0x524) * 0x10);
    M2C_FIELD(temp_r5_2, s32 *, 0) = arg3;
    M2C_FIELD(temp_r5_2, s32 *, 4) = arg0;
    M2C_FIELD(temp_r5_2, s32 *, 8) = arg1;
    M2C_FIELD(temp_r5_2, s32 *, 0xC) = arg2;
    M2C_FIELD(temp_r5, u16 *, 0x524) = (u16) (M2C_FIELD(temp_r5, u16 *, 0x524) + 1);
}
