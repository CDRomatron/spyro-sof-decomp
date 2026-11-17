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

M2C_UNK sub_080009E0(s32, s32);                     /* extern */
M2C_UNK sub_0800F204(s32, u16, u16);                /* extern */

void sub_08059140(void) {
    u16 temp_r0;
    u16 temp_r1;
    u16 temp_r2;
    u8 *var_r0;
    void *temp_r5;

    temp_r5 = *(void **)0x030026CC;
    *(u16 *)0x030011B0 = 0xFF;
    temp_r2 = *(u16 *)0x030011B4;
    *(u16 *)0x030011B4 = M2C_FIELD(temp_r5, u16 *, 0x4A);
    temp_r1 = M2C_FIELD(temp_r5, u16 *, 0x4A);
    sub_0800F204((0x10 - temp_r1) * 0x10, temp_r1, temp_r2);
    temp_r0 = M2C_FIELD(temp_r5, u16 *, 0x4A) + 1;
    M2C_FIELD(temp_r5, u16 *, 0x4A) = temp_r0;
    if ((u32) temp_r0 > 0x10U) {
        if (M2C_FIELD(temp_r5, u16 *, 0x3C) == 0) {
            var_r0 = (u8 *)0x03001630;
        } else {
            var_r0 = (u8 *)0x03001631;
        }
        *var_r0 = 1;
        if (M2C_FIELD(temp_r5, u16 *, 0x3C) == 0) {
            sub_080009E0(M2C_FIELD((void *)0x03002700, s32 *, 0x14), 0x73000000);
            return;
        }
        sub_080009E0(M2C_FIELD((void *)0x03002700, s32 *, 0xC), 0x53000000);
    }
}
