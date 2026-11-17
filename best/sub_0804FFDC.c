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

void sub_0804FFDC(void *arg0, void *arg1) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0);
    temp_r6 = M2C_FIELD(arg0, s32 *, 4);
    temp_r3 = ((temp_r4 - temp_r6) * 2) + M2C_FIELD(*(void **)0x030026B8, s32 *, 0x10A0);
    M2C_FIELD(arg1, s32 *, 0) = temp_r3;
    temp_r4_2 = ((temp_r4 + temp_r6) - M2C_FIELD(arg0, s32 *, 8)) + M2C_FIELD(*(void **)0x030026B8, s32 *, 0x10A4);
    M2C_FIELD(arg1, s32 *, 4) = temp_r4_2;
    M2C_FIELD(arg1, s32 *, 0) = (s32) (temp_r3 - M2C_FIELD(M2C_FIELD(*(void **)0x030026B8, void **, 0), s32 *, 0x18));
    M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_r4_2 - M2C_FIELD(M2C_FIELD(*(void **)0x030026B8, void **, 0), s32 *, 0x1C));
}
