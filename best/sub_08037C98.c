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

M2C_UNK _08037630(void *, s32);                     /* extern */

s32 sub_08037C98(void *arg1, u16 arg2, u32 arg3) {
    s32 var_r1;
    u8 temp_r0;
    u8 temp_r0_2;

    if (arg2 == 9) {
        switch (arg3) {                             /* irregular */
        case 0x49:
            var_r1 = 3;
block_8:
            _08037630(arg1, var_r1);
block_9:
            return 1;
        case 0x4A:
            temp_r0 = M2C_FIELD(arg1, u8 *, 0x6D);
            if ((temp_r0 != 2) && (temp_r0 != 4)) {
                temp_r0_2 = M2C_FIELD(arg1, u8 *, 0x6F) - 1;
                M2C_FIELD(arg1, u8 *, 0x6F) = temp_r0_2;
                if ((temp_r0_2 << 0x18) != 0) {
                    var_r1 = 2;
                    goto block_8;
                }
                _08037630(arg1, 4);
            }
            goto block_9;
        case 0x4B:
            M2C_FIELD(arg1, u8 *, 0x70) = (u8) (M2C_FIELD(arg1, u8 *, 0x70) - 1);
            goto block_9;
        }
    } else {
        return 0;
    }
}
