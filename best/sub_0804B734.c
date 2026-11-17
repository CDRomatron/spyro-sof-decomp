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

s32 sub_0804B734(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r5;
    s32 temp_r5_2;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0);
    temp_r2 = M2C_FIELD(arg2, s32 *, 0);
    if (((s32) (temp_r5 + M2C_FIELD(arg1, s32 *, 0)) <= (s32) (temp_r2 + M2C_FIELD(arg3, s32 *, 8))) && ((s32) (temp_r5 + M2C_FIELD(arg1, s32 *, 8)) >= (s32) (temp_r2 + M2C_FIELD(arg3, s32 *, 0)))) {
        temp_r5_2 = M2C_FIELD(arg0, s32 *, 4);
        temp_r2_2 = M2C_FIELD(arg2, s32 *, 4);
        if (((s32) (temp_r5_2 + M2C_FIELD(arg1, s32 *, 4)) <= (s32) (temp_r2_2 + M2C_FIELD(arg3, s32 *, 0xC))) && ((s32) (temp_r5_2 + M2C_FIELD(arg1, s32 *, 0xC)) >= (s32) (temp_r2_2 + M2C_FIELD(arg3, s32 *, 4)))) {
            return 1;
        }
    }
    return 0;
}
