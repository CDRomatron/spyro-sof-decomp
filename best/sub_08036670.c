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

s32 _08065138();                                    /* extern */
M2C_UNK sub_08003C58(s32);                          /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
s32 sub_08004508(s32);                              /* extern */
M2C_UNK sub_08036078(void *);                       /* extern */
M2C_UNK sub_08064930(s32, s32, s32, s32);           /* extern */
s32 sub_080650BC(s32);                              /* extern */

void sub_08036670(void *arg0) {
    s32 temp_ret;

    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (u16) (M2C_FIELD(arg0, s32 *, 0x3C) + 0xFFFFFC9A);
    temp_ret = sub_080650BC(M2C_FIELD(arg0, s32 *, 0x2C));
    sub_08064930(temp_ret, SECOND_REG(temp_ret), 0x403C71C7, 0x1C71C71C);
    M2C_FIELD(arg0, s32 *, 0x2C) = _08065138();
    if ((M2C_FIELD(arg0, u16 *, 0xB0) == 0) && (sub_08004508(M2C_FIELD(arg0, s32 *, 0x44)) != 0x5C000A)) {
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x44));
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x44), -1);
    }
    sub_08036078(arg0);
}
