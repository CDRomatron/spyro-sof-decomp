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

void sub_080627D8(void *arg1) {
    s32 var_r2;

    M2C_FIELD(arg1, s8 *, 0x16) = 0;
    M2C_FIELD(arg1, s8 *, 0x1A) = 0;
    if (M2C_FIELD(arg1, u8 *, 0x18) == 0) {
        var_r2 = 0xC;
    } else {
        var_r2 = 3;
    }
    M2C_FIELD(arg1, u8 *, 0) = (u8) (M2C_FIELD(arg1, u8 *, 0) | var_r2);
}
