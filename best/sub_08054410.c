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
M2C_UNK sub_08003BD4(s32);                          /* extern */
M2C_UNK sub_0800D548(s32);                          /* extern */

void sub_08054410(void) {
    s32 *temp_r6;
    s32 *var_r4;
    u32 var_r5;

    temp_r6 = *(s32 **)0x030026C4;
    sub_08003BD4(M2C_FIELD(temp_r6, s32 *, 0xA0));
    var_r5 = 0;
    var_r4 = temp_r6;
    do {
        sub_0800D548(*var_r4);
        var_r4 += 0x10;
        var_r5 += 1;
    } while (var_r5 <= 8U);
    sub_08002BE0(temp_r6, 0xB8);
}
