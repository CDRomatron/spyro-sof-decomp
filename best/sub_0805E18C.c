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

s32 sub_0800897C();                                 /* extern */

void sub_0805E18C(void *arg0) {
    s32 temp_r2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x14) + M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r2;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + M2C_FIELD(arg0, s32 *, 0x20));
    if (temp_r2 <= 0xFFF) {
        M2C_FIELD(arg0, s32 *, 0x14) = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        if (1 & sub_0800897C()) {
            var_r0 = 0x33;
        } else {
            var_r0 = -0x33;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) <= 0xFFF) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0x1000;
        if (1 & sub_0800897C()) {
            var_r0_2 = 0x33;
        } else {
            var_r0_2 = -0x33;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = var_r0_2;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0xF000) {
        M2C_FIELD(arg0, s32 *, 0x14) = 0xF000;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        if (1 & sub_0800897C()) {
            var_r0_3 = 0x33;
        } else {
            var_r0_3 = -0x33;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = var_r0_3;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) > 0xF000) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0xF000;
        if (1 & sub_0800897C()) {
            var_r0_4 = 0x33;
        } else {
            var_r0_4 = -0x33;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = var_r0_4;
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
}
