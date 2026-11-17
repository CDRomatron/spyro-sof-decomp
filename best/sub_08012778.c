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

M2C_UNK sub_08008638(M2C_UNK *, void *, void *);    /* extern */
M2C_UNK sub_08008810(s32, s32, M2C_UNK *);          /* extern */
s32 sub_08008900(s32, s32);                         /* extern */
M2C_UNK sub_08012B18(void *);                       /* extern */
s32 sub_080502E8(void *);                           /* extern */
s32 sub_080505C4(s32, s32, s32 *, s32);             /* extern */
s32 sub_080510C0(s32, s32, s32 *, s32, s32);        /* extern */
u8 sub_080529E8(s32, s32);                          /* extern */
s32 sub_08052B40(s32);                              /* extern */

void sub_08012778(void *arg0) {
    M2C_UNK sp8;
    s32 sp14;
    s32 temp_r0;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_r1;
    s32 var_r2;
    u8 temp_r0_2;
    void *temp_r4_2;

    sp14 = 0x4C;
    temp_r0 = arg0 + 0x24;
    temp_r0_2 = sub_080529E8(temp_r0, 0x3200);
    if (temp_r0_2 == 0) {
        M2C_FIELD(arg0, u8 *, 0x97) = temp_r0_2;
    } else {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C);
        temp_r0_3 = sub_08008900(temp_r4, sub_08052B40(temp_r0));
        var_r1 = temp_r0_3;
        if (temp_r0_3 < 0) {
            var_r1 = 0 - temp_r0_3;
        }
        var_r2 = 0x1B3;
        if (var_r1 > 0x1B3) {
            if (temp_r0_3 < 0) {
                var_r2 = 0xFFFFFE4D;
            }
            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + var_r2);
            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (u16) M2C_FIELD(arg0, s32 *, 0x3C);
        }
        temp_r7 = sub_080505C4(temp_r0, M2C_FIELD(arg0, s32 *, 0x3C), &sp14, 0x800);
        temp_r7_2 = temp_r7 | sub_080510C0(temp_r0, M2C_FIELD(arg0, s32 *, 0x3C), &sp14, 0x500, 0x800);
        sub_08008810(M2C_FIELD(arg0, s32 *, 0x3C), sp14, &sp8);
        temp_r4_2 = arg0 + 0x24;
        sub_08008638(&sp8, temp_r4_2, temp_r4_2);
        M2C_FIELD(arg0, s32 *, 0x2C) = sub_080502E8(temp_r4_2);
        if (temp_r7_2 != 0) {
            if (1 & temp_r7_2) {
                M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (u16) (0x8000 - M2C_FIELD(arg0, s32 *, 0x3C));
            }
            if (temp_r7_2 & 2) {
                M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (u16) (0 - M2C_FIELD(arg0, s32 *, 0x3C));
            }
        }
    }
    sub_08012B18(arg0);
}
