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

M2C_UNK sub_0800445C(s32, s32, s32);                /* extern */
M2C_UNK sub_08009EE8(void *, s32);                  /* extern */

void sub_08009C94(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r6;

    var_r6 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r0 != temp_r1) {
        var_r0 = temp_r1 - temp_r0;
        if (var_r0 < 0) {
            var_r0 += 3;
        }
        temp_r4 = var_r0 >> 2;
        var_r0_2 = temp_r4;
        if (temp_r4 < 0) {
            var_r0_2 = temp_r4 + 3;
        }
        if ((var_r0_2 >> 2) != 0) {
            if (temp_r4 > 0) {
                sub_0800445C(M2C_FIELD(arg0, s32 *, 0), 0, 0);
            } else {
                sub_0800445C(M2C_FIELD(arg0, s32 *, 0), 1, 0);
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + temp_r4);
            var_r6 = 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = temp_r1;
            if (M2C_FIELD(arg0, u8 *, 0x46) != 0) {
                sub_0800445C(M2C_FIELD(arg0, s32 *, 0), 1, 0);
            } else {
                sub_0800445C(M2C_FIELD(arg0, s32 *, 0), 0, 0);
            }
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x20);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_r0_2 != temp_r2) {
        var_r1 = temp_r2 - temp_r0_2;
        if (var_r1 < 0) {
            var_r1 += 3;
        }
        temp_r4_2 = var_r1 >> 2;
        if (temp_r4_2 != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (temp_r0_2 + temp_r4_2);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = temp_r2;
        goto block_19;
    }
block_19:
    if (var_r6 == 0) {
        sub_08009EE8(arg0, 0);
    }
}
