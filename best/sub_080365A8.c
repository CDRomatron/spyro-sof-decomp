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

M2C_UNK sub_08036078(void *);                       /* extern */
s32 sub_080529E8(void *, s32);                      /* extern */
s32 sub_08052BB4(void *);                           /* extern */

void sub_080365A8(void *arg0) {
    s8 *var_r1;
    s8 var_r0;

    if (M2C_FIELD(arg0, u16 *, 0xB0) == 0) {
        if ((sub_080529E8(arg0 + 0x24, 0x3200) << 0x18) != 0) {
            var_r1 = arg0 + 0xBA;
            var_r0 = 1;
        } else {
            var_r1 = arg0 + 0xBA;
            var_r0 = 3;
        }
        *var_r1 = var_r0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = sub_08052BB4(arg0 + 0x24);
    sub_08036078(arg0);
}
