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

M2C_UNK sub_08007764(u8);                           /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */
M2C_UNK sub_0800FD50(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_0800FDB4(void *, s32, s32 *);           /* extern */
M2C_UNK sub_080528D4(s32, s32, s32, s32);           /* extern */

void sub_08029D68(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r1;
    void *temp_r4;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x78);
    if (temp_r1 != 0) {
        sub_0800FD50(arg0, temp_r1, 9, 0xC);
    }
    temp_r4 = arg0 + 0xC;
    sub_0800FCA4(0x8D, 1, temp_r4);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_r0 != 0) {
        sub_080528D4(temp_r0, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r4, s32 *, 4), M2C_FIELD(temp_r4, s32 *, 8));
        sp0 = (sub_0800897C() & 0x7F) - 0x40;
        sp4 = (sub_0800897C() & 0x7F) - 0x40;
        sp8 = (0x3FF & sub_0800897C()) + 0x600;
        sub_0800FDB4(arg0, M2C_FIELD(arg0, s32 *, 0x68), &sp0);
    }
    M2C_FIELD(arg0, s8 *, 0x8A) = 0;
    sub_08007764(M2C_FIELD(arg0, u8 *, 0x88));
}
