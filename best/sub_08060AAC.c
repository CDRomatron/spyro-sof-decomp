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

s32 sub_08001D7C(s32);                              /* extern */
s32 sub_08001DD8(s32, s32, s32, s32);               /* extern */
s32 sub_08001F18(s32, s32, s32, s32, s32, s32);     /* extern */
M2C_UNK sub_080024DC(s32, s32);                     /* extern */
M2C_UNK sub_08002534(s32, s32);                     /* extern */
M2C_UNK sub_08002540(s32, s32);                     /* extern */
M2C_UNK sub_08002564(s32);                          /* extern */
M2C_UNK sub_080025B4(s32);                          /* extern */
M2C_UNK sub_08002640(s32, u16, s32);                /* extern */
u32 sub_080026F0(s32, s32);                         /* extern */
M2C_UNK sub_08002848(s32, s32, s32);                /* extern */
void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08004478(s32, s32);                     /* extern */

void sub_08060AAC(void) {
    s32 temp_r1;
    s32 temp_r1_2;

    *(void **)0x030026F0 = sub_08002B34(0x18, 0);
    M2C_FIELD(*(void **)0x030026F0, s32 *, 0) = sub_08001D7C(0);
    M2C_FIELD(*(void **)0x030026F0, s32 *, 4) = sub_08001DD8(3, 0x0600C000, 0x100, M2C_FIELD(*(void **)0x030026F0, s32 *, 0));
    sub_080024DC(M2C_FIELD(*(void **)0x030026F0, s32 *, 4), M2C_FIELD(*(void **)0x030026F0, s32 *, 0));
    sub_08002534(M2C_FIELD(*(void **)0x030026F0, s32 *, 4), 0xF);
    sub_08002540(M2C_FIELD(*(void **)0x030026F0, s32 *, 4), 0);
    M2C_FIELD(*(void **)0x030026F0, s32 *, 8) = sub_08001F18(0, 8, 0x20, 8, 0x1F, M2C_FIELD(*(void **)0x030026F0, s32 *, 4));
    sub_08002564(M2C_FIELD(*(void **)0x030026F0, s32 *, 8));
    temp_r1 = 0x78 - (sub_080026F0(0x2EB, M2C_FIELD(*(void **)0x030026F0, s32 *, 4)) >> 1);
    M2C_FIELD(*(void **)0x030026F0, s32 *, 0x10) = temp_r1;
    sub_08002640(M2C_FIELD(*(void **)0x030026F0, s32 *, 8), (u16) temp_r1, 0);
    sub_08002848(0x2EB, M2C_FIELD(*(void **)0x030026F0, s32 *, 8), 1);
    temp_r1_2 = 0x78 - (sub_080026F0(0x2EC, M2C_FIELD(*(void **)0x030026F0, s32 *, 4)) >> 1);
    M2C_FIELD(*(void **)0x030026F0, s32 *, 0x14) = temp_r1_2;
    sub_08002640(M2C_FIELD(*(void **)0x030026F0, s32 *, 8), (u16) temp_r1_2, 0x10);
    sub_08002848(0x2EC, M2C_FIELD(*(void **)0x030026F0, s32 *, 8), 1);
    sub_080025B4(M2C_FIELD(*(void **)0x030026F0, s32 *, 8));
    M2C_FIELD(*(void **)0x030026F0, s32 *, 0xC) = sub_08004370();
    sub_08003C58(M2C_FIELD(*(void **)0x030026F0, s32 *, 0xC), 0x9F0000);
    sub_08004478(M2C_FIELD(*(void **)0x030026F0, s32 *, 0xC), 0);
    M2C_FIELD(*(void **)0x030026EC, s32 *, 0xD8) = 0;
}
