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

void *sub_08002B34(u16, s32);                       /* extern */

void *sub_08001DD8(s16 arg0, void *arg1, s16 arg2, void *arg3) {
    s16 sp0;
    s16 sp4;
    s32 sp8;
    void *temp_r0;
    void *temp_r0_2;

    temp_r0 = sub_08002B34(0x1CU, 1);
    M2C_FIELD(temp_r0, void **, 4) = arg1;
    M2C_FIELD(temp_r0, s16 *, 0x12) = arg2;
    M2C_FIELD(temp_r0, s16 *, 0xE) = (s16) ((u32) (arg1 - (arg0 << 0xE)) >> 5);
    M2C_FIELD(temp_r0, s16 *, 0x10) = 1;
    M2C_FIELD(temp_r0, s16 *, 0x16) = 1;
    M2C_FIELD(temp_r0, s16 *, 0x18) = arg0;
    M2C_FIELD(temp_r0, void **, 8) = NULL;
    M2C_FIELD(temp_r0, u16 *, 0xC) = 0U;
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, void **, 4) = arg1;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000010;
    M2C_FIELD(temp_r0, void **, 0) = arg3;
    M2C_FIELD(temp_r0, u16 *, 0xC) = (u16) ((M2C_FIELD(arg3, u16 *, 0x12) * M2C_FIELD(arg3, u16 *, 0x10)) << 6);
    sp8 = 0;
    temp_r0_2 = sub_08002B34(M2C_FIELD(temp_r0, u16 *, 0xC), 1);
    M2C_FIELD(temp_r0, void **, 8) = temp_r0_2;
    M2C_FIELD(temp_r0, s16 *, 0x14) = (s16) (M2C_FIELD(arg3, u16 *, 0x12) << 5);
    sp4 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp4;
    M2C_FIELD((void *)0x040000D4, void **, 4) = temp_r0_2;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (((u16) M2C_FIELD(temp_r0, u16 *, 0xC) >> 1) | 0x81000000);
    return temp_r0;
}
