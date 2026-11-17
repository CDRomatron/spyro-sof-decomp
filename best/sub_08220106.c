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

/* Warning: missing "bx $lr" in last block of sub_08220106 (_0822022E). */

s32 sub_08220106(s32 arg0, s32 arg3, s32 arg4, s32 arg94, s32 arg9D, s32 argAD, s32 argCE) {
    s32 var_r0;
    s32 var_z;

    if (!M2C_OVERFLOW((s32) (arg3 + 0xB6))) {
        return arg0;
    }
    arg4 = arg0;
    arg4 = arg0;
    arg4 = arg0;
    arg4 = arg0;
    var_r0 = arg0;
    var_z = var_r0 == 0;
    if (var_r0 != 0) {
        var_z = var_r0 == 0;
    }
    if (!var_z) {
        var_z = var_r0 == 0;
    }
    if (!var_z) {
        var_z = var_r0 == 0;
    }
    if (!var_z) {
        var_z = var_r0 == 0;
    }
    if (!var_z) {
        var_z = var_r0 == 0;
    }
    if (!var_z) {

    }
    return var_r0;
}
