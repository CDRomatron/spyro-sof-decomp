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

void sub_08060C80(s32 arg0) {
    if ((s8) M2C_FIELD(*(void **)0x030026EC, u8 *, 0xBE) == 0) {
        M2C_FIELD(*(void **)0x030026EC, u8 *, 0xBE) = 0xFU;
        M2C_FIELD(*(void **)0x030026EC, s32 *, 0xC0) = arg0;
    }
}
