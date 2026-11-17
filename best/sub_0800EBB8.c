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

M2C_UNK sub_0800DB4C();                             /* extern */
M2C_UNK sub_0800E2EC();                             /* extern */
M2C_UNK sub_0800EB24();                             /* extern */
M2C_UNK sub_080641C8();                             /* extern */

s32 sub_0800EBB8(void) {
    u8 temp_r2;
    void *temp_r4;

    temp_r4 = *(void **)0x030008CC;
    if ((M2C_FIELD(temp_r4, u8 *, 0x33F) == 0) && (M2C_FIELD(temp_r4, u8 *, 0x333) == 0)) {
        if (M2C_FIELD(temp_r4, u8 *, 0x340) == 0) {
            sub_0800E2EC();
        }
        if (M2C_FIELD(temp_r4, s32 *, 0x2D8) != 0) {
            sub_080641C8();
        }
    }
    sub_0800DB4C();
    if (M2C_FIELD(temp_r4, u8 *, 0x334) != 0) {
        sub_0800EB24();
    }
    if ((M2C_FIELD(temp_r4, u8 *, 0x33E) != 0) && (2 & *(u16 *)0x030010B0) && (M2C_FIELD(temp_r4, u8 *, 0x33D) != 0)) {
        M2C_FIELD(temp_r4, s8 *, 0x337) = 1;
        sub_0800E2EC();
    }
    if (M2C_FIELD(temp_r4, u8 *, 0x332) != 0) {
        temp_r2 = 1 & *(u16 *)0x030010AC;
        if (temp_r2 == 0) {
            M2C_FIELD(temp_r4, u8 *, 0x332) = temp_r2;
        }
    }
    return 1;
}
