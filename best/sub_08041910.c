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

M2C_UNK sub_0800781C(s32, s32);                     /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_080545E8(u8);                           /* extern */

s32 sub_08041910(void *arg1, u16 arg2, s32 arg3) {
    s32 *var_r7_2;
    s32 *var_r7_3;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r7;
    u32 var_r6;
    u32 var_r6_2;

    var_r7 = 0;
    if (arg2 == 9) {
        switch (arg3) {                             /* irregular */
        case 32:
            M2C_FIELD(arg1, u8 *, 0x3A) = (u8) (M2C_FIELD(arg1, u8 *, 0x3A) + 1);
            var_r6 = 0;
            if ((u32) M2C_FIELD(arg1, u8 *, 0x39) > 0U) {
                var_r7_2 = arg1 + 0x24;
                do {
                    temp_r1 = *var_r7_2;
                    var_r7_2 += 4;
                    sub_0800FE28(arg1, temp_r1, 0x20);
                    var_r6 += 1;
                } while (var_r6 < (u32) M2C_FIELD(arg1, u8 *, 0x39));
            }
            if (M2C_FIELD(arg1, u8 *, 0x3A) == M2C_FIELD(arg1, u8 *, 0x39)) {
                sub_0800781C(0x59, 1);
                M2C_FIELD(arg1, s8 *, 0x38) = 3;
            }
            sub_080545E8(M2C_FIELD(arg1, u8 *, 0x3A));
            break;
        case 33:
            M2C_FIELD(arg1, u8 *, 0x3A) = (u8) (M2C_FIELD(arg1, u8 *, 0x3A) - 1);
            var_r6_2 = 0;
            if ((u32) M2C_FIELD(arg1, u8 *, 0x39) > 0U) {
                var_r7_3 = arg1 + 0x24;
                do {
                    temp_r1_2 = *var_r7_3;
                    var_r7_3 += 4;
                    sub_0800FE28(arg1, temp_r1_2, 0x21);
                    var_r6_2 += 1;
                } while (var_r6_2 < (u32) M2C_FIELD(arg1, u8 *, 0x39));
            }
            sub_080545E8(M2C_FIELD(arg1, u8 *, 0x3A));
            break;
        }
        var_r7 = 1;
    }
    return var_r7;
}
