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
s32 sub_080502E8();                                 /* extern */

s32 sub_08054E90(void *arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r6;
    void *var_r0_3;
    void *var_r1;

    var_r6 = sub_080502E8();
    var_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (var_r0 < 0) {
        var_r0 += 0xFF;
    }
    var_r0_2 = M2C_FIELD(arg0, s32 *, 4);
    if (var_r0_2 < 0) {
        var_r0_2 += 0xFF;
    }
    var_r1 = sub_0800F97C();
    if (var_r1 != NULL) {
loop_5:
        if ((M2C_FIELD(var_r1, u16 *, 0) == 8) && ((M2C_FIELD(var_r1, s16 *, 2) & 0xFFF0) == ((var_r0 >> 8) & 0xFFF0)) && ((M2C_FIELD(var_r1, s16 *, 4) & 0xFFF0) == ((var_r0_2 >> 8) & 0xFFF0)) && (arg1 != M2C_FIELD(var_r1, s32 *, 8))) {
            var_r0_3 = var_r1;
        } else {
            var_r1 = sub_0800F9B4();
            if ((var_r1 == NULL) || (0 != 0)) {
                goto block_12;
            }
            goto loop_5;
        }
    } else {
block_12:
        var_r0_3 = NULL;
    }
    if (var_r0_3 != NULL) {
        var_r6 += M2C_FIELD(var_r0_3, s32 *, 0xC);
    }
    return var_r6;
}
