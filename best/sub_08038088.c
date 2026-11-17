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
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
s32 sub_0801DB18();                                 /* extern */
M2C_UNK sub_08037ED0(void *, s32);                  /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_08052CF4(s32);                              /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */

u8 sub_08038088(void *arg0) {
    s32 temp_r0;
    void *temp_r6;

    temp_r6 = arg0 + 0x24;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x44));
    if (M2C_FIELD(arg0, u8 *, 0x92) != 0) {
        temp_r0 = sub_08052CF4(0x18A);
        M2C_FIELD(arg0, s32 *, 0x60) = temp_r0;
        if (temp_r0 == 0) {
            M2C_FIELD(arg0, u8 *, 0x90) = (u8) temp_r0;
        }
        if (M2C_FIELD(arg0, u8 *, 0x91) != 0) {
            sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8), 0, 0xA00);
        }
        M2C_FIELD(arg0, u8 *, 0x92) = 0U;
    }
    if (M2C_FIELD(arg0, u16 *, 0x8C) == 0) {
        sub_08037ED0(arg0, 1);
    }
    M2C_FIELD(arg0, u16 *, 0x8C) = (u16) (M2C_FIELD(arg0, u16 *, 0x8C) - 1);
    sub_080528D4(arg0, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8));
    if (M2C_FIELD(arg0, s32 *, 0x5C) != 0) {
        sub_080641CC(arg0);
    }
    if ((M2C_FIELD(arg0, u8 *, 0x8E) != 1) && (((sub_0801DB18() << 0x18) != 0) || ((sub_08007874(0x51) << 0x18) != 0))) {
        sub_08037ED0(arg0, 1);
    }
    return M2C_FIELD(arg0, u8 *, 0x90);
}
