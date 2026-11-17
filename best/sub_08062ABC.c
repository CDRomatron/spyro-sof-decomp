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

M2C_UNK sub_08062890(s32);                          /* extern */

void sub_08062ABC(void) {
    s32 *var_r5;
    u32 temp_r0;
    u32 var_r4;

    temp_r0 = 0x60000U >> 0x10;
    if (temp_r0 != 0) {
        var_r5 = (s32 *)0x08067B58;
        var_r4 = temp_r0;
        do {
            sub_08062890(*var_r5);
            var_r5 += 0xC;
            var_r4 -= 1;
        } while (var_r4 != 0);
    }
}
