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

M2C_UNK _08027C94(void *, s32);                     /* extern */
s32 sub_08055038(void *);                           /* extern */

void sub_08028498(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x7A) == 3) {
        if ((sub_08055038(arg0 + 0xC) << 0x18) == 0) {
            _08027C94(arg0, 7);
        }
    } else if ((u32) M2C_FIELD(arg0, u32 *, 0x70) > 0x3CU) {
        _08027C94(arg0, 7);
    }
}
