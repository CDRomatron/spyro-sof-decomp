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

M2C_UNK _080227F4(void *, s32);                     /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */

s32 sub_0802332C(void *arg1, s32 arg2) {
    if (arg2 == 8) {
        sub_0800FE28(arg1, M2C_FIELD(arg1, s32 *, 0x24), 5);
        if (M2C_FIELD(arg1, u8 *, 0x8A) != 0) {
            _080227F4(arg1, 0xE);
        } else {
            _080227F4(arg1, 0);
            M2C_FIELD(arg1, s32 *, 0x84) = 0x3C;
        }
    }
    return 1;
}
