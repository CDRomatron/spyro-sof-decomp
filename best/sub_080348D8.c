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

M2C_UNK sub_08050228(s32, s32 *, s32);              /* extern */

void sub_080348D8(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    void *temp_r5;

    temp_r5 = arg0 + 0xC;
    M2C_FIELD(&sp0, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(&sp0, s32 *, 4) = (s32) M2C_FIELD(temp_r5, s32 *, 4);
    M2C_FIELD(&sp0, s32 *, 8) = (s32) M2C_FIELD(temp_r5, s32 *, 8);
    if (M2C_FIELD(arg0, u8 *, 0x4B) != 0) {
        sp0 += 0x100;
        sp4 += 0x100;
        if (M2C_FIELD(arg0, u8 *, 0x4A) != 0) {
            sub_08050228(M2C_FIELD(arg0, s32 *, 0x38), &sp0, 0);
        }
        if (M2C_FIELD(arg0, u8 *, 0x4D) == 0) {
            sp8 += 0x2E00;
            sub_08050228(M2C_FIELD(arg0, s32 *, 0x3C), &sp0, M2C_FIELD(arg0, s32 *, 0x30));
        }
        M2C_FIELD(&spC, s32 *, 0) = M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(&spC, s32 *, 4) = (s32) M2C_FIELD(temp_r5, s32 *, 4);
        M2C_FIELD(&spC, s32 *, 8) = (s32) M2C_FIELD(temp_r5, s32 *, 8);
        spC += 0xFFFFFF00;
        M2C_FIELD(&spC, s32 *, 4) = (s32) (M2C_FIELD(&spC, s32 *, 4) + 0xFFFFFF00);
        sub_08050228(M2C_FIELD(arg0, s32 *, 0x34), &spC, M2C_FIELD(arg0, s32 *, 0x30));
    }
}
