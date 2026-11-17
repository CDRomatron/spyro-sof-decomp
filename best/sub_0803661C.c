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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */
M2C_UNK sub_08036078(void *);                       /* extern */
s32 sub_08052140(void *, s32);                      /* extern */

void sub_0803661C(void *arg0) {
    u16 temp_r0;
    void *temp_r6;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0xB4) - 1;
    M2C_FIELD(arg0, u16 *, 0xB4) = temp_r0;
    if ((temp_r0 << 0x10) == 0xFFFF0000) {
        temp_r6 = arg0 + 0x24;
        if ((sub_08052140(temp_r6, 0x5000) << 0x18) != 0) {
            sub_0800FCA4(0x188, 1, temp_r6);
            sub_08003220(0x081714FC);
        }
        M2C_FIELD(arg0, u16 *, 0xB4) = 0x28U;
    }
    sub_08036078(arg0);
}
