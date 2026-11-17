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

M2C_UNK sub_08065CF0(s32, s32, s32);                /* extern */

s32 sub_08003758(void) {
    u16 *var_r1;
    u32 var_r2;

    sub_08065CF0(0x03001160, 0, 0x54);
    M2C_FIELD((void *)0x03001160, u16 *, 0) = 0x80U;
    M2C_FIELD((void *)0x03001160, u16 *, 0x20) = 0x100U;
    M2C_FIELD((void *)0x03001160, u16 *, 0x26) = 0x100U;
    M2C_FIELD((void *)0x03001160, u16 *, 0x30) = 0x100U;
    M2C_FIELD((void *)0x03001160, u16 *, 0x36) = 0x100U;
    var_r2 = 0;
    var_r1 = (u16 *)0x030011C0;
    do {
        *var_r1 = 0x7FFF;
        var_r1 += 2;
        var_r2 += 1;
    } while (var_r2 <= 0x1FFU);
    return 1;
}
