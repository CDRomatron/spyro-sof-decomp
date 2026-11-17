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
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800F538();                             /* extern */
s32 sub_0800FCA4(s32, s32, void *);                 /* extern */
M2C_UNK sub_0800FDA0(void *, s32, void *);          /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
M2C_UNK sub_080539E4(s32, s32);                     /* extern */

s32 sub_080342FC(u16 arg0, u8 arg1, void *arg2) {
    s32 var_r0;
    u16 temp_r0;
    void *var_r4;

    temp_r0 = arg0;
    switch ((s32) temp_r0) {                        /* irregular */
    case 3:
        if ((sub_08007874(0x17) << 0x18) != 0) {
            var_r4 = arg2 + 0xC;
            var_r0 = 0x4F;
        } else {
            var_r4 = arg2 + 0xC;
            var_r0 = 0x5C;
        }
        sub_0800FDA0(arg2, sub_0800FCA4(var_r0, 1, var_r4), var_r4);
        break;
    case 0:
        if (arg1 != 0) {
            sub_0800781C(0x69, 1);
            M2C_FIELD(arg2, u8 *, 0x4B) = 1U;
        }
        break;
    default:
        sub_0800F538();
        if ((sub_08007874(0x69) << 0x18) != 0) {
            if (M2C_FIELD(arg2, u8 *, 0x4B) == 0) {
                sub_0800781C(0x47, 1);
                sub_080539E4(0x15, 0xF2);
            }
        } else {
            sub_080534A0(3);
        }
        break;
    }
    return 1;
}
