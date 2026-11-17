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

M2C_UNK sub_08003DA8(s32, s32);                     /* extern */
M2C_UNK sub_08004478(s32, s32);                     /* extern */
s32 sub_08004520(s32);                              /* extern */
M2C_UNK sub_08050228(s32, void *, s32);             /* extern */
M2C_UNK sub_08050274(s32, void *, s32 *, s32);      /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_0805209C(void *, s32);                  /* extern */

void sub_08031ED4(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 temp_r0_2;
    s32 temp_r4;
    s8 temp_r0;
    void *temp_r5;

    if (M2C_FIELD(arg0, u8 *, 0x4B) != 0) {
        temp_r5 = arg0 + 0xC;
        temp_r0 = (s8) M2C_FIELD(arg0, u8 *, 0x4C);
        switch (temp_r0) {                          /* irregular */
        case 0:
            sub_08050228(M2C_FIELD(arg0, s32 *, 0x24), temp_r5, 0);
            break;
        case 1:
            sp0 = M2C_FIELD(arg0, s32 *, 0xC) + 0xA00;
            sp4 = M2C_FIELD(temp_r5, s32 *, 4) + 0xA00;
            sp8 = M2C_FIELD(temp_r5, s32 *, 8) + 0x100;
            sub_08050274(M2C_FIELD(arg0, s32 *, 0x24), temp_r5, &sp0, 0);
            break;
        case 2:
            sp0 = M2C_FIELD(arg0, s32 *, 0xC) + 0xFFFFF600;
            sp4 = M2C_FIELD(temp_r5, s32 *, 4) + 0xFFFFF600;
            sp8 = M2C_FIELD(temp_r5, s32 *, 8) + 0x100;
            sub_08050274(M2C_FIELD(arg0, s32 *, 0x24), temp_r5, &sp0, 0);
            break;
        }
        temp_r0_2 = sub_080502E8(temp_r5);
        sub_08003DA8(M2C_FIELD(arg0, s32 *, 0x28), (s32) (M2C_FIELD(temp_r5, s32 *, 8) - temp_r0_2) >> 0xD);
        sp8 = temp_r0_2;
        spC = M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(&spC, s32 *, 4) = (s32) M2C_FIELD(temp_r5, s32 *, 4);
        M2C_FIELD(&spC, s32 *, 8) = temp_r0_2;
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x28);
        sub_08004478(temp_r4, sub_08004520(M2C_FIELD(arg0, s32 *, 0x24)));
        sub_0805209C(arg0 + 0x30, 0);
    }
}
