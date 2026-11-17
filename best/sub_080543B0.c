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

M2C_UNK sub_0800D73C(s32);                          /* extern */
u8 sub_0806436C(u8, s32);                           /* extern */

void sub_080543B0(u8 arg0) {
    u8 var_r4;
    void *temp_r5;

    var_r4 = arg0;
    temp_r5 = *(void **)0x030026C4;
    if ((2 & M2C_FIELD(temp_r5, u8 *, 0xB3)) && (M2C_FIELD(temp_r5, u8 *, 0xB2) != var_r4)) {
        M2C_FIELD(temp_r5, u8 *, 0xB2) = var_r4;
        if ((u32) var_r4 > 9U) {
            M2C_FIELD(temp_r5, u8 *, 0xB0) = sub_0806436C(var_r4, 0xA);
            var_r4 -= M2C_FIELD(temp_r5, u8 *, 0xB0) * 0xA;
        } else {
            M2C_FIELD(temp_r5, u8 *, 0xB0) = 0U;
        }
        M2C_FIELD(temp_r5, u8 *, 0xB1) = var_r4;
        sub_0800D73C(M2C_FIELD(temp_r5, s32 *, 0x60));
    }
}
