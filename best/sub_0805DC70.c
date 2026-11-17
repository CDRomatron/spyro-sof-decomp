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

M2C_UNK sub_08060600(s32, s32, s32, s32, s32);      /* extern */

void sub_0805DC70(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r2_4;
    s32 temp_r2_5;
    s32 temp_r3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x14) + M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r2;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x20);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x18) + temp_r3;
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30);
    switch (temp_r0) {                              /* irregular */
    case 0:
        if (temp_r2 <= 0xFFF) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
            sub_08060600(temp_r2, temp_r1, 0, 0, 4);
        }
        temp_r2_2 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_r2_2 <= 0xFFF) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
            sub_08060600(M2C_FIELD(arg0, s32 *, 0x14), temp_r2_2, 0, 0, 4);
        }
        temp_r2_3 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_r2_3 > 0xF000) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
            sub_08060600(temp_r2_3, M2C_FIELD(arg0, s32 *, 0x18), 0, 0, 4);
        }
        temp_r2_4 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_r2_4 > 0xF000) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
            sub_08060600(M2C_FIELD(arg0, s32 *, 0x14), temp_r2_4, 0, 0, 4);
            return;
        }
        return;
    case 1:
        if (temp_r2 <= 0xFFF) {
            M2C_FIELD(arg0, s32 *, 0x14) = 0x1000;
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            if (temp_r3 > 0) {
                var_r0 = 0x100;
            } else {
                var_r0 = -0x100;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = var_r0;
        }
        temp_r2_5 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_r2_5 <= 0xFFF) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0) {
                var_r0_2 = 0x100;
            } else {
                var_r0_2 = -0x100;
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = var_r0_2;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0xF000) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x20) > 0) {
                var_r0_3 = 0x100;
            } else {
                var_r0_3 = -0x100;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = var_r0_3;
        }
        if (temp_r2_5 > 0xF000) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0) {
                var_r0_4 = 0x100;
            } else {
                var_r0_4 = -0x100;
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = var_r0_4;
        }
        break;
    }
}
