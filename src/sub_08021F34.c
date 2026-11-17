/* identical to sub_08021F50 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_08004478(s32, s32);                     /* extern */
s32 sub_08004520(s32);                              /* extern */
M2C_UNK sub_08050228(s32, void *, s32);             /* extern */
M2C_UNK sub_0805209C(void *, s32);                  /* extern */

void sub_08021F34(void *arg0) {
    s32 temp_r5;

    sub_08050228(M2C_FIELD(arg0, s32 *, 0x60), arg0 + 0xC, 0);
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x64);
    sub_08004478(temp_r5, sub_08004520(M2C_FIELD(arg0, s32 *, 0x60)));
    sub_0805209C(arg0 + 0x4C, 0);
}
