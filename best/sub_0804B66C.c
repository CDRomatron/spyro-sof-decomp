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

s32 sub_08045C64(M2C_UNK, M2C_UNK, s32, s32);       /* extern */

s32 sub_0804B66C(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r1;

    var_r1 = 0;
    if (sub_08045C64(arg0, arg1, 0, 0x100) == 0) {
        var_r1 = 1;
    }
    return var_r1;
}
