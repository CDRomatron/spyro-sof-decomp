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

M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_080501CC(void *, M2C_UNK *);            /* extern */
s32 sub_08052BB4(void *);                           /* extern */
s32 sub_08052C28(void *, s32);                      /* extern */
s32 sub_08052CF4(u16);                              /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */
extern M2C_UNK sub_0803CFF0;

u8 sub_0803CF34(void *arg0) {
    s32 var_r0;
    u16 temp_r0;
    u16 temp_r0_2;

    if (M2C_FIELD(arg0, u8 *, 0x4F) != 0) {
        M2C_FIELD(arg0, u8 *, 0x4F) = 0U;
        M2C_FIELD(arg0, s32 *, 0x38) = sub_08052CF4(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u16 *, 2));
    }
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x40));
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        sub_080641CC(arg0);
        var_r0 = sub_08052BB4(arg0 + 0xC);
    } else {
        var_r0 = sub_08052C28(arg0 + 0xC, M2C_FIELD(arg0, s32 *, 0x38) + 0xC);
    }
    M2C_FIELD(arg0, s32 *, 0x48) = var_r0;
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x4C);
    if (temp_r0 != 0) {
        temp_r0_2 = temp_r0 - 1;
        M2C_FIELD(arg0, u16 *, 0x4C) = temp_r0_2;
        if ((temp_r0_2 << 0x10) == 0) {
            sub_080501CC(arg0, &sub_0803CFF0);
        }
    }
    return M2C_FIELD(arg0, u8 *, 0x50);
}
