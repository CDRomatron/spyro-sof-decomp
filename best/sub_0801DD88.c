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
M2C_UNK sub_080043A4(s32);                          /* extern */
M2C_UNK sub_0800A2D8(s32);                          /* extern */
M2C_UNK sub_0800D548(s32);                          /* extern */
M2C_UNK sub_0801DBCC(s32);                          /* extern */

void sub_0801DD88(void *arg0) {
    s32 *var_r4;
    u32 var_r5;

    sub_080043A4(M2C_FIELD(arg0, s32 *, 0x24));
    sub_080043A4(M2C_FIELD(arg0, s32 *, 0x28));
    sub_0800A2D8(0x3B5);
    sub_0800A2D8(0x49B);
    sub_0800A2D8(0x428);
    sub_0800A2D8(0x3AA);
    sub_0800A2D8(0x490);
    sub_0800A2D8(0x41D);
    sub_0801DBCC(M2C_FIELD(arg0, s32 *, 0x1CC));
    sub_0800D548(M2C_FIELD(arg0, s32 *, 0x1D4));
    var_r5 = 0;
    var_r4 = arg0 + 0x2C;
    do {
        sub_080043A4(*var_r4);
        var_r4 += 0x14;
        var_r5 += 1;
    } while (var_r5 <= 7U);
    sub_08002BE0(arg0, 0x1EC);
}
