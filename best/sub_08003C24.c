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

u8 sub_080641D0(void *, s32, s32);                  /* extern */

u8 sub_08003C24(void **arg0) {
    u8 var_r2;
    void *temp_r4;
    void *var_r3;

    var_r2 = 1;
    var_r3 = *arg0;
loop_2:
    temp_r4 = M2C_FIELD(var_r3, void **, 0);
    if ((temp_r4 != NULL) && (!(1 & M2C_FIELD(var_r3, u16 *, 0xE)) || (var_r2 = sub_080641D0(var_r3, M2C_FIELD(var_r3, s32 *, 0x10), M2C_FIELD(var_r3, s32 *, 8)), (var_r2 != 0)))) {
        var_r3 = temp_r4;
        goto loop_2;
    }
    return var_r2;
}
