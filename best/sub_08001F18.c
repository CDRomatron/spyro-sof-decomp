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

M2C_UNK sub_08002564(void *);                       /* extern */
void *sub_08002B34(s32, s32);                       /* extern */

void *sub_08001F18(s16 arg0, s16 arg1, u16 arg2, u16 arg3, s32 arg4, s32 arg5) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = sub_08002B34(0x1C, 1);
    M2C_FIELD(temp_r0, s16 *, 0x16) = 0;
    M2C_FIELD(temp_r0, s16 *, 0x18) = 0;
    M2C_FIELD(temp_r0, void **, 0xC) = NULL;
    M2C_FIELD(temp_r0, s32 *, 8) = arg5;
    M2C_FIELD(temp_r0, s16 *, 0) = arg0;
    M2C_FIELD(temp_r0, s16 *, 2) = arg1;
    M2C_FIELD(temp_r0, u16 *, 4) = arg2;
    M2C_FIELD(temp_r0, u16 *, 6) = arg3;
    M2C_FIELD(temp_r0, s16 *, 0x14) = (s16) arg4;
    temp_r0_2 = ((M2C_FIELD(temp_r0, u16 *, 6) * 2 * M2C_FIELD(temp_r0, u16 *, 4)) + 3) & ~3;
    M2C_FIELD(temp_r0, s32 *, 0x10) = temp_r0_2;
    M2C_FIELD(temp_r0, void **, 0xC) = sub_08002B34(temp_r0_2, 1);
    sub_08002564(temp_r0);
    return temp_r0;
}
