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

/* Warning: missing "bx $lr" in last block of sub_08019FA8 (_08019FEA). */

M2C_UNK sub_08050228(s32, void *, s32);             /* extern */

s32 sub_08019FA8(void *arg0) {
    u16 temp_r0;
    u16 temp_r1;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0x152);
    if ((temp_r0 == 0) || (temp_r1 = temp_r0 - 1, M2C_FIELD(arg0, u16 *, 0x152) = temp_r1, ((temp_r1 << 0x10) == 0)) || (temp_r1 & 2) || (M2C_FIELD(arg0, u16 *, 0x148) == 0x12)) {
        sub_08050228(M2C_FIELD(arg0, s32 *, 0x24), arg0 + 0xC, M2C_FIELD(arg0, s32 *, 0x134));
    }
    return 0x80;
}
