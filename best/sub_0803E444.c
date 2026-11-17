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
s32 sub_08052C28(s32, s32);                         /* extern */
s32 sub_08052CF4(s32);                              /* extern */
M2C_UNK sub_080641CC(void *);                       /* extern */

u8 sub_0803E444(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x5B) != 0) {
        M2C_FIELD(arg0, u8 *, 0x5B) = 0U;
        temp_r0 = sub_08052CF4(0x1C3);
        M2C_FIELD(arg0, s32 *, 0x44) = temp_r0;
        M2C_FIELD(arg0, s32 *, 0x50) = sub_08052C28(arg0 + 0xC, temp_r0 + 0xC);
    }
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x48));
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        sub_080641CC(arg0);
    }
    return M2C_FIELD(arg0, u8 *, 0x5C);
}
