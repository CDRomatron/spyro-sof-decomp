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
s32 sub_0805F88C(s32, s32, s32, s32);               /* extern */
M2C_UNK sub_08060600(s32, s32, s32, s32, s32);      /* extern */

s32 sub_08061190(s32 arg0, s32 arg1) {
    void *temp_r4;

    if (M2C_FIELD(*(void **)0x030026EC, void **, 0x3C) != (*(void **)0x030026EC + 0x40)) {
        temp_r4 = M2C_FIELD(*(void **)0x030026EC, void **, 0x3C);
        if (((sub_0805F88C(temp_r4 + 0x14, M2C_FIELD(temp_r4, s32 *, 0x28), arg0, arg1) << 0x18) != 0) && ((u32) (M2C_FIELD(temp_r4, s32 *, 0x2C) - 3) > 1U)) {
            M2C_FIELD(temp_r4, s32 *, 0x2C) = 3;
            M2C_FIELD(temp_r4, s32 *, 0x38) = 0;
            sub_08060600(M2C_FIELD(temp_r4, s32 *, 0x14), M2C_FIELD(temp_r4, s32 *, 0x18), 0, 0, 1);
            sub_08003220(0x081714FC);
            return 1;
        }
    }
    return 0;
}
