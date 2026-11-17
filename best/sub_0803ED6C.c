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

s32 sub_08007A7C();                                 /* extern */
M2C_UNK sub_08061BD0(s32, s32);                     /* extern */

void sub_0803ED6C(void) {
    s32 var_r1;

    var_r1 = 1;
    if ((sub_08007A7C() << 0x18) != 0) {
        var_r1 = 2;
    }
    sub_08061BD0(7, var_r1 | 0x50000000);
}
