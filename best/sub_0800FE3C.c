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

s32 sub_08006748();                                 /* extern */
u8 sub_080072FC();                                  /* extern */
s32 sub_08007874(s32);                              /* extern */
u8 sub_08007A30();                                  /* extern */
s32 sub_08007A7C();                                 /* extern */
M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */

s32 sub_0800FE3C(void *arg2) {
    s16 var_r1;
    s16 var_r1_2;
    u8 temp_r5;

    if ((sub_08006748() << 0x18) != 0) {
        if ((sub_08007874(0x1E) << 0x18) != 0) {
            var_r1 = 0x3D;
            if ((u32) sub_080072FC() > 0x14U) {
                var_r1 = 0x37;
            }
        } else {
            var_r1 = 0x3C;
            if ((u32) sub_080072FC() > 0x14U) {
                var_r1 = 0x36;
            }
        }
        M2C_FIELD(arg2, s16 *, 0xAE) = var_r1;
        goto block_14;
    }
    if ((sub_08007A7C() << 0x18) != 0) {
        var_r1_2 = 0x3B;
        if ((u32) sub_080072FC() > 0x14U) {
            var_r1_2 = 0x35;
        }
        goto block_13;
    }
    temp_r5 = sub_08007A30();
    if (temp_r5 != 0) {
        var_r1_2 = 0x39;
        if ((u32) sub_080072FC() > 0x14U) {
            var_r1_2 = 0x33;
        }
block_13:
        M2C_FIELD(arg2, s16 *, 0xAE) = var_r1_2;
block_14:
        M2C_FIELD(arg2, s8 *, 0xB3) = 1;
    } else {
        sub_0800F538();
        sub_080534A0(3);
        M2C_FIELD(arg2, u8 *, 0xB2) = temp_r5;
    }
    return 1;
}
