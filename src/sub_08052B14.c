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

s32 sub_08052B14(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(*(void **)0x030026C0, void **, 0x51C);
    temp_r2 = M2C_FIELD(temp_r3, s32 *, 0xC) - M2C_FIELD(arg0, s32 *, 0);
    temp_r1 = M2C_FIELD(temp_r3, s32 *, 0x10) - M2C_FIELD(arg0, s32 *, 4);
    return (temp_r2 * temp_r2) + (temp_r1 * temp_r1);
}
