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

M2C_UNK sub_08008638(void *, void *);               /* extern */
M2C_UNK sub_08008810(s32, s32, void *);             /* extern */
M2C_UNK sub_0803A49C(void *, s32);                  /* extern */
M2C_UNK sub_0803A880(void *);                       /* extern */
s32 sub_08064FD8(s32, s32, s32, s32);               /* extern */
s32 sub_080650BC(u16);                              /* extern */

void sub_0803A77C(void *arg0) {
    s32 temp_ret;
    void *temp_r4;

    temp_r4 = arg0 + 0x30;
    sub_08008810(M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(arg0, s32 *, 0x40), temp_r4);
    sub_08008638(temp_r4, arg0 + 0x24);
    temp_ret = sub_080650BC(M2C_FIELD(arg0, u16 *, 0x88));
    if (sub_08064FD8(temp_ret, SECOND_REG(temp_ret), 0x406A4000, 0) >= 0) {
        sub_0803A49C(arg0, 1);
    }
    sub_0803A880(arg0);
}
