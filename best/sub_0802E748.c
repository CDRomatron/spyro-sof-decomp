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

M2C_UNK sub_08004478(s32, s32);                     /* extern */
s32 sub_08004520(s32);                              /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_08050228(s32, s32, s32);                /* extern */
M2C_UNK sub_0805209C(void *, s32);                  /* extern */

void sub_0802E748(void *arg0) {
    s32 temp_r4;

    if (((sub_08007874(0x6B) << 0x18) != 0) || ((sub_08007874(0xF) << 0x18) != 0)) {
        sub_08050228(M2C_FIELD(arg0, s32 *, 0x48), arg0 + 0xC, M2C_FIELD(arg0, s32 *, 0x54));
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C);
        sub_08004478(temp_r4, sub_08004520(M2C_FIELD(arg0, s32 *, 0x48)));
        sub_0805209C(arg0 + 0x24, M2C_FIELD(arg0, s32 *, 0x54) + 0x4000);
    }
}
