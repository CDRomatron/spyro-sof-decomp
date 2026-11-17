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

void sub_08063384(u8 arg0) {
    s8 *var_r1;
    s8 *var_r1_2;
    s8 var_r0;
    u8 temp_r0;

    temp_r0 = arg0;
    switch (temp_r0) {                              /* irregular */
    case 1:
        *(s8 *)0x04000063 = 8;
        var_r1 = (s8 *)0x04000063 + 2;
block_11:
        var_r0 = 0x80;
        break;
    case 2:
        var_r1_2 = (s8 *)0x04000069;
block_10:
        *var_r1_2 = 8;
        var_r1 = var_r1_2 + 4;
        goto block_11;
    case 3:
        var_r1 = (s8 *)0x04000070;
        var_r0 = 0;
        break;
    default:
        var_r1_2 = (s8 *)0x04000079;
        goto block_10;
    }
    *var_r1 = var_r0;
}
