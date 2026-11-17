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

void sub_08002640(void *arg0, u16 arg1, u16 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    u16 var_r1;
    u16 var_r2;

    var_r1 = arg1;
    var_r2 = arg2;
    temp_r0 = M2C_FIELD(arg0, u16 *, 4) * 8;
    if ((s32) var_r1 >= temp_r0) {
        var_r1 = temp_r0 - 1;
    }
    temp_r0_2 = M2C_FIELD(arg0, u16 *, 6) * 8;
    if ((s32) var_r2 >= temp_r0_2) {
        var_r2 = temp_r0_2 - 1;
    }
    M2C_FIELD(arg0, u16 *, 0x16) = var_r1;
    M2C_FIELD(arg0, u16 *, 0x18) = var_r2;
}
