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

void sub_0801DE0C(void *arg0) {
    s16 var_r0;

    M2C_FIELD(*(void **)0x03001634, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x128);
    M2C_FIELD(*(void **)0x03001634, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x12C);
    M2C_FIELD(*(void **)0x03001634, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x144);
    M2C_FIELD(*(void **)0x03001634, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x134);
    M2C_FIELD(*(void **)0x03001634, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x140);
    if ((u32) (u16) (M2C_FIELD(arg0, u16 *, 0x148) - 6) <= 1U) {
        var_r0 = 0x200;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(*(void **)0x03001634, s16 *, 0x30) = var_r0;
}
