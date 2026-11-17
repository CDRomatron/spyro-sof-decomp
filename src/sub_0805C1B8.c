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

M2C_UNK sub_080030BC(s32);                          /* extern */
M2C_UNK sub_0805BCA4(s32);                          /* extern */

void sub_0805C1B8(void) {
    void *temp_r2;

    temp_r2 = *(void **)0x030026DC;
    if ((*(u16 *)0x030010B0 == 2) && !(0x300 & *(u16 *)0x030010AC)) {
        if (((u32) M2C_FIELD(temp_r2, u16 *, 0x14) > 3U) && (M2C_FIELD(temp_r2, u8 *, 0x2C) != 0)) {
            sub_080030BC(0x1E);
        }
        sub_0805BCA4(2);
    }
}
