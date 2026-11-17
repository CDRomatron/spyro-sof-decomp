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

M2C_UNK sub_08002564(s32);                          /* extern */
M2C_UNK sub_080025B4(s32);                          /* extern */
M2C_UNK sub_08002640(s32, u16, u16);                /* extern */
M2C_UNK sub_0800DC54();                             /* extern */
M2C_UNK sub_0800DCE0(u16);                          /* extern */
u16 sub_0800DE84(M2C_UNK *, void *);                /* extern */
M2C_UNK sub_0800DF2C(u16);                          /* extern */
M2C_UNK sub_0800E140(s32);                          /* extern */
M2C_UNK sub_080641D4(s32, u8, s32, s32);            /* extern */

void sub_0800E2EC(void) {
    M2C_UNK sp0;
    s32 *sp4;
    s32 sp8;
    s32 var_r8;
    u16 temp_r0;
    u16 temp_r4;
    u16 temp_r4_2;
    u8 temp_r3;
    u8 temp_r4_3;
    u8 temp_r7;
    void *temp_r5;
    void *temp_r6;

    temp_r5 = *(void **)0x030008CC;
    var_r8 = 0;
    M2C_FIELD(temp_r5, s8 *, 0x338) = 0;
    sp4 = temp_r5 + 0x2C0;
loop_1:
    temp_r3 = M2C_FIELD(temp_r5, u8 *, 0x33F);
    if (temp_r3 != 0) {
        M2C_FIELD(temp_r5, u8 *, 0x340) = 0U;
        return;
    }
    temp_r6 = &sp0 + 2;
    sp8 = (s32) temp_r3;
    temp_r4 = sub_0800DE84(&sp0, temp_r6);
    temp_r7 = M2C_FIELD(temp_r5, u8 *, 0x33A);
    if (temp_r7 != 0) {
        if (M2C_FIELD(temp_r5, u8 *, 0x337) != 0) {
            M2C_FIELD(temp_r5, u8 *, 0x337) = (u8) sp8;
            M2C_FIELD(temp_r5, s16 *, 0x32A) = 2;
        } else {
            M2C_FIELD(temp_r5, s16 *, 0x32A) = 1;
        }
        sub_0800E140(6);
        return;
    }
    if (temp_r4 & 0x800) {
        M2C_FIELD(temp_r5, u8 *, 0x33A) = 1U;
    }
    temp_r0 = M2C_FIELD(&sp0, u16 *, 0);
    switch (temp_r0) {                              /* irregular */
    case 3:
        sub_080641D4(3, M2C_FIELD(temp_r5, u8 *, 0x339), M2C_FIELD(temp_r5, s32 *, 0x2E0), M2C_FIELD(temp_r5, s32 *, 0x2E4));
        M2C_FIELD(temp_r5, u8 *, 0x340) = temp_r7;
        return;
    case 2:
        M2C_FIELD(temp_r5, u8 *, 0x33D) = temp_r7;
        M2C_FIELD(temp_r5, s8 *, 0x338) = 1;
        /* fallthrough */
    case 1:
        M2C_FIELD(temp_r5, s16 *, 0x30E) = 0;
        sub_0800DF2C(M2C_FIELD(&sp0, u16 *, 2));
        if (!(temp_r4 & 0x1000)) {
            do {
                temp_r4_2 = sub_0800DE84(&sp0, temp_r6);
                sub_0800DF2C(M2C_FIELD(&sp0, u16 *, 2));
            } while (!(temp_r4_2 & 0x1000));
        }
        sub_08002564(*sp4);
        sub_080025B4(*sp4);
        M2C_FIELD(temp_r5, s16 *, 0x312) = 0;
        M2C_FIELD(temp_r5, u16 *, 0x314) = 0U;
        M2C_FIELD(temp_r5, s16 *, 0x31A) = 3;
        M2C_FIELD(temp_r5, void **, 0x2B4) = (void *) (temp_r5 + 0xB2);
        sub_08002640(*sp4, (u16) (M2C_FIELD(temp_r5, u16 *, 0x316) * 8), (u16) (M2C_FIELD(temp_r5, u16 *, 0x314) * 0x10));
        sub_0800E140(3);
        M2C_FIELD(temp_r5, u8 *, 0x340) = 1U;
        return;
    case 0:
        M2C_FIELD(temp_r5, u16 *, 0x2FA) = (u16) M2C_FIELD(&sp0, u16 *, 2);
        M2C_FIELD(temp_r5, u16 *, 0x316) = 6U;
        temp_r4_3 = M2C_FIELD(temp_r5, u8 *, 0x336);
        if (temp_r4_3 != 0) {
            sub_0800E140(8);
        } else {
            sub_0800DCE0(M2C_FIELD(temp_r5, u16 *, 0x2FA));
            sub_0800DC54();
            M2C_FIELD(temp_r5, s16 *, 0x31E) = (s16) temp_r4_3;
            sub_0800E140(1);
            M2C_FIELD(temp_r5, s16 *, 0x2FC) = (s16) temp_r4_3;
            M2C_FIELD(temp_r5, u8 *, 0x336) = 1U;
        }
        M2C_FIELD(temp_r5, u8 *, 0x340) = 1U;
        var_r8 = 1;
        /* fallthrough */
    default:
        if (var_r8 == 0) {
            goto loop_1;
        }
        return;
    }
}
