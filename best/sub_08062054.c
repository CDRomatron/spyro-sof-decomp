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

s32 sub_08062054(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    temp_r0_2 = arg0 + 0x10;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r0_2, s32 *, 4) = 0;
    M2C_FIELD(temp_r0_2, s32 *, 8) = 0;
    M2C_FIELD(temp_r0_2, s32 *, 0xC) = 0;
    temp_r0_3 = temp_r0_2 + 0x10;
    M2C_FIELD(temp_r0_2, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r0_3, s32 *, 4) = 0;
    M2C_FIELD(temp_r0_3, s32 *, 8) = 0;
    M2C_FIELD(temp_r0_3, s32 *, 0xC) = 0;
    temp_r0 = temp_r0_3 + 0x10;
    M2C_FIELD(temp_r0_3, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r0, s32 *, 4) = 0;
    M2C_FIELD(temp_r0, s32 *, 8) = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
    return temp_r0 + 0x10;
}
