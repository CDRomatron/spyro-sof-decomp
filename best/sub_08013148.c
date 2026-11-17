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
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_080539E4(s32, s32);                     /* extern */
M2C_UNK sub_080545E8(u8);                           /* extern */

s32 sub_08013148(void *arg1, u16 arg2, u32 arg3) {
    s32 *var_r7_2;
    s32 *var_r7_3;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r7;
    u32 var_r6;
    u32 var_r6_2;
    u8 *var_r8;

    var_r7 = 0;
    if (arg2 == 9) {
        switch (arg3) {                             /* irregular */
        case 32:
            M2C_FIELD(arg1, u8 *, 0x4B) = (u8) (M2C_FIELD(arg1, u8 *, 0x4B) + 1);
            var_r6 = 0;
            var_r8 = arg1 + 0x4B;
            if ((u32) M2C_FIELD(arg1, u8 *, 0x4A) > 0U) {
                var_r7_2 = arg1 + 0x24;
                do {
                    temp_r1 = *var_r7_2;
                    var_r7_2 += 4;
                    sub_0800FE28(arg1, temp_r1, 0x20);
                    var_r6 += 1;
                } while (var_r6 < (u32) M2C_FIELD(arg1, u8 *, 0x4A));
            }
            if (M2C_FIELD(arg1, u8 *, 0x4B) == M2C_FIELD(arg1, u8 *, 0x4A)) {
                if ((sub_08007874(4) << 0x18) != 0) {
                    sub_0800781C(5, 1);
                } else {
                    sub_0800781C(4, 1);
                }
                sub_080539E4(0x1D, 0x7C);
            }
block_18:
            sub_080545E8(*var_r8);
            break;
        case 33:
            M2C_FIELD(arg1, u8 *, 0x4B) = (u8) (M2C_FIELD(arg1, u8 *, 0x4B) - 1);
            var_r6_2 = 0;
            var_r8 = arg1 + 0x4B;
            if ((u32) M2C_FIELD(arg1, u8 *, 0x4A) > 0U) {
                var_r7_3 = arg1 + 0x24;
                do {
                    temp_r1_2 = *var_r7_3;
                    var_r7_3 += 4;
                    sub_0800FE28(arg1, temp_r1_2, 0x21);
                    var_r6_2 += 1;
                } while (var_r6_2 < (u32) M2C_FIELD(arg1, u8 *, 0x4A));
            }
            goto block_18;
        case 34:
            if (M2C_FIELD(arg1, u8 *, 0x49) != 0) {
                sub_08003220(0x08170DA8);
            }
            M2C_FIELD(arg1, u8 *, 0x49) = 0U;
            break;
        }
        var_r7 = 1;
    }
    return var_r7;
}
