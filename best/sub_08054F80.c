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

void *sub_0800F97C();                               /* extern */
void *sub_0800F9B4();                               /* extern */

s32 sub_08054F80(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    void *var_r0_3;

    var_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_r1 < 0) {
        var_r1 += 0xFF;
    }
    var_r0_2 = M2C_FIELD(arg0, s32 *, 4);
    if (var_r0_2 < 0) {
        var_r0_2 += 0xFF;
    }
    var_r0_3 = sub_0800F97C();
loop_10:
    if (var_r0_3 == NULL) {
        var_r0 = 0;
    } else if ((M2C_FIELD(var_r0_3, u16 *, 0) != 9) || ((M2C_FIELD(var_r0_3, s16 *, 2) & 0xFFF0) != ((var_r1 >> 8) & 0xFFF0)) || ((M2C_FIELD(var_r0_3, s16 *, 4) & 0xFFF0) != ((var_r0_2 >> 8) & 0xFFF0)) || (var_r0 = M2C_FIELD(var_r0_3, s32 *, 8), (arg1 == var_r0))) {
        var_r0_3 = sub_0800F9B4();
        goto loop_10;
    }
    return var_r0;
}
