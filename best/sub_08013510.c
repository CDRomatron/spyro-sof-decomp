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

s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_0800FDB4(void *, s32, s32 *);           /* extern */
M2C_UNK sub_080528D4(s32, s32, s32, s32);           /* extern */

void sub_08013510(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_r4;
    u8 temp_r0;
    void *temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x46) - 1;
    M2C_FIELD(arg0, u8 *, 0x46) = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_r4 != 0) {
            temp_r0_2 = arg0 + 0xC;
            sub_080528D4(temp_r4, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r0_2, s32 *, 4), M2C_FIELD(temp_r0_2, s32 *, 8));
            sp0 = (sub_0800897C() & 0x7F) - 0x40;
            sp4 = (sub_0800897C() & 0x7F) - 0x40;
            sp8 = (0x3FF & sub_0800897C()) + 0x300;
            sub_0800FDB4(arg0, M2C_FIELD(arg0, s32 *, 0x24), &sp0);
        }
    }
}
