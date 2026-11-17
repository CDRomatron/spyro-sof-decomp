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

M2C_UNK _080128EC(void *, s32);                     /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
u32 sub_08004508();                                 /* extern */
s32 sub_0800897C();                                 /* extern */

s32 sub_08012CCC(s32 arg0, void *arg1, s32 arg2) {
    u32 temp_r0;

    if (arg2 == 8) {
        temp_r0 = sub_08004508();
        if (temp_r0 >= 0x460000U) {
            if (temp_r0 > 0x460001U) {
                if ((temp_r0 == 0x460002) && (M2C_FIELD(arg1, u8 *, 0x97) == 0)) {
                    _080128EC(arg1, 0);
                    goto block_10;
                }
            } else if (M2C_FIELD(arg1, u8 *, 0x97) == 1) {
                _080128EC(arg1, 1);
                sub_08003C58(arg0, 0x460002);
            } else if (7 & sub_0800897C()) {
                sub_08004408(arg0, 0x19);
block_10:
                sub_08003C58(arg0, 0x460001);
            } else {
                sub_08004408(arg0, -1);
                sub_08003C58(arg0, 0x460000);
            }
        }
    }
    return 1;
}
