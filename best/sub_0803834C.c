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
s32 sub_0800D9EC(s32, s32);                         /* extern */
M2C_UNK sub_08037ED0(s32, s32);                     /* extern */

void sub_0803834C(s32 arg0) {
    s32 temp_r0;

    temp_r0 = sub_0800D9EC(arg0 + 0x64, arg0 + 0x24);
    if (temp_r0 == 3) {
        sub_08003220(0x08170BE8);
    }
    if (temp_r0 == 1) {
        sub_08037ED0(arg0, 4);
    }
}
