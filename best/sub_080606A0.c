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

M2C_UNK sub_08060600(s32, s32, s32, s32, s32);      /* extern */

s32 sub_080606A0(void *arg1, s32 arg2) {
    u32 temp_r0;

    if (arg2 == 8) {
        temp_r0 = M2C_FIELD(arg1, u32 *, 0x2C);
        if ((temp_r0 <= 0x10U) && (temp_r0 >= 6U)) {
            if ((u32) M2C_FIELD(arg1, u32 *, 0x30) > 0x1EU) {
                M2C_FIELD(arg1, s32 *, 0x28) = 1;
                sub_08060600(M2C_FIELD(arg1, s32 *, 0x14), M2C_FIELD(arg1, s32 *, 0x18), 0, 0, 5);
            }
        } else {
            M2C_FIELD(arg1, s32 *, 0x28) = 1;
        }
    }
    return 0;
}
