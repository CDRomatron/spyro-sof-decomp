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

M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_080141D0(void *);                       /* extern */
M2C_UNK sub_080500D8();                             /* extern */
M2C_UNK sub_080529D4();                             /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */

s32 sub_080147B0(u16 arg0, u8 arg1, void *arg2) {
    u16 temp_r0;
    u8 temp_r1;

    temp_r0 = arg0;
    temp_r1 = arg1;
    if (temp_r0 == 0) {
        if (temp_r1 == 1) {
            M2C_FIELD(arg2, u8 *, 0xBB) = temp_r1;
        }
    } else if (((s32) temp_r0 >= 0) && ((s32) temp_r0 <= 2)) {
        if (M2C_FIELD(arg2, u8 *, 0xBB) != 0) {
            M2C_FIELD(arg2, u16 *, 0x22) = (u16) (M2C_FIELD(arg2, u16 *, 0x22) | 1);
            M2C_FIELD(arg2, u8 *, 0xBB) = 0U;
            M2C_FIELD(arg2, s8 *, 0xBC) = 1;
            sub_080141D0(arg2);
        } else {
            sub_080529D4();
            sub_080500D8();
            sub_080534A0(3);
            sub_0800F538();
        }
    }
    return 1;
}
