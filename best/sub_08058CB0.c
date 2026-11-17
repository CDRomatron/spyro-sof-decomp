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

M2C_UNK sub_08000488(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_080582D8();                             /* extern */
M2C_UNK sub_080583C0();                             /* extern */

s32 sub_08058CB0(void) {
    u16 temp_r0;
    void *temp_r4;

    temp_r4 = *(void **)0x030008D8;
    sub_08000488(M2C_FIELD(temp_r4, s32 *, 0x1AB8) + ((M2C_FIELD(temp_r4, u16 *, 0x1AD4) << 9) + 4), 0x0600E800, 0x10, 0x10, 0, 0xE);
    temp_r0 = M2C_FIELD(temp_r4, u16 *, 0x1AD8);
    if ((temp_r0 == 2) || (temp_r0 == 4)) {
        sub_080582D8();
    }
    sub_080583C0();
    return 0;
}
