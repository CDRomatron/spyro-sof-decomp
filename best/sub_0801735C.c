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

M2C_UNK _08017548(void *, s32);                     /* extern */
M2C_UNK sub_0800443C(s32, s32);                     /* extern */
M2C_UNK sub_0800D9EC(void *, void *);               /* extern */
M2C_UNK sub_0800FCA4(s32, s32, s32);                /* extern */
M2C_UNK sub_08017004(void *);                       /* extern */

void sub_0801735C(void *arg0) {
    u16 temp_r0;
    u16 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u16 *, 0xA4);
    if ((u32) temp_r2 <= 0x77U) {
        if (!(3 & temp_r2)) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) - 0x80);
            M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 0x80);
        }
        if ((3 & M2C_FIELD(arg0, u16 *, 0xA4)) == 2) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 0x80);
            M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) - 0x80);
        }
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xA4);
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) temp_r0;
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) temp_r0;
        sub_0800FCA4(0x92, 1, (arg0 + 0xA4) - 0x80);
        if (M2C_FIELD(arg0, u8 *, 0xA8) != 0) {
            _08017548(arg0, 0);
        } else {
            _08017548(arg0, 3);
        }
        sub_0800443C(M2C_FIELD(arg0, s32 *, 0x84), -1);
    } else {
        M2C_FIELD(arg0, u16 *, 0xA4) = (u16) (temp_r0 - 1);
        sub_0800D9EC(arg0 + 0x3C, arg0 + 0x24);
    }
    sub_08017004(arg0);
}
