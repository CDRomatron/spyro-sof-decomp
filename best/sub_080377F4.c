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

M2C_UNK _08037630(void *, s32);                     /* extern */
M2C_UNK sub_08004020(s32);                          /* extern */
u8 sub_08007874(s32);                               /* extern */
M2C_UNK sub_0804EC14(void *);                       /* extern */
M2C_UNK sub_080500F0(void *);                       /* extern */
M2C_UNK sub_080528AC();                             /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_08052CF4(s32);                              /* extern */
u8 sub_0805399C();                                  /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */

u8 sub_080377F4(void *arg0) {
    u8 temp_r0;
    void *temp_r5;

    temp_r5 = arg0 + 0x24;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x40));
    sub_080528D4(arg0, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8));
    if (M2C_FIELD(arg0, u8 *, 0x72) != 0) {
        M2C_FIELD(arg0, s32 *, 0x5C) = sub_08052CF4(0xA6);
        sub_080528AC();
        temp_r0 = sub_08007874(0x57);
        if (temp_r0 != 0) {
            _08037630(arg0, 0);
        } else {
            M2C_FIELD(arg0, u8 *, 0x73) = temp_r0;
            _08037630(arg0, 5);
            sub_080500F0(temp_r5);
            sub_0804EC14(temp_r5);
        }
        M2C_FIELD(arg0, u16 *, 0x68) = 0x1A4U;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
        M2C_FIELD(arg0, u8 *, 0x72) = 0U;
    }
    if (M2C_FIELD(arg0, s32 *, 0x64) != 0) {
        sub_080641CC(arg0);
    }
    if ((M2C_FIELD(arg0, u16 *, 0x68) != 0) && (sub_0805399C() != 5)) {
        M2C_FIELD(arg0, u16 *, 0x68) = (u16) (M2C_FIELD(arg0, u16 *, 0x68) - 1);
    }
    return M2C_FIELD(arg0, u8 *, 0x71);
}
