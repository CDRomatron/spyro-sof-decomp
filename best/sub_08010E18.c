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

M2C_UNK sub_0800781C(s32, s32);                     /* extern */
M2C_UNK sub_0800FDA0(void *, s32, void *);          /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_08050098(s32, M2C_UNK *, void *);       /* extern */
M2C_UNK sub_080501CC(void *, M2C_UNK *);            /* extern */
M2C_UNK sub_080522C8(s32);                          /* extern */
s32 sub_080529D4();                                 /* extern */
s32 sub_08052CF4(s32);                              /* extern */
extern M2C_UNK sub_08010A9C;
extern M2C_UNK sub_08010DAC;

s32 sub_08010E18(u16 arg0, void *arg2) {
    s32 temp_r0_2;
    s32 temp_r1;
    u16 temp_r0;
    u8 temp_r0_3;

    temp_r0 = arg0;
    if ((s32) temp_r0 >= 1) {
        if ((s32) temp_r0 > 2) {
            if (temp_r0 != 3) {

            } else {
                temp_r1 = M2C_FIELD(arg2, s32 *, 0x38);
                if (temp_r1 != 0) {
                    sub_0800FDA0(arg2, temp_r1, arg2 + 0xC);
                    sub_080522C8(M2C_FIELD(arg2, s32 *, 0x38));
                    sub_0800781C(1, 1);
                    temp_r0_2 = sub_08052CF4(0x8C);
                    if (temp_r0_2 != 0) {
                        sub_0800FE28(arg2, temp_r0_2, 0x17);
                    }
                }
            }
        } else {
            temp_r0_3 = M2C_FIELD(arg2, u8 *, 0x50);
            switch (temp_r0_3) {                    /* irregular */
            case 0:
                M2C_FIELD(arg2, u8 *, 0x52) = 1U;
                sub_08050098(sub_080529D4() + 0xC, &sub_08010DAC, arg2);
                break;
            case 1:
                M2C_FIELD(arg2, u8 *, 0x52) = temp_r0_3;
                sub_080529D4();
                sub_080501CC(arg2, &sub_08010A9C);
                break;
            }
        }
    }
    return 1;
}
