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

s32 sub_08008900(u16, s32);                         /* extern */
u16 sub_08063D78(s32, s32);                         /* extern */

u16 sub_0801C534(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    void *sp4;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;
    u16 temp_r4;
    u32 var_r9;
    u8 *var_r6;
    void *var_r5;

    sp4 = arg1;
    sp0 = arg2;
    if (M2C_FIELD(arg0, u16 *, 0x190) != 1) {
        goto block_34;
    }
    var_r9 = 0;
    var_r5 = arg0 + 0xC;
    var_r6 = arg0 + 0x42;
loop_4:
    if (*var_r6 == 1) {
        temp_r3 = arg3 + 0x600;
        temp_r2 = M2C_FIELD(sp4, s32 *, 8);
        temp_r0 = M2C_FIELD(var_r5, s32 *, 0);
        temp_r1 = temp_r2 - temp_r0;
        if (temp_r1 >= 0) {
            if (temp_r1 <= temp_r3) {
                goto block_9;
            }
            goto block_33;
        }
        if ((s32) (temp_r0 - temp_r2) <= temp_r3) {
block_9:
            temp_r3_2 = M2C_FIELD(sp4, s32 *, 0) - M2C_FIELD(var_r5, s32 *, 0x2C);
            temp_r1_2 = M2C_FIELD(sp4, s32 *, 4) - M2C_FIELD(var_r5, s32 *, 0x30);
            var_r2 = temp_r3_2;
            if (temp_r3_2 < 0) {
                var_r2 = 0 - temp_r3_2;
            }
            var_r0 = temp_r1_2;
            if (temp_r1_2 < 0) {
                var_r0 = 0 - temp_r1_2;
            }
            if (var_r2 > var_r0) {
                var_r2_2 = temp_r3_2;
                if (temp_r3_2 < 0) {
                    var_r2_2 = 0 - temp_r3_2;
                }
                var_r0_2 = temp_r1_2;
                if (temp_r1_2 < 0) {
                    var_r0_2 = 0 - temp_r1_2;
                }
            } else {
                var_r2_2 = temp_r1_2;
                if (temp_r1_2 < 0) {
                    var_r2_2 = 0 - temp_r1_2;
                }
                var_r0_2 = temp_r3_2;
                if (temp_r3_2 < 0) {
                    var_r0_2 = 0 - temp_r3_2;
                }
            }
            if (var_r0_2 < 0) {
                var_r0_2 += 3;
            }
            var_r2_3 = (var_r2_2 + (var_r0_2 >> 2)) - M2C_FIELD(var_r5, s32 *, 0x14);
            if (var_r2_3 < 0) {
                var_r2_3 = 0 - var_r2_3;
            }
            if (var_r2_3 < (s32) (sp0 + 0x600)) {
                temp_r4 = sub_08063D78((s32) (temp_r3_2 << 0xE) >> 0x10, (s32) (temp_r1_2 << 0xE) >> 0x10);
                if (sub_08008900(temp_r4, M2C_FIELD(var_r5, s32 *, 0x10)) < 0) {
                    var_r0_3 = 0 - sub_08008900(temp_r4, M2C_FIELD(var_r5, s32 *, 0x10));
                } else {
                    var_r0_3 = sub_08008900(temp_r4, M2C_FIELD(var_r5, s32 *, 0x10));
                }
                var_r2_4 = 0x1800;
                if ((s32) M2C_FIELD(var_r5, s32 *, 0x14) > 0x200) {
                    var_r2_4 = 0xA00;
                }
                if (var_r0_3 >= var_r2_4) {
                    goto block_33;
                }
                return M2C_FIELD(arg0, u16 *, 0x18E);
            }
            goto block_33;
        }
        goto block_33;
    }
block_33:
    var_r5 += 0x44;
    var_r6 += 0x44;
    var_r9 += 1;
    if (var_r9 > 4U) {
block_34:
        return 0U;
    }
    goto loop_4;
}
