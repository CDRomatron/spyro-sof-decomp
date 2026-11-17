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

s32 sub_08004508(s32);                              /* extern */
M2C_UNK sub_08008638(s32, void *, s32);             /* extern */
M2C_UNK sub_0800BB40(s32, s16, s16, s32);           /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
s32 sub_080529E8(s32, s32);                         /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_0803DD70(void *arg0) {
    s16 temp_r2;
    s32 temp_r5;
    s8 temp_r6;
    u32 temp_r0_2;
    u8 temp_r0;

    temp_r5 = arg0 + 0x24;
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 0x19);
    sub_08008638(temp_r5, arg0 + 0x34, temp_r5);
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x6E) + 1;
    M2C_FIELD(arg0, u8 *, 0x6E) = temp_r0;
    temp_r6 = temp_r0 & 3;
    if ((temp_r6 == 0) && (sub_08004508(M2C_FIELD(arg0, s32 *, 0x58)) == 0x120008) && ((sub_080529E8(temp_r5, 0x800) << 0x18) != 0) && (sub_0805399C() != 5)) {
        sub_0800FE28(arg0, M2C_FIELD(*(void **)0x030026C0, s32 *, 0x51C), 0xC);
        M2C_FIELD(arg0, s8 *, 0x6D) = temp_r6;
    }
    temp_r0_2 = M2C_FIELD(arg0, u32 *, 0x68);
    if (temp_r0_2 > 0x80U) {
        M2C_FIELD(arg0, u32 *, 0x68) = (u32) (temp_r0_2 - 8);
    }
    temp_r2 = (s16) M2C_FIELD(arg0, u32 *, 0x68);
    sub_0800BB40(M2C_FIELD(arg0, s32 *, 0x58), temp_r2, temp_r2, 0);
}
