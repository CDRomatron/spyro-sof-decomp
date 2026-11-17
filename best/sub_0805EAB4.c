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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_0805E864(u32);                          /* extern */
M2C_UNK sub_0805EB30(s32);                          /* extern */

void sub_0805EAB4(s32 arg0) {
    void *temp_r0;
    void *temp_r1;
    void *temp_r2;
    void *temp_r2_2;

    temp_r2 = *(void **)0x030026EC;
    M2C_FIELD(temp_r2, u32 *, 0xA4) = (u32) (M2C_FIELD(temp_r2, u32 *, 0xA4) + arg0);
    temp_r2_2 = *(void **)0x030026EC;
    M2C_FIELD(temp_r2_2, u32 *, 0xA8) = (u32) (M2C_FIELD(temp_r2_2, u32 *, 0xA8) + arg0);
    if ((u32) M2C_FIELD(*(void **)0x030026EC, u32 *, 0xA4) > 0x3B9AC9FFU) {
        temp_r1 = *(void **)0x030026EC;
        M2C_FIELD(temp_r1, u32 *, 0xA4) = (u32) (M2C_FIELD(temp_r1, u32 *, 0xA4) + 0xC4653601);
    }
    if ((u32) M2C_FIELD(*(void **)0x030026EC, u32 *, 0xA8) > 0x124F7U) {
        temp_r0 = *(void **)0x030026EC;
        M2C_FIELD(temp_r0, u32 *, 0xA8) = (u32) (M2C_FIELD(temp_r0, u32 *, 0xA8) + 0xFFFEDB08);
        sub_0805EB30(1);
        sub_08003220(0x08170B5C);
    }
    sub_0805E864(M2C_FIELD(*(void **)0x030026EC, u32 *, 0xA4));
}
