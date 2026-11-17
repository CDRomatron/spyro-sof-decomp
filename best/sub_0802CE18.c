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
M2C_UNK sub_08008638(void *, void *, void *);       /* extern */
M2C_UNK sub_08008810(s32, s32, void *);             /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_08052CF4(s32);                              /* extern */
u8 sub_0805399C();                                  /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */

u8 sub_0802CE18(void *arg0) {
    s32 temp_r0;
    void *temp_r4;
    void *temp_r6;

    temp_r6 = arg0 + 0x24;
    if (M2C_FIELD(arg0, u8 *, 0xAA) != 0) {
        M2C_FIELD(arg0, u8 *, 0xAA) = 0U;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
        temp_r0 = sub_08052CF4(0x130);
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_r0;
        sub_0800FE28(arg0, temp_r0, 0x61);
    }
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x44));
    sub_080528D4(arg0, M2C_FIELD(arg0, s32 *, 0x24) + M2C_FIELD(arg0, s32 *, 0x54), M2C_FIELD(temp_r6, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x58), M2C_FIELD(temp_r6, s32 *, 8));
    if (M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
        sub_080641CC(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0xA5) != 3) {
        temp_r4 = arg0 + 0x30;
        sub_08008810(M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(arg0, s32 *, 0x40), temp_r4);
        sub_08008638(temp_r4, temp_r6, temp_r6);
        M2C_FIELD(arg0, s32 *, 0x2C) = sub_080502E8(temp_r6);
    }
    if ((M2C_FIELD(arg0, u16 *, 0xA0) != 0) && (sub_0805399C() != 5)) {
        M2C_FIELD(arg0, u16 *, 0xA0) = (u16) (M2C_FIELD(arg0, u16 *, 0xA0) - 1);
    }
    return M2C_FIELD(arg0, u8 *, 0xA8);
}
