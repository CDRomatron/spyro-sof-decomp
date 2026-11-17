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

M2C_UNK sub_08007944(s32);                          /* extern */
s32 sub_0800798C();                                 /* extern */
s32 sub_080079BC();                                 /* extern */
M2C_UNK sub_0800C308(s32, s32, s32);                /* extern */
M2C_UNK sub_0800C5B8(s32);                          /* extern */
M2C_UNK sub_0800D5B0(s32, s32, void (*)(s32, s32, s32)); /* extern */
M2C_UNK sub_08053580();                             /* extern */

void sub_0801DE70(s32 arg0, s32 arg1, s32 arg2) {
    switch (arg2) {                                 /* irregular */
    case 1:
        sub_08007944((s32) ((sub_0800798C() << 0x18) + 0xFF000000) >> 0x18);
        sub_0800C308(arg0, sub_080079BC(), 2);
        sub_0800C5B8(arg0);
        sub_0800D5B0(arg0, arg1, sub_0801DE70);
        return;
    case 0:
        sub_08053580();
        return;
    }
}
