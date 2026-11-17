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

M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_080042A4(s32, s32, s32);                /* extern */
M2C_UNK sub_08056778(s32, M2C_UNK, u16, u16);       /* extern */

void sub_080564B8(void) {
    s32 temp_r0;
    u16 temp_r0_2;
    u16 temp_r2;
    u16 temp_r3;
    void *temp_r4;

    temp_r4 = *(void **)0x030008D4;
    temp_r3 = M2C_FIELD((void *)0x03001160, u16 *, 0x10);
    M2C_FIELD((void *)0x03001160, u16 *, 0x10) = (u16) ((0 - M2C_FIELD(temp_r4, s32 *, 0x28)) + 0x100);
    temp_r2 = M2C_FIELD((void *)0x03001160, u16 *, 0x14);
    M2C_FIELD((void *)0x03001160, u16 *, 0x14) = (u16) ((0 - M2C_FIELD(temp_r4, s32 *, 0x28)) + 0x100);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x28);
    if (temp_r0 > 0xEF) {
        temp_r0_2 = M2C_FIELD(temp_r4, u16 *, 0x30) - 1;
        M2C_FIELD(temp_r4, u16 *, 0x30) = temp_r0_2;
        if ((temp_r0_2 << 0x10) == 0) {
            sub_08056778(4, 0x03001160, temp_r2, temp_r3);
        }
    } else {
        M2C_FIELD(temp_r4, s32 *, 0x28) = (s32) (temp_r0 + 3);
    }
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x28) <= 0xEF) {
        sub_08004020(M2C_FIELD(temp_r4, s32 *, 4));
        sub_080042A4(M2C_FIELD(temp_r4, s32 *, 4), M2C_FIELD(temp_r4, s32 *, 0x28) - 3, M2C_FIELD(temp_r4, s32 *, 0x2C));
    }
}
