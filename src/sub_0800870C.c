/* identical to sub_0800873C in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

s32 sub_08063D80(s32, u16);                         /* extern */
u16 sub_08063DB4(s32);                              /* extern */

void sub_0800870C(void *arg0, void *arg1) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    u16 temp_r4_2;

    var_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_r1 < 0) {
        var_r1 = 0 - var_r1;
    }
    var_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (var_r0 < 0) {
        var_r0 = 0 - var_r0;
    }
    temp_r4 = sub_08063D80(var_r0 * var_r1, 0x100U);
    var_r1_2 = M2C_FIELD(arg0, s32 *, 4);
    if (var_r1_2 < 0) {
        var_r1_2 = 0 - var_r1_2;
    }
    var_r0_2 = M2C_FIELD(arg0, s32 *, 4);
    if (var_r0_2 < 0) {
        var_r0_2 = 0 - var_r0_2;
    }
    temp_r4_2 = sub_08063DB4(temp_r4 + sub_08063D80(var_r0_2 * var_r1_2, 0x100U));
    M2C_FIELD(arg1, s32 *, 0) = sub_08063D80(M2C_FIELD(arg0, s32 *, 0) << 8, temp_r4_2);
    M2C_FIELD(arg1, s32 *, 4) = sub_08063D80(M2C_FIELD(arg0, s32 *, 4) << 8, temp_r4_2);
}
