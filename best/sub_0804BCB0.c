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

M2C_UNK sub_08061C28(s32, s32, s32);                /* extern */

void sub_0804BCB0(void) {
    s32 temp_r0;
    s32 var_r2;

    M2C_FIELD(*(void **)0x030026A4, s8 *, 0xD4) = 0;
    temp_r0 = M2C_FIELD(*(void **)0x030026A4, s32 *, 0xB8);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xADU;
        var_r2 = 0x0300C70B;
block_10:
        sub_08061C28(0, 5, var_r2);
        return;
    case 1:
        M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xAFU;
        var_r2 = 0x0300C900;
        goto block_10;
    case 2:
        M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xAEU;
        var_r2 = 0x0300C800;
        goto block_10;
    case 3:
        M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xB0U;
        sub_08061C28(0, 5, 0x0300CA18);
        return;
    }
}
