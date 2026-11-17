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

M2C_UNK sub_0800D73C(s32);                          /* extern */
s32 sub_0806436C(s32, s32);                         /* extern */
s8 sub_080643E4(s32, s32);                          /* extern */

void sub_0805EBA8(s32 arg0) {
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4, s8 *, 0x61) = sub_080643E4(arg0, 0xA);
    temp_r4_2 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4_2, s8 *, 0x60) = sub_080643E4(sub_0806436C(arg0, 0xA), 0xA);
    sub_0800D73C(M2C_FIELD(*(void **)0x030026EC, s32 *, 0x54));
}
