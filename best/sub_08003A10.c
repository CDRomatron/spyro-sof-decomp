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

s32 sub_080641D0(void *, s32, s32);                 /* extern */

void sub_08003A10(void) {
    void *temp_r1;
    void *temp_r4;
    void *temp_r4_2;
    void *var_r3;
    void *var_r3_2;

    temp_r1 = *(void **)0x03001108;
    if ((temp_r1 != NULL) && (M2C_FIELD(temp_r1, u8 *, 0x44) == 0)) {
        var_r3 = M2C_FIELD(temp_r1, void **, 0x38);
loop_4:
        temp_r4 = M2C_FIELD(var_r3, void **, 0);
        if ((temp_r4 != NULL) && (!(1 & M2C_FIELD(var_r3, u16 *, 0xE)) || ((sub_080641D0(var_r3, M2C_FIELD(var_r3, s32 *, 0x10), M2C_FIELD(var_r3, s32 *, 8)) << 0x18) != 0))) {
            var_r3 = temp_r4;
            goto loop_4;
        }
    }
    if (M2C_FIELD((void *)0x03000868, u8 *, 0xC) == 0) {
        var_r3_2 = M2C_FIELD((void *)0x03000868, void **, 0);
loop_10:
        temp_r4_2 = M2C_FIELD(var_r3_2, void **, 0);
        if ((temp_r4_2 != NULL) && (!(1 & M2C_FIELD(var_r3_2, u16 *, 0xE)) || ((sub_080641D0(var_r3_2, M2C_FIELD(var_r3_2, s32 *, 0x10), M2C_FIELD(var_r3_2, s32 *, 8)) << 0x18) != 0))) {
            var_r3_2 = temp_r4_2;
            goto loop_10;
        }
    }
}
