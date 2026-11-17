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

s32 sub_08004508(s32);                              /* extern */
M2C_UNK sub_0800D9EC(void *, void *);               /* extern */
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */
M2C_UNK sub_080241B8(void *);                       /* extern */
M2C_UNK sub_08024584(void *, s32);                  /* extern */

void sub_080244E0(void *arg0) {
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r2;
    void *temp_r5;

    temp_r2 = M2C_FIELD(arg0, u16 *, 0xA4);
    if ((u32) temp_r2 <= 0x77U) {
        if (!(3 & temp_r2)) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) - 0x80);
            M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 0x80);
        }
        if ((3 & M2C_FIELD(arg0, u16 *, 0xA4)) == 2) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + 0x80);
            M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) - 0x80);
        }
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xA4) - 1;
    M2C_FIELD(arg0, u16 *, 0xA4) = temp_r0;
    temp_r0_2 = temp_r0;
    temp_r5 = arg0 + 0x24;
    if (temp_r0_2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) temp_r0_2;
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) temp_r0_2;
        sub_0800FCA4(0x92, 1, temp_r5);
        if (sub_08004508(M2C_FIELD(arg0, s32 *, 0x84)) == 0x600004) {
            sub_08024584(arg0, 1);
            M2C_FIELD(arg0, s32 *, 0x98) = 0xE6;
        } else {
            sub_08024584(arg0, 0);
        }
    }
    sub_0800D9EC(arg0 + 0x3C, temp_r5);
    sub_080241B8(arg0);
}
