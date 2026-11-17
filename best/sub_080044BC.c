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

void sub_080044BC(void *arg0, s32 arg1) {
    u16 var_r0;

    if (arg1 != 0) {
        var_r0 = 0x4000 | M2C_FIELD(arg0, u16 *, 0x30);
    } else {
        var_r0 = 0xBFFF & M2C_FIELD(arg0, u16 *, 0x30);
    }
    M2C_FIELD(arg0, u16 *, 0x30) = var_r0;
}
