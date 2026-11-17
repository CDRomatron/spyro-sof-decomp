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

M2C_UNK sub_080620BC(s32);                          /* extern */
M2C_UNK sub_08062D98(s32);                          /* extern */
M2C_UNK sub_08063D7C(s32 *, void *, s32);           /* extern */
extern M2C_UNK sub_08062598;
extern M2C_UNK sub_08063D74;

void sub_08062CCC(void *arg0) {
    s32 sp0;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    if (*(s32 *)0x040000C4 & 0x02000000) {
        *(s32 *)0x040000C4 = 0x84400004;
    }
    *(s16 *)0x040000C6 = 0x400;
    *(s16 *)0x04000084 = 0x8F;
    *(s16 *)0x04000082 = 0xB0E;
    *(u8 *)0x04000089 = (0x3F & *(u8 *)0x04000089) | 0x40;
    M2C_FIELD((void *)0x040000BC, void **, 0) = (void *) (arg0 + 0x350);
    M2C_FIELD((void *)0x040000BC, s32 *, 4) = 0x040000A0;
    *(void **)0x03007FF0 = arg0;
    sp0 = 0;
    sub_08063D7C(&sp0, arg0, 0x05000260);
    M2C_FIELD(arg0, s8 *, 6) = 8;
    M2C_FIELD(arg0, s8 *, 7) = 0xF;
    M2C_FIELD(arg0, M2C_UNK **, 0x38) = &sub_08062598;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &sub_08063D74;
    M2C_FIELD(arg0, M2C_UNK **, 0x2C) = &sub_08063D74;
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &sub_08063D74;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &sub_08063D74;
    sub_080620BC(0x030030B0);
    M2C_FIELD(arg0, s32 *, 0x34) = 0x030030B0;
    sub_08062D98(0x40000);
    M2C_FIELD(arg0, s32 *, 0) = 0x68736D53;
}
