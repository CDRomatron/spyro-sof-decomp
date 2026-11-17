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

M2C_UNK sub_08004690(void *, s32, s32, s32, s32);   /* extern */
M2C_UNK sub_08054A04(void *, s32);                  /* extern */
M2C_UNK sub_0805588C(s32);                          /* extern */
M2C_UNK sub_080558A4(s32);                          /* extern */

void sub_0804EC14(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r3;

    sub_0805588C(M2C_FIELD(*(void **)0x030026B8, s32 *, 0x108C));
    temp_r2 = M2C_FIELD(arg0, s32 *, 0);
    temp_r3 = M2C_FIELD(arg0, s32 *, 4);
    temp_r1 = ((temp_r2 - temp_r3) * 2) + M2C_FIELD(*(void **)0x030026B8, s32 *, 0x10A0);
    temp_r2_2 = ((temp_r2 + temp_r3) - M2C_FIELD(arg0, s32 *, 8)) + M2C_FIELD(*(void **)0x030026B8, s32 *, 0x10A4);
    sub_08004690(M2C_FIELD(*(void **)0x030026B8, void **, 0), temp_r1 - (M2C_FIELD(M2C_FIELD(*(void **)0x030026B8, void **, 0), s32 *, 0x28) << 0xA), temp_r2_2 - (M2C_FIELD(M2C_FIELD(*(void **)0x030026B8, void **, 0), s32 *, 0x2C) << 0xA), temp_r1, temp_r2_2);
    sub_080558A4(M2C_FIELD(*(void **)0x030026B8, s32 *, 0x108C));
    sub_08054A04(*(void **)0x030026B8, 0);
    if (M2C_FIELD(*(void **)0x03001634, u16 *, 0x1A) == 0) {
        sub_08054A04(*(void **)0x030026B8, 1);
    }
}
