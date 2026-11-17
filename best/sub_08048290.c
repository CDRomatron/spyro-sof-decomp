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

s32 sub_0804B6E8(s32, s32);                         /* extern */

s32 sub_08048290(s32 arg0, s32 arg1, u8 arg2, s32 arg3) {
    s32 temp_r5;
    s32 var_r0;
    s32 var_r1;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;

    var_r0 = arg0;
    var_r1 = arg1;
    if (var_r0 < 0) {
        var_r0 += 0xFF;
    }
    temp_r5 = var_r0 >> 0xB;
    if (var_r1 < 0) {
        var_r1 += 0xFF;
    }
    var_r4 = (var_r1 >> 0xB) + 1;
    if (arg2 != 0) {
        var_r5 = temp_r5 - arg3;
    } else {
        var_r5 = temp_r5 + arg3;
    }
    var_r6 = 0;
loop_9:
    if ((sub_0804B6E8(var_r5, var_r4) << 0x18) == 0) {
        var_r4 += 1;
        var_r6 += 1;
        if (var_r6 > 2) {
            return 1;
        }
        goto loop_9;
    }
    return 0;
}
