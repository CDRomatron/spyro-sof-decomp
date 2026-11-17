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

u32 sub_08065B8C(u32 arg0, u32 arg1, s32 arg2) {
    s32 temp_r0;
    u32 var_r0;
    u32 var_r3;

    var_r0 = arg0;
    if (arg2 != 0) {
        temp_r0 = 0x20 - arg2;
        if (temp_r0 <= 0) {
            var_r3 = arg1 >> (0 - temp_r0);
        } else {
            var_r3 = (var_r0 >> arg2) | (arg1 << temp_r0);
        }
        var_r0 = var_r3;
    }
    return var_r0;
}
