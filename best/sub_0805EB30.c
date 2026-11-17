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

M2C_UNK sub_080035D8(s32);                          /* extern */
M2C_UNK sub_0805EBA8(s32);                          /* extern */
M2C_UNK sub_08060BC8();                             /* extern */

void sub_0805EB30(s32 arg0) {
    void *temp_r1;

    temp_r1 = *(void **)0x030026EC;
    M2C_FIELD(temp_r1, s32 *, 0xA0) = (s32) (M2C_FIELD(temp_r1, s32 *, 0xA0) + arg0);
    if ((s32) M2C_FIELD(*(void **)0x030026EC, s32 *, 0xA0) > 0x63) {
        M2C_FIELD(*(void **)0x030026EC, s32 *, 0xA0) = 0x63;
    }
    if ((s32) M2C_FIELD(*(void **)0x030026EC, s32 *, 0xA0) < 0) {
        M2C_FIELD(*(void **)0x030026EC, s32 *, 0xA0) = 0;
        sub_08060BC8();
        sub_080035D8(0x0816E8EC);
        M2C_FIELD(*(void **)0x030026EC, s32 *, 0xAC) = 3;
        return;
    }
    if (arg0 < 0) {
        sub_0805EBA8(M2C_FIELD(*(void **)0x030026EC, s32 *, 0xA0));
        M2C_FIELD(*(void **)0x030026EC, s32 *, 0xAC) = 2;
        return;
    }
    sub_0805EBA8(M2C_FIELD(*(void **)0x030026EC, s32 *, 0xA0));
}
