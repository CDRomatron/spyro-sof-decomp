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

M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_0803A49C(void *, s32);                  /* extern */
s32 sub_08052140(s32, s32);                         /* extern */
s32 sub_080529D4();                                 /* extern */

void sub_0803A830(void *arg0) {
    if (!(3 & M2C_FIELD(arg0, u16 *, 0x88)) && ((sub_08052140(arg0 + 0x24, 0xD00) << 0x18) != 0)) {
        sub_0800FE28(arg0, sub_080529D4(), 0x50);
    }
    if ((u32) M2C_FIELD(arg0, u16 *, 0x88) > 0x12CU) {
        sub_0803A49C(arg0, 3);
    }
}
