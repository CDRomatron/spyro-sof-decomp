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

M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */

void sub_08014814(void *arg0) {
    s32 *var_r7;
    s32 temp_r1;
    u32 var_r5;

    var_r5 = 0;
    if ((u32) M2C_FIELD(arg0, u8 *, 0x9F) > 0U) {
        var_r7 = arg0 + 0x7C;
        do {
            temp_r1 = *var_r7;
            var_r7 += 4;
            sub_0800FE28(arg0, temp_r1, 0x1F);
            var_r5 += 1;
        } while (var_r5 < (u32) M2C_FIELD(arg0, u8 *, 0x9F));
    }
}
