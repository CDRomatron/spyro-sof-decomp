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

s32 sub_08006664(u8);                               /* extern */
u8 sub_080072C0(u8);                                /* extern */
s32 sub_0800750C(u8);                               /* extern */
M2C_UNK sub_0800781C(s32, s32);                     /* extern */
s32 sub_08007874(s32);                              /* extern */

u16 sub_0803ABA8(void *arg0) {
    u16 temp_r1;
    u16 var_r4;

    if ((sub_0800750C(sub_080072C0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u8 *, 8))) << 0x18) != 0) {
        var_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u16 *, 6);
    } else {
        if (((sub_08006664(sub_080072C0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u8 *, 8))) << 0x18) == 0) && ((sub_08007874(0x1F) << 0x18) == 0) && (temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u16 *, 0), (temp_r1 != 0x199)) && (temp_r1 != 0x19C)) {
            var_r4 = 0xA3;
            if (temp_r1 == 0x19B) {
                var_r4 = 0x9F;
            }
        } else if ((sub_08006664(sub_080072C0(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u8 *, 8))) << 0x18) != 0) {
            var_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u16 *, 4);
        } else {
            var_r4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), u16 *, 2);
        }
        sub_0800781C(0x1F, 1);
    }
    return var_r4;
}
