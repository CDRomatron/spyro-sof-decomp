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

void sub_08754236(void *arg1, s32 arg3, M2C_UNK argE3) {
    u16 temp_r7;

    temp_r7 = M2C_FIELD(arg1, u16 *, 0x16);
    M2C_FIELD(temp_r7, void **, 0) = arg1;
    M2C_FIELD(temp_r7, s32 *, 4) = arg3;
    M2C_FIELD(temp_r7, M2C_UNK **, 8) = &argE3;
    M2C_FIELD(temp_r7, s32 *, 0xC) = (s32) temp_r7;
}
