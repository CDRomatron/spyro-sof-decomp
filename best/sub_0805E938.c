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

M2C_UNK sub_0800C228(s32, s32, s32, s32);           /* extern */
M2C_UNK sub_0800C308(s32, void *, s32);             /* extern */
M2C_UNK sub_0800C3FC(s32, s32, s32);                /* extern */
s32 sub_0800D518();                                 /* extern */
M2C_UNK sub_0800D638(s32, s32);                     /* extern */
M2C_UNK sub_0800D684(s32, s32, s32);                /* extern */
M2C_UNK sub_0800D6B4(s32, s32);                     /* extern */
M2C_UNK sub_0800D730(s32, s32);                     /* extern */
M2C_UNK sub_0800D734(s32, s32);                     /* extern */
M2C_UNK sub_0800D73C(s32);                          /* extern */
M2C_UNK sub_0805E864(s32);                          /* extern */

void sub_0805E938(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    temp_r0 = sub_0800D518();
    sub_0800D730(temp_r0, -1);
    sub_0800C308(temp_r0, *(void **)0x030026EC + 0x64, 9);
    sub_0800D6B4(temp_r0, 5);
    sub_0800C228(temp_r0, 2, 1, 3);
    sub_0800D734(temp_r0, 0);
    M2C_FIELD(*(void **)0x030026EC, s32 *, 0x5C) = temp_r0;
    temp_r0_2 = sub_0800D518();
    sub_0800D638(temp_r0_2, 0xA10002);
    sub_0800D684(temp_r0_2, 2, 1);
    sub_0800D730(temp_r0_2, -1);
    sub_0800C308(temp_r0_2, *(void **)0x030026EC + 0x60, 2);
    sub_0800D6B4(temp_r0_2, 5);
    sub_0800C228(temp_r0_2, 2, 1, 3);
    sub_0800D734(temp_r0_2, 1);
    M2C_FIELD(*(void **)0x030026EC, s32 *, 0x54) = temp_r0_2;
    temp_r0_3 = sub_0800D518();
    sub_0800D638(temp_r0_3, 0xA10001);
    sub_0800D684(temp_r0_3, 2, 1);
    sub_0800D730(temp_r0_3, -1);
    sub_0800C308(temp_r0_3, *(void **)0x030026EC + 0x62, 2);
    sub_0800D6B4(temp_r0_3, 5);
    sub_0800C228(temp_r0_3, 2, 4, 3);
    sub_0800D734(temp_r0_3, 2);
    M2C_FIELD(*(void **)0x030026EC, s32 *, 0x58) = temp_r0_3;
    M2C_FIELD(*(void **)0x030026EC, s8 *, 0x63) = 0;
    M2C_FIELD(*(void **)0x030026EC, s8 *, 0x62) = 0;
    sub_0800D73C(M2C_FIELD(*(void **)0x030026EC, s32 *, 0x58));
    M2C_FIELD(*(void **)0x030026EC, s8 *, 0x61) = 3;
    M2C_FIELD(*(void **)0x030026EC, s8 *, 0x60) = 0;
    sub_0800D73C(M2C_FIELD(*(void **)0x030026EC, s32 *, 0x54));
    sub_0805E864(0);
    sub_0800C3FC(M2C_FIELD(*(void **)0x030026EC, s32 *, 0x54), 0, 0);
    sub_0800C3FC(M2C_FIELD(*(void **)0x030026EC, s32 *, 0x58), 0, 0);
    sub_0800C3FC(M2C_FIELD(*(void **)0x030026EC, s32 *, 0x5C), 0, 0);
}
