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

s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800F538();                             /* extern */
s32 sub_0800FCA4(s32, s32, s32);                    /* extern */
M2C_UNK sub_0800FDA0(s32, s32, s32);                /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */

s32 sub_080416B0(u16 arg0, s32 arg2) {
    s32 var_r0;
    s32 var_r4;
    u16 temp_r0;

    temp_r0 = arg0;
    if ((s32) temp_r0 >= 1) {
        if ((s32) temp_r0 > 2) {
            if (temp_r0 == 3) {
                if ((sub_08007874(0x38) << 0x18) != 0) {
                    var_r4 = arg2 + 0xC;
                    var_r0 = 2;
                } else {
                    var_r4 = arg2 + 0xC;
                    var_r0 = 4;
                }
                sub_0800FDA0(arg2, sub_0800FCA4(var_r0, 1, var_r4), var_r4);
            }
        } else {
            sub_0800F538();
            sub_080534A0(3);
        }
    }
    return 1;
}
