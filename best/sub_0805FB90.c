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

/* Warning: missing "bx $lr" in last block of sub_0805FB90 (initial). */

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_0805EBE0(s32);                          /* extern */
M2C_UNK sub_0805ED78();                             /* extern */
M2C_UNK sub_0805EF30();                             /* extern */
M2C_UNK sub_0805F08C();                             /* extern */
M2C_UNK sub_0805F8E4();                             /* extern */
M2C_UNK sub_08060C2C(s32);                          /* extern */
M2C_UNK sub_0806429C(s32, s32);                     /* extern */
extern void **_0805FBF4;
extern void *_0805FBF8;
extern s32 _0805FBFC;
extern s32 _0805FC00;
extern s32 _0805FC04;
extern s32 _0805FC08;

void sub_0805FB90(void) {
    s16 sp0;
    void **temp_r5;

    temp_r5 = _0805FBF4;
    M2C_FIELD(*temp_r5, s32 *, 0xB0) = 0;
    sub_0805EBE0(M2C_FIELD(*temp_r5, s32 *, 0x9C) + 1);
    sub_0805F8E4();
    sp0 = 0;
    M2C_FIELD(_0805FBF8, s16 **, 0) = &sp0;
    M2C_FIELD(_0805FBF8, s32 *, 4) = (s32) _0805FBFC;
    M2C_FIELD(_0805FBF8, s32 *, 8) = (s32) _0805FC00;
    sub_0806429C(M2C_FIELD(*temp_r5, s32 *, 0x9C), 0x1E);
    sub_0805EF30();
    sub_0805ED78();
    sub_0805F08C();
    sub_08003220(_0805FC04);
    M2C_FIELD(*temp_r5, s32 *, 0xAC) = 6;
    sub_08060C2C(_0805FC08);
}
