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
M2C_UNK sub_080025B4(s32);                          /* extern */
M2C_UNK sub_080036B8(s32, void *, s32, s32, s32);   /* extern */
M2C_UNK sub_0800DCE0(u16);                          /* extern */
M2C_UNK sub_0800E140(s32);                          /* extern */

void sub_0800EA2C(void) {
    u16 temp_r0;
    void *temp_r7;

    temp_r7 = *(void **)0x030008CC;
    temp_r0 = M2C_FIELD(temp_r7, u16 *, 0x2FC);
    if (temp_r0 != 0) {
        M2C_FIELD(temp_r7, u16 *, 0x2FC) = (u16) (temp_r0 - 1);
        sub_080036B8(0x0818D810, temp_r7 + 0x84, 0x030013A0, (0x10 - M2C_FIELD(temp_r7, u16 *, 0x2FC)) * 0x10, 9);
        M2C_FIELD(temp_r7, s16 *, 0x31E) = (s16) ((0x10 - M2C_FIELD(temp_r7, u16 *, 0x2FC)) * 3);
        return;
    }
    sub_08002564(M2C_FIELD(temp_r7, s32 *, 0x2C0));
    sub_080025B4(M2C_FIELD(temp_r7, s32 *, 0x2C0));
    sub_0800DCE0(M2C_FIELD(temp_r7, u16 *, 0x2FA));
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x0818D810;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x030013A0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000009;
    sub_0800E140(9);
}
