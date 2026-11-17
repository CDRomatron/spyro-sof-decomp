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

s32 sub_0801DB88(void) {
    void *temp_r2;

    temp_r2 = (M2C_FIELD(*(void **)0x03002688, u16 *, 0x148) * 0x18) + 0x08176EF8;
    if (!(0x80 & M2C_FIELD(temp_r2, u16 *, 0x14)) && !(0x1000 & M2C_FIELD(temp_r2, u16 *, 0x14))) {
        return 1;
    }
    return 0;
}
