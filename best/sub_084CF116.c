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

void sub_084CF116(u16 *arg0, u32 arg2, s32 arg3, M2C_UNK arg4, s32 argA1, s32 argC1, s32 argE1) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(((s32) &arg4 * 4), void **, 0x1C);
    M2C_FIELD(temp_r0, void **, 0x60) = temp_r0;
}
