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

void sub_0800453C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4, s32 *arg5) {
    s32 var_r0;
    u16 *temp_r4;
    u16 temp_r2;
    void *temp_r0;

    temp_r2 = M2C_FIELD(arg0, u16 *, 0x30);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) + ((M2C_FIELD(arg0, u8 *, 0x2C) << ((u32) ((0x8000 & temp_r2) << 0x10) >> 0x1F)) * 4);
    temp_r4 = temp_r0 + 4 + ((M2C_FIELD(temp_r0, u16 *, 4) + arg3) * 2);
    if (1 & temp_r2) {
        var_r0 = arg1 - (s8) *temp_r4;
    } else {
        var_r0 = arg1 + (s8) *temp_r4;
    }
    *arg4 = var_r0;
    if (2 & M2C_FIELD(arg0, u16 *, 0x30)) {
        *arg5 = arg2 - ((s32) (*temp_r4 << 0x10) >> 0x18);
        return;
    }
    *arg5 = arg2 + ((s32) (*temp_r4 << 0x10) >> 0x18);
}
