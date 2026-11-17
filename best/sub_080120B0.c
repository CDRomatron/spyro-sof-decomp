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

/* Warning: missing "bx $lr" in last block of sub_080120B0 (_08012124). */

M2C_UNK sub_0800D9EC(s32, s32);                     /* extern */
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */

void *sub_080120B0(void *arg0) {
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r2;

    sub_0800D9EC(arg0 + 0x34, arg0 + 0xC);
    temp_r2 = M2C_FIELD(arg0, u16 *, 0xA0);
    if ((u32) temp_r2 <= 0x77U) {
        if (!(3 & temp_r2)) {
            M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) - 0x80);
            M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + 0x80);
        }
        if ((3 & M2C_FIELD(arg0, u16 *, 0xA0)) == 2) {
            M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 0x80);
            M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) - 0x80);
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, u16 *, 0xA0) - 1;
    M2C_FIELD(arg0, u16 *, 0xA0) = temp_r0_2;
    temp_r0 = temp_r0_2;
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) temp_r0;
        M2C_FIELD(arg0, s32 *, 0x6C) = (s32) temp_r0;
        sub_0800FCA4(0x90, 1, arg0 + 0xC);
        return arg0;
    }
    return (void *) temp_r0;
}
