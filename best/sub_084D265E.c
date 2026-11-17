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

/* Warning: missing "bx $lr" in last block of sub_084D265E (_084D27D2). */

void *sub_084D265E(void *arg0, s32 arg1, s32 arg2, u32 arg3, void *arg4, s32 argBF, s32 argDF) {
    s32 var_z;
    void *var_r0;

    if (M2C_ERROR(/* Read from unset register $ge */)) {

    }
    var_r0 = arg0;
    var_z = var_r0 == NULL;
    if (var_r0 != NULL) {
        var_z = var_r0 == NULL;
    }
    if (!var_z) {

    }
    arg4 = var_r0;
    arg4 = var_r0;
    M2C_FIELD(var_r0, void **, 0x60) = var_r0;
    M2C_FIELD((argDF * 8), void **, 0x44) = arg4;
    return var_r0;
}
