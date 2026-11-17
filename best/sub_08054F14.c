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

void *sub_08054F14(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r1;
    void *var_r1_2;
    void *var_r4;

    var_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (var_r1 < 0) {
        var_r1 += 0xFF;
    }
    var_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (var_r0 < 0) {
        var_r0 += 0xFF;
    }
    var_r1_2 = sub_0800F97C();
    var_r4 = NULL;
    if (var_r1_2 != NULL) {
loop_5:
        if ((M2C_FIELD(var_r1_2, u16 *, 0) == 8) && ((M2C_FIELD(var_r1_2, s16 *, 2) & 0xFFF0) == ((var_r1 >> 8) & 0xFFF0)) && ((M2C_FIELD(var_r1_2, s16 *, 4) & 0xFFF0) == ((var_r0 >> 8) & 0xFFF0)) && (arg1 != M2C_FIELD(var_r1_2, s32 *, 8))) {
            var_r4 = var_r1_2;
        } else {
            var_r1_2 = sub_0800F9B4();
            if ((var_r1_2 != NULL) && (0 == 0)) {
                goto loop_5;
            }
        }
    }
    return var_r4;
}
