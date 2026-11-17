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

void sub_08006534(u32 arg0, void *arg1, void *arg2, M2C_UNK arg3) {
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r0_5;
    u32 temp_r0_6;
    u32 temp_r0_7;
    u32 temp_r0_8;
    u32 temp_r0_9;

    M2C_FIELD(arg2, u32 *, 0x58) = arg0;
    temp_r0 = arg0 >> 0x20;
    M2C_FIELD(arg2, u32 *, 0x58) = temp_r0;
    temp_r0_2 = temp_r0 >> 0x20;
    M2C_FIELD(arg2, u32 *, 0x58) = temp_r0_2;
    temp_r0_3 = temp_r0_2 >> 0x20;
    M2C_FIELD(arg2, u32 *, 0x58) = temp_r0_3;
    temp_r0_4 = temp_r0_3 >> 0x20;
    M2C_FIELD(arg2, u32 *, 0x58) = temp_r0_4;
    temp_r0_5 = temp_r0_4 >> 0x20;
    M2C_FIELD(arg2, u32 *, 0x58) = temp_r0_5;
    temp_r0_6 = temp_r0_5 >> 0x20;
    M2C_FIELD(arg2, u32 *, 0x58) = temp_r0_6;
    temp_r0_7 = temp_r0_6 >> 0x20;
    M2C_FIELD(arg2, u32 *, 0x58) = temp_r0_7;
    temp_r0_8 = temp_r0_7 >> 0x20;
    M2C_FIELD(arg2, u32 *, 0x58) = temp_r0_8;
    temp_r0_9 = temp_r0_8 >> 0x20;
    M2C_FIELD(arg2, u32 *, 0x58) = temp_r0_9;
    M2C_FIELD(arg1, u32 *, 0x58) = (u32) (temp_r0_9 >> 0x20);
    M2C_FIELD(arg2, u16 *, 0x20) = (u16) (M2C_FIELD(arg2, u16 *, 0x20) + 1);
}
