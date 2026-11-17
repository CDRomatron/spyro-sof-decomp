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

M2C_UNK sub_08064298();                             /* extern */

s32 sub_0806436C(u32 arg0, u32 arg1) {
    s32 var_r2;
    u32 temp_r4;
    u32 temp_r4_2;
    u32 temp_r4_3;
    u32 var_r0;
    u32 var_r1;
    u32 var_r3;

    var_r0 = arg0;
    var_r1 = arg1;
    if (var_r1 != 0) {
        var_r3 = 1;
        var_r2 = 0;
        if (var_r0 >= var_r1) {
loop_3:
            if ((var_r1 < 0x10000000U) && (var_r1 < var_r0)) {
                var_r1 *= 0x10;
                var_r3 *= 0x10;
                goto loop_3;
            }
loop_7:
            if ((var_r1 < 0x80000000U) && (var_r1 < var_r0)) {
                var_r1 *= 2;
                var_r3 *= 2;
                goto loop_7;
            }
loop_10:
            if (var_r0 >= var_r1) {
                var_r0 -= var_r1;
                var_r2 |= var_r3;
            }
            temp_r4 = var_r1 >> 1;
            if (var_r0 >= temp_r4) {
                var_r0 -= temp_r4;
                var_r2 |= var_r3 >> 1;
            }
            temp_r4_2 = var_r1 >> 2;
            if (var_r0 >= temp_r4_2) {
                var_r0 -= temp_r4_2;
                var_r2 |= var_r3 >> 2;
            }
            temp_r4_3 = var_r1 >> 3;
            if (var_r0 >= temp_r4_3) {
                var_r0 -= temp_r4_3;
                var_r2 |= var_r3 >> 3;
            }
            if (var_r0 != 0) {
                var_r3 = var_r3 >> 4;
                if (var_r3 != 0) {
                    var_r1 = var_r1 >> 4;
                    goto loop_10;
                }
            }
        }
        return var_r2;
    }
    sub_08064298();
    return 0;
}
