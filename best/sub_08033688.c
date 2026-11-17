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

M2C_UNK sub_08008638(void *, void *, void *);       /* extern */
M2C_UNK sub_08008810(s32, s32, void *);             /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_08033560(void *);                       /* extern */
M2C_UNK sub_08033884(void *, s32);                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
s32 sub_08052210(void *, s32, s32);                 /* extern */

void sub_08033688(void *arg0) {
    u8 temp_r0;
    void *temp_r4;
    void *temp_r5;

    temp_r5 = arg0 + 0x24;
    temp_r4 = arg0 + 0x64;
    sub_08008810(M2C_FIELD(arg0, s32 *, 0x90), M2C_FIELD(arg0, s32 *, 0x94), temp_r4);
    sub_08008638(temp_r4, temp_r5, temp_r5);
    M2C_FIELD(temp_r5, s32 *, 8) = sub_080502E8(temp_r5);
    if ((sub_08052210(temp_r5, M2C_FIELD(temp_r4, s32 *, 0x40) + 0xC, 0x1000) << 0x18) != 0) {
        sub_08033884(arg0, 3);
        temp_r0 = M2C_FIELD(arg0, u8 *, 0xAE);
        if (temp_r0 == 0) {
            sub_0800FE28(arg0, M2C_FIELD(temp_r4, s32 *, 0x40), 0x39);
        } else if (temp_r0 == 1) {
            sub_0800FE28(arg0, M2C_FIELD(temp_r4, s32 *, 0x40), 0x3A);
        }
    }
    sub_08033560(arg0);
}
