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

M2C_UNK _080259CC(void *, s32);                     /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
s32 sub_0800D9EC(s32, s32);                         /* extern */
M2C_UNK sub_08025DE0(void *);                       /* extern */
M2C_UNK sub_08054E64(s32, s32);                     /* extern */

void sub_080262A8(void *arg0) {
    s32 temp_r4;

    temp_r4 = arg0 + 0x24;
    if (sub_0800D9EC(arg0 + 0x58, temp_r4) == 3) {
        sub_08054E64(temp_r4, temp_r4);
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x44), -1);
        _080259CC(arg0, 0);
        M2C_FIELD(arg0, s16 *, 0xB4) = 0x5A;
    }
    sub_08025DE0(arg0);
}
