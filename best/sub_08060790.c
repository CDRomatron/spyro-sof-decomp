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

M2C_UNK sub_080641C8(s32);                          /* extern */

void sub_08060790(void) {
    s32 temp_r4;
    s8 *var_r1;
    s8 var_r0;
    void *temp_r1;
    void *temp_r1_2;

    if ((s32) (s8) M2C_FIELD(*(void **)0x030026EC, u8 *, 0xBF) > (s32) (s8) M2C_FIELD(*(void **)0x030026EC, u8 *, 0xBE)) {
        temp_r1 = *(void **)0x030026EC;
        var_r1 = temp_r1 + 0xBF;
        var_r0 = M2C_FIELD(temp_r1, u8 *, 0xBF) - 1;
        goto block_4;
    }
    if ((s32) (s8) M2C_FIELD(*(void **)0x030026EC, u8 *, 0xBF) < (s32) (s8) M2C_FIELD(*(void **)0x030026EC, u8 *, 0xBE)) {
        temp_r1_2 = *(void **)0x030026EC;
        var_r1 = temp_r1_2 + 0xBF;
        var_r0 = M2C_FIELD(temp_r1_2, u8 *, 0xBF) + 1;
block_4:
        *var_r1 = var_r0;
        *(u16 *)0x030011AC = (s8) M2C_FIELD(*(void **)0x030026EC, u8 *, 0xBF) | (((s8) M2C_FIELD(*(void **)0x030026EC, u8 *, 0xBF) << 0xC) | ((s8) M2C_FIELD(*(void **)0x030026EC, u8 *, 0xBF) << 8) | ((s8) M2C_FIELD(*(void **)0x030026EC, u8 *, 0xBF) * 0x10));
        return;
    }
    if (M2C_FIELD(*(void **)0x030026EC, s32 *, 0xC0) != 0) {
        temp_r4 = M2C_FIELD(*(void **)0x030026EC, s32 *, 0xC0);
        sub_080641C8(M2C_FIELD(*(void **)0x030026EC, s32 *, 0xC0));
        if (temp_r4 == M2C_FIELD(*(void **)0x030026EC, s32 *, 0xC0)) {
            M2C_FIELD(*(void **)0x030026EC, s32 *, 0xC0) = 0;
        }
    }
}
