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

M2C_UNK sub_0803050C(void *);                       /* extern */
s32 sub_080529E8(s32, s32);                         /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_0803075C(void *arg0) {
    if (sub_0805399C() == 3) {
        if ((sub_080529E8(arg0 + 0x24, 0x3000) << 0x18) != 0) {
            M2C_FIELD(arg0, s8 *, 0xA3) = 2;
            M2C_FIELD(arg0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(arg0, u16 *, 0x22));
        }
        sub_0803050C(arg0);
    }
}
