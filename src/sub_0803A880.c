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
s32 sub_0801DA58(s32, s32, s32);                    /* extern */
M2C_UNK sub_0803A49C(void *, s32);                  /* extern */
s32 sub_08052140(s32, s32);                         /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_0803A880(void *arg0) {
    s32 temp_r0;
    s32 temp_r5;

    if (sub_0805399C() == 3) {
        temp_r5 = arg0 + 0x24;
        if ((sub_08052140(temp_r5, 0xD00) << 0x18) != 0) {
            sub_0803A49C(arg0, 2);
            sub_0800FE28(arg0, M2C_FIELD(*(void **)0x030026C0, s32 *, 0x51C), 0xC);
            return;
        }
        if ((M2C_FIELD(arg0, u8 *, 0x8A) == 0) && ((temp_r0 = sub_0801DA58(temp_r5, 0xD00, 0x800), (temp_r0 == 4)) || (temp_r0 == 1))) {
            sub_0803A49C(arg0, 2);
        }
    }
}
