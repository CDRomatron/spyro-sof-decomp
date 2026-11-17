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
M2C_UNK sub_08001E74(s32, s32);                     /* extern */
M2C_UNK sub_080025B4(s32);                          /* extern */
M2C_UNK sub_08002640(s32, u16, u16);                /* extern */
M2C_UNK sub_0800E140(s32);                          /* extern */

void sub_0800E794(void) {
    u16 temp_r6;
    void *temp_r5;

    temp_r5 = *(void **)0x030008CC;
    temp_r6 = M2C_FIELD(temp_r5, u16 *, 0x326);
    if (temp_r6 == 0) {
        M2C_FIELD(temp_r5, u16 *, 0x326) = temp_r6;
        M2C_FIELD(temp_r5, s16 *, 0x31A) = 2;
        sub_08001E74(M2C_FIELD(temp_r5, s32 *, 0x2C0), 4);
        M2C_FIELD(temp_r5, u16 *, 0x312) = temp_r6;
        sub_08000BC8();
        sub_080025B4(M2C_FIELD(temp_r5, s32 *, 0x2C0));
        M2C_FIELD(temp_r5, u16 *, 0x314) = (u16) (M2C_FIELD(temp_r5, u16 *, 0x314) - 2);
        sub_08002640(M2C_FIELD(temp_r5, s32 *, 0x2C0), (u16) (M2C_FIELD(temp_r5, u16 *, 0x316) * 8), (u16) (M2C_FIELD(temp_r5, u16 *, 0x314) * 0x10));
        sub_0800E140(3);
        return;
    }
    M2C_FIELD(temp_r5, u16 *, 0x312) = (u16) (M2C_FIELD(temp_r5, u16 *, 0x312) + 2);
    M2C_FIELD(temp_r5, u16 *, 0x326) = (u16) (M2C_FIELD(temp_r5, u16 *, 0x326) - 2);
}
