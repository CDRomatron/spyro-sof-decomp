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

M2C_UNK sub_08002BE0(void *, s32);                  /* extern */
M2C_UNK sub_08005814(s32);                          /* extern */
M2C_UNK sub_0800A2D8(u16);                          /* extern */
M2C_UNK sub_08051A8C();                             /* extern */
M2C_UNK sub_08054AAC(void *);                       /* extern */
M2C_UNK sub_08055868(s32);                          /* extern */

void sub_0805002C(void) {
    sub_08054AAC(*(void **)0x030026B8);
    sub_08055868(M2C_FIELD(*(void **)0x030026B8, s32 *, 0x108C));
    sub_08005814(M2C_FIELD(*(void **)0x030026B8, s32 *, 0));
    sub_08051A8C();
    if (M2C_FIELD(*(void **)0x030026B8, s32 *, 0x10A8) != 0) {
        sub_0800A2D8(M2C_FIELD(*(void **)0x030026B8, u16 *, 0x10AC));
    }
    sub_08002BE0(*(void **)0x030026B8, 0x10D4);
}
