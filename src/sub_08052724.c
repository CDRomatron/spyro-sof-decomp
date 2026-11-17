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

void sub_08052724(s16 arg0, void *arg1) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = *(void **)0x030026C0;
    temp_r3_2 = temp_r3 + ((M2C_FIELD(temp_r3, u16 *, 0x526) * 0x10) + 0x300);
    M2C_FIELD(temp_r3_2, s16 *, 0) = arg0;
    M2C_FIELD(temp_r3_2, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(temp_r3_2, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(temp_r3_2, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(temp_r3, u16 *, 0x526) = (u16) (M2C_FIELD(temp_r3, u16 *, 0x526) + 1);
}
