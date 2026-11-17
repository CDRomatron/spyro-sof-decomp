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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004508(s32);                              /* extern */
M2C_UNK sub_0802CECC(void *);                       /* extern */
s32 sub_080529E8(void *, s32);                      /* extern */
s32 sub_08052BB4(void *);                           /* extern */

void sub_0802D168(void *arg0) {
    void *temp_r5;

    if ((M2C_FIELD(arg0, u16 *, 0xA0) == 0) && (sub_08004508(M2C_FIELD(arg0, s32 *, 0x44)) == 0x400003)) {
        temp_r5 = arg0 + 0x24;
        if ((sub_080529E8(temp_r5, 0x3000) << 0x18) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C) = sub_08052BB4(temp_r5);
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x44), 0x400004);
        }
    }
    sub_0802CECC(arg0);
}
