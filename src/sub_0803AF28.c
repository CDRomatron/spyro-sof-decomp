/* identical to sub_0803AFD4 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */

s32 sub_0803AF28(u16 arg0, u8 arg1, void *arg2) {
    u16 temp_r5;

    temp_r5 = arg0;
    switch (temp_r5) {                              /* irregular */
    case 0:
        if (arg1 != 0) {
            M2C_FIELD(arg2, u8 *, 0x4C) = 1U;
        }
        break;
    case 1:
        sub_0800F538();
        if (M2C_FIELD(arg2, u8 *, 0x4C) != 0) {
            if (*M2C_FIELD(arg2, u16 **, 0x34) == 0x19B) {
                M2C_FIELD(arg2, s8 *, 0x49) = (s8) temp_r5;
            } else {
                M2C_FIELD(arg2, s8 *, 0x4D) = (s8) temp_r5;
            }
        } else {
            sub_080534A0(3);
        }
        break;
    }
    return 1;
}
