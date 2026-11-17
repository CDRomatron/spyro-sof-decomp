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
s32 sub_0800F2AC();                                 /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, void *, s32);  /* extern */
s32 sub_08052BB4(s32);                              /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */
extern M2C_UNK sub_0802BE04;

s32 sub_0802BC7C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x48) != 0) {
        M2C_FIELD(arg0, u8 *, 0x48) = 0U;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
    }
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x34));
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        sub_080641CC(arg0);
    }
    if ((M2C_FIELD(arg0, u8 *, 0x46) != 0) && ((sub_0800F2AC() << 0x18) != 0)) {
        M2C_FIELD(arg0, u8 *, 0x46) = 0U;
        sub_080534A0(5);
        sub_0800F550(0xF6, &sub_0802BE04, arg0, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x40) = sub_08052BB4(arg0 + 0xC);
    return 1;
}
