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
u32 sub_08004508();                                 /* extern */

s32 sub_080294D4(s32 arg0, void *arg1, s32 arg2) {
    s32 var_r1;
    u32 temp_r0;

    if (arg2 == 8) {
        temp_r0 = sub_08004508();
        var_r1 = 0x120005;
        switch (temp_r0) {                          /* irregular */
        case 0x120005:
            M2C_FIELD(arg1, s8 *, 0x61) = 0;
            /* fallthrough */
        case 0x120006:
            var_r1 = 0x120007;
            /* fallthrough */
        case 0x120004:
            sub_08003C58(arg0, var_r1);
            break;
        case 0x120007:
            M2C_FIELD(arg1, s8 *, 0x61) = 0;
            break;
        }
    }
    return 1;
}
