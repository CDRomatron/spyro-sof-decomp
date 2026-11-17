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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_0800BB40(s32, s16, s16, s32);           /* extern */
M2C_UNK sub_0800D9EC(s32, void *);                  /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
u32 sub_08052B14(void *);                           /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_0802953C(void *arg0) {
    s16 temp_r2;
    u32 temp_r0;
    void *temp_r5;

    temp_r5 = arg0 + 0xC;
    sub_0800D9EC(arg0 + 0x24, temp_r5);
    if ((sub_08052B14(temp_r5) <= 0xFFFFFU) && (sub_0805399C() != 5)) {
        sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8), 1, 0x400);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x4C), 0x120007);
        M2C_FIELD(arg0, s8 *, 0x61) = 0;
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x5C);
    if (temp_r0 > 0x80U) {
        M2C_FIELD(arg0, u32 *, 0x5C) = (u32) (temp_r0 - 8);
    }
    temp_r2 = (s16) M2C_FIELD(arg0, u32 *, 0x5C);
    sub_0800BB40(M2C_FIELD(arg0, s32 *, 0x4C), temp_r2, temp_r2, 0);
}
