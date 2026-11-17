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

void *sub_080529D4();                               /* extern */
s32 sub_08063D78(s32, s32);                         /* extern */

s32 sub_08054B9C(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r4;
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r6;
    u16 temp_r3;
    void *temp_r0;
    void *temp_r7;

    var_r6 = 0;
    temp_r0 = sub_080529D4();
    temp_r7 = temp_r0 + 0xC;
    temp_r2 = M2C_FIELD(temp_r7, s32 *, 8);
    temp_r1 = M2C_FIELD(arg0, s32 *, 8);
    if (((s32) (temp_r2 + 0x2400) < temp_r1) || ((s32) (temp_r1 + arg2) < temp_r2)) {
        return 0;
    }
    temp_r2_2 = M2C_FIELD(arg0, s32 *, 0);
    temp_r4 = temp_r2_2 - M2C_FIELD(temp_r0, s32 *, 0xC);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 4);
    temp_r1_2 = M2C_FIELD(temp_r7, s32 *, 4);
    temp_r5 = temp_r0_2 - temp_r1_2;
    var_r3 = temp_r4;
    if (temp_r4 < 0) {
        var_r3 = 0 - temp_r4;
    }
    var_r0 = temp_r5;
    if (temp_r5 < 0) {
        var_r0 = 0 - temp_r5;
    }
    if (var_r3 > var_r0) {
        var_r3_2 = temp_r4;
        if (temp_r4 < 0) {
            var_r3_2 = 0 - temp_r4;
        }
        var_r0_2 = temp_r5;
        if (temp_r5 < 0) {
            var_r0_2 = 0 - temp_r5;
        }
    } else {
        var_r3_2 = temp_r5;
        if (temp_r5 < 0) {
            var_r3_2 = 0 - temp_r5;
        }
        var_r0_2 = temp_r4;
        if (temp_r4 < 0) {
            var_r0_2 = 0 - temp_r4;
        }
    }
    if (var_r0_2 < 0) {
        var_r0_2 += 3;
    }
    if ((s32) (var_r3_2 + (var_r0_2 >> 2)) < arg1) {
        temp_r3 = M2C_FIELD(*(void **)0x03001634, u16 *, 0x30);
        switch (temp_r3) {                          /* irregular */
        case 0x40:
            var_r6 = 1;
            if ((s32) M2C_FIELD(temp_r7, s32 *, 8) > (s32) M2C_FIELD(arg0, s32 *, 8)) {
                var_r6 = 2;
            }
            break;
        case 0x80:
            if ((temp_r2_2 != M2C_FIELD(temp_r0, s32 *, 0xC)) && (temp_r0_2 != temp_r1_2)) {
            default:
block_34:
                var_r6 = 1;
            } else {
block_33:
                var_r6 = 3;
            }
            break;
        case 0x100:
            if (((temp_r2_2 & 0xFFFFF000) == (M2C_FIELD(temp_r0, s32 *, 0xC) & 0xFFFFF000)) && ((temp_r0_2 & 0xFFFFF000) == (temp_r1_2 & 0xFFFFF000))) {
                var_r6 = 1;
                if ((0xC000 & sub_08063D78((s32) (temp_r4 << 0xC) >> 0x10, (s32) (temp_r5 << 0xC) >> 0x10)) == M2C_FIELD(*(void **)0x03001634, s32 *, 0x28)) {
                    goto block_33;
                }
            } else {
                goto block_34;
            }
            break;
        }
    }
    return var_r6;
}
