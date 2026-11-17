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

s32 sub_0800F97C(void) {
    s32 var_r2;
    void *temp_r1;

    temp_r1 = *(void **)0x03002684;
    var_r2 = 0;
    M2C_FIELD(temp_r1, s16 *, 0x81A) = 0;
    if (M2C_FIELD(temp_r1, u16 *, 0x810) != 0) {
        var_r2 = M2C_FIELD(temp_r1, s32 *, 0x800);
        M2C_FIELD(temp_r1, s16 *, 0x81A) = 1;
    }
    return var_r2;
}
