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
s32 sub_08007874(s32);                              /* extern */
s32 sub_0801DB18();                                 /* extern */
M2C_UNK sub_0803A49C(void *, s32);                  /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */

u8 sub_0803A654(void *arg0) {
    void *temp_r4;

    temp_r4 = arg0 + 0x24;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x44));
    sub_080528D4(arg0, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r4, s32 *, 4), M2C_FIELD(temp_r4, s32 *, 8));
    if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
        sub_080641CC(arg0);
    }
    M2C_FIELD(arg0, u16 *, 0x88) = (u16) (M2C_FIELD(arg0, u16 *, 0x88) + 1);
    if ((M2C_FIELD((arg0 + 0x88), u8 *, 2) != 2) && (((sub_0801DB18() << 0x18) != 0) || ((sub_08007874(0x1C) << 0x18) != 0))) {
        sub_0803A49C(arg0, 2);
    }
    return M2C_FIELD(arg0, u8 *, 0x8C);
}
