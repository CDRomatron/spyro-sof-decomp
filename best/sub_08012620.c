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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004508(s32);                              /* extern */
s32 sub_0800897C();                                 /* extern */

s32 sub_08012620(s32 arg0, void *arg1, s32 arg2) {
    if (arg2 == 8) {
        if (sub_08004508(arg0) == 0x200002) {
            M2C_FIELD(arg1, s8 *, 0xA6) = 0;
        } else if (M2C_FIELD(arg1, u8 *, 0xA7) == 0) {
            if ((M2C_FIELD(arg1, s32 *, 0x98) != 0) && ((u32) (0xFF & sub_0800897C()) <= 0x1FU)) {
                sub_08003C58(arg0, M2C_FIELD(arg1, s32 *, 0x98));
            } else {
                sub_08003C58(arg0, M2C_FIELD(arg1, s32 *, 0x94));
            }
        }
    }
    return 1;
}
