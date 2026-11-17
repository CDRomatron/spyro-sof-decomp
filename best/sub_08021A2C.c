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
s32 sub_08052400(s32, M2C_UNK *);                   /* extern */
s32 sub_08052BB4(void *);                           /* extern */
s32 sub_08052C88(M2C_UNK *);                        /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
M2C_UNK sub_080543B0(u8);                           /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */
extern M2C_UNK sub_08021C18;

u8 sub_08021A2C(void *arg0) {
    M2C_UNK sp0;

    if (M2C_FIELD(arg0, u8 *, 0x4A) != 0) {
        M2C_FIELD(arg0, u8 *, 0x4A) = 0U;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
        if (sub_08052400(0xF9, &sp0) != 0) {
            do {
                M2C_FIELD(arg0, u8 *, 0x46) = (u8) (M2C_FIELD(arg0, u8 *, 0x46) + 1);
            } while (sub_08052C88(&sp0) != 0);
        }
        sub_080543B0(M2C_FIELD(arg0, u8 *, 0x46));
    }
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x34));
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        sub_080641CC(arg0);
    }
    if ((M2C_FIELD(arg0, u8 *, 0x48) != 0) && ((sub_0800F2AC() << 0x18) != 0)) {
        M2C_FIELD(arg0, u8 *, 0x48) = 0U;
        sub_080534A0(5);
        sub_0800F550(0xC5, &sub_08021C18, arg0, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x40) = sub_08052BB4(arg0 + 0xC);
    return M2C_FIELD(arg0, u8 *, 0x4B);
}
