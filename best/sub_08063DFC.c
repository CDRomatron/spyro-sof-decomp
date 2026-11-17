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

void sub_08063DFC(void) {
    u16 temp_r0;

    if (*(u16 *)0x03000CF2 != 0) {
        temp_r0 = *(u16 *)0x03000CF2 - 1;
        *(u16 *)0x03000CF2 = temp_r0;
        if ((temp_r0 << 0x10) == 0) {
            *(s8 *)0x03000CF4 = 1;
        }
    }
}
