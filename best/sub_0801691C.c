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

M2C_UNK _08016340(void *, s32);                     /* extern */
M2C_UNK sub_08015FD8(void *);                       /* extern */
s32 sub_08052140(s32, s32);                         /* extern */

void sub_0801691C(void *arg0) {
    s16 *var_r1;
    s16 var_r0;
    u16 temp_r0;

    if ((sub_08052140(arg0 + 0x24, 0x3200) << 0x18) != 0) {
        var_r1 = arg0 + 0xA8;
        var_r0 = 0x12C;
        goto block_5;
    }
    var_r1 = arg0 + 0xA8;
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xA8);
    if (temp_r0 == 0) {
        _08016340(arg0, 0);
    } else {
        var_r0 = temp_r0 - 1;
block_5:
        *var_r1 = var_r0;
    }
    sub_08015FD8(arg0);
}
