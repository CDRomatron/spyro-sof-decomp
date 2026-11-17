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
M2C_UNK sub_0800781C(s32, s32);                     /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
void *sub_080529D4();                               /* extern */

void sub_080210AC(void *arg0) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 var_r0;
    u8 temp_r0_4;
    u8 temp_r0_5;
    u8 temp_r0_6;
    u8 temp_r0_7;
    u8 temp_r6;
    void *temp_r0;

    temp_r0 = sub_080529D4();
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_r1 = M2C_FIELD(temp_r0, s32 *, 0xC);
    temp_r2 = temp_r0_2 - temp_r1;
    if (temp_r2 >= 0) {
        if (temp_r2 > 0x1FFF) {
            goto block_19;
        }
        goto block_4;
    }
    if ((s32) (temp_r1 - temp_r0_2) <= 0x1FFF) {
block_4:
        temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x28);
        temp_r0_3 = M2C_FIELD(temp_r0, s32 *, 0x10);
        temp_r2_2 = temp_r1_2 - temp_r0_3;
        if (temp_r2_2 >= 0) {
            if (temp_r2_2 > 0x1FFF) {
                goto block_19;
            }
            goto block_8;
        }
        if ((s32) (temp_r0_3 - temp_r1_2) <= 0x1FFF) {
block_8:
            temp_r0_4 = M2C_FIELD(arg0, u8 *, 0x5E);
            switch (temp_r0_4) {                    /* irregular */
            case 0:
                var_r0 = 6;
block_16:
                sub_0800781C(var_r0, 1);
                break;
            case 1:
                var_r0 = 0x16;
                goto block_16;
            case 2:
                sub_0800781C(0x17, 1);
                break;
            }
            sub_0800781C(0x66, 0);
            sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x30), 0x27);
            M2C_FIELD(arg0, u8 *, 0x60) = 0U;
            return;
        }
        goto block_19;
    }
block_19:
    temp_r6 = M2C_FIELD(arg0, u8 *, 0x5C);
    if (temp_r6 == 0) {
        M2C_FIELD(arg0, u8 *, 0x5C) = 0x3CU;
        temp_r0_5 = M2C_FIELD(arg0, u8 *, 0x59);
        if (temp_r0_5 == 0) {
            M2C_FIELD(arg0, u8 *, 0x59) = 9U;
            temp_r0_6 = M2C_FIELD(arg0, u8 *, 0x58);
            if (temp_r0_6 == 0) {
                M2C_FIELD(arg0, u8 *, 0x58) = 5U;
                temp_r0_7 = M2C_FIELD(arg0, u8 *, 0x5A);
                if (temp_r0_7 == 0) {
                    M2C_FIELD(arg0, u8 *, 0x58) = temp_r6;
                    M2C_FIELD(arg0, u8 *, 0x59) = temp_r6;
                    sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x30), 0x26);
                    M2C_FIELD(arg0, u8 *, 0x60) = temp_r6;
                    return;
                }
                M2C_FIELD(arg0, u8 *, 0x5A) = (u8) (temp_r0_7 - 1);
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x58) = (u8) (temp_r0_6 - 1);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x59) = (u8) (temp_r0_5 - 1);
        return;
    }
    if (temp_r6 == 0x3C) {
        sub_08003220(0x08170DA8);
    }
    M2C_FIELD(arg0, u8 *, 0x5C) = (u8) (M2C_FIELD(arg0, u8 *, 0x5C) - 1);
}
