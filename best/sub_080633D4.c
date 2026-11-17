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

void sub_080633D4(void *arg0) {
    u32 temp_r0_2;
    u32 var_r0;
    u8 temp_r0;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r4;

    temp_r0 = M2C_FIELD(arg0, u8 *, 2);
    temp_r4 = temp_r0;
    temp_r3 = M2C_FIELD(arg0, u8 *, 3);
    temp_r3_2 = temp_r3;
    if ((u32) temp_r4 >= (u32) temp_r3_2) {
        if ((u32) ((u32) (temp_r0 << 0x18) >> 0x19) >= (u32) temp_r3_2) {
            M2C_FIELD(arg0, u8 *, 0x1B) = 0xFU;
            goto block_6;
        }
        goto block_5;
    }
    if ((u32) ((u32) (temp_r3 << 0x18) >> 0x19) >= (u32) temp_r4) {
        M2C_FIELD(arg0, u8 *, 0x1B) = 0xF0U;
block_6:
        temp_r0_2 = (u32) (M2C_FIELD(arg0, u8 *, 3) + M2C_FIELD(arg0, u8 *, 2)) >> 4;
        M2C_FIELD(arg0, u8 *, 0xA) = (u8) temp_r0_2;
        if (temp_r0_2 > 0xFU) {
            var_r0 = 0xF;
            goto block_8;
        }
    } else {
block_5:
        M2C_FIELD(arg0, u8 *, 0x1B) = 0xFFU;
        var_r0 = (u32) (M2C_FIELD(arg0, u8 *, 3) + M2C_FIELD(arg0, u8 *, 2)) >> 4;
block_8:
        M2C_FIELD(arg0, u8 *, 0xA) = (u8) var_r0;
    }
    M2C_FIELD(arg0, s8 *, 0x19) = (s8) ((s32) ((M2C_FIELD(arg0, u8 *, 6) * M2C_FIELD(arg0, u8 *, 0xA)) + 0xF) >> 4);
    M2C_FIELD(arg0, u8 *, 0x1B) = (u8) (M2C_FIELD(arg0, u8 *, 0x1C) & M2C_FIELD(arg0, u8 *, 0x1B));
}
