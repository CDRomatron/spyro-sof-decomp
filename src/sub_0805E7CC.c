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

M2C_UNK sub_0805E3C8();                             /* extern */
M2C_UNK sub_080641CC(void *, s32);                  /* extern */

void sub_0805E7CC(void *arg0) {
    void *temp_r1;

    sub_0805E3C8();
    if (M2C_FIELD(arg0, s32 *, 0x20) == 3) {
        temp_r1 = *(void **)0x030026EC;
        M2C_FIELD(temp_r1, s32 *, 0x94) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x94) - 1);
        sub_080641CC(arg0, M2C_FIELD(arg0, s32 *, 0x10));
    }
}
