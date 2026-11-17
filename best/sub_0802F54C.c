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

M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */

s32 sub_0802F54C(u16 arg0, void *arg2) {
    u16 temp_r0;

    temp_r0 = arg0;
    if (((s32) temp_r0 <= 2) && ((s32) temp_r0 >= 1)) {
        M2C_FIELD(arg2, s8 *, 0x46) = 0;
        sub_0800F538();
        sub_080534A0(3);
    }
    return 1;
}
