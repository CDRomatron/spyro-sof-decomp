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
M2C_UNK sub_0800A2D8(u16);                          /* extern */
M2C_UNK sub_0800C17C();                             /* extern */

void sub_080043A4(void *arg0) {
    s16 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        sub_0800C17C();
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x28);
    if ((s32) temp_r0 >= 0) {
        sub_0800A2D8(M2C_FIELD(((temp_r0 * 0xC) + 0x081730F8), u16 *, 6));
        sub_0800A2D8(M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0x28) * 0xC) + 0x081730F8), u16 *, 8));
        sub_0800A2D8(M2C_FIELD(((M2C_FIELD(arg0, s16 *, 0x28) * 0xC) + 0x081730F8), u16 *, 4));
    }
    sub_08002BE0(arg0, 0x38);
}
