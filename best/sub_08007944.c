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

void sub_08007944(u8 arg0) {
    u8 var_r2;
    u8 var_r3;

    var_r2 = arg0;
    if ((s32) (s8) arg0 > 0x63) {
        var_r2 = 0x63;
    }
    var_r3 = 5;
    if (!(*(s32 *)0x030026C8 & 0x10)) {
        var_r3 = var_r2;
    }
    *(u8 *)0x03001C5E = var_r3;
    *(u8 *)0x0300162F = 1;
}
