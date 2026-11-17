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
s32 sub_08007C78();                                 /* extern */
s32 sub_0800F2AC();                                 /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, void *, s32);  /* extern */
s32 sub_080529D4();                                 /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
s32 sub_08055038(void *);                           /* extern */
extern M2C_UNK sub_0803E228;

u8 sub_0803E0C0(void *arg0) {
    s32 var_r0;
    s32 var_r4;
    u32 temp_r1;
    u32 var_r6;
    u8 *var_r8;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r7;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x30);
    if (temp_r0 != 1) {
        var_r8 = arg0 + 0x29;
        if ((s32) temp_r0 > 1) {

        } else if (temp_r0 != 0) {

        } else {
            temp_r7 = sub_080529D4() + 0xC;
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x28);
            switch (temp_r0_2) {                    /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                if (((sub_08007C78() << 0x18) != 0) && ((sub_08055038(arg0 + 0xC) << 0x18) != 0) && (M2C_FIELD(temp_r7, s32 *, 8) == M2C_FIELD(arg0, s32 *, 0x14))) {
                    M2C_FIELD(arg0, u8 *, 0x30) = 1U;
block_18:
                    sub_080534A0(5);
                }
                break;
            case 1:                                 /* switch 1 */
                if ((sub_08007C78() << 0x18) != 0) {
                    var_r6 = 0;
                    if ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u16 *, 0x14) > 0U) {
                        var_r4 = 0;
loop_15:
                        if ((sub_08055038(M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0xC) + var_r4) << 0x18) != 0) {
                            if (M2C_FIELD(temp_r7, s32 *, 8) == M2C_FIELD((var_r4 + M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 0xC)), s32 *, 8)) {
                                M2C_FIELD(arg0, u8 *, 0x30) = 1U;
                                goto block_18;
                            }
                        } else {
                            var_r4 += 0xC;
                            var_r6 += 1;
                            if (var_r6 >= (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), u16 *, 0x14)) {

                            } else {
                                goto loop_15;
                            }
                        }
                    }
                }
                break;
            }
        }
    } else {
        var_r8 = arg0 + 0x29;
        if ((sub_0800F2AC() << 0x18) != 0) {
            temp_r1 = M2C_FIELD(arg0, u32 *, 0x2C);
            switch (temp_r1) {                      /* switch 2; irregular */
            case 0x1BE:                             /* switch 2 */
                sub_0800F550(0x65, &sub_0803E228, arg0, 1);
                var_r0 = 0x44;
block_30:
                sub_0800781C(var_r0, 1);
                break;
            case 0x1BF:                             /* switch 2 */
                sub_0800F550(0x67, &sub_0803E228, arg0, 1);
                var_r0 = 0x45;
                goto block_30;
            case 0x1C0:                             /* switch 2 */
                sub_0800F550(0x66, &sub_0803E228, arg0, 1);
                sub_0800781C(0x46, 1);
                break;
            }
            M2C_FIELD(arg0, u8 *, 0x30) = 2U;
            var_r8 = arg0 + 0x29;
        }
    }
    return *var_r8;
}
