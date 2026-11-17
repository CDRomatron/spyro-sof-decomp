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

M2C_UNK sub_080641C8();                             /* extern */

s32 sub_08059428(void) {
    void *temp_r1;
    void *temp_r4;

    temp_r4 = *(void **)0x030026CC;
    if (M2C_FIELD(temp_r4, s32 *, 0x34) != 0) {
        sub_080641C8();
    }
    if ((8 & *(u16 *)0x030010B0) && (M2C_FIELD(temp_r4, s32 *, 0x40) != 3)) {
        temp_r1 = *(void **)0x030026CC;
        M2C_FIELD(temp_r1, s32 *, 0x40) = 3;
        M2C_FIELD(temp_r1, s32 *, 0x34) = (s32) M2C_FIELD((void *)0x0817AE58, s32 *, 0xC);
        M2C_FIELD(temp_r1, s16 *, 0x4A) = 0;
    }
    return 1;
}
