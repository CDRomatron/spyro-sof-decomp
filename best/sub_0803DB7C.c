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
s32 sub_0801DAD0();                                 /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
u8 sub_0805399C();                                  /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */

u8 sub_0803DB7C(void *arg0) {
    void *temp_r4;

    temp_r4 = arg0 + 0x24;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x78));
    sub_080528D4(arg0, M2C_FIELD(arg0, s32 *, 0x24) + M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(temp_r4, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(temp_r4, s32 *, 8));
    if (M2C_FIELD(arg0, s32 *, 0x80) != 0) {
        sub_080641CC(arg0);
    }
    if ((M2C_FIELD(arg0, u16 *, 0x92) != 0) && (sub_0805399C() != 5) && ((sub_0801DAD0() << 0x18) == 0)) {
        M2C_FIELD(arg0, u16 *, 0x92) = (u16) (M2C_FIELD(arg0, u16 *, 0x92) - 1);
    }
    return M2C_FIELD(arg0, u8 *, 0x98);
}
