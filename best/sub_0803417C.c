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
M2C_UNK sub_0800781C(s32, s32);                     /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, void *, s32);  /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
u8 sub_08050148();                                  /* extern */
s32 sub_08052BB4(void *);                           /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */
extern M2C_UNK sub_080342FC;

u8 sub_0803417C(void *arg0) {
    u8 temp_r0;

    sub_08004020(M2C_FIELD(arg0, s32 *, 0x38));
    if (M2C_FIELD(arg0, u8 *, 0x4C) != 0) {
        M2C_FIELD(arg0, u8 *, 0x4C) = 0U;
        sub_0800781C(0x47, 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        sub_080641CC(arg0);
    }
    if (M2C_FIELD(arg0, u8 *, 0x49) != 0) {
        temp_r0 = sub_08050148();
        if (temp_r0 == 0) {
            M2C_FIELD(arg0, u8 *, 0x49) = temp_r0;
            sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x34), 0x25);
        }
    }
    if (M2C_FIELD(arg0, u8 *, 0x4B) != 0) {
        M2C_FIELD(arg0, u8 *, 0x4B) = 0U;
        if ((sub_08007874(0x16) << 0x18) != 0) {
            sub_0800F550(0x108, &sub_080342FC, arg0, 0);
        } else {
            sub_0800F550(0x107, &sub_080342FC, arg0, 0);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x44) = sub_08052BB4(arg0 + 0xC);
    return M2C_FIELD(arg0, u8 *, 0x4D);
}
