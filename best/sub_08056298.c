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

M2C_UNK sub_08055AA8();                             /* extern */
M2C_UNK sub_08055F40();                             /* extern */
M2C_UNK sub_080560E4();                             /* extern */
M2C_UNK sub_080561FC();                             /* extern */

void sub_08056298(void) {
    u16 temp_r0;
    u16 var_r0;
    void *temp_r4;

    temp_r4 = *(void **)0x030008D4;
    sub_080561FC();
    sub_08055AA8();
    sub_080560E4();
    temp_r0 = M2C_FIELD(temp_r4, u16 *, 0x7BC);
    if (temp_r0 == 0) {
        if (M2C_FIELD(temp_r4, u8 *, 0x7D9) != 0) {
            M2C_FIELD(temp_r4, u8 *, 0x7D9) = (u8) temp_r0;
            var_r0 = 0xB4;
        } else {
            M2C_FIELD(temp_r4, u8 *, 0x7D9) = 1U;
            var_r0 = 0x5A;
        }
    } else {
        var_r0 = temp_r0 - 1;
    }
    M2C_FIELD(temp_r4, u16 *, 0x7BC) = var_r0;
    sub_08055F40();
}
