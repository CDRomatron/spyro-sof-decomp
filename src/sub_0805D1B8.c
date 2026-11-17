/* identical to sub_0805D4E4 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_080024B0(s32);                          /* extern */
M2C_UNK sub_080024BC(s32);                          /* extern */
M2C_UNK sub_08002544(s32);                          /* extern */
M2C_UNK sub_08002BE0(void *, s32);                  /* extern */
M2C_UNK sub_080043A4(s32);                          /* extern */
M2C_UNK sub_0800A690();                             /* extern */
M2C_UNK sub_0800C068();                             /* extern */

s32 sub_0805D1B8(void *arg0) {
    s32 var_r5;
    void *var_r4;

    sub_080024B0(M2C_FIELD(arg0, s32 *, 4));
    sub_080024BC(M2C_FIELD(arg0, s32 *, 8));
    sub_08002544(M2C_FIELD(arg0, s32 *, 0xC));
    var_r4 = M2C_FIELD(arg0, void **, 0);
    var_r5 = 6;
    do {
        sub_080043A4(M2C_FIELD(var_r4, s32 *, 0xC));
        var_r4 += 0x28;
        var_r5 -= 1;
    } while (var_r5 >= 0);
    sub_08002BE0(M2C_FIELD(arg0, void **, 0), 0x118);
    M2C_FIELD(arg0, void **, 0) = NULL;
    sub_0800A690();
    sub_0800C068();
    return 0;
}
