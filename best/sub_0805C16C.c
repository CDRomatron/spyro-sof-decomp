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

M2C_UNK sub_0805BCA4(s32, void *, u16);             /* extern */

void sub_0805C16C(void) {
    u16 temp_r0;
    u16 temp_r2;
    void *temp_r3;

    temp_r3 = *(void **)0x030026DC;
    if ((u32) M2C_FIELD(temp_r3, u16 *, 0x1E) <= 0x10U) {
        *(u16 *)0x030011B0 = 0xFF;
        temp_r2 = *(u16 *)0x030011B4;
        *(u16 *)0x030011B4 = 0x10 - M2C_FIELD(temp_r3, u16 *, 0x1E);
        temp_r0 = M2C_FIELD(temp_r3, u16 *, 0x1E) + 1;
        M2C_FIELD(temp_r3, u16 *, 0x1E) = temp_r0;
        if ((u32) temp_r0 > 0x10U) {
            M2C_FIELD(temp_r3, s8 *, 0x28) = 1;
            sub_0805BCA4(1, temp_r3 + 0x28, temp_r2);
        }
    }
}
