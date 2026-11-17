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

M2C_UNK sub_08000BC8();                             /* extern */
M2C_UNK sub_08003C04(s32);                          /* extern */
M2C_UNK sub_08063D90(void *, void *, s32, s32);     /* extern */

void sub_0800BE90(void) {
    s32 temp_r2;
    void *temp_r4;

    temp_r4 = *(void **)0x03002680;
    if (2 & M2C_FIELD(temp_r4, u16 *, 0xFB4)) {
        sub_08003C04(M2C_FIELD(temp_r4, s32 *, 8));
        temp_r2 = M2C_FIELD(temp_r4, s32 *, 0x7A4);
        if (temp_r2 != 0) {
            sub_08063D90(temp_r4 + 0x698, temp_r4 + 0x12, temp_r2, 8);
        }
        sub_08000BC8();
        M2C_FIELD((void *)0x040000D4, void **, 0) = (void *) (temp_r4 + 0xC);
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x07000000;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x84000100;
        M2C_FIELD(temp_r4, u16 *, 0xFB4) = (u16) (0xFFFD & M2C_FIELD(temp_r4, u16 *, 0xFB4));
    }
}
