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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_0800781C(s32, s32);                     /* extern */
s32 sub_0800F2AC();                                 /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, void *, s32);  /* extern */
s32 sub_08052140(void *, s32);                      /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
M2C_UNK sub_080545E8(s32);                          /* extern */
extern M2C_UNK sub_08021888;

u8 sub_0802180C(void *arg0) {
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x24));
    if ((sub_08052140(arg0 + 0xC, 0xC00) << 0x18) != 0) {
        if ((sub_0800F2AC() << 0x18) != 0) {
            sub_08003220(0x08170D54);
            sub_0800781C(0x6A, 1);
            sub_080534A0(5);
            sub_0800F550(0xC0, &sub_08021888, arg0, 1);
            M2C_FIELD(arg0, u8 *, 0x2D) = 0U;
        }
        sub_080545E8(0);
    }
    return M2C_FIELD(arg0, u8 *, 0x2D);
}
