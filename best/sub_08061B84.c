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

M2C_UNK sub_080008D4(s32);                          /* extern */
M2C_UNK sub_08003BD4(s32);                          /* extern */
M2C_UNK sub_08005E5C();                             /* extern */
M2C_UNK sub_080071C0();                             /* extern */
M2C_UNK sub_08008A00();                             /* extern */
M2C_UNK sub_0800A264();                             /* extern */

void sub_08061B84(void) {
    s32 *var_r4;
    s32 var_r5;

    sub_08003BD4(M2C_FIELD((void *)0x03001600, s32 *, 4));
    var_r4 = (s32 *)0x03002700;
    var_r5 = 9;
    do {
        if (*var_r4 != 0) {
            sub_080008D4(*var_r4);
        }
        var_r4 += 4;
        var_r5 -= 1;
    } while (var_r5 >= 0);
    sub_08005E5C();
    sub_080071C0();
    sub_0800A264();
    sub_08008A00();
}
