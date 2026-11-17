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

M2C_UNK sub_08003440(s32);                          /* extern */
M2C_UNK sub_080035D8(s32);                          /* extern */
s32 sub_08007C68();                                 /* extern */
M2C_UNK sub_080569AC(s32);                          /* extern */

void sub_08057000(void) {
    s16 temp_r0;
    u16 temp_r0_2;
    void *temp_r5;

    temp_r5 = *(void **)0x030008D4;
    if ((s32) M2C_FIELD(temp_r5, s16 *, 0x7C4) <= 0x10) {
        M2C_FIELD((void *)0x03001160, u16 *, 0) = 0xF40U;
        M2C_FIELD((void *)0x03001160, u16 *, 0x50) = 0xFFU;
        M2C_FIELD((void *)0x03001160, u16 *, 0x54) = (u16) (0x10 - (u16) M2C_FIELD(temp_r5, s16 *, 0x7C4));
        temp_r0 = (u16) M2C_FIELD(temp_r5, s16 *, 0x7C4) + 1;
        M2C_FIELD(temp_r5, s16 *, 0x7C4) = temp_r0;
        if ((s32) temp_r0 > 0x10) {
            M2C_FIELD((void *)0x03001160, u16 *, 0) = (u16) (M2C_FIELD((void *)0x03001160, u16 *, 0) | 0x1000);
            if ((sub_08007C68() << 0x18) == 0) {
                sub_08003440(0);
            }
            sub_080035D8(0x0816529C);
            M2C_FIELD(temp_r5, u16 *, 0x7C0) = 0x14U;
            M2C_FIELD(temp_r5, s16 *, 0x7C2) = 0x14;
        }
    } else {
        temp_r0_2 = M2C_FIELD(temp_r5, u16 *, 0x7C0);
        if (temp_r0_2 == 0) {
            M2C_FIELD((void *)0x03001160, u16 *, 0) = 0x1F40U;
            sub_080569AC(3);
            return;
        }
        M2C_FIELD(temp_r5, u16 *, 0x7C0) = (u16) (temp_r0_2 - 1);
    }
}
