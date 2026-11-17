/* identical to sub_0806181C in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

void sub_080614F0(void *arg0) {
    s32 temp_r1;
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r0;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x14) + M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r3;
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x18) + M2C_FIELD(arg0, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x18) = temp_r1;
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 3) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C);
        if (temp_r4 != 0) {
            if (temp_r3 <= 0xFFF) {
                var_r0 = 0xC400;
                goto block_10;
            }
            if (temp_r1 <= 0xFFF) {
                M2C_FIELD(arg0, s32 *, 0x44) = 0;
                M2C_FIELD(arg0, s32 *, 0x2C) = 2;
                M2C_FIELD(arg0, s32 *, 0x48) = 0;
            } else {
                if (temp_r3 > 0xF000) {
                    var_r0 = 0x4000;
                    goto block_10;
                }
                if (temp_r1 > 0xF000) {
                    var_r0 = 0x8000;
block_10:
                    M2C_FIELD(arg0, s32 *, 0x44) = var_r0;
                    M2C_FIELD(arg0, s32 *, 0x2C) = 2;
                    M2C_FIELD(arg0, s32 *, 0x48) = 0;
                }
            }
        } else {
            if (temp_r3 <= 0xFFF) {
                M2C_FIELD(arg0, s32 *, 0x44) = 0x4000;
                goto block_19;
            }
            if (temp_r1 <= 0xFFF) {
                M2C_FIELD(arg0, s32 *, 0x44) = 0x8000;
                goto block_19;
            }
            if (temp_r3 > 0xF000) {
                M2C_FIELD(arg0, s32 *, 0x44) = 0xC400;
                goto block_19;
            }
            if (temp_r1 > 0xF000) {
                M2C_FIELD(arg0, s32 *, 0x44) = temp_r4;
block_19:
                M2C_FIELD(arg0, s32 *, 0x2C) = 2;
                M2C_FIELD(arg0, s32 *, 0x48) = temp_r4;
            }
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) <= 0xFFF) {
        M2C_FIELD(arg0, s32 *, 0x14) = 0x1000;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) <= 0xFFF) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0x1000;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x14) > 0xF000) {
        M2C_FIELD(arg0, s32 *, 0x14) = 0xF000;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) > 0xF000) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0xF000;
    }
}
