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
M2C_UNK sub_080043A4(s32);                          /* extern */
M2C_UNK sub_0800FC7C(void *);                       /* extern */

void sub_0803C618(void *arg0) {
    void *temp_r2;
    void *temp_r2_2;

    sub_080043A4(M2C_FIELD(arg0, s32 *, 0x24));
    temp_r2 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r2 != NULL) {
        sub_08002BE0(temp_r2, M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), u16 *, 0x14) * 4);
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 0x30);
    if (temp_r2_2 != NULL) {
        sub_08002BE0(temp_r2_2, M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), u16 *, 0x14) * 4);
    }
    sub_0800FC7C(M2C_FIELD(arg0, void **, 0x28));
    sub_08002BE0(arg0, 0x3C);
}
