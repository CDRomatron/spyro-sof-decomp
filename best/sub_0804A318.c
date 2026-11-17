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

u32 sub_08045C64(s32, s32, s32, s32);               /* extern */

void sub_0804A318(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 var_r0;
    s32 var_r4;
    s32 var_r9;
    u32 temp_r0;
    u32 temp_r0_2;

    var_r9 = 0;
    if (sub_08045C64(*arg0, *arg1, 0, 0) == 2) {
        var_r9 = 1;
    }
    temp_r0 = sub_08045C64(*arg0, *arg1, *arg2, 0);
    switch (temp_r0) {                              /* irregular */
    case 2:
        if (var_r9 != 0) {
        default:
            *arg0 += *arg2;
        } else {
            var_r0 = var_r9;
block_11:
            *arg2 = var_r0;
        }
        break;
    case 1:
    case 3:
        var_r0 = 0;
        goto block_11;
    }
    var_r4 = *arg3;
    if (var_r4 != 0) {
loop_14:
        temp_r0_2 = sub_08045C64(*arg0, *arg1, 0, var_r4);
        if (temp_r0_2 != 1) {
            if (temp_r0_2 >= 1U) {
                if (temp_r0_2 != 2) {
                    goto block_21;
                }
                if ((var_r4 >= 0) && (var_r9 == 0)) {
                    goto block_21;
                }
                goto block_18;
            }
block_18:
            *arg1 += var_r4;
            return;
        }
block_21:
        if (var_r4 > 0) {
            *arg3 = 0;
            var_r4 += 0xFFFFFF00;
            if (var_r4 < 0) {
                return;
            }
            goto block_27;
        }
        if (var_r4 < 0) {
            *arg3 = 0;
            var_r4 += 0x100;
            if (var_r4 > 0) {
                var_r4 = 0;
            }
block_27:
            if (var_r4 == 0) {

            } else {
                goto loop_14;
            }
        }
    }
}
