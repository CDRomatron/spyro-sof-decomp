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

extern M2C_UNK sub_08063DFC;

s32 sub_08063E20(u8 arg0, M2C_UNK **arg1) {
    u8 temp_r1;

    temp_r1 = arg0;
    if ((u32) temp_r1 <= 3U) {
        *(u8 *)0x03000CF0 = temp_r1;
        *(s32 *)0x03000CF8 = (*(u8 *)0x03000CF0 * 4) + 0x04000100;
        *arg1 = &sub_08063DFC;
        return 0;
    }
    return 1;
}
