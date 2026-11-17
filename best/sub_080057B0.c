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

M2C_UNK sub_08000C14(void *);                       /* extern */
void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_080057B0(void) {
    void *temp_r0;

    temp_r0 = sub_08002B34(0x444, 0);
    sub_08065CF0(temp_r0, 0, 0x444);
    sub_08000C14(temp_r0);
    sub_08000C14(temp_r0 + 0xC);
    M2C_FIELD(temp_r0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x20) = 0xFFFF;
    M2C_FIELD(temp_r0, s32 *, 0x24) = 0xFFFF;
    M2C_FIELD(temp_r0, s32 *, 0x28) = 0x1E;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = 0x14;
    M2C_FIELD(temp_r0, s32 *, 0x38) = 4;
    M2C_FIELD(temp_r0, s32 *, 0x34) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x30) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x3C) = 0x1000;
    *(u16 *)0x030011B4 = 0x10;
    return temp_r0;
}
