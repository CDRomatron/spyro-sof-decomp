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

M2C_UNK sub_0801A504(void *, s32);                  /* extern */
s32 sub_08063D80(s32, s32);                         /* extern */

s32 sub_0801DF90(void *arg0, u16 arg1) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x13C) = 0x2E;
    sub_0801A504(arg0, 0xD00);
    M2C_FIELD(*(void **)0x03001634, s16 *, 0x30) = 0x200;
    if (!(arg1 & 0x20)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x144);
        if (temp_r0 > 0) {
            M2C_FIELD(arg0, s32 *, 0x144) = sub_08063D80(temp_r0 << 7, 0x100);
        }
    }
    return 0;
}
