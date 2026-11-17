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

M2C_UNK sub_08000C9C(void *);                       /* extern */
M2C_UNK sub_080043A4(s32);                          /* extern */
M2C_UNK sub_0804C194(s32, void *);                  /* extern */

void sub_0804BC74(void *arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x3C);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, u16 *, 0x12) = (u16) (0xFFBF & M2C_FIELD(temp_r2, u16 *, 0x12));
    }
    sub_080043A4(M2C_FIELD(arg0, s32 *, 0x18));
    sub_08000C9C(arg0);
    sub_0804C194(M2C_FIELD(*(void **)0x030026A4, s32 *, 0x84), arg0);
}
