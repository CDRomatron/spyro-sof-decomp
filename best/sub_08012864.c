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

/* Warning: missing "bx $lr" in last block of sub_08012864 (_080128EC). */

M2C_UNK sub_0800D9EC(void *, void *);               /* extern */
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */
void *sub_08012B18(void *);                         /* extern */

void *sub_08012864(void *arg0) {
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r1;
    void *temp_r5;

    temp_r1 = M2C_FIELD(arg0, u16 *, 0x92);
    if ((u32) temp_r1 <= 0x77U) {
        if (!(3 & temp_r1)) {
            M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) - 0x80);
            M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) + 0x80);
        }
        if ((3 & M2C_FIELD(arg0, u16 *, 0x92)) == 2) {
            M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 0x80);
            M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) - 0x80);
        }
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x92) - 1;
    M2C_FIELD(arg0, u16 *, 0x92) = temp_r0;
    temp_r0_2 = temp_r0;
    temp_r5 = arg0 + 0x24;
    if (temp_r0_2 == 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) temp_r0_2;
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) temp_r0_2;
        sub_0800FCA4(0x90, 1, temp_r5);
        return arg0;
    }
    sub_0800D9EC(arg0 + 0x50, temp_r5);
    return sub_08012B18(arg0);
}
