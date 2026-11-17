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

M2C_UNK sub_0800F6BC();                             /* extern */

void sub_08059100(void) {
    u16 temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    temp_r1 = *(void **)0x030026CC;
    temp_r0 = M2C_FIELD(temp_r1, u16 *, 0x48) - 1;
    M2C_FIELD(temp_r1, u16 *, 0x48) = temp_r0;
    if (((temp_r0 << 0x10) == 0) || (3 & *(u16 *)0x030010B0)) {
        temp_r1_2 = *(void **)0x030026CC;
        M2C_FIELD(temp_r1_2, s32 *, 0x40) = 0;
        M2C_FIELD(temp_r1_2, s32 *, 0x34) = (s32) *(s32 *)0x0817AE58;
        sub_0800F6BC();
    }
}
