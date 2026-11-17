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

M2C_UNK sub_08062AE8(void *, u32);                  /* extern */

void sub_080030BC(u16 arg0) {
    s32 temp_r2;
    u32 temp_r1;
    u32 temp_r7;
    u32 var_r4;
    u8 *var_r0;
    void **var_r6;
    void *temp_r3;
    void *temp_r3_2;

    temp_r7 = (u32) (arg0 + 0xF) >> 4;
    temp_r3 = *(void **)0x08067B58;
    if (((u16) M2C_FIELD(temp_r3, s32 *, 4) != 0) && ((s32) M2C_FIELD(temp_r3, s32 *, 4) >= 0) && (M2C_FIELD((void *)0x03000840, u8 *, 0x1F) != 0)) {
        sub_08062AE8(temp_r3, temp_r7);
    }
    var_r4 = 1;
    temp_r1 = 0x60000U >> 0x10;
    if (temp_r1 > 1U) {
        var_r6 = (void **)0x08067B64;
        do {
            temp_r3_2 = *var_r6;
            temp_r2 = M2C_FIELD(temp_r3_2, s32 *, 4);
            if (((s32) M2C_FIELD((void *)0x03000840, u16 *, 0x18) >> var_r4) & 1) {
                var_r0 = (void *)0x03000840 + 0x21;
            } else {
                var_r0 = (void *)0x03000840 + 0x20;
            }
            if ((0xFFFF & temp_r2) && (temp_r2 >= 0) && (*var_r0 != 0)) {
                sub_08062AE8(temp_r3_2, temp_r7);
            }
            var_r6 += 0xC;
            var_r4 += 1;
        } while (var_r4 < temp_r1);
    }
}
