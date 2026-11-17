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

M2C_UNK sub_08000C9C(void *);                       /* extern */

void *sub_08052994(void *arg0) {
    void *temp_r0;
    void *temp_r4;

    temp_r0 = *(void **)0x030026C0;
    temp_r4 = M2C_FIELD(temp_r0, void **, 0x51C);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, u16 *, 0x22) = (u16) (0xFFFD & M2C_FIELD(temp_r4, u16 *, 0x22));
    }
    M2C_FIELD(temp_r0, void **, 0x51C) = arg0;
    M2C_FIELD(arg0, u16 *, 0x22) = (u16) (2 | M2C_FIELD(arg0, u16 *, 0x22));
    sub_08000C9C(M2C_FIELD(temp_r0, void **, 0x51C));
    return temp_r4;
}
