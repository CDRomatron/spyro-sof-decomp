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

s32 sub_0800FCA4(s32, s32, s32);                    /* extern */
M2C_UNK sub_0800FDA0(void *, s32, s32);             /* extern */
M2C_UNK sub_08050098(s32, M2C_UNK *);               /* extern */
M2C_UNK sub_080501CC(void *, M2C_UNK *);            /* extern */
M2C_UNK sub_080522C8(s32);                          /* extern */
extern M2C_UNK sub_08014260;
extern M2C_UNK sub_0801497C;

s32 sub_08014844(u16 arg0, void *arg2) {
    s32 temp_r0_2;
    u16 temp_r0;
    void *temp_r5;

    temp_r0 = arg0;
    temp_r5 = arg2 + 0x34;
    if (temp_r0 != 1) {
        if (temp_r0 == 3) {
            if (M2C_FIELD(arg2, u8 *, 0xA0) != 4) {
                M2C_FIELD(arg2, u8 *, 0xA0) = 4U;
                sub_08050098(M2C_FIELD(temp_r5, s32 *, 0x64) + 0xC, &sub_08014260);
            } else {
                temp_r0_2 = sub_0800FCA4(0x1A, 1, M2C_FIELD(temp_r5, s32 *, 0x64) + 0xC);
                sub_0800FDA0(arg2, temp_r0_2, M2C_FIELD(temp_r5, s32 *, 0x64) + 0xC);
                sub_080522C8(temp_r0_2);
            }
        }
    } else {
        sub_080501CC(arg2, &sub_0801497C);
    }
    return 1;
}
