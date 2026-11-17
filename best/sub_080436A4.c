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

M2C_UNK sub_0800A400(s32, s32);                     /* extern */
M2C_UNK sub_0804360C();                             /* extern */
M2C_UNK sub_08043A54(s32);                          /* extern */
M2C_UNK sub_080641CC(void *, s32);                  /* extern */

void sub_080436A4(void) {
    u8 temp_r0;
    void *temp_r4;
    void *temp_r6;
    void *temp_r7;

    temp_r4 = *(void **)0x030008D0;
    if ((u32) M2C_FIELD(temp_r4, u8 *, 0x7D) <= 0x10U) {
        *(u16 *)0x030011B0 = 0xF4;
        *(u16 *)0x030011B4 = 0x10 - M2C_FIELD(temp_r4, u8 *, 0x7D);
        M2C_FIELD(temp_r4, u8 *, 0x7D) = (u8) (M2C_FIELD(temp_r4, u8 *, 0x7D) + 1);
        return;
    }
    sub_0804360C();
    temp_r0 = M2C_FIELD(temp_r4, u8 *, 0x80);
    if (temp_r0 == 0) {
        temp_r6 = M2C_FIELD(temp_r4, void **, 0x2C);
        temp_r7 = *(void **)0x030008D0;
        M2C_FIELD(temp_r7, u8 *, 0x7E) = temp_r0;
        sub_080641CC(temp_r6, M2C_FIELD(temp_r6, s32 *, 0xC));
        sub_0800A400(0xB0, 0x03001320);
        sub_0800A400(0xB1, 0x03001340);
        if (temp_r6 != M2C_FIELD(temp_r7, s32 *, 0)) {
            M2C_FIELD(temp_r7, u8 *, 0x7E) = (u8) (M2C_FIELD(temp_r7, u8 *, 0x7E) | 4);
        }
        if (temp_r6 != M2C_FIELD(temp_r7, s32 *, 8)) {
            M2C_FIELD(temp_r7, u8 *, 0x7E) = (u8) (M2C_FIELD(temp_r7, u8 *, 0x7E) | 8);
        }
        sub_08043A54(4);
    }
}
