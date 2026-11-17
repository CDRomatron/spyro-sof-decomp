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

M2C_UNK _08027C94(void *, s32);                     /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
s32 sub_08054E90(void *, void *);                   /* extern */
s32 sub_08063D80(s32, s32);                         /* extern */

void sub_080284D0(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r1;
    void *temp_r5;

    temp_r5 = arg0 + 0xC;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x68) - 0x4C;
    M2C_FIELD(arg0, s32 *, 0x68) = temp_r0;
    M2C_FIELD(temp_r5, s32 *, 8) = (s32) (M2C_FIELD(temp_r5, s32 *, 8) + temp_r0);
    temp_r0_2 = sub_08054E90(temp_r5, arg0);
    if ((s32) M2C_FIELD(temp_r5, s32 *, 8) < temp_r0_2) {
        M2C_FIELD(temp_r5, s32 *, 8) = temp_r0_2;
        temp_r1 = 0 - M2C_FIELD(arg0, s32 *, 0x68);
        M2C_FIELD(arg0, s32 *, 0x68) = temp_r1;
        temp_r0_3 = sub_08063D80(temp_r1 * 0x99, 0x100);
        M2C_FIELD(arg0, s32 *, 0x68) = temp_r0_3;
        if (temp_r0_3 <= 0x7F) {
            _08027C94(arg0, 5);
            return;
        }
        _08027C94(arg0, 2);
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x28), 2);
    }
}
