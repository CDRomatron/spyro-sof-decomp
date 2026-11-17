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

void sub_0801FAE0(void *arg0, s32 arg1) {
    s32 *var_r2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r0_7;
    s32 temp_r0_8;

    if ((s32) (arg1 - M2C_FIELD(arg0, s32 *, 0x14)) < 0) {
        var_r2 = arg0 + 0xEC;
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r0 > 0) {
            M2C_FIELD(arg0, s32 *, 0xEC) = (s32) (temp_r0 >> 1);
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xEC) - 0x19;
        M2C_FIELD(arg0, s32 *, 0xEC) = temp_r0_2;
        if (temp_r0_2 <= 0x1FF) {
            M2C_FIELD(arg0, s32 *, 0xEC) = -0x200;
        }
        temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x14) + M2C_FIELD(arg0, s32 *, 0xEC);
        M2C_FIELD(arg0, s32 *, 0x14) = temp_r0_3;
        if ((s32) (arg1 - temp_r0_3) > 0) {
            temp_r0_4 = (s32) M2C_FIELD(arg0, s32 *, 0xEC) >> 1;
            M2C_FIELD(arg0, s32 *, 0xEC) = temp_r0_4;
            if (temp_r0_4 > -0x19) {
                goto block_14;
            }
        }
    } else {
        var_r2 = arg0 + 0xEC;
        temp_r0_5 = M2C_FIELD(arg0, s32 *, 0xEC);
        if (temp_r0_5 < 0) {
            M2C_FIELD(arg0, s32 *, 0xEC) = (s32) (temp_r0_5 >> 1);
        }
        temp_r0_6 = M2C_FIELD(arg0, s32 *, 0xEC) + 0x19;
        M2C_FIELD(arg0, s32 *, 0xEC) = temp_r0_6;
        if (temp_r0_6 > 0x200) {
            M2C_FIELD(arg0, s32 *, 0xEC) = 0x200;
        }
        temp_r0_7 = M2C_FIELD(arg0, s32 *, 0x14) + M2C_FIELD(arg0, s32 *, 0xEC);
        M2C_FIELD(arg0, s32 *, 0x14) = temp_r0_7;
        if ((s32) (arg1 - temp_r0_7) < 0) {
            temp_r0_8 = (s32) M2C_FIELD(arg0, s32 *, 0xEC) >> 1;
            M2C_FIELD(arg0, s32 *, 0xEC) = temp_r0_8;
            if (temp_r0_8 <= 0x18) {
block_14:
                *var_r2 = 0;
            }
        }
    }
}
