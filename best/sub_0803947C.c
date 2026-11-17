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

M2C_UNK sub_08003220(s32, s32);                     /* extern */
M2C_UNK sub_08008620(s32 *, s32 *, s32 *);          /* extern */
M2C_UNK sub_08008658(s32 *, s32 *, s32 *);          /* extern */
M2C_UNK sub_08008810(s32, s32, s32 *);              /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_080395E8(s32 *, s32 *, void *);         /* extern */
s32 sub_080502E8(s32 *);                            /* extern */
s32 sub_080529E8(s32 *, s32);                       /* extern */
s32 sub_08052BB4(s32 *);                            /* extern */
s32 sub_08052C28(s32 *, s32 *);                     /* extern */

void sub_0803947C(void *arg0) {
    s32 sp0;
    s32 sp8;
    s32 spC;
    s32 *temp_r0;
    s32 *var_r4;
    s32 temp_r0_2;
    s32 temp_r0_5;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    void *temp_r0_3;
    void *temp_r0_4;

    temp_r0 = M2C_FIELD(arg0, s32 **, 0xA0);
    if (M2C_FIELD(*(void **)0x03001634, s32 *, 0x2C) == 0) {
        var_r4 = arg0 + 0x24;
        sub_08008810(sub_08052BB4(var_r4), 0xD00, &sp0);
        sub_08008658(M2C_FIELD(*(void **)0x030026C0, void **, 0x51C) + 0xC, &sp0, &sp0);
        temp_r0_2 = sub_080502E8(&sp0);
        sp8 = temp_r0_2;
        var_r1 = 0xFFF;
        if (temp_r0_2 <= 0xFFF) {
            temp_r0_3 = M2C_FIELD(*(void **)0x030026C0, void **, 0x51C);
            temp_r0_4 = temp_r0_3 + 0xC;
            M2C_FIELD(&sp0, s32 *, 0) = M2C_FIELD(temp_r0_3, s32 *, 0xC);
            M2C_FIELD(&sp0, s32 *, 4) = (s32) M2C_FIELD(temp_r0_4, s32 *, 4);
            M2C_FIELD(&sp0, s32 *, 8) = (s32) M2C_FIELD(temp_r0_4, s32 *, 8);
            var_r1 = &sp0 + 0xC;
        }
        sub_08003220(0x08170C3C, var_r1);
    } else {
        sub_08008658(temp_r0, M2C_FIELD(temp_r0, s32 *, 0xC) + (M2C_FIELD(arg0, u8 *, 0xAC) * 0xC), &spC);
        var_r0 = spC;
        if (var_r0 < 0) {
            var_r0 = 0 - var_r0;
        }
        temp_r2 = M2C_FIELD(&spC, s32 *, 4);
        var_r1_2 = temp_r2;
        if (temp_r2 < 0) {
            var_r1_2 = 0 - temp_r2;
        }
        if (var_r0 > var_r1_2) {
            var_r1_3 = spC;
            if (var_r1_3 < 0) {
                var_r1_3 = 0 - var_r1_3;
            }
            var_r0_2 = temp_r2;
            if (temp_r2 < 0) {
                var_r0_2 = 0 - temp_r2;
            }
        } else {
            var_r1_3 = temp_r2;
            if (var_r1_3 < 0) {
                var_r1_3 = 0 - var_r1_3;
            }
            var_r0_2 = spC;
            if (var_r0_2 < 0) {
                var_r0_2 = 0 - var_r0_2;
            }
        }
        if (var_r0_2 < 0) {
            var_r0_2 += 3;
        }
        temp_r5 = sub_08052BB4(M2C_FIELD(arg0, s32 **, 0xA0));
        var_r4 = (arg0 + 0xA0) - 0x7C;
        temp_r0_5 = sub_08052C28(M2C_FIELD(arg0, s32 **, 0xA0), var_r4);
        temp_r1 = temp_r5 - temp_r0_5;
        if (temp_r1 >= 0) {
            if (temp_r1 <= 0x2000) {
                goto block_25;
            }
            goto block_23;
        }
        if ((s32) (temp_r0_5 - temp_r5) > 0x2000) {
block_23:
            if ((sub_080529E8(var_r4, 0x2000) << 0x18) == 0) {
                var_r0_3 = temp_r5;
            } else {
                goto block_25;
            }
        } else {
block_25:
            var_r0_3 = 0xFFFF & sub_0800897C();
        }
        sub_08008810(var_r0_3, var_r1_3 + (var_r0_2 >> 2), &sp0);
        sub_08008620(&sp0, temp_r0, &sp0);
        sp8 = sub_080502E8(&sp0);
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = sub_08052C28(var_r4, &sp0);
    sub_080395E8(var_r4, &sp0, arg0 + 0x60);
}
