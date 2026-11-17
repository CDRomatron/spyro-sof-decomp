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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_0805ED78(s32);                          /* extern */
M2C_UNK sub_0805F08C();                             /* extern */
M2C_UNK sub_0805F8E4();                             /* extern */
M2C_UNK sub_08060C2C(M2C_UNK *);                    /* extern */
M2C_UNK sub_0806176C();                             /* extern */
extern M2C_UNK sub_0805FC0C;

void sub_0805FC1C(void) {
    s16 sp0;

    M2C_FIELD(*(void **)0x030026EC, s32 *, 0xB0) = 0;
    sub_0805F8E4();
    sub_0806176C();
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0600B800;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000400;
    sub_0805ED78(M2C_FIELD((void *)0x040000D4, s32 *, 8));
    sub_0805F08C();
    sub_08003220(0x081710D4);
    M2C_FIELD(*(void **)0x030026EC, s32 *, 0xAC) = 6;
    sub_08060C2C(&sub_0805FC0C);
}
