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

s32 sub_08063D80(s32, s32);                         /* extern */
s32 sub_08063DB4(s32);                              /* extern */

s32 sub_08054AF0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r0;
    s32 var_r5;
    u32 var_r5_2;

    if (arg0 != 0) {
        temp_r5_2 = sub_08063D80(arg0 * arg0, 0x100);
        var_r5 = temp_r5_2 + (sub_08063D80(arg1 * arg2, 0x100) * 2);
        if ((s32) (0xFF & var_r5) > 0x80) {
            var_r5 += 0x100;
        }
        var_r5_2 = (u32) (sub_08063DB4(var_r5 >> 8) << 0x10) >> 8;
        if (((s32) var_r5_2 > 0) && (arg2 < 0)) {
            var_r5_2 = 0 - var_r5_2;
        }
        temp_r5 = (var_r5_2 - arg0) << 8;
        if (sub_08063D80(temp_r5, arg2) < 0) {
            var_r0 = temp_r5;
            goto block_11;
        }
        return sub_08063D80(temp_r5, arg2);
    }
    temp_r4 = sub_08063DB4((s32) (sub_08063D80(arg1 * arg2, 0x100) * 2) >> 8) << 0x10;
    if (sub_08063D80(temp_r4, arg2) < 0) {
        var_r0 = temp_r4;
block_11:
        return 0 - sub_08063D80(var_r0, arg2);
    }
    return sub_08063D80(temp_r4, arg2);
}
