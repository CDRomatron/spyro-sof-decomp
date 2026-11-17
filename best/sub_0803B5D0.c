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

s32 sub_08006664(u8);                               /* extern */
u8 sub_080072C0(u8);                                /* extern */
s32 sub_0800750C(u8);                               /* extern */

u16 sub_0803B5D0(void *arg0) {
    if ((sub_0800750C(sub_080072C0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u8 *, 0xA))) << 0x18) != 0) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u16 *, 8);
    }
    if ((sub_08006664(sub_080072C0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u8 *, 0xA))) << 0x18) != 0) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u16 *, 6);
    }
    if (M2C_FIELD(arg0, u8 *, 0x49) != 0) {
        return M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u16 *, 2);
    }
    M2C_FIELD(arg0, u8 *, 0x49) = 1U;
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u16 *, 4);
}
