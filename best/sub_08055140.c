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

s32 sub_08063D80(s32, s32);                         /* extern */

void sub_08055140(void *arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 temp_r2;
    s32 temp_r2_3;
    s32 temp_r6;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    s32 var_r5_2;
    s32 var_r6;
    s32 var_r6_2;
    u16 *temp_r2_2;
    u16 *temp_r2_4;

    sp0 = arg1;
    sp4 = arg2;
    temp_r6 = (s32) (arg2 - M2C_FIELD(arg0, s32 *, 0x30)) >> 6;
    var_r4 = sub_08063D80(M2C_FIELD(arg0, s32 *, 0x14) * ((s32) (arg1 - M2C_FIELD(arg0, s32 *, 0x2C)) >> 6), 0x100);
    var_r6 = sub_08063D80(M2C_FIELD(arg0, s32 *, 0x14) * temp_r6, 0x100);
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    if (var_r6 < 0) {
        var_r6 = 0;
    }
    var_r5 = M2C_FIELD(arg0, s32 *, 0x20) + 0x100;
    spC = M2C_FIELD(arg0, s32 *, 0x2C);
    sp10 = M2C_FIELD(arg0, s32 *, 0x30);
    sp8 = M2C_FIELD(arg0, s32 *, 0x18);
    if (var_r5 > 0) {
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x1C);
        do {
            var_r3 = temp_r2 + 0x100;
            if (var_r3 > 0) {
                temp_r2_2 = ((var_r6 >> 8) * 2) + M2C_FIELD(arg0, s32 *, 0x38);
                do {
                    *temp_r2_2 |= 1 << (var_r4 >> 8);
                    if (var_r3 <= 0x1FF) {
                        if (var_r3 > 0x100) {
                            var_r4 = var_r4 + 0xFFFFFF00 + var_r3;
                        }
                    } else {
                        var_r4 += 0x100;
                    }
                    var_r3 += 0xFFFFFF00;
                } while (var_r3 > 0);
            }
            var_r4 -= temp_r2;
            if (var_r5 <= 0x1FF) {
                var_r6 = var_r6 + 0xFFFFFF00 + var_r5;
            } else {
                var_r6 += 0x100;
            }
            var_r5 += 0xFFFFFF00;
        } while (var_r5 > 0);
    }
    var_r4_2 = sub_08063D80(((s32) (sp0 - spC) >> 6) * sp8, 0x100);
    var_r6_2 = sub_08063D80(M2C_FIELD(arg0, s32 *, 0x18) * ((s32) (sp4 - sp10) >> 6), 0x100);
    if (var_r4_2 < 0) {
        var_r4_2 = 0;
    }
    if (var_r6_2 < 0) {
        var_r6_2 = 0;
    }
    var_r5_2 = M2C_FIELD(arg0, s32 *, 0x28) + 0x100;
    if (var_r5_2 > 0) {
        temp_r2_3 = M2C_FIELD(arg0, s32 *, 0x24);
        do {
            var_r3_2 = temp_r2_3 + 0x100;
            if (var_r3_2 > 0) {
                temp_r2_4 = ((var_r6_2 >> 8) * 2) + M2C_FIELD(arg0, s32 *, 0x3C);
                do {
                    *temp_r2_4 |= 1 << (var_r4_2 >> 8);
                    if (var_r3_2 <= 0x1FF) {
                        if (var_r3_2 > 0x100) {
                            var_r4_2 = var_r4_2 + 0xFFFFFF00 + var_r3_2;
                        }
                    } else {
                        var_r4_2 += 0x100;
                    }
                    var_r3_2 += 0xFFFFFF00;
                } while (var_r3_2 > 0);
            }
            var_r4_2 -= temp_r2_3;
            if (var_r5_2 <= 0x1FF) {
                var_r6_2 = var_r6_2 + 0xFFFFFF00 + var_r5_2;
            } else {
                var_r6_2 += 0x100;
            }
            var_r5_2 += 0xFFFFFF00;
        } while (var_r5_2 > 0);
    }
}
