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

M2C_UNK _08016340(void *, s32);                     /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08003DA8(s32, s32);                     /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
u32 sub_08004508();                                 /* extern */
s32 sub_080502E8(void *);                           /* extern */

s32 sub_08016808(s32 arg0, void *arg1, s32 arg2) {
    u32 temp_r0;

    if (arg2 == 8) {
        temp_r0 = sub_08004508();
        switch (temp_r0) {                          /* irregular */
        case 0x630004:
            if (M2C_FIELD(arg1, u8 *, 0xAD) == 0) {
                sub_08003C58(arg0, 0x630001);
            }
            if (M2C_FIELD(arg1, u8 *, 0xAD) == 3) {
                sub_08003C58(arg0, 0x630003);
            }
            break;
        case 0x630005:
            M2C_FIELD(arg1, s32 *, 0xA4) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
            sub_08004408(arg0, 0);
            sub_08003DA8(arg0, -1);
            break;
        case 0x630006:
            M2C_FIELD(arg1, s32 *, 0x14) = sub_080502E8(arg1 + 0x24);
            _08016340(arg1, 2);
            break;
        }
    }
    return 1;
}
