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

M2C_UNK sub_0800E140(s32);                          /* extern */

void sub_0800F6D4(void) {
    void *temp_r1;

    temp_r1 = *(void **)0x030008CC;
    if ((M2C_FIELD(temp_r1, u8 *, 0x33B) != 0) && (M2C_FIELD(temp_r1, u16 *, 0x318) != 6)) {
        sub_0800E140(6);
    }
}
