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

s32 sub_08008900(s32, s32);                         /* extern */
M2C_UNK sub_0801EF58(void *);                       /* extern */
M2C_UNK sub_0801F5FC(void *, s32);                  /* extern */
s32 sub_0801F684(void *);                           /* extern */
s32 sub_08052BB4(void *);                           /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_0801F12C(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r4;

    if (sub_0805399C() != 3) {
        sub_0801F5FC(arg0, 0);
        return;
    }
    temp_r0 = sub_08008900(M2C_FIELD(arg0, s32 *, 0x90), sub_08052BB4(arg0 + 0x24));
    var_r1 = temp_r0;
    if (temp_r0 < 0) {
        var_r1 = 0 - temp_r0;
    }
    if (var_r1 <= 0x38E) {
        sub_0801F5FC(arg0, 1);
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x88);
    if (temp_r0_2 <= 0xFF) {
        var_r0 = temp_r0_2 + 0x14;
        goto block_10;
    }
    temp_r0_3 = temp_r0_2 - 0x14;
    M2C_FIELD(arg0, s32 *, 0x88) = temp_r0_3;
    if (temp_r0_3 < 0) {
        var_r0 = 0;
block_10:
        M2C_FIELD(arg0, s32 *, 0x88) = var_r0;
    }
    var_r4 = temp_r0;
    if (var_r4 != 0) {
        if ((sub_0801F684(arg0) << 0x18) != 0) {
            var_r4 = 0 - var_r4;
        }
        if (var_r4 < 0) {
            if ((s32) (0 - var_r4) <= 0x17F) {
                var_r0_2 = M2C_FIELD(arg0, s32 *, 0x90) + var_r4;
            } else {
                var_r1_2 = 0xFFFFFE80;
                goto block_21;
            }
        } else if (var_r4 <= 0x17F) {
            var_r0_2 = M2C_FIELD(arg0, s32 *, 0x90) + var_r4;
        } else {
            var_r1_2 = 0x180;
block_21:
            var_r0_2 = M2C_FIELD(arg0, s32 *, 0x90) + var_r1_2;
        }
        M2C_FIELD(arg0, s32 *, 0x90) = var_r0_2;
    }
    sub_0801EF58(arg0);
}
