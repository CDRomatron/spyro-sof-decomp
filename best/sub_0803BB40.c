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

s32 sub_08007498(u16);                              /* extern */
M2C_UNK sub_08050098(M2C_UNK *, M2C_UNK *, void *); /* extern */
s32 sub_080502E8(M2C_UNK *, s32);                   /* extern */
M2C_UNK sub_080543B0(u8);                           /* extern */
M2C_UNK sub_080545E8(u8);                           /* extern */
extern M2C_UNK sub_0803C4C0;

s32 sub_0803BB40(void *arg1, u16 arg2, u32 arg3) {
    M2C_UNK sp0;
    s32 sp8;
    u8 temp_r0;
    void *temp_r0_2;

    if (arg2 == 9) {
        switch (arg3) {                             /* irregular */
        case 0x59:
        case 0x55:
            temp_r0 = M2C_FIELD(arg1, u8 *, 0x65) - 1;
            M2C_FIELD(arg1, u8 *, 0x65) = temp_r0;
            if (((temp_r0 << 0x18) == 0) && ((sub_08007498((u16) M2C_FIELD(arg1, s32 *, 0x60)) << 0x18) == 0)) {
                temp_r0_2 = arg1 + 0x24;
                M2C_FIELD(&sp0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
                M2C_FIELD(&sp0, s32 *, 4) = (s32) M2C_FIELD(temp_r0_2, s32 *, 4);
                M2C_FIELD(&sp0, s32 *, 8) = (s32) M2C_FIELD(temp_r0_2, s32 *, 8);
                sp8 = sub_080502E8(&sp0, &sp0 + 0xC);
                sub_08050098(&sp0, &sub_0803C4C0, arg1);
            }
            sub_080545E8(M2C_FIELD(arg1, u8 *, 0x65));
            break;
        case 0x56:
        case 0x5A:
            M2C_FIELD(arg1, u8 *, 0x65) = (u8) (M2C_FIELD(arg1, u8 *, 0x65) + 1);
            sub_080543B0(M2C_FIELD(arg1, u8 *, 0x65));
            break;
        }
    }
    return 0;
}
