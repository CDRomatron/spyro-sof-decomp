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

M2C_UNK sub_0804360C();                             /* extern */
M2C_UNK sub_08043A54(s32);                          /* extern */
M2C_UNK sub_080641CC(void *, s32);                  /* extern */

void sub_080437CC(void) {
    u8 temp_r1;
    void *temp_r2;
    void *temp_r4;

    temp_r4 = *(void **)0x030008D0;
    temp_r2 = M2C_FIELD(temp_r4, void **, 0x2C);
    if ((temp_r2 != NULL) && (M2C_FIELD(temp_r2, u8 *, 0x11) == 0)) {
        sub_080641CC(temp_r2, M2C_FIELD(temp_r2, s32 *, 0xC));
    }
    if ((u32) M2C_FIELD(temp_r4, u8 *, 0x7D) <= 0x10U) {
        *(u16 *)0x030011B0 = 0x443;
        temp_r1 = M2C_FIELD(temp_r4, u8 *, 0x7D);
        *(u16 *)0x030011B2 = temp_r1 | ((0x10 - temp_r1) << 8);
        M2C_FIELD(temp_r4, u8 *, 0x7D) = (u8) (M2C_FIELD(temp_r4, u8 *, 0x7D) + 1);
        return;
    }
    sub_0804360C();
    if (M2C_FIELD(temp_r4, u8 *, 0x80) == 0) {
        sub_08043A54(1);
    }
}
