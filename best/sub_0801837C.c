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
s32 sub_0800F2AC();                                 /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, void *, s32);  /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
s32 sub_08052140(void *, s32);                      /* extern */
M2C_UNK sub_080522C8(void *);                       /* extern */
s32 sub_08052BB4(void *);                           /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
M2C_UNK sub_080545E8(s32);                          /* extern */
extern M2C_UNK sub_08018538;

u8 sub_0801837C(void *arg0) {
    void *temp_r5;

    temp_r5 = arg0 + 0xC;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x34));
    if ((M2C_FIELD(arg0, u8 *, 0x41) == 0) && ((sub_08052140(temp_r5, 0x1000) << 0x18) != 0) && ((sub_0800F2AC() << 0x18) != 0)) {
        M2C_FIELD(arg0, u8 *, 0x41) = 1U;
        sub_080534A0(5);
        sub_0800F550(0xDF, &sub_08018538, arg0, 1);
        sub_080545E8(0);
        sub_08003220(0x08170BB0);
    }
    if ((sub_08052140(temp_r5, 0x800) << 0x18) != 0) {
        sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8), 0, 0x800);
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = sub_08052BB4(temp_r5);
    sub_080522C8(arg0);
    return M2C_FIELD(arg0, u8 *, 0x42);
}
