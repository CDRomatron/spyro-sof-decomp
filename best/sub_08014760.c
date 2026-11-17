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

M2C_UNK sub_08014360(void *, s32);                  /* extern */

s32 sub_08014760(s32 arg0, void *arg1, u16 arg2, u32 arg3) {
    s32 var_r0;
    s8 *var_r1;

    var_r0 = 0;
    if (arg2 == 9) {
        switch (arg3) {                             /* irregular */
        case 26:
            var_r1 = arg1 + 0xA2;
block_10:
            *var_r1 = 1;
            break;
        case 28:
            if (M2C_FIELD(arg1, u8 *, 0xA4) != 0) {
                M2C_FIELD((arg1 + 0x34), s32 *, 0x60) = arg0;
                var_r1 = arg1 + 0xA3;
                goto block_10;
            }
            break;
        case 30:
            sub_08014360(arg1, 3);
            break;
        }
        var_r0 = 1;
    }
    return var_r0;
}
