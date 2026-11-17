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
s32 sub_0800F2AC();                                 /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, void *, s32);  /* extern */
M2C_UNK sub_080528AC(s32);                          /* extern */
s32 sub_08052CF4(s32);                              /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */
extern M2C_UNK sub_08028F64;

u8 sub_0802918E(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x59) != 0) {
        M2C_FIELD(arg0, u8 *, 0x59) = 0U;
        M2C_FIELD(arg0, s32 *, 0x38) = sub_08052CF4(0x11C);
        M2C_FIELD(arg0, s32 *, 0x3C) = sub_08052CF4(0xA0);
        if ((sub_08007874(0xA) << 0x18) == 0) {
            sub_080528AC(M2C_FIELD(arg0, s32 *, 0x3C));
        }
    }
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x40));
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        sub_080641CC(arg0);
    }
    if ((M2C_FIELD(arg0, u8 *, 0x55) != 0) && ((sub_0800F2AC() << 0x18) != 0)) {
        M2C_FIELD(arg0, u8 *, 0x55) = 0U;
        sub_0800F550(0xF1, &sub_08028F64, arg0, 1);
    }
    if ((M2C_FIELD(arg0, u8 *, 0x57) != 0) && ((sub_0800F2AC() << 0x18) != 0)) {
        M2C_FIELD(arg0, u8 *, 0x57) = 0U;
        sub_0800F550(0xEE, &sub_08028F64, arg0, 1);
    }
    return M2C_FIELD(arg0, u8 *, 0x5A);
}
