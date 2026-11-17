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

s32 sub_08009F74(u16);                              /* extern */
M2C_UNK sub_0800A2D8(u16);                          /* extern */

s32 sub_08054828(s32 arg0) {
    s32 temp_r3;
    u16 var_r3;
    void *temp_r2;
    void *temp_r6;
    void *var_r5;

    var_r5 = NULL;
    temp_r6 = *(void **)0x030026B8;
    var_r3 = 0;
    if (M2C_FIELD((void *)0x0817AA6C, u8 *, 4) == arg0) {
        var_r5 = (void *)0x0817AA6C;
    } else {
loop_2:
        var_r3 += 1;
        if ((u32) var_r3 <= 6U) {
            temp_r2 = (var_r3 * 8) + 0x0817AA6C;
            if (M2C_FIELD(temp_r2, u8 *, 4) == arg0) {
                var_r5 = temp_r2;
            } else {
                goto loop_2;
            }
        }
    }
    temp_r3 = sub_08009F74(M2C_FIELD(var_r5, u16 *, 0)) + (M2C_FIELD(var_r5, u8 *, 5) << 5);
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = temp_r3;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD(temp_r6, s32 *, 0) + ((M2C_FIELD(var_r5, u8 *, 7) << 5) + 0x44));
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) ((M2C_FIELD(var_r5, u8 *, 6) * 0x10) | 0x80000000);
    if (M2C_FIELD(temp_r6, s32 *, 0x10B4) & 4) {
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = temp_r3;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) ((M2C_FIELD(var_r5, u8 *, 7) << 5) + 0x030011C0);
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) ((M2C_FIELD(var_r5, u8 *, 6) * 0x10) | 0x80000000);
    }
    sub_0800A2D8(M2C_FIELD(var_r5, u16 *, 0));
    return 0xF & M2C_FIELD(var_r5, u8 *, 7);
}
