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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08003DA8(s32, s32);                     /* extern */
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_0800445C(s32, s32, s32);                /* extern */

u32 sub_0805CBC0(void *arg0) {
    s32 *var_r8;
    s32 temp_r1;
    s32 temp_r1_2;
    u32 temp_r0;
    void *temp_r1_3;
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = M2C_FIELD(arg0, void **, 0);
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x228);
    switch (temp_r0) {                              /* irregular */
    case 1:
        var_r8 = arg0 + 0x22C;
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x22C);
        if (temp_r1 == 1) {
            sub_08003220(0x081716A0);
        }
        if ((u32) (temp_r1 * 0x300) <= 0x73FFU) {
            M2C_FIELD(temp_r4, s32 *, 0x48) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x48) + 0x300);
            M2C_FIELD(temp_r4, s32 *, 0x98) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x98) + 0x300);
            sub_08004020(M2C_FIELD(temp_r4, s32 *, 0x84));
        } else {
            sub_08003C58(M2C_FIELD(temp_r4, s32 *, 0x84), 0x990002);
            sub_08003DA8(M2C_FIELD(temp_r4, s32 *, 0x84), 0);
            sub_0800445C(M2C_FIELD((M2C_FIELD(arg0, void **, 0) + 0xA0), s32 *, 0xC), 1, 0);
            M2C_FIELD(arg0, u32 *, 0x228) = 2U;
block_13:
            *var_r8 = 0;
        }
        break;
    case 2:
        var_r8 = arg0 + 0x22C;
        temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x22C);
        if (temp_r1_2 == 1) {
            sub_08003220(0x081716A0);
        }
        if ((u32) (temp_r1_2 * 0x300) <= 0x77FFU) {
            M2C_FIELD(temp_r4, s32 *, 0x70) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x70) + 0xFFFFFD00);
            temp_r1_3 = temp_r4 + 0xA0;
            M2C_FIELD(temp_r1_3, s32 *, 0x20) = (s32) (M2C_FIELD(temp_r1_3, s32 *, 0x20) + 0xFFFFFD00);
            sub_08004020(M2C_FIELD(temp_r1_3, s32 *, 0xC));
        } else {
            temp_r4_2 = temp_r4 + 0xA0;
            sub_08003C58(M2C_FIELD(temp_r4_2, s32 *, 0xC), 0x990003);
            sub_08003DA8(M2C_FIELD(temp_r4_2, s32 *, 0xC), 0);
            sub_0800445C(M2C_FIELD((M2C_FIELD(arg0, void **, 0) + 0xA0), s32 *, 0xC), 0, 0);
            M2C_FIELD(arg0, u32 *, 0x228) = 0U;
            goto block_13;
        }
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x22C) = (s32) (M2C_FIELD(arg0, s32 *, 0x22C) + 1);
    return M2C_FIELD(arg0, u32 *, 0x228);
}
