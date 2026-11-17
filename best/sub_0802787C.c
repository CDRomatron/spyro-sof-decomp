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

s32 sub_0800FCA4(s32, s32, M2C_UNK *);              /* extern */
M2C_UNK sub_0800FD8C(void *, s32, s32);             /* extern */
s32 sub_08052BB4(void *);                           /* extern */

void sub_0802787C(void *arg0) {
    M2C_UNK spC;
    s32 temp_r0_2;
    s32 var_r4;
    u8 var_r5;
    void *temp_r0;

    temp_r0 = arg0 + 0xC;
    M2C_FIELD(&spC, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(&spC, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    M2C_FIELD(&spC, s32 *, 8) = (s32) M2C_FIELD(temp_r0, s32 *, 8);
    M2C_FIELD(&spC, s32 *, 8) = (s32) (M2C_FIELD(&spC, s32 *, 8) + 0x2C00);
    var_r4 = 0;
    var_r5 = 0;
    do {
        sub_0800FD8C(arg0, sub_0800FCA4(0x182, 1, &spC), var_r4);
        var_r4 += 0x4000;
        var_r5 += 1;
    } while ((u32) var_r5 <= 3U);
    M2C_FIELD(arg0, u8 *, 0x5C) = 4U;
    temp_r0_2 = sub_08052BB4(arg0 + 0xC);
    if (0x2000 & temp_r0_2) {
        sub_0800FD8C(arg0, sub_0800FCA4(0x182, 1, &spC), temp_r0_2 & 0xFFFFE000);
        M2C_FIELD(arg0, u8 *, 0x5C) = (u8) (M2C_FIELD(arg0, u8 *, 0x5C) + 1);
    }
}
