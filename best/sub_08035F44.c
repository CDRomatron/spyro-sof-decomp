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

M2C_UNK _08035C20(void *);                          /* extern */
M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08004020(s32);                          /* extern */
u8 sub_08007874(s32);                               /* extern */
s32 sub_0800FCA4(s32, s32, s32);                    /* extern */
M2C_UNK sub_0800FDA0(void *, s32, s32);             /* extern */
M2C_UNK sub_0804EC14(void *);                       /* extern */
M2C_UNK sub_080500F0(void *);                       /* extern */
M2C_UNK sub_080528AC();                             /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_08052CF4(s32);                              /* extern */
u8 sub_0805399C();                                  /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */
extern M2C_UNK sub_08035884;

u8 sub_08035F44(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4_2;
    u8 temp_r1;
    void *temp_r4;
    void *temp_r4_3;

    temp_r4 = arg0 + 0x24;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x44));
    sub_080528D4(arg0, M2C_FIELD(arg0, s32 *, 0x24) + M2C_FIELD(arg0, s32 *, 0x4C), M2C_FIELD(temp_r4, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x50), M2C_FIELD(temp_r4, s32 *, 8));
    if (M2C_FIELD(arg0, s32 *, 0x94) != 0) {
        sub_080641CC(arg0);
    }
    if (M2C_FIELD(arg0, M2C_UNK **, 0x98) != NULL) {
        sub_080641CC(arg0);
    }
    if ((M2C_FIELD(arg0, u16 *, 0xB0) != 0) && (sub_0805399C() != 5)) {
        M2C_FIELD(arg0, u16 *, 0xB0) = (u16) (M2C_FIELD(arg0, u16 *, 0xB0) - 1);
    }
    if (M2C_FIELD(arg0, u8 *, 0xBF) != 0) {
        M2C_FIELD(arg0, s32 *, 0xA8) = sub_08052CF4(0x9A);
        sub_080528AC();
        M2C_FIELD(arg0, u8 *, 0xBF) = 0U;
        temp_r1 = sub_08007874(0x58);
        if (temp_r1 != 0) {
            M2C_FIELD(arg0, s8 *, 0xBA) = 0;
            _08035C20(arg0);
            temp_r4_2 = (arg0 + 0xBF) - 0x9B;
            temp_r0 = sub_0800FCA4(0x184, 1, temp_r4_2);
            M2C_FIELD(arg0, s32 *, 0x9C) = temp_r0;
            sub_0800FDA0(arg0, temp_r0, temp_r4_2);
            temp_r0_2 = sub_0800FCA4(0x186, 1, temp_r4_2);
            M2C_FIELD(arg0, s32 *, 0xA0) = temp_r0_2;
            sub_0800FDA0(arg0, temp_r0_2, temp_r4_2);
            temp_r0_3 = sub_0800FCA4(0x187, 1, temp_r4_2);
            M2C_FIELD(arg0, s32 *, 0xA4) = temp_r0_3;
            sub_0800FDA0(arg0, temp_r0_3, temp_r4_2);
            M2C_FIELD(arg0, M2C_UNK **, 0x98) = &sub_08035884;
            sub_08003220(0x081712E8);
        } else {
            M2C_FIELD(arg0, u8 *, 0xC0) = temp_r1;
            M2C_FIELD(arg0, s8 *, 0xBA) = 7;
            _08035C20(arg0);
            temp_r4_3 = arg0 + 0x24;
            sub_080500F0(temp_r4_3);
            sub_0804EC14(temp_r4_3);
        }
    }
    return M2C_FIELD(arg0, u8 *, 0xBE);
}
