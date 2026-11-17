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

u8 sub_08052388(void *);                            /* extern */

void *sub_08052C88(void *arg0) {
    u16 temp_r1;
    u8 temp_r0_2;
    void *temp_r0;
    void *var_r5;

    var_r5 = NULL;
loop_1:
    temp_r0 = M2C_FIELD(arg0, void **, 0);
    if (M2C_FIELD(temp_r0, void **, 0) != NULL) {
        temp_r1 = M2C_FIELD(arg0, u16 *, 8);
        if (temp_r1 != 0xFFFD) {
            if (((s32) temp_r1 >= 0xFFFD) && ((s32) temp_r1 <= 0xFFFF)) {
                goto block_9;
            }
            if (M2C_FIELD(temp_r0, u16 *, 0x20) == M2C_FIELD(arg0, u16 *, 8)) {
                goto block_9;
            }
        } else if (3 & M2C_FIELD(temp_r0, u16 *, 0x22)) {
block_9:
            var_r5 = temp_r0;
        }
        M2C_FIELD(arg0, void **, 0) = (void *) M2C_FIELD(temp_r0, void **, 0);
        goto block_13;
    }
    temp_r0_2 = sub_08052388(arg0);
    if (temp_r0_2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) temp_r0_2;
    } else {
block_13:
        if ((var_r5 == NULL) && (0 == 0)) {
            goto loop_1;
        }
    }
    return var_r5;
}
