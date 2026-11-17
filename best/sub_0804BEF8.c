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

M2C_UNK sub_080003D8(u16);                          /* extern */
M2C_UNK sub_080034C0(s32);                          /* extern */
M2C_UNK sub_080037B0();                             /* extern */
M2C_UNK sub_080037E4(s32);                          /* extern */
M2C_UNK sub_08003C04(s32);                          /* extern */
u8 sub_08007324();                                  /* extern */
M2C_UNK sub_08009A68();                             /* extern */
M2C_UNK sub_0804BCB0();                             /* extern */
M2C_UNK sub_0804BD44();                             /* extern */
M2C_UNK sub_08061BD0(s32, s32);                     /* extern */

void sub_0804BEF8(void) {
    u16 temp_r0;

    sub_08009A68();
    sub_080037B0();
    sub_080037E4(0);
    M2C_FIELD((void *)0x030011B0, u16 *, 0) = 0xFFU;
    M2C_FIELD((void *)0x030011B0, u16 *, 4) = 0x10U;
    temp_r0 = *(u16 *)0x03001160;
    *(u16 *)0x03001160 = 0;
    sub_080003D8(temp_r0);
    if (M2C_FIELD(*(void **)0x030026A4, u8 *, 0xD4) == 0) {
        sub_080034C0(0);
    }
    if (M2C_FIELD(*(void **)0x030026A4, u8 *, 0xD4) != 0) {
        sub_08003C04(*(s32 *)0x030026A8);
        sub_08061BD0(1, sub_08007324() | 0x01000000);
        return;
    }
    if (M2C_FIELD(*(void **)0x030026A4, u8 *, 0xD5) != 0) {
        sub_08061BD0(6, 0x05000000);
        return;
    }
    if (M2C_FIELD(*(void **)0x030026A4, u8 *, 0xD6) != 0) {
        sub_0804BCB0();
        return;
    }
    sub_0804BD44();
}
