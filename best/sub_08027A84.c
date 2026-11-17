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

M2C_UNK _08027490(void *, s32);                     /* extern */
u8 sub_08003220(s32);                               /* extern */
M2C_UNK sub_080034C0(u8);                           /* extern */
u8 sub_08003564(s32, u8);                           /* extern */

void sub_08027A84(void *arg0) {
    u8 temp_r5;

    temp_r5 = sub_08003564(0x08170D8C, (u8) M2C_FIELD(arg0, s32 *, 0x50));
    if ((u32) M2C_FIELD(arg0, u16 *, 0x54) > 0x77U) {
        _08027490(arg0, 2);
        if (temp_r5 != 0) {
            sub_080034C0((u8) M2C_FIELD(arg0, s32 *, 0x50));
        }
    } else if (temp_r5 != 0) {
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) sub_08003220(0x08170D8C);
    }
}
