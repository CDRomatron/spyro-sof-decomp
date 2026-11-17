/* identical to sub_08005914 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_08002BE0(void *, s32);                  /* extern */
M2C_UNK sub_0800A2D8(u16);                          /* extern */
s32 sub_0800A3BC(u16);                              /* extern */

void sub_080058E4(void *arg0) {
    void *temp_r2;
    void *temp_r4;

    sub_0800A2D8(M2C_FIELD(M2C_FIELD(arg0, void **, 8), u16 *, 0));
    temp_r2 = M2C_FIELD(arg0, void **, 8);
    if (0x2000 & M2C_FIELD(temp_r2, u16 *, 0x10)) {
        temp_r4 = M2C_FIELD(arg0, void **, 0x34);
        sub_08002BE0(temp_r4, sub_0800A3BC(M2C_FIELD(temp_r2, u16 *, 4)) - 8);
    } else {
        sub_0800A2D8(M2C_FIELD(temp_r2, u16 *, 4));
    }
    sub_08002BE0(arg0, 0x68);
}
