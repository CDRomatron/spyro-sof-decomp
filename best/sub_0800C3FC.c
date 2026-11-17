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

M2C_UNK sub_0800C808(void *);                       /* extern */
M2C_UNK sub_080641E0(void *, s32, s32);             /* extern */

void sub_0800C3FC(void *arg0, s32 arg1, s32 arg2) {
    s32 *temp_r4;
    s32 *temp_r7;
    s32 *var_r1_3;
    s32 *var_r2;
    s32 var_r1;
    s32 var_r1_2;
    u32 var_r3;
    u32 var_r3_2;
    u32 var_r3_3;
    u8 temp_r0;
    u8 temp_r1;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x60);
    if (temp_r0 == 0) {
        sub_0800C808(arg0);
        var_r3 = 0;
        if ((u32) M2C_FIELD(arg0, u8 *, 0x64) > 0U) {
            var_r1 = 0;
            do {
                M2C_FIELD((var_r1 + M2C_FIELD(arg0, s32 *, 4)), s8 *, 0x22) = 0;
                var_r1 += 0x28;
                var_r3 += 1;
            } while (var_r3 < (u32) M2C_FIELD(arg0, u8 *, 0x64));
        }
        M2C_FIELD(arg0, u8 *, 0x60) = 2U;
        goto block_12;
    }
    if (temp_r0 == 3) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        var_r3_2 = 0;
        if ((u32) M2C_FIELD(arg0, u8 *, 0x64) > 0U) {
            var_r1_2 = 0;
            do {
                M2C_FIELD((var_r1_2 + M2C_FIELD(arg0, s32 *, 4)), s8 *, 0x22) = 0;
                var_r1_2 += 0x28;
                var_r3_2 += 1;
            } while (var_r3_2 < (u32) M2C_FIELD(arg0, u8 *, 0x64));
        }
        if (arg2 != 0) {
            sub_080641E0(arg0, arg1, 1);
        }
    } else {
        M2C_FIELD(arg0, u8 *, 0x60) = 2U;
block_12:
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        if (arg2 != 0) {
            var_r3_3 = 0;
            temp_r1 = M2C_FIELD(arg0, u8 *, 0x4C);
            temp_r7 = arg0 + 0xC;
            temp_r4 = arg0 + 0x2C;
            if ((u32) temp_r1 > 0U) {
                var_r2 = temp_r4;
                var_r1_3 = temp_r7;
loop_15:
                if ((*var_r1_3 != arg2) || (*var_r2 != arg1)) {
                    var_r2 += 4;
                    var_r1_3 += 4;
                    var_r3_3 += 1;
                    if (var_r3_3 >= (u32) temp_r1) {
                        goto block_18;
                    }
                    goto loop_15;
                }
            } else {
block_18:
                *(temp_r7 + (M2C_FIELD(arg0, u8 *, 0x4C) * 4)) = arg2;
                *((M2C_FIELD(arg0, u8 *, 0x4C) * 4) + temp_r4) = arg1;
                M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (M2C_FIELD(arg0, u8 *, 0x4C) + 1);
            }
        }
    }
}
