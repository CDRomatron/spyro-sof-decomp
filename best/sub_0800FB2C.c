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

s32 *sub_08002B34(u16, s32);                        /* extern */
void *sub_080641D4(u16, s32, s32 *, s32);           /* extern */

void *sub_0800FB2C(u16 arg0, void *arg1, u16 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s16 var_r1_2;
    s16 var_r4_2;
    s32 *temp_r10;
    s32 *temp_r12;
    s32 *temp_r3;
    s32 *temp_r3_2;
    s32 *temp_r5;
    s32 *var_r2;
    s32 *var_r3_2;
    s32 temp_r1;
    s32 var_r1;
    s32 var_r3;
    u16 temp_r7;
    u16 var_r0;
    void *var_r2_2;
    void *var_r2_3;
    void *var_r4;
    void *var_r8;

    temp_r7 = arg2;
    var_r8 = NULL;
    temp_r1 = arg0 * 8;
    spC = temp_r1;
    var_r4 = temp_r1 + 0x08175708;
    temp_r3 = M2C_FIELD(var_r4, s32 **, 4);
    if (temp_r3 != NULL) {
        if (temp_r7 == 0) {
            sp0 = M2C_FIELD(arg1, u16 *, 2) << 8;
            sp4 = M2C_FIELD(arg1, u16 *, 4) << 8;
            sp8 = M2C_FIELD(arg1, u16 *, 6) << 8;
            var_r0 = arg0;
            var_r3 = *temp_r3;
            var_r1 = 1;
            var_r2 = &sp0;
            goto block_12;
        }
        temp_r5 = sub_08002B34(0x1CU, 1);
        temp_r10 = sub_08002B34(temp_r7 * 0xC, 1);
        temp_r12 = sub_08002B34(temp_r7, 1);
        M2C_FIELD(temp_r5, s32 *, 0) = M2C_FIELD(arg1, u16 *, 2) << 8;
        M2C_FIELD(temp_r5, s32 *, 4) = (s32) (M2C_FIELD(arg1, u16 *, 4) << 8);
        M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(arg1, u16 *, 6) << 8);
        M2C_FIELD(temp_r5, s32 **, 0xC) = temp_r10;
        M2C_FIELD(temp_r5, s32 **, 0x10) = temp_r12;
        M2C_FIELD(temp_r5, u16 *, 0x14) = temp_r7;
        M2C_FIELD(temp_r5, s16 *, 0x16) = 0;
        var_r1_2 = 1;
        if (0x20 & M2C_FIELD(arg1, u16 *, 0)) {
            var_r1_2 = -1;
        }
        M2C_FIELD(temp_r5, s16 *, 0x18) = var_r1_2;
        var_r4_2 = 0;
        sp10 = spC;
        if ((s32) temp_r7 > 0) {
            var_r3_2 = temp_r10;
            var_r2_2 = arg1;
            do {
                *(temp_r12 + var_r4_2) = (s8) M2C_FIELD(var_r2_2, u16 *, 0);
                M2C_FIELD(var_r3_2, s32 *, 0) = M2C_FIELD(var_r2_2, u16 *, 0xA) << 8;
                M2C_FIELD(var_r3_2, s32 *, 4) = (s32) (M2C_FIELD(var_r2_2, u16 *, 0xC) << 8);
                M2C_FIELD(var_r3_2, s32 *, 8) = (s32) (M2C_FIELD(var_r2_2, u16 *, 0xE) << 8);
                if (0x40 & M2C_FIELD(var_r2_2, u16 *, 0x10)) {
                    M2C_FIELD(temp_r5, s16 *, 0x16) = var_r4_2;
                }
                var_r3_2 += 0xC;
                var_r2_2 += 8;
                var_r4_2 += 1;
            } while ((s32) var_r4_2 < (s32) temp_r7);
        }
        var_r2_3 = NULL;
        var_r4 = sp10 + 0x08175708;
        temp_r3_2 = M2C_FIELD(var_r4, s32 **, 4);
        if (temp_r3_2 != NULL) {
            var_r0 = arg0;
            var_r3 = *temp_r3_2;
            var_r1 = 2;
            var_r2 = temp_r5;
block_12:
            var_r2_3 = sub_080641D4(var_r0, var_r1, var_r2, var_r3);
        }
        if (var_r2_3 != NULL) {
            M2C_FIELD(var_r2_3, s32 *, 8) = (s32) M2C_FIELD(var_r4, s32 *, 4);
            M2C_FIELD(var_r2_3, u16 *, 0x20) = arg0;
            M2C_FIELD(var_r2_3, u16 *, 0x22) = (u16) (M2C_FIELD(var_r2_3, u16 *, 0x22) | M2C_FIELD(var_r4, u16 *, 0));
        }
        var_r8 = var_r2_3;
    }
    if (var_r8 != NULL) {
        M2C_FIELD(var_r8, s32 *, 8) = (s32) M2C_FIELD(((arg0 * 8) + 0x08175708), s32 *, 4);
        M2C_FIELD(var_r8, u16 *, 0x20) = arg0;
    }
    return var_r8;
}
