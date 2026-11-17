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

s32 sub_0862C7C8(s32 arg0) {
    s32 var_r0;

    var_r0 = (s32) ((s32) ((s32) ((s32) (arg0 * 0x10) >> 4) >> 4) >> 4) >> 0x20;
    if (M2C_ERROR(/* Read from unset register $gt */)) {
        var_r0 = var_r0 >> 0x20;
    }
    return var_r0;
}
