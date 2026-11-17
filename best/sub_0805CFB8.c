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

s32 sub_0805CFB8(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r1_2;
    void *temp_r1;
    void *temp_r2;
    void *temp_r2_2;

    temp_r1 = M2C_FIELD(arg0, void **, 0);
    temp_r0 = M2C_FIELD(temp_r1, s32 *, 0x24);
    if (temp_r0 <= 0x9FFF) {
        M2C_FIELD(temp_r1, s32 *, 0x24) = (s32) (temp_r0 + 0x200);
    }
    temp_r2 = temp_r1 + 0xC8;
    temp_r0_2 = M2C_FIELD(temp_r2, s32 *, 0x24);
    if (temp_r0_2 <= 0x9FFF) {
        M2C_FIELD(temp_r2, s32 *, 0x24) = (s32) (temp_r0_2 + 0x200);
    }
    temp_r0_3 = M2C_FIELD(temp_r1, s32 *, 0x4C);
    if (temp_r0_3 > 0xFFFFC000) {
        M2C_FIELD(temp_r1, s32 *, 0x4C) = (s32) (temp_r0_3 + 0xFFFFFE00);
    }
    temp_r0_4 = M2C_FIELD(temp_r1, s32 *, 0x74);
    if (temp_r0_4 > 0xFFFFC000) {
        M2C_FIELD(temp_r1, s32 *, 0x74) = (s32) (temp_r0_4 + 0xFFFFFE00);
    }
    temp_r2_2 = temp_r1 + 0xF0;
    temp_r1_2 = M2C_FIELD(temp_r2_2, s32 *, 0x24);
    if (temp_r1_2 > 0xFFFFA000) {
        M2C_FIELD(temp_r2_2, s32 *, 0x24) = (s32) (temp_r1_2 + 0xFFFFFE00);
    }
    M2C_FIELD(arg0, s32 *, 0x218) = (s32) (M2C_FIELD(arg0, s32 *, 0x218) + 0x200);
    M2C_FIELD(arg0, s32 *, 0x21C) = (s32) (M2C_FIELD(arg0, s32 *, 0x21C) + 0xFFFFFE00);
    M2C_FIELD(arg0, s32 *, 0x220) = (s32) (M2C_FIELD(arg0, s32 *, 0x220) + 0xFFFFFE00);
    if ((s32) (M2C_FIELD(arg0, s32 *, 0x22C) << 8) > 0x2EFF) {
        M2C_FIELD(arg0, s32 *, 0x228) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x22C) = (s32) (M2C_FIELD(arg0, s32 *, 0x22C) + 1);
    return M2C_FIELD(arg0, s32 *, 0x228);
}
