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

s32 sub_080620D4(s32);                              /* extern */

void sub_080620FC(void *arg1) {
    s32 temp_ret;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg1, void **, 0x40);
    temp_ret = sub_080620D4(((((M2C_FIELD(temp_r2, u8 *, 3) << 8) | M2C_FIELD(temp_r2, u8 *, 2)) << 8) | M2C_FIELD(temp_r2, u8 *, 1)) << 8);
    M2C_FIELD(SECOND_REG(temp_ret), s32 *, 0x40) = (s32) (temp_ret | M2C_ERROR(/* Read from unset register $r3 */));
}
