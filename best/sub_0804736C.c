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

s32 sub_0804736C(M2C_UNK **arg0) {
    M2C_UNK *temp_r0;
    M2C_UNK *var_r1;
    s32 var_r2;

    var_r2 = 0;
    temp_r0 = *arg0;
    if (temp_r0 != (arg0 + 4)) {
        var_r1 = temp_r0;
        do {
            var_r2 += 1;
            var_r1 = *var_r1;
        } while (*var_r1 != NULL);
    }
    return var_r2;
}
