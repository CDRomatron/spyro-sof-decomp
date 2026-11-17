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

s32 sub_0804C5BC(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r4;
    s32 temp_r5;
    void *temp_r2;

    if (M2C_FIELD(*(void **)0x030026A4, void **, 0x24) != (*(void **)0x030026A4 + 0x28)) {
        temp_r2 = M2C_FIELD(*(void **)0x030026A4, void **, 0x24);
        temp_r4 = M2C_FIELD(temp_r2, s32 *, 0x10);
        temp_r5 = M2C_FIELD(temp_r2, s32 *, 0x14);
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x14);
        if ((temp_r4 <= (s32) (temp_r1 + M2C_FIELD(arg0, s32 *, 0x3C))) && (temp_r4 >= (s32) (temp_r1 + M2C_FIELD(arg0, s32 *, 0x34)))) {
            temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x18);
            if ((temp_r5 >= (s32) (temp_r1_2 + M2C_FIELD(arg0, s32 *, 0x38))) && (temp_r5 <= (s32) (temp_r1_2 + M2C_FIELD(arg0, s32 *, 0x40)))) {
                if ((s32) M2C_FIELD(temp_r2, s32 *, 0x1C) >= 0) {
                    M2C_FIELD(temp_r2, s32 *, 0x14) = temp_r1_2;
                }
                M2C_FIELD(temp_r2, void **, 0x34) = arg0;
                M2C_FIELD(temp_r2, s32 *, 0x3C) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x3C) | 0x40) & ~0x20);
                return 1;
            }
        }
    }
    return 0;
}
