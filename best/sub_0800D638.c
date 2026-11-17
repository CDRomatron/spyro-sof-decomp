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

void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void sub_0800D638(void **arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r1;

    if (*arg0 == NULL) {
        temp_r0 = sub_08002B34(0x28, 0);
        *arg0 = temp_r0;
        if (temp_r0 == NULL) {
            *arg0 = sub_08002B34(0x28, 1);
        }
        sub_08065CF0(*arg0, 0, 0x28);
        temp_r1 = *arg0;
        M2C_FIELD(temp_r1, s32 *, 0) = sub_08004370();
        M2C_FIELD(temp_r1, s8 *, 0x25) = 1;
    }
    sub_08003C58(M2C_FIELD(*arg0, s32 *, 0), arg1);
}
