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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
s32 sub_08004508(s32);                              /* extern */
M2C_UNK sub_0800D9EC(s32, void *);                  /* extern */
M2C_UNK sub_08015FD8(void *);                       /* extern */

void sub_080168C4(void *arg0) {
    void *temp_r6;

    temp_r6 = arg0 + 0x24;
    sub_0800D9EC(arg0 + 0x3C, temp_r6);
    if ((sub_08004508(M2C_FIELD(arg0, s32 *, 0x84)) == 0x630005) && ((s32) M2C_FIELD(arg0, s32 *, 0x48) < 0) && ((s32) M2C_FIELD(temp_r6, s32 *, 8) <= (s32) M2C_FIELD(arg0, s32 *, 0xA4))) {
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x84), 0x630006);
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x84), -1);
    }
    sub_08015FD8(arg0);
}
