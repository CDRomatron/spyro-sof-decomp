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

M2C_UNK sub_08048E14(s32, s32, s32, s32);           /* extern */

void *sub_08047298(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    void *var_r4;

    if (**(void ***)0x030026A4 != (*(void ***)0x030026A4 + 4)) {
        var_r4 = **(void ***)0x030026A4;
loop_13:
        if (M2C_FIELD(var_r4, void **, 0) == NULL) {
            goto block_14;
        }
        temp_r2 = M2C_FIELD(var_r4, s32 *, 0x20);
        if (arg0 <= (s32) (temp_r2 + M2C_FIELD(var_r4, s32 *, 0x34))) {
            temp_r1 = M2C_FIELD(var_r4, s32 *, 0x24);
            if ((arg1 <= (s32) (temp_r1 + M2C_FIELD(var_r4, s32 *, 0x38))) && (arg2 >= (s32) (temp_r2 + M2C_FIELD(var_r4, s32 *, 0x2C))) && (arg3 >= (s32) (temp_r1 + M2C_FIELD(var_r4, s32 *, 0x30)))) {
                M2C_FIELD(var_r4, s32 *, 0x40) = 2;
                temp_r0 = M2C_FIELD(var_r4, s32 *, 0x48);
                switch (temp_r0) {                  /* irregular */
                case 0:
                    sub_08048E14(temp_r2, temp_r1, 1, 0);
                    break;
                case 1:
                    sub_08048E14(temp_r2, temp_r1, 0, 0);
                    break;
                }
                return var_r4;
            }
        }
        var_r4 = M2C_FIELD(var_r4, void **, 0);
        goto loop_13;
    }
block_14:
    return NULL;
}
