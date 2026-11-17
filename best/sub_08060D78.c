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

s32 sub_08060D78(void) {
    s32 var_r3;

    var_r3 = 0;
    if (0x20 & *(u16 *)0x030010AC) {
        if (0x40 & *(u16 *)0x030010AC) {
            var_r3 = 7;
        } else {
            var_r3 = 6;
            if (0x80 & *(u16 *)0x030010AC) {
                var_r3 = 5;
            }
        }
    } else if (0x10 & *(u16 *)0x030010AC) {
        if (0x40 & *(u16 *)0x030010AC) {
            var_r3 = 1;
        } else {
            var_r3 = 2;
            if (0x80 & *(u16 *)0x030010AC) {
                var_r3 = 3;
            }
        }
    }
    if (0x40 & *(u16 *)0x030010AC) {
        if (0x10 & *(u16 *)0x030010AC) {
            var_r3 = 1;
        } else {
            var_r3 = 0;
            if (0x20 & *(u16 *)0x030010AC) {
                var_r3 = 7;
            }
        }
    } else if (0x80 & *(u16 *)0x030010AC) {
        if (0x10 & *(u16 *)0x030010AC) {
            var_r3 = 3;
        } else {
            var_r3 = 4;
            if (0x20 & *(u16 *)0x030010AC) {
                var_r3 = 5;
            }
        }
    }
    return var_r3;
}
