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
M2C_UNK sub_08020F84(void *, s32);                  /* extern */
s32 sub_08050148();                                 /* extern */

void sub_0802103C(void *arg0) {
    u8 *var_r6;
    u8 temp_r0;
    u8 temp_r1;

    if ((sub_08050148() << 0x18) == 0) {
        temp_r1 = M2C_FIELD(arg0, u8 *, 0x5C);
        if (temp_r1 == 0) {
            M2C_FIELD(arg0, u8 *, 0x5C) = 0x3CU;
            temp_r0 = M2C_FIELD(arg0, u8 *, 0x5B) - 1;
            M2C_FIELD(arg0, u8 *, 0x5B) = temp_r0;
            var_r6 = arg0 + 0x5B;
            if ((temp_r0 << 0x18) == 0) {
                sub_08020F84(arg0, 1);
            } else {
                M2C_FIELD(arg0, s32 *, 0x4C) = 0x80;
            }
        } else {
            if (temp_r1 == 0x3C) {
                sub_08003220(0x08170DA8);
            }
            M2C_FIELD(arg0, u8 *, 0x5C) = (u8) (M2C_FIELD(arg0, u8 *, 0x5C) - 1);
            var_r6 = arg0 + 0x5B;
        }
        if ((*var_r6 != 0) && ((u32) M2C_FIELD(arg0, u8 *, 0x5C) <= 0x2CU)) {
            M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) + 0x16);
        }
    }
}
