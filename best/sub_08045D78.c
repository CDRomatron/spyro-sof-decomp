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

M2C_UNK sub_08000C9C(void *);                       /* extern */
M2C_UNK sub_080043A4(s32);                          /* extern */
M2C_UNK sub_0804C194(s32, void *);                  /* extern */

void sub_08045D78(void *arg0) {
    s32 *var_r6;
    s32 temp_r0;
    u32 var_r4;

    var_r4 = 0;
    var_r6 = arg0 + 0x6C;
    do {
        temp_r0 = *var_r6;
        var_r6 += 4;
        sub_080043A4(temp_r0);
        var_r4 += 1;
    } while (var_r4 <= 7U);
    sub_080043A4(M2C_FIELD(arg0, s32 *, 0x20));
    sub_08000C9C(arg0);
    sub_0804C194(M2C_FIELD(*(void **)0x030026A4, s32 *, 0x84), arg0);
}
