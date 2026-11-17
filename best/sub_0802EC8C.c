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

M2C_UNK _0802E990(void *, s32);                     /* extern */
M2C_UNK sub_0800781C(s32, s32);                     /* extern */

void sub_0802EC8C(void *arg0) {
    s32 temp_r1;
    void *temp_r0;

    temp_r0 = arg0 + 0xC;
    temp_r1 = M2C_FIELD(temp_r0, s32 *, 8) - 0x80;
    M2C_FIELD(temp_r0, s32 *, 8) = temp_r1;
    if (temp_r1 <= (s32) M2C_FIELD(arg0, s32 *, 0x60)) {
        if (M2C_FIELD(arg0, u8 *, 0x68) != 0) {
            _0802E990(arg0, 4);
            sub_0800781C(0x6B, 1);
            return;
        }
        _0802E990(arg0, 0);
    }
}
