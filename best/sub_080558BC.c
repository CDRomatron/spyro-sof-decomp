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

u8 sub_08007324();                                  /* extern */

s32 sub_080558BC(void) {
    u16 var_r1;
    u8 temp_r2;

    temp_r2 = sub_08007324();
    var_r1 = 0;
loop_1:
    if (M2C_FIELD(((var_r1 * 0xC) + 0x0817AC58), u16 *, 0xA) == temp_r2) {
        return 1;
    }
    var_r1 += 1;
    if ((u32) var_r1 > 0xDU) {
        return 0;
    }
    goto loop_1;
}
