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

M2C_UNK sub_08062524(void *, u8 *);                 /* extern */

void sub_08063160(void *arg0) {
    s32 var_r0;
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r1;
    u16 temp_r1_2;
    u16 temp_r3;
    u8 *var_r4;
    u8 *var_r4_2;
    u8 temp_r0_4;
    u8 temp_r1_3;
    u8 var_r5;
    u8 var_r5_2;

    temp_r1 = M2C_FIELD(arg0, u16 *, 0x24);
    if ((temp_r1 != 0) && (temp_r0 = M2C_FIELD(arg0, u16 *, 0x26) - 1, M2C_FIELD(arg0, u16 *, 0x26) = temp_r0, temp_r3 = temp_r0, (temp_r3 == 0))) {
        M2C_FIELD(arg0, u16 *, 0x26) = temp_r1;
        temp_r1_2 = M2C_FIELD(arg0, u16 *, 0x28);
        if (2 & temp_r1_2) {
            temp_r0_2 = temp_r1_2 + 0x10;
            M2C_FIELD(arg0, u16 *, 0x28) = temp_r0_2;
            if ((u32) temp_r0_2 > 0xFFU) {
                M2C_FIELD(arg0, u16 *, 0x28) = 0x100U;
                M2C_FIELD(arg0, u16 *, 0x24) = temp_r3;
            }
            goto block_14;
        }
        temp_r0_3 = temp_r1_2 - 0x10;
        M2C_FIELD(arg0, u16 *, 0x28) = temp_r0_3;
        if ((s32) (temp_r0_3 << 0x10) <= 0) {
            var_r5 = M2C_FIELD(arg0, u8 *, 8);
            var_r4 = M2C_FIELD(arg0, u8 **, 0x2C);
            if ((s32) var_r5 > 0) {
                do {
                    sub_08062524(arg0, var_r4);
                    temp_r0_4 = 1 & M2C_FIELD(arg0, u16 *, 0x28);
                    if (temp_r0_4 == 0) {
                        *var_r4 = temp_r0_4;
                    }
                    var_r5 -= 1;
                    var_r4 += 0x50;
                } while ((s32) var_r5 > 0);
            }
            if (1 & M2C_FIELD(arg0, u16 *, 0x28)) {
                var_r0 = M2C_FIELD(arg0, s32 *, 4) | 0x80000000;
            } else {
                var_r0 = 0x80000000;
            }
            M2C_FIELD(arg0, s32 *, 4) = var_r0;
            M2C_FIELD(arg0, u16 *, 0x24) = 0U;
            return;
        }
block_14:
        var_r5_2 = M2C_FIELD(arg0, u8 *, 8);
        var_r4_2 = M2C_FIELD(arg0, u8 **, 0x2C);
        if ((s32) var_r5_2 > 0) {
            do {
                temp_r1_3 = M2C_FIELD(var_r4_2, u8 *, 0);
                if (0x80 & temp_r1_3) {
                    M2C_FIELD(var_r4_2, s8 *, 0x13) = (s8) ((u16) M2C_FIELD(arg0, u16 *, 0x28) >> 2);
                    M2C_FIELD(var_r4_2, u8 *, 0) = temp_r1_3 | 3;
                }
                var_r5_2 -= 1;
                var_r4_2 += 0x50;
            } while ((s32) var_r5_2 > 0);
        }
    }
}
