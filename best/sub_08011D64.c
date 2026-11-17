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

s32 sub_08008900();                                 /* extern */

void sub_08011D64(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r1;

    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (u16) M2C_FIELD(arg0, s32 *, 0x54);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (u16) M2C_FIELD(arg0, s32 *, 0x5C);
    temp_r0 = sub_08008900();
    var_r1 = temp_r0;
    if (temp_r0 < 0) {
        var_r1 = 0 - temp_r0;
    }
    if (var_r1 < arg1) {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x54) + (temp_r0 >> 1);
    } else if (temp_r0 < 0) {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x54) - arg1;
    } else {
        var_r0 = M2C_FIELD(arg0, s32 *, 0x54) + arg1;
    }
    M2C_FIELD(arg0, s32 *, 0x54) = var_r0;
}
