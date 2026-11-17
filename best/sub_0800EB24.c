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

u8 sub_0800897C();                                  /* extern */
M2C_UNK sub_0800DC54();                             /* extern */

void sub_0800EB24(void) {
    s16 *var_r1;
    s16 var_r0;
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r0_3;
    void *temp_r5;

    temp_r5 = *(void **)0x030008CC;
    if (M2C_FIELD(temp_r5, u8 *, 0x335) != 0) {
        temp_r0 = M2C_FIELD(temp_r5, u16 *, 0x302);
        if (temp_r0 == 0) {
            sub_0800DC54();
            M2C_FIELD(temp_r5, u16 *, 0x302) = 3U;
            temp_r0_2 = M2C_FIELD(temp_r5, u16 *, 0x300) + 1;
            M2C_FIELD(temp_r5, u16 *, 0x300) = temp_r0_2;
            if ((u32) temp_r0_2 >= (u32) M2C_FIELD(temp_r5, u16 *, 0x2FE)) {
                M2C_FIELD(temp_r5, u8 *, 0x335) = 0U;
                M2C_FIELD(temp_r5, u16 *, 0x300) = temp_r0;
                var_r0 = sub_0800897C() + 0x3C;
                var_r1 = temp_r5 + 0x304;
                goto block_8;
            }
        } else {
            M2C_FIELD(temp_r5, u16 *, 0x302) = (u16) (temp_r0 - 1);
        }
    } else {
        var_r1 = temp_r5 + 0x304;
        temp_r0_3 = M2C_FIELD(temp_r5, u16 *, 0x304);
        if (temp_r0_3 == 0) {
            M2C_FIELD(temp_r5, u16 *, 0x302) = 3U;
            M2C_FIELD(temp_r5, u8 *, 0x335) = 1U;
            return;
        }
        var_r0 = temp_r0_3 - 1;
block_8:
        *var_r1 = var_r0;
    }
}
