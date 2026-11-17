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

M2C_UNK sub_08002BE0(s32 *, s32);                   /* extern */
M2C_UNK sub_080043A4(s32);                          /* extern */
M2C_UNK sub_0800A2D8(s32);                          /* extern */

void sub_0801DBCC(s32 *arg0) {
    s32 *var_r4;
    s32 *var_r4_2;
    s32 temp_r0;
    u32 var_r5;
    u32 var_r5_2;

    var_r5 = 0;
    var_r4 = arg0;
    do {
        sub_080043A4(*var_r4);
        var_r4 += 0x44;
        var_r5 += 1;
    } while (var_r5 <= 4U);
    var_r5_2 = 0;
    var_r4_2 = arg0 + 0x164;
    do {
        temp_r0 = *var_r4_2;
        var_r4_2 += 4;
        sub_080043A4(temp_r0);
        var_r5_2 += 1;
    } while (var_r5_2 <= 7U);
    sub_080043A4(M2C_FIELD(arg0, s32 *, 0x184));
    sub_0800A2D8(0x357);
    sub_0800A2D8(0x43D);
    sub_0800A2D8(0x3CA);
    sub_08002BE0(arg0, 0x19C);
}
