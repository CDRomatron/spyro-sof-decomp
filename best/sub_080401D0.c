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

/* Warning: missing "bx $lr" in last block of sub_080401D0 (_080401F4). */

s32 _08040218();                                    /* extern */
M2C_UNK sub_08040100(s32, s32);                     /* extern */
s32 sub_08052140(s32, s32);                         /* extern */

s32 sub_080401D0(s32 arg0) {
    s32 temp_r4;

    temp_r4 = arg0 + 0xC;
    if ((sub_08052140(temp_r4, 0x2000) << 0x18) == 0) {
        sub_08040100(arg0, 0);
        return _08040218();
    }
    return temp_r4;
}
