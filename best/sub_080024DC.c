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

s32 sub_08002B34(u16, s32);                         /* extern */
M2C_UNK sub_08002BE0(s32, u16);                     /* extern */

s32 sub_080024DC(void *arg0, void *arg1) {
    s16 sp0;
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, void **, 0) = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 != 0) {
        sub_08002BE0(temp_r0, M2C_FIELD(arg0, u16 *, 0xC));
    }
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) ((M2C_FIELD(arg1, u16 *, 0x12) * M2C_FIELD(arg1, u16 *, 0x10)) << 6);
    temp_r0_2 = sub_08002B34(M2C_FIELD(arg0, u16 *, 0xC), 1);
    M2C_FIELD(arg0, s32 *, 8) = temp_r0_2;
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) (M2C_FIELD(arg1, u16 *, 0x12) << 5);
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = temp_r0_2;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (((u16) M2C_FIELD(arg0, u16 *, 0xC) >> 1) | 0x81000000);
    return M2C_FIELD((void *)0x040000D4, s32 *, 8);
}
