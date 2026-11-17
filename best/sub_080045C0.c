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

void *sub_080045C0(void *arg0, s32 *arg1) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) + (((M2C_FIELD(arg0, u8 *, 0x2C) << ((u32) ((0x8000 & M2C_FIELD(arg0, u16 *, 0x30)) << 0x10) >> 0x1F)) * 4) + 4);
    *arg1 = (s32) M2C_FIELD(temp_r0, u16 *, 2);
    return temp_r0 + (M2C_FIELD(temp_r0, u16 *, 0) * 2);
}
