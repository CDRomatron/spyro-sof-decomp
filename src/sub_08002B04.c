/* identical to sub_08002B34 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_080003C0();                             /* extern */
M2C_UNK sub_0800096C();                             /* extern */
M2C_UNK sub_08000B60();                             /* extern */
M2C_UNK sub_08000C10();                             /* extern */
M2C_UNK sub_08002474();                             /* extern */
M2C_UNK sub_08002D28();                             /* extern */
M2C_UNK sub_080032F8();                             /* extern */
M2C_UNK sub_080037AC();                             /* extern */
M2C_UNK sub_08003A88();                             /* extern */
M2C_UNK sub_08061B84();                             /* extern */

void sub_08002B04(void) {
    sub_08061B84();
    sub_08002474();
    sub_0800096C();
    sub_080003C0();
    sub_08003A88();
    sub_080032F8();
    sub_08000B60();
    sub_08002D28();
    sub_080037AC();
    sub_08000C10();
}
