/* identical to sub_0803ECFC in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_08050168(void *, void (*)(void *, s32)); /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
M2C_UNK sub_080545B8();                             /* extern */

void sub_0803EBC4(void *arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0:
        sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x38), 2);
        sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x3C), 2);
        sub_08050168(arg0, sub_0803EBC4);
        sub_080545B8();
        return;
    case 1:
        sub_080534A0(3);
        return;
    }
}
