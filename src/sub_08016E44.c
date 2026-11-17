/* identical to sub_08016E60 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

s32 sub_0800F2AC();                                 /* extern */
M2C_UNK sub_08016E90(s32, s32);                     /* extern */
s32 sub_0801DB50();                                 /* extern */
s32 sub_08050148();                                 /* extern */
u32 sub_08052AD8(s32);                              /* extern */
u8 sub_0805399C();                                  /* extern */

void sub_08016E44(s32 arg0) {
    if ((sub_08052AD8(arg0 + 0xC) <= 0x018FFFFFU) && ((sub_08050148() << 0x18) == 0) && ((sub_0801DB50() << 0x18) != 0) && (sub_0805399C() == 3) && ((sub_0800F2AC() << 0x18) != 0)) {
        sub_08016E90(arg0, 1);
    }
}
