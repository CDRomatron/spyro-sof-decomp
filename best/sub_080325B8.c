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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_08032328(void *, s32);                  /* extern */
M2C_UNK sub_08050098(void *, M2C_UNK *, void *);    /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_08032674;

s32 sub_080325B8(void *arg1, u16 arg2, s32 arg3) {
    void *sp0;
    s32 *var_r6;
    s32 *var_r7;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r9;
    u32 var_r5;
    u32 var_r5_2;
    u8 *temp_r0;

    var_r9 = 1;
    if (arg2 == 9) {
        if (arg3 == 0x3A) {
            M2C_FIELD(arg1, s8 *, 0x8B) = 0;
            M2C_FIELD(arg1, s8 *, 0x8C) = 1;
            var_r5 = 0;
            temp_r0 = (arg1 + 0x8C) - 3;
            sp0 = arg1 + 0xC;
            if ((u32) *temp_r0 > 0U) {
                var_r7 = arg1 + 0x34;
                do {
                    temp_r1 = *var_r7;
                    var_r7 += 4;
                    sub_0800FE28(arg1, temp_r1, 0x3E);
                    var_r5 += 1;
                } while (var_r5 < (u32) *temp_r0);
            }
            sub_08032328(arg1, 0);
            var_r5_2 = 0;
            var_r6 = arg1 + 0x54;
            do {
                temp_r1_2 = *var_r6;
                var_r6 += 4;
                sub_0800FE28(arg1, temp_r1_2, 0x3A);
                var_r5_2 += 1;
            } while (var_r5_2 <= 7U);
            sub_080534A0(5);
            M2C_FIELD(arg1, s8 *, 0x8F) = 0;
            sub_08050098(sp0, &sub_08032674, arg1);
            sub_08003220(0x08170CC8);
        } else {
            var_r9 = 0;
        }
    }
    return var_r9;
}
