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

M2C_UNK _08012124(void *, s32);                     /* extern */
M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_0800D9EC(s32, s32);                         /* extern */

void sub_080126F8(void *arg0) {
    if (sub_0800D9EC(arg0 + 0x34, arg0 + 0xC) == 3) {
        _08012124(arg0, 4);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x74), 0x200002);
        sub_08003220(0x08170CAC);
        M2C_FIELD(arg0, s8 *, 0xA6) = 1;
    }
}
