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

M2C_UNK _080298B8(void *, s32);                     /* extern */
s32 sub_08004508(s32);                              /* extern */
M2C_UNK sub_080296C4(void *);                       /* extern */
s32 sub_080529E8(void *, s32);                      /* extern */
s32 sub_08052BB4(void *);                           /* extern */

void sub_080297C0(void *arg0) {
    s32 temp_r0;
    u8 temp_r0_2;

    temp_r0 = sub_08004508(M2C_FIELD(arg0, s32 *, 0x6C));
    if ((temp_r0 != 0x1F0004) && (temp_r0 != 0x1F0006) && (temp_r0 != 0x1F0001)) {
        M2C_FIELD(arg0, s32 *, 0x7C) = sub_08052BB4(arg0 + 0xC);
    }
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x8B) + 1;
    M2C_FIELD(arg0, u8 *, 0x8B) = temp_r0_2;
    if (!(temp_r0_2 & 3) && (temp_r0 == 0x1F0002) && (M2C_FIELD(arg0, u16 *, 0x80) == 0) && ((sub_080529E8(arg0 + 0xC, 0x3700) << 0x18) != 0)) {
        _080298B8(arg0, 1);
    }
    sub_080296C4(arg0);
}
