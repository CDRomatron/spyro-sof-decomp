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

M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_08017004(void *);                       /* extern */
s32 sub_08052BB4(s32);                              /* extern */

void sub_08017D28(void *arg0) {
    void *temp_r4;

    temp_r4 = *(void **)0x03001634;
    M2C_FIELD(arg0, s32 *, 0x94) = sub_08052BB4(arg0 + 0x24);
    if (M2C_FIELD(temp_r4, u8 *, 0x33) != 3) {
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x84), 0);
    } else {
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x84), -1);
    }
    sub_08017004(arg0);
}
