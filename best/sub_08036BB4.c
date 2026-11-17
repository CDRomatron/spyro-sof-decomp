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

u32 sub_08004508();                                 /* extern */

s32 sub_08036BB4(void *arg1, s32 arg2) {
    u32 temp_r0;

    if (arg2 == 8) {
        temp_r0 = sub_08004508();
        if (temp_r0 != 0x220000) {
            if (temp_r0 <= 0x220000U) {
                if (temp_r0 != 0x1B0000) {

                } else {
                    goto block_6;
                }
            } else if (temp_r0 == 0x330000) {
                goto block_6;
            }
        } else {
block_6:
            M2C_FIELD(arg1, s8 *, 0x9B) = 0;
        }
    }
    return 1;
}
