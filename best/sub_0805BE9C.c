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

M2C_UNK sub_0805BD7C();                             /* extern */
M2C_UNK sub_080641C8(s32);                          /* extern */

s32 sub_0805BE9C(void) {
    u8 var_r1;
    void *temp_r4;

    temp_r4 = *(void **)0x030026DC;
    sub_080641C8(M2C_FIELD(temp_r4, s32 *, 8));
    if (M2C_FIELD(temp_r4, u8 *, 0x28) != 0) {
        sub_0805BD7C();
    }
    if ((M2C_FIELD(temp_r4, u16 *, 0x16) == 1) && (8 & *(u16 *)0x030010B0)) {
        var_r1 = 0;
        if (M2C_FIELD(temp_r4, u8 *, 0x28) == 0) {
            var_r1 = 1;
        }
        M2C_FIELD(temp_r4, u8 *, 0x28) = var_r1;
    }
    if ((M2C_FIELD(temp_r4, u8 *, 0x2C) == 0) && !(*(s32 *)0x030010B4 & 7)) {
        M2C_FIELD((void *)0x03001160, u16 *, 0x14) = (u16) (M2C_FIELD((void *)0x03001160, u16 *, 0x14) + 1);
    }
    return 1;
}
