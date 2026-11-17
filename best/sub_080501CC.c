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

M2C_UNK sub_08054A58(void *, s32);                  /* extern */

void sub_080501CC(s32 arg0, s32 arg1) {
    void *temp_r1;
    void *temp_r2;

    if (arg1 != 0) {
        temp_r2 = *(void **)0x030026B8;
        M2C_FIELD(temp_r2, s32 *, 0x10B4) = (s32) (M2C_FIELD(temp_r2, s32 *, 0x10B4) & ~1);
        temp_r1 = *(void **)0x030026B8;
        M2C_FIELD(temp_r1, s32 *, 0x10B4) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x10B4) | 2);
        M2C_FIELD(*(void **)0x030026B8, s32 *, 0x10C4) = arg1;
        M2C_FIELD(*(void **)0x030026B8, s32 *, 0x10C0) = arg0;
        sub_08054A58(*(void **)0x030026B8, 0);
        sub_08054A58(*(void **)0x030026B8, 1);
    }
}
