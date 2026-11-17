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

M2C_UNK sub_08003DA8(s32, u8);                      /* extern */
M2C_UNK sub_080042A4(s32, u16, s32);                /* extern */
M2C_UNK sub_080045F0(s32, u16, u16, s32);           /* extern */
s32 sub_08050148();                                 /* extern */

void sub_08021310(void *arg0) {
    s32 *var_r5;
    s32 temp_r0;
    u16 *var_r4;
    u16 temp_r2;
    u32 var_r6;

    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        sub_08003DA8(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, u8 *, 0x5A));
        sub_08003DA8(M2C_FIELD(arg0, s32 *, 0x3C), M2C_FIELD(arg0, u8 *, 0x58));
        sub_08003DA8(M2C_FIELD(arg0, s32 *, 0x40), M2C_FIELD(arg0, u8 *, 0x59));
        if ((M2C_FIELD(arg0, u8 *, 0x5D) == 0) && ((sub_08050148() << 0x18) == 0)) {
            sub_08003DA8(M2C_FIELD(arg0, s32 *, 0x44), M2C_FIELD(arg0, u8 *, 0x5B) - 1);
            temp_r2 = (u16) M2C_FIELD(arg0, s32 *, 0x4C);
            sub_080045F0(M2C_FIELD(arg0, s32 *, 0x44), temp_r2, temp_r2, 0);
            sub_080042A4(M2C_FIELD(arg0, s32 *, 0x44), 0x78U, 0x50);
        }
        if (M2C_FIELD(arg0, u8 *, 0x5D) == 1) {
            var_r6 = 0;
            var_r4 = arg0 + 0x50;
            var_r5 = arg0 + 0x34;
            do {
                temp_r0 = *var_r5;
                var_r5 += 4;
                sub_080042A4(temp_r0, *var_r4, 0x8C);
                var_r4 += 2;
                var_r6 += 1;
            } while (var_r6 <= 3U);
        }
    }
}
