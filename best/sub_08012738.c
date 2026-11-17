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

M2C_UNK _08012124(void *, s32);                     /* extern */
s32 sub_08052140(void *, s32);                      /* extern */

void sub_08012738(void *arg0) {
    u16 temp_r0;
    void *temp_r0_2;
    void *temp_r5;

    temp_r5 = arg0 + 0xC;
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xA4);
    if (temp_r0 == 0) {
        if ((sub_08052140(temp_r5, 0x5A00) << 0x18) == 0) {
            temp_r0_2 = arg0 + 0x5C;
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0x5C);
            M2C_FIELD(temp_r5, s32 *, 4) = (s32) M2C_FIELD(temp_r0_2, s32 *, 4);
            M2C_FIELD(temp_r5, s32 *, 8) = (s32) M2C_FIELD(temp_r0_2, s32 *, 8);
            _08012124(arg0, 0);
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0xA4) = (u16) (temp_r0 - 1);
    }
}
