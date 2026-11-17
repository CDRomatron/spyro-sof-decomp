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

M2C_UNK sub_08002564(s32);                          /* extern */
M2C_UNK sub_08003314();                             /* extern */
M2C_UNK sub_0800A400(s32, s32);                     /* extern */
M2C_UNK sub_0800A474(s32, s32);                     /* extern */
M2C_UNK sub_08042CD8(void *);                       /* extern */

void sub_08044108(void *arg0) {
    sub_08002564(M2C_FIELD(*(void **)0x030008D0, s32 *, 0x4C));
    sub_0800A400(0xBC, 0x030011C0);
    sub_0800A474(0x8D, 0x06008180);
    sub_08003314();
    M2C_FIELD(arg0, s8 *, 0xC8) = 0;
    sub_08042CD8(arg0);
}
