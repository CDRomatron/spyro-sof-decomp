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

M2C_UNK sub_08002564(s32);                          /* extern */
M2C_UNK sub_080025B4(s32);                          /* extern */
M2C_UNK sub_08002640(s32, u16, s32);                /* extern */
u32 sub_080026F0(s32, s32);                         /* extern */
M2C_UNK sub_08002848(s32, s32, s32);                /* extern */

void sub_08060CAC(void) {
    s32 temp_r1;

    sub_08002564(M2C_FIELD(*(void **)0x030026F0, s32 *, 8));
    temp_r1 = 0x78 - (sub_080026F0(0x2EF, M2C_FIELD(*(void **)0x030026F0, s32 *, 4)) >> 1);
    M2C_FIELD(*(void **)0x030026F0, s32 *, 0x10) = temp_r1;
    sub_08002640(M2C_FIELD(*(void **)0x030026F0, s32 *, 8), (u16) temp_r1, 0);
    sub_08002848(0x2EF, M2C_FIELD(*(void **)0x030026F0, s32 *, 8), 1);
    sub_080025B4(M2C_FIELD(*(void **)0x030026F0, s32 *, 8));
    M2C_FIELD(*(void **)0x030026EC, s32 *, 0xDC) = 0;
}
