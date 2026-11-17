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
void *sub_08047298(s32, s32, s32, s32);             /* extern */

s32 sub_080467A8(void *arg0) {
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;
    u32 temp_r0;
    void *temp_r0_2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x34);
    if ((temp_r0 > 6U) || (temp_r0 < 5U)) {
        temp_r0_2 = sub_08047298(temp_r2 + M2C_FIELD(arg0, s32 *, 0x24), temp_r1 + M2C_FIELD(arg0, s32 *, 0x28), temp_r2 + M2C_FIELD(arg0, s32 *, 0x2C), temp_r1 + M2C_FIELD(arg0, s32 *, 0x30));
        if (temp_r0_2 != NULL) {
            temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x44);
            if (temp_r0_3 > 0) {
                M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0_3 - 1);
                M2C_FIELD(arg0, u32 *, 0x34) = 5U;
            } else {
                M2C_FIELD(arg0, u32 *, 0x34) = 6U;
                M2C_FIELD(arg0, s32 *, 0x48) = 0x2D;
                sub_08003220(0x0817141C);
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 0xFFFFFB00;
            if ((s32) M2C_FIELD(temp_r0_2, s32 *, 0x18) > 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) | 2);
                var_r0 = 0x100;
            } else {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~2);
                var_r0 = 0xFFFFFF00;
            }
            M2C_FIELD(arg0, s32 *, 0x18) = var_r0;
        }
    }
    return M2C_FIELD(arg0, s32 *, 0x14);
}
