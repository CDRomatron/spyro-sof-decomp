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
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
s32 sub_080502E8(s32 *);                            /* extern */
s32 sub_080510C0(void *, s32, s32 *, s32, s32, s32); /* extern */
s32 sub_08052140(s32 *, s32);                       /* extern */
s32 sub_08052210(s32, void *, s32);                 /* extern */
M2C_UNK sub_080522C8(void *);                       /* extern */
s32 sub_080529D4();                                 /* extern */
u8 sub_0805399C();                                  /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */

u8 sub_08014B14(void *arg0) {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 temp_r0_2;
    s32 temp_r1_2;
    u16 temp_r0;
    u16 temp_r1_3;
    u8 *var_r6;
    void *temp_r1;
    void *temp_r5;

    temp_r5 = arg0 + 0xC;
    sp14 = M2C_FIELD(arg0, s32 *, 0x50);
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x40));
    if (M2C_FIELD(arg0, s32 *, 0x4C) != 0) {
        sub_080641CC(arg0);
    }
    temp_r1 = arg0 + 0x6E;
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x6E);
    if (temp_r0 == 0) {
        var_r6 = arg0 + 0x72;
        if (M2C_FIELD(temp_r1, u8 *, 3) != 0) {

        } else {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x64);
            if (temp_r0_2 != 0) {
                M2C_FIELD(temp_r1, u8 *, 3) = 1U;
                sub_08003C58(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x64));
            } else {
                M2C_FIELD(arg0, s8 *, 0x72) = (s8) temp_r0_2;
            }
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0x6E) = (u16) (temp_r0 - 1);
        if (sub_080510C0(temp_r5, M2C_FIELD(arg0, s32 *, 0x54), &sp14, 0x400, -1, 0x600) != 0) {
            var_r6 = arg0 + 0x72;
            if (M2C_FIELD(arg0, u8 *, 0x70) != 0) {

            } else {
                if (M2C_FIELD(arg0, s32 *, 0x68) != 0) {
                    M2C_FIELD(arg0, u8 *, 0x70) = 1U;
                    goto block_19;
                }
                M2C_FIELD(arg0, s8 *, 0x72) = 0;
            }
        } else {
            sp8 = M2C_FIELD(arg0, s32 *, 0xC);
            spC = M2C_FIELD(temp_r5, s32 *, 4);
            sp10 = sub_080502E8(&sp8);
            temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x48);
            if (temp_r1_2 != 0) {
                var_r6 = arg0 + 0x72;
                if (M2C_FIELD(arg0, u8 *, 0x70) == 0) {
                    if ((sub_08052210(temp_r1_2 + 0xC, temp_r5, 0xC00) << 0x18) != 0) {
                        sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x48), 0x4E);
                        if (M2C_FIELD(arg0, s32 *, 0x68) != 0) {
                            M2C_FIELD(arg0, u8 *, 0x70) = 1U;
block_19:
                            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x68));
                        }
                    } else {
                        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + M2C_FIELD(arg0, s32 *, 0x24));
                        M2C_FIELD(temp_r5, s32 *, 4) = (s32) (M2C_FIELD(temp_r5, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x28));
                    }
                }
            } else if ((sub_08052140(&sp8, 0x600) << 0x18) != 0) {
                var_r6 = arg0 + 0x72;
                if (M2C_FIELD(arg0, u8 *, 0x70) == 0) {
                    if (M2C_FIELD(arg0, s32 *, 0x68) != 0) {
                        M2C_FIELD(arg0, u8 *, 0x70) = 1U;
                        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, s32 *, 0x68));
                    } else {
                        M2C_FIELD(arg0, s8 *, 0x72) = 0;
                    }
                    if (sub_0805399C() == 3) {
                        temp_r1_3 = M2C_FIELD(arg0, u16 *, 0x6C);
                        if ((temp_r1_3 == 0x1C5) || (temp_r1_3 == 0x1F1)) {
                            sub_0800FE28(arg0, sub_080529D4(), 0xC);
                        } else {
                            sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8), 1, 0x600);
                        }
                    }
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + M2C_FIELD(arg0, s32 *, 0x24));
                M2C_FIELD(temp_r5, s32 *, 4) = (s32) (M2C_FIELD(temp_r5, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x28));
                var_r6 = arg0 + 0x72;
            }
        }
    }
    sub_080522C8(arg0);
    return *var_r6;
}
