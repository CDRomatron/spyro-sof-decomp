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

void sub_0800E514(void) {
    void *temp_r1;

    temp_r1 = *(void **)0x030008CC;
    M2C_FIELD(temp_r1, s16 *, 0x30E) = 0;
    M2C_FIELD(temp_r1, s16 *, 0x316) = 0;
    M2C_FIELD(temp_r1, s16 *, 0x300) = 0;
    M2C_FIELD(temp_r1, s8 *, 0x336) = 0;
    M2C_FIELD(temp_r1, s8 *, 0x335) = 0;
    M2C_FIELD(temp_r1, s8 *, 0x334) = 0;
    M2C_FIELD(temp_r1, s16 *, 0x31E) = 0x30;
    M2C_FIELD(temp_r1, s8 *, 0x337) = 0;
    M2C_FIELD(temp_r1, s8 *, 0x33D) = 0;
    M2C_FIELD(temp_r1, s8 *, 0x33A) = 0;
}
