/* identical to sub_08020644 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_080078B0(u8);                           /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
s32 sub_080207A4(void *);                           /* extern */
M2C_UNK sub_08054444(s32, void *, s32);             /* extern */
M2C_UNK sub_0805445C(s32, void *, s32);             /* extern */

s32 sub_08020628(s32 arg0, void *arg1, u16 arg2, s32 arg3) {
    s32 temp_r1;

    if ((arg2 == 9) && (arg3 == 5)) {
        temp_r1 = M2C_FIELD(arg1, s32 *, 0xFC);
        if (temp_r1 != 0) {
            M2C_FIELD(arg1, s32 *, 0xFC) = (s32) (temp_r1 - 1);
            sub_080078B0((u8) temp_r1);
            if ((sub_080207A4(arg1) << 0x18) != 0) {
                sub_0805445C(5, arg1, 0);
            } else {
                sub_08054444(5, arg1, 0);
            }
        } else {
            sub_0800FE28(arg1, arg0, 6);
        }
    }
    return 0;
}
