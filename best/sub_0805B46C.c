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

void sub_0805B46C(s32 arg0) {
    s32 *var_r0;
    s32 var_r1;

    *(s32 *)0x030026D4 = 0;
    var_r1 = arg0 + 0x17D0;
    var_r0 = arg0 + 0x17A0;
    do {
        *var_r0 = var_r1;
        var_r1 -= 0x30;
        var_r0 -= 0x30;
    } while ((s32) var_r0 >= arg0);
    M2C_FIELD(arg0, s32 *, 0x17D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1800) = arg0;
}
