/* identical to sub_0803DDF4 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_0803D770(void *);                       /* extern */
M2C_UNK sub_0803D950(void *, s32);                  /* extern */
s32 sub_08052140(s32, s32);                         /* extern */
s32 sub_08052BB4(s32);                              /* extern */

void sub_0803DCBC(void *arg0) {
    s32 temp_r5;

    temp_r5 = arg0 + 0x24;
    M2C_FIELD(arg0, s32 *, 0x84) = sub_08052BB4(temp_r5);
    if ((M2C_FIELD(arg0, u16 *, 0x92) == 0) && ((sub_08052140(temp_r5, 0x2000) << 0x18) != 0)) {
        sub_0803D950(arg0, 1);
    }
    sub_0803D770(arg0);
}
