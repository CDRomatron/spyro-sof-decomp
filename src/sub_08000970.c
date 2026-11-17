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
s32 sub_080641C8(s32);                              /* extern */

void *sub_08000970(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_r0;

    temp_r0 = sub_08002B34(0x58, 0);
    M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x18) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x1C) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x14) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x20) = arg4;
    M2C_FIELD(temp_r0, s32 *, 0x24) = arg5;
    sub_08000C14(temp_r0 + 0x28);
    M2C_FIELD(temp_r0, s8 *, 0x34) = 0;
    sub_08000C14(temp_r0 + 0x34 + 0x14);
    M2C_FIELD(temp_r0, s8 *, 0x54) = 0;
    sub_08000C14((temp_r0 + 0x54) - 0x1C);
    M2C_FIELD(temp_r0, s8 *, 0x44) = 0;
    M2C_FIELD(temp_r0, s32 *, 8) = sub_080641C8(M2C_FIELD(temp_r0, s32 *, 0x10));
    return temp_r0;
}
