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

s32 sub_080475C8(void *arg0) {
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r2_2;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    u32 temp_r0;
    void *temp_r2;

    if (M2C_FIELD(*(void **)0x030026A4, void **, 0x24) != (*(void **)0x030026A4 + 0x28)) {
        temp_r2 = M2C_FIELD(*(void **)0x030026A4, void **, 0x24);
        temp_r0 = M2C_FIELD(temp_r2, u32 *, 0x38);
        if (temp_r0 != 6) {
            if (temp_r0 <= 6U) {
                if (temp_r0 != 2) {
                    goto block_7;
                }
                goto block_16;
            }
            if ((temp_r0 > 0xAU) || (temp_r0 < 8U)) {
block_7:
                temp_r1 = M2C_FIELD(temp_r2, s32 *, 0x10);
                temp_r6 = temp_r1 + M2C_FIELD(temp_r2, s32 *, 0x24);
                temp_r7 = temp_r1 + M2C_FIELD(temp_r2, s32 *, 0x2C);
                temp_r1_2 = M2C_FIELD(temp_r2, s32 *, 0x14);
                temp_r0_2 = M2C_FIELD(temp_r2, s32 *, 0x28) + temp_r1_2;
                temp_r1_3 = temp_r1_2 + M2C_FIELD(temp_r2, s32 *, 0x30);
                temp_r1_4 = M2C_FIELD(arg0, s32 *, 0x20);
                temp_r2_2 = temp_r1_4 + M2C_FIELD(arg0, s32 *, 0x2C);
                temp_r4 = temp_r1_4 + M2C_FIELD(arg0, s32 *, 0x34);
                temp_r1_5 = M2C_FIELD(arg0, s32 *, 0x24);
                temp_r5 = temp_r1_5 + M2C_FIELD(arg0, s32 *, 0x30);
                temp_r0_3 = temp_r1_5 + M2C_FIELD(arg0, s32 *, 0x38);
                if (((temp_r6 >= temp_r2_2) || (temp_r7 >= temp_r2_2)) && ((temp_r6 <= temp_r4) || (temp_r7 <= temp_r4)) && ((temp_r0_2 >= temp_r5) || (temp_r1_3 >= temp_r5)) && ((temp_r0_2 <= temp_r0_3) || (temp_r1_3 <= temp_r0_3))) {
                    return 1;
                }
                goto block_16;
            }
            goto block_16;
        }
    }
block_16:
    return 0;
}
