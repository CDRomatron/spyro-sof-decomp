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

M2C_UNK sub_0800D9EC(void *, void *);               /* extern */
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */
M2C_UNK sub_08023744(void *);                       /* extern */
M2C_UNK sub_08023968(void *, s32);                  /* extern */

void sub_080238EC(void *arg0) {
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r1;
    void *temp_r5;

    temp_r1 = M2C_FIELD(arg0, u16 *, 0x8E);
    if ((u32) temp_r1 <= 0x77U) {
        if (!(3 & temp_r1)) {
            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) - 0x80);
            M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) + 0x80);
        }
        if ((3 & M2C_FIELD(arg0, u16 *, 0x8E)) == 2) {
            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) + 0x80);
            M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) - 0x80);
        }
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x8E) - 1;
    M2C_FIELD(arg0, u16 *, 0x8E) = temp_r0;
    temp_r0_2 = temp_r0;
    temp_r5 = arg0 + 0x24;
    if (temp_r0_2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) temp_r0_2;
        M2C_FIELD(arg0, s32 *, 0x40) = (s32) temp_r0_2;
        sub_0800FCA4(0x90, 1, temp_r5);
        sub_08023968(arg0, 0);
    }
    sub_0800D9EC(arg0 + 0x48, temp_r5);
    sub_08023744(arg0);
}
