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

u8 sub_0805B298(void) {
    u8 var_r2;

    var_r2 = 0;
    if (*(s32 *)0x030026D0 != *(s32 *)0x030010B4) {
        *(s32 *)0x030026D0 = *(s32 *)0x030010B4;
        var_r2 = ((s32) (0 - (u16) (0x40 & *(u16 *)0x030010B0)) >> 0x1F) & 4;
        if (0x80 & *(u16 *)0x030010B0) {
            var_r2 |= 8;
        }
        if (0x20 & *(u16 *)0x030010B0) {
            var_r2 |= 0x10;
        }
        if (0x10 & *(u16 *)0x030010B0) {
            var_r2 |= 0x20;
        }
        if (1 & *(u16 *)0x030010B0) {
            var_r2 |= 1;
        }
        if (2 & *(u16 *)0x030010B0) {
            var_r2 |= 2;
        }
    }
    return var_r2;
}
