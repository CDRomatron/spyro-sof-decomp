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

M2C_UNK sub_08006080();                             /* extern */
M2C_UNK sub_08063DB8(s32);                          /* extern */
M2C_UNK sub_08063E20(s32, s32);                     /* extern */
M2C_UNK sub_08065CF0(s32, s32, s32);                /* extern */

s32 sub_08007160(void) {
    *(s32 *)0x03001640 = 0x03001650;
    *(s8 *)0x030010A8 = 0;
    sub_08063DB8(0x40);
    sub_08063E20(3, 0x03001128);
    sub_08065CF0(0x03001650, 0, 0x640);
    sub_08065CF0(0x03001C90, 0, 0x20);
    sub_08006080();
    *(u8 *)0x03001C70 = 0x2B;
    return 1;
}
