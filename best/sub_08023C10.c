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
s32 sub_08052140(void *, s32);                      /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
u8 sub_0805399C();                                  /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */

u8 sub_08023C10(void *arg0) {
    u8 temp_r1;
    u8 temp_r4;
    void *temp_r4_2;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0x96);
    M2C_FIELD(arg0, u8 *, 0x96) = (u8) (temp_r1 + 1);
    temp_r4 = 3 & temp_r1;
    if ((temp_r4 == 0) && ((M2C_FIELD(arg0, u8 *, 0x94) = 1U, ((sub_08052140(arg0 + 0x24, 0x5000) << 0x18) != 0)) || (M2C_FIELD(arg0, u8 *, 0x92) == 3))) {
        M2C_FIELD(arg0, u8 *, 0x94) = temp_r4;
    }
    if (M2C_FIELD(arg0, u8 *, 0x94) == 0) {
        temp_r4_2 = arg0 + 0x24;
        sub_08004020(M2C_FIELD(arg0, s32 *, 0x78));
        sub_08004020(M2C_FIELD(arg0, s32 *, 0x7C));
        sub_080528D4(arg0, M2C_FIELD(arg0, s32 *, 0x24) + M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(temp_r4_2, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(temp_r4_2, s32 *, 8));
        if (M2C_FIELD(arg0, s32 *, 0x80) != 0) {
            sub_080641CC(arg0);
        }
        if ((M2C_FIELD(arg0, u16 *, 0x8C) != 0) && (sub_0805399C() == 3)) {
            M2C_FIELD(arg0, u16 *, 0x8C) = (u16) (M2C_FIELD(arg0, u16 *, 0x8C) - 1);
        }
    }
    return M2C_FIELD(arg0, u8 *, 0x95);
}
