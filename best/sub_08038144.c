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
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_08037ED0(void *, s32);                  /* extern */
s32 sub_080529E8(void *, s32);                      /* extern */
s32 sub_08052A54(void *, s32, s32);                 /* extern */
s32 sub_08052C28(void *, s32);                      /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_08038144(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    u8 *var_r6;
    void *temp_r5;

    temp_r5 = arg0 + 0x24;
    if (sub_0805399C() == 3) {
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x60);
        var_r6 = arg0 + 0x91;
        if ((temp_r1 != 0) && (M2C_FIELD(arg0, u8 *, 0x8E) == 0) && ((sub_08052A54(temp_r5, temp_r1 + 0xC, 0x1400) << 0x18) != 0)) {
            temp_r0 = sub_08052C28(temp_r5, M2C_FIELD(arg0, s32 *, 0x60) + 0xC);
            temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x3C);
            temp_r2 = temp_r0 - temp_r1_2;
            if (temp_r2 >= 0) {
                if (temp_r2 > 0x1FFF) {

                } else {
                    goto block_8;
                }
            } else if ((s32) (temp_r1_2 - temp_r0) <= 0x1FFF) {
block_8:
                var_r6 = arg0 + 0x91;
                if (M2C_FIELD(arg0, u8 *, 0x91) != 0) {
                    sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x60), 0x4A);
                    sub_08037ED0(arg0, 1);
                    sub_08003220(0x08171550);
                } else {
                    sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x60), 0x49);
                    sub_08037ED0(arg0, 2);
                    sub_08003220(0x08170BE8);
                }
            }
        }
        if ((*var_r6 == 0) && ((sub_080529E8(arg0 + 0x24, 0xA00) << 0x18) != 0)) {
            sub_08037ED0(arg0, 1);
            sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8), 1, 0xA00);
        }
    }
}
