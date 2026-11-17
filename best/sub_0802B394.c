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

M2C_UNK sub_08008620(void *, void *, void *);       /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
s32 sub_080510C0(void *, s32, void *, s32, s32, s32); /* extern */
s32 sub_08052140(void *, s32);                      /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_0802B394(void *arg0) {
    u16 temp_r1;
    void *temp_r5;
    void *temp_r5_2;

    temp_r5 = arg0 + 0x24;
    temp_r1 = M2C_FIELD(arg0, u16 *, 0x88) - 1;
    M2C_FIELD(arg0, u16 *, 0x88) = temp_r1;
    if ((temp_r1 << 0x10) != 0xFFFF0000) {
        if (((sub_08052140(temp_r5, 0xA00) << 0x18) != 0) && (sub_0805399C() != 5)) {
            sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8), 1, 0xA00);
            goto block_4;
        }
        temp_r5_2 = arg0 + 0x24;
        if (sub_080510C0(temp_r5_2, M2C_FIELD(arg0, s32 *, 0x80), arg0 + 0x7C, 0, -1, 0xA00) != 0) {
            M2C_FIELD(arg0, s8 *, 0x8B) = 0;
            return;
        }
        sub_08008620(arg0 + 0x58, temp_r5_2, temp_r5_2);
        return;
    }
block_4:
    M2C_FIELD(arg0, s8 *, 0x8B) = 0;
}
