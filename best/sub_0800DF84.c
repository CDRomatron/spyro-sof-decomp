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

u16 sub_08001F84(s32, u16, void *);                 /* extern */
M2C_UNK sub_0800E140(s32);                          /* extern */

void sub_0800DF84(void) {
    u16 temp_r0;
    u16 temp_r0_2;
    void *temp_r6;

    temp_r6 = *(void **)0x030008CC;
    temp_r0 = M2C_FIELD(temp_r6, u16 *, 0x31A);
    if (temp_r0 == 0) {
        sub_0800E140(4);
        return;
    }
    temp_r0_2 = temp_r0 - 1;
    M2C_FIELD(temp_r6, u16 *, 0x31A) = temp_r0_2;
    if ((temp_r0_2 << 0x10) == 0) {
        M2C_FIELD(M2C_FIELD(temp_r6, void **, 0x2C0), s16 *, 4) = 0x1C;
    }
    M2C_FIELD(temp_r6, u16 *, 0x310) = sub_08001F84(M2C_FIELD(temp_r6, s32 *, 0x2B4), M2C_FIELD(temp_r6, u16 *, 0x30E), M2C_FIELD(temp_r6, void **, 0x2C0));
    M2C_FIELD(M2C_FIELD(temp_r6, void **, 0x2C0), s16 *, 4) = 0x1E;
    M2C_FIELD(temp_r6, u16 *, 0x30E) = (u16) (M2C_FIELD(temp_r6, u16 *, 0x30E) - M2C_FIELD(temp_r6, u16 *, 0x310));
}
