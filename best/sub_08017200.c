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
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_08017004(void *);                       /* extern */
s32 sub_0801DAD0();                                 /* extern */
s32 sub_08052140(s32, s32);                         /* extern */
s32 sub_08052CF4(s32);                              /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_08017200(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = arg0 + 0x24;
    if ((sub_08052140(temp_r5, M2C_FIELD(arg0, s32 *, 0x98)) << 0x18) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0xAA) != 0) {
            if ((M2C_FIELD(arg0, u16 *, 0xA0) == 0) && (sub_0805399C() == 3)) {
                if ((M2C_FIELD(arg0, u8 *, 0xB2) == 0) || ((sub_0801DAD0() << 0x18) == 0)) {
                    _08017548(arg0, 2);
                }
            } else if (M2C_FIELD(arg0, u8 *, 0xA8) == 0) {
                _08017548(arg0, 3);
            }
        } else {
            temp_r0 = sub_08052CF4(0x66);
            if (temp_r0 != 0) {
                sub_0800FE28(arg0, temp_r0, 0x14);
            }
        }
    } else if ((M2C_FIELD(arg0, u8 *, 0xA8) == 0) && ((sub_08052140(temp_r5, 0x4600) << 0x18) != 0) && (M2C_FIELD(arg0, u16 *, 0xA0) == 0)) {
        _08017548(arg0, 1);
    }
    sub_08017004(arg0);
}
