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
M2C_UNK sub_080042A4(s32, s32, s32);                /* extern */

void sub_0805B4E8(void *arg0) {
    if ((M2C_FIELD(*(void **)0x030026D8, s32 *, 0x40) != 0xE) && (M2C_FIELD(*(void **)0x030026D8, s32 *, 0x40) != 0x18) && (M2C_FIELD(*(void **)0x030026D8, s32 *, 0x44) != 1)) {
        sub_08004020(M2C_FIELD(arg0, s32 *, 0x18));
        sub_080042A4(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14));
    }
}
