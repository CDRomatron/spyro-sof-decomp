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
M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
extern M2C_UNK sub_0803C3BC;

s32 sub_0803C354(s32 arg0, void *arg1, u16 arg2, u32 arg3) {
    s32 var_r0;

    var_r0 = 0;
    if (arg2 == 9) {
        if (arg3 != 0x57) {
            if (arg3 <= 0x57U) {
                if (arg3 != 0x56) {
                    return 0;
                }
                goto block_9;
            }
            if (arg3 != 0x5A) {
                if (arg3 == 0x5B) {
                    sub_08004408(M2C_FIELD(arg1, s32 *, 0x28), -1);
                    sub_08004454(M2C_FIELD(arg1, s32 *, 0x28), arg1, &sub_0803C3BC);
                    goto block_10;
                }
            } else {
block_9:
                M2C_FIELD(arg1, s32 *, 0x24) = arg0;
                goto block_10;
            }
            /* Duplicate return node #11. Try simplifying control flow for better match */
            return var_r0;
        }
        sub_08003C58(M2C_FIELD(arg1, s32 *, 0x28), 0x350001);
        sub_08004454(M2C_FIELD(arg1, s32 *, 0x28), arg1, &sub_0803C3BC);
block_10:
        var_r0 = 1;
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return var_r0;
    }
    return var_r0;
}
