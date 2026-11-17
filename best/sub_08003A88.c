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

M2C_UNK sub_08000B84(s32);                          /* extern */
void *sub_08000CC0(s32);                            /* extern */
M2C_UNK sub_08002BE0(void *, s32);                  /* extern */
M2C_UNK sub_080038D4(void *);                       /* extern */

void sub_08003A88(void) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    sub_08000B84(0);
    M2C_FIELD((void *)0x03000868, u8 *, 0xC) = (u8) (M2C_FIELD((void *)0x03000868, u8 *, 0xC) + 1);
loop_2:
    temp_r0 = sub_08000CC0(0x03000868);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, u16 *, 0xE) = (u16) (M2C_FIELD(temp_r0, u16 *, 0xE) & 0xFFFE);
        sub_080038D4(temp_r0);
        sub_08002BE0(temp_r0, 0x14);
        goto loop_2;
    }
    M2C_FIELD((void *)0x03000868, u8 *, 0xC) = (u8) (M2C_FIELD((void *)0x03000868, u8 *, 0xC) - 1);
loop_5:
    temp_r0_2 = sub_08000CC0(0x03000878);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(temp_r0_2, u16 *, 0xE) = (u16) (M2C_FIELD(temp_r0_2, u16 *, 0xE) & 0xFFFE);
        sub_080038D4(temp_r0_2);
        sub_08002BE0(temp_r0_2, 0x14);
        goto loop_5;
    }
loop_8:
    temp_r0_3 = sub_08000CC0(0x03000888);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(temp_r0_3, u16 *, 0xE) = (u16) (M2C_FIELD(temp_r0_3, u16 *, 0xE) & 0xFFFE);
        sub_080038D4(temp_r0_3);
        sub_08002BE0(temp_r0_3, 0x14);
        goto loop_8;
    }
}
