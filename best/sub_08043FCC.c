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

/* Warning: missing "bx $lr" in last block of sub_08043FCC (initial). */

M2C_UNK sub_08000BC8();                             /* extern */
M2C_UNK sub_080037B0();                             /* extern */
extern void *_08044068;
extern s32 _0804406C;
extern s32 _08044070;
extern void *_08044074;
extern s32 _08044078;

s32 sub_08043FCC(void) {
    s16 sp0;

    sub_08000BC8();
    sub_080037B0();
    sp0 = 0;
    M2C_FIELD(_08044068, s16 **, 0) = &sp0;
    M2C_FIELD(_08044068, s32 *, 4) = (s32) _0804406C;
    M2C_FIELD(_08044068, s32 *, 8) = (s32) _08044070;
    M2C_FIELD(_08044074, u16 *, 0x50) = 0xF00U;
    M2C_FIELD((_08044074 + 0x50), u16 *, 2) = (u16) _08044078;
    return 0x10;
}
