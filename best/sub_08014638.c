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
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_08014490(void *);                       /* extern */
M2C_UNK sub_08050098(s32, M2C_UNK *, void *);       /* extern */
s32 sub_08052140(void *, s32);                      /* extern */
M2C_UNK sub_080522C8(void *);                       /* extern */
s32 sub_08052BB4(void *);                           /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
u8 sub_0805399C();                                  /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */
extern M2C_UNK sub_08014260;

s32 sub_08014638(void *arg0) {
    s32 temp_r4;
    void *temp_r6;

    temp_r6 = arg0 + 0xC;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0xA8));
    if (M2C_FIELD(arg0, s32 *, 0xB0) != 0) {
        sub_080641CC(arg0);
    }
    if ((sub_08052140(temp_r6, 0x800) << 0x18) != 0) {
        sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r6, s32 *, 4), M2C_FIELD(temp_r6, s32 *, 8), 0, 0x800);
    }
    if ((M2C_FIELD(arg0, u8 *, 0xA3) != 0) && ((sub_0800F2AC() << 0x18) != 0)) {
        M2C_FIELD(arg0, u8 *, 0xA3) = 0U;
        temp_r4 = M2C_FIELD((arg0 + 0x34), s32 *, 0x60) + 0xC;
        M2C_FIELD(arg0, s8 *, 0xA4) = 0;
        sub_080534A0(5);
        M2C_FIELD(arg0, s8 *, 0xA0) = 2;
        sub_08050098(temp_r4, &sub_08014260, arg0);
    }
    if ((sub_0805399C() == 3) || (M2C_FIELD(arg0, u8 *, 0xA1) == 1)) {
        sub_08014490(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0xB4) = sub_08052BB4(temp_r6);
    sub_080522C8(arg0);
    return 1;
}
