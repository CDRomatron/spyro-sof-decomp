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

M2C_UNK sub_08050228(s32, void *, s32);             /* extern */
M2C_UNK sub_08050294(s32, void *, s32);             /* extern */
M2C_UNK sub_0805209C(void *, s32);                  /* extern */

void sub_080140CC(void *arg0) {
    s32 var_r5;
    u8 temp_r0;
    void *temp_r4;

    var_r5 = 0;
loop_8:
    if (var_r5 < (s32) M2C_FIELD(arg0, u8 *, 0x1DD)) {
        temp_r4 = arg0 + ((0x58 * var_r5) + 0x24);
        if (M2C_FIELD(temp_r4, u8 *, 0x56) == 0) {
            temp_r0 = M2C_FIELD(temp_r4, u8 *, 0x55);
            switch (temp_r0) {                      /* irregular */
            case 0:
                sub_08050294(M2C_FIELD(temp_r4, s32 *, 0x44), temp_r4 + 0x38, 0);
                sub_0805209C(temp_r4 + 0x28, 0);
                break;
            case 1:
                sub_08050228(M2C_FIELD(temp_r4, s32 *, 0x44), temp_r4 + 0x38, 0);
                break;
            }
        }
        var_r5 += 1;
        goto loop_8;
    }
}
