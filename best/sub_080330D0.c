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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_0800781C(s32, s32);                     /* extern */
s32 sub_08007874(s32);                              /* extern */

void sub_080330D0(void *arg0) {
    s16 *var_r1;
    s16 var_r0_2;
    s32 var_r0;

    M2C_FIELD(arg0, s16 *, 0x44) = 0;
    if ((sub_08007874(0x14) << 0x18) != 0) {
        if ((sub_08007874(0x6E) << 0x18) != 0) {
            sub_08003220(0x08171550);
            M2C_FIELD(arg0, s16 *, 0x46) = 0xFB;
            M2C_FIELD(arg0, s16 *, 0x44) = 1;
            sub_0800781C(0x6C, 0);
            goto block_14;
        }
        if ((sub_08007874(0x15) << 0x18) != 0) {
            if ((sub_08007874(0x6F) << 0x18) != 0) {
                sub_08003220(0x08171550);
                M2C_FIELD(arg0, s16 *, 0x46) = 0xFC;
                M2C_FIELD(arg0, s16 *, 0x44) = 1;
                sub_0800781C(0x6D, 0);
                var_r0 = 0x6F;
                goto block_15;
            }
            var_r1 = arg0 + 0x46;
            var_r0_2 = 0xFF;
            goto block_19;
        }
        if ((sub_08007874(0x6F) << 0x18) != 0) {
            sub_08003220(0x08170CC8);
            M2C_FIELD(arg0, s16 *, 0x46) = 0xFA;
            var_r0 = 0x6F;
            goto block_15;
        }
        if ((sub_08007874(0x6D) << 0x18) != 0) {
            var_r1 = arg0 + 0x46;
            var_r0_2 = 0xFE;
        } else {
            var_r1 = arg0 + 0x46;
            var_r0_2 = 0xF8;
        }
        goto block_19;
    }
    if ((sub_08007874(0x6E) << 0x18) != 0) {
        sub_08003220(0x08170CC8);
        M2C_FIELD(arg0, s16 *, 0x46) = 0xF9;
block_14:
        var_r0 = 0x6E;
block_15:
        sub_0800781C(var_r0, 0);
        return;
    }
    if ((sub_08007874(0x6C) << 0x18) != 0) {
        var_r1 = arg0 + 0x46;
        var_r0_2 = 0xFD;
    } else {
        var_r1 = arg0 + 0x46;
        var_r0_2 = 0xF7;
    }
block_19:
    *var_r1 = var_r0_2;
}
