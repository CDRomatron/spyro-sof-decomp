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

u16 sub_08063D78(s32, s32);                         /* extern */

void sub_08051F2E(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r2;
    s32 var_r2_2;

    var_r2 = arg0;
    if (arg0 < 0) {
        var_r2 = 0 - arg0;
    }
    var_r0 = arg1;
    if (arg1 < 0) {
        var_r0 = 0 - arg1;
    }
    if (var_r2 > var_r0) {
        var_r2_2 = arg0;
        if (arg0 < 0) {
            var_r2_2 = 0 - arg0;
        }
        var_r0_2 = arg1;
        if (arg1 < 0) {
            var_r0_2 = 0 - arg1;
        }
    } else {
        var_r2_2 = arg1;
        if (arg1 < 0) {
            var_r2_2 = 0 - arg1;
        }
        var_r0_2 = arg0;
        if (arg0 < 0) {
            var_r0_2 = 0 - arg0;
        }
    }
    if (var_r0_2 < 0) {
        var_r0_2 += 3;
    }
    *arg3 = var_r2_2 + (var_r0_2 >> 2);
    *arg3 += 4;
    *arg2 = (s32) sub_08063D78((s32) (arg0 << 0xC) >> 0x10, (s32) (arg1 << 0xC) >> 0x10);
}
