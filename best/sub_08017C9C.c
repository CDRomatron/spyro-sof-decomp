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
M2C_UNK sub_08008638(void *, void *, void *);       /* extern */
M2C_UNK sub_08008810(s32, s32, void *);             /* extern */
M2C_UNK sub_08017004(void *);                       /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_080510C0(void *, s32, s32 *, s32, s32); /* extern */
s32 sub_08052140(void *, s32);                      /* extern */
s32 sub_08052BB4(void *);                           /* extern */

void sub_08017C9C(void *arg0) {
    s32 sp8;
    void *temp_r4;
    void *temp_r5;

    sp8 = 0x80;
    temp_r5 = arg0 + 0x24;
    M2C_FIELD(arg0, s32 *, 0x94) = sub_08052BB4(temp_r5);
    if ((sub_08052140(temp_r5, M2C_FIELD(arg0, s32 *, 0x98)) << 0x18) != 0) {
        if (M2C_FIELD(arg0, u16 *, 0xA0) == 0) {
            _08017548(arg0, 2);
            return;
        }
        _08017548(arg0, 3);
        return;
    }
    sub_080510C0(temp_r5, M2C_FIELD(arg0, s32 *, 0x94), &sp8, 0x400, 0xC00);
    sub_08017004(arg0);
    temp_r4 = arg0 + 0x64;
    sub_08008810(M2C_FIELD(arg0, s32 *, 0x94), sp8, temp_r4);
    sub_08008638(temp_r4, temp_r5, temp_r5);
    M2C_FIELD(temp_r5, s32 *, 8) = sub_080502E8(temp_r5);
}
