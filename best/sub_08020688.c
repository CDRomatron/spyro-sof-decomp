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

M2C_UNK _0801F9AC(void *, s32);                     /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_0801FAE0(void *, s32);                  /* extern */
void *sub_080529D4();                               /* extern */

void sub_08020688(void *arg0) {
    s32 temp_r5;

    temp_r5 = sub_0800897C();
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF4) > (u32) M2C_FIELD(arg0, u32 *, 0xF8)) {
        _0801F9AC(arg0, 1);
    }
    if (!(0x3F & temp_r5)) {
        M2C_FIELD(arg0, s32 *, 0xE4) = (s32) (0xFFFF & temp_r5);
    }
    sub_0801FAE0(arg0, M2C_FIELD(sub_080529D4(), s32 *, 0x14) + 0x1400);
}
