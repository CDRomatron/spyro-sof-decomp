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
u32 sub_0806436C(u32, s32);                         /* extern */
s8 sub_080643E4(u32, s32);                          /* extern */

void sub_0805EBE0(u32 arg0) {
    u32 var_r6;
    void *temp_r4;
    void *temp_r4_2;

    var_r6 = arg0;
    if (var_r6 > 0x63U) {
        var_r6 = 0x63;
    }
    temp_r4 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4, s8 *, 0x63) = sub_080643E4(var_r6, 0xA);
    temp_r4_2 = *(void **)0x030026EC;
    M2C_FIELD(temp_r4_2, s8 *, 0x62) = sub_080643E4(sub_0806436C(var_r6, 0xA), 0xA);
    sub_0800D73C(M2C_FIELD(*(void **)0x030026EC, s32 *, 0x58));
}
