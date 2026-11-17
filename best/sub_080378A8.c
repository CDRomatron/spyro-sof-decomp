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

M2C_UNK sub_08008810(s32, s32, M2C_UNK *);          /* extern */
s32 sub_0800897C();                                 /* extern */
s32 sub_0800FCA4(s32, s32, void *);                 /* extern */
M2C_UNK sub_0800FDB4(void *, s32, M2C_UNK *);       /* extern */

void sub_080378A8(void *arg0) {
    M2C_UNK sp0;
    s32 sp4;
    M2C_UNK spC;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 temp_r7_3;
    s32 temp_r7_4;
    void *temp_r0;
    void *temp_r6;

    temp_r0 = arg0 + 0x24;
    M2C_FIELD(&sp0, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(&sp0, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    M2C_FIELD(&sp0, s32 *, 8) = (s32) M2C_FIELD(temp_r0, s32 *, 8);
    sp4 += 0x1000;
    temp_r6 = arg0 + 0x24;
    sub_0800FCA4(0x18E, 1, temp_r6);
    temp_r7 = sub_0800FCA4(0x190, 1, temp_r6);
    sub_08008810(0x6000, 0x100, &spC);
    M2C_FIELD(&spC, s32 *, 8) = (s32) (((sub_0800897C() & 3) << 8) + 0x600);
    sub_0800FDB4(arg0, temp_r7, &spC);
    temp_r7_2 = sub_0800FCA4(0x191, 1, temp_r6);
    sub_08008810(0xFFFFE000, 0x100, &spC);
    M2C_FIELD(&spC, s32 *, 8) = (s32) (((sub_0800897C() & 3) << 8) + 0x600);
    sub_0800FDB4(arg0, temp_r7_2, &spC);
    temp_r7_3 = sub_0800FCA4(0x192, 1, temp_r6);
    sub_08008810(0x4000, 0x100, &spC);
    M2C_FIELD(&spC, s32 *, 8) = (s32) (0xFFFFF800 - ((sub_0800897C() & 3) << 8));
    sub_0800FDB4(arg0, temp_r7_3, &spC);
    temp_r7_4 = sub_0800FCA4(0x193, 1, temp_r6);
    sub_08008810(0, 0x100, &spC);
    M2C_FIELD(&spC, s32 *, 8) = (s32) (0xFFFFF800 - ((sub_0800897C() & 3) << 8));
    sub_0800FDB4(arg0, temp_r7_4, &spC);
}
