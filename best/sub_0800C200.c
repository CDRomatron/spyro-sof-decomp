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

void *sub_08002B34(s32, s32);                       /* extern */

void sub_0800C200(void) {
    void *temp_r0;

    temp_r0 = sub_08002B34(0x18, 0);
    M2C_FIELD(temp_r0, s32 *, 0) = 0;
    M2C_FIELD(temp_r0, s32 *, 4) = 0;
    M2C_FIELD(temp_r0, s32 *, 8) = 0;
    M2C_FIELD(temp_r0, s8 *, 0xC) = 0xFF;
    M2C_FIELD(temp_r0, s8 *, 0xD) = 0;
    M2C_FIELD(temp_r0, s16 *, 0x12) = 0;
    M2C_FIELD(temp_r0, s8 *, 0xE) = 0;
    M2C_FIELD(temp_r0, s8 *, 0xF) = 0;
    M2C_FIELD(temp_r0, s16 *, 0x10) = 0;
}
