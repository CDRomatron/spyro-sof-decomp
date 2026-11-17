/* identical to sub_0802073C in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_0801FAE0(void *, s32);                  /* extern */
M2C_UNK sub_0801FB74(void *, void *, s32);          /* extern */
M2C_UNK sub_080528D4(s32, s32, s32, s32);           /* extern */
s32 sub_080529D4();                                 /* extern */

void sub_08020720(void *arg0) {
    void *temp_r4;

    temp_r4 = sub_080529D4() + 0xC;
    sub_0801FB74(arg0, temp_r4, 0x299);
    sub_0801FAE0(arg0, M2C_FIELD(temp_r4, s32 *, 8) + 0xA00);
    sub_080528D4(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14) + 0xFFFFF600);
}
