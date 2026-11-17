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

void sub_0800B844(void) {
    s32 temp_r1_2;
    u32 var_r4;
    u32 var_r4_2;
    void *temp_r1;
    void *temp_r2;
    void *temp_r5;
    void *var_r0;
    void *var_r2;

    temp_r2 = *(void **)0x03002680;
    temp_r5 = temp_r2 + 0x418;
    M2C_FIELD(temp_r5, s32 *, 4) = 0;
    M2C_FIELD(temp_r5, s32 *, 8) = (s32) (temp_r2 + 0x42C);
    M2C_FIELD(temp_r2, s32 *, 0x418) = 0;
    M2C_FIELD(temp_r5, s16 *, 0x10) = 0;
    var_r4 = 1;
    var_r2 = temp_r2 + 0x440;
    var_r0 = temp_r5;
    do {
        M2C_FIELD(var_r0, void **, 0x18) = var_r0;
        M2C_FIELD(var_r0, void **, 0x1C) = var_r2;
        M2C_FIELD(var_r0, s32 *, 0x14) = 0;
        M2C_FIELD(var_r0, s16 *, 0x24) = 0;
        var_r2 += 0x14;
        var_r0 += 0x14;
        var_r4 += 1;
    } while (var_r4 <= 0x1EU);
    temp_r1 = temp_r5 + 0x26C;
    M2C_FIELD(temp_r1, void **, 4) = (void *) (temp_r5 + 0x258);
    M2C_FIELD(temp_r1, s32 *, 8) = 0;
    M2C_FIELD(temp_r5, s32 *, 0x26C) = 0;
    M2C_FIELD(temp_r1, s16 *, 0x10) = 0;
    M2C_FIELD(*(void **)0x03002680, void **, 0x798) = temp_r5;
    M2C_FIELD(*(void **)0x03002680, s32 *, 0x79C) = 0;
    M2C_FIELD(*(void **)0x03002680, s32 *, 0x7A0) = 0;
    var_r4_2 = 0;
    do {
        temp_r1_2 = var_r4_2 * 8;
        M2C_FIELD((*(void **)0x03002680 + temp_r1_2), s16 *, 0x698) = 0x100;
        M2C_FIELD((*(void **)0x03002680 + temp_r1_2), s16 *, 0x69A) = 0x100;
        M2C_FIELD((*(void **)0x03002680 + temp_r1_2), s16 *, 0x69C) = 0;
        var_r4_2 += 1;
    } while (var_r4_2 <= 0x1FU);
    M2C_FIELD(*(void **)0x03002680, s32 *, 0x7A4) = 0;
}
