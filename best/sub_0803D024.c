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
s32 sub_08004508();                                 /* extern */
M2C_UNK sub_0800781C(u8, s32);                      /* extern */

s32 sub_0803D024(s32 arg0, void *arg1, s32 arg2) {
    if ((arg2 == 8) && (sub_08004508() == 0xC0001)) {
        sub_0800781C(M2C_FIELD(M2C_FIELD(arg1, void **, 0x34), u8 *, 0xA), 1);
        sub_08003C58(arg0, 0xC0000);
        M2C_FIELD(arg1, s16 *, 0x4C) = 0x3C;
    }
    return 1;
}
