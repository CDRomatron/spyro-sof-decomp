/* identical to sub_0803EEC4 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_08007B74();                             /* extern */
M2C_UNK sub_08050168(void *, M2C_UNK *);            /* extern */
M2C_UNK sub_080522C8(s32);                          /* extern */
extern M2C_UNK sub_0803EDAC;

void sub_0803ED8C(void *arg0) {
    sub_080522C8(M2C_FIELD(arg0, s32 *, 0x40));
    sub_08007B74();
    sub_08050168(arg0, &sub_0803EDAC);
}
