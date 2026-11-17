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
M2C_UNK sub_0800781C(s32, s32);                     /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_080311C0(void *, s32);                  /* extern */
M2C_UNK sub_08050098(void *, M2C_UNK *, void *);    /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_08031574;

s32 sub_08031414(void *arg1, u16 arg2, s32 arg3) {
    s32 *var_r7_2;
    s32 *var_r7_3;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r7;
    u32 var_r6;
    u32 var_r6_2;
    u8 *temp_r0_2;
    u8 *temp_r0_4;
    void *temp_r0;
    void *temp_r0_3;

    var_r7 = 0;
    if (arg2 == 9) {
        switch (arg3) {                             /* irregular */
        case 0x38:
            sub_0800781C(0x12, 1);
            temp_r0 = arg1 + 0x73;
            M2C_FIELD(arg1, s8 *, 0x73) = 0;
            M2C_FIELD(temp_r0, s8 *, 1) = 1;
            var_r6 = 0;
            temp_r0_2 = (temp_r0 + 1) - 3;
            if ((u32) *temp_r0_2 > 0U) {
                var_r7_2 = arg1 + 0x34;
                do {
                    temp_r1 = *var_r7_2;
                    var_r7_2 += 4;
                    sub_0800FE28(arg1, temp_r1, 0x3E);
                    var_r6 += 1;
                } while (var_r6 < (u32) *temp_r0_2);
            }
            sub_080311C0(arg1, 0);
            sub_080534A0(5);
            M2C_FIELD(arg1, s8 *, 0x77) = 0;
            sub_08050098(arg1 + 0xC, &sub_08031574, arg1);
            sub_08003220(0x08171550);
            break;
        case 0x39:
            temp_r0_3 = arg1 + 0x73;
            M2C_FIELD(arg1, s8 *, 0x73) = 0;
            M2C_FIELD(temp_r0_3, s8 *, 1) = 1;
            var_r6_2 = 0;
            temp_r0_4 = (temp_r0_3 + 1) - 3;
            if ((u32) *temp_r0_4 > 0U) {
                var_r7_3 = arg1 + 0x34;
                do {
                    temp_r1_2 = *var_r7_3;
                    var_r7_3 += 4;
                    sub_0800FE28(arg1, temp_r1_2, 0x3E);
                    var_r6_2 += 1;
                } while (var_r6_2 < (u32) *temp_r0_4);
            }
            sub_080311C0(arg1, 0);
            sub_080534A0(5);
            M2C_FIELD(arg1, s8 *, 0x77) = 0;
            sub_08050098(arg1 + 0xC, &sub_08031574, arg1);
            sub_08003220(0x08170CC8);
            break;
        }
        var_r7 = 1;
    }
    return var_r7;
}
