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

M2C_UNK sub_080009E0(s32, s32);                     /* extern */
M2C_UNK sub_0800380C(s32);                          /* extern */
s32 sub_08003B7C(s32, s32, s32, M2C_UNK *);         /* extern */
M2C_UNK sub_08003BF8(s32);                          /* extern */
s32 sub_08005DDC();                                 /* extern */
s32 sub_08007160();                                 /* extern */
s32 sub_080089C8();                                 /* extern */
s32 sub_0800A250();                                 /* extern */
s32 sub_080618AC();                                 /* extern */
M2C_UNK sub_08065CF0(s32, s32, s32);                /* extern */
extern M2C_UNK sub_08061C5C;

s32 sub_08061AEC(void) {
    s32 var_r5;

    var_r5 = 0;
    *(s16 *)0x04000204 = 0x4014;
    sub_08065CF0(0x03001600, 0, 0x34);
    if (((sub_080089C8() << 0x18) != 0) && ((sub_0800A250() << 0x18) != 0) && ((sub_08007160() << 0x18) != 0) && ((sub_08005DDC() << 0x18) != 0) && ((sub_080618AC() << 0x18) != 0)) {
        M2C_FIELD((void *)0x03001600, s32 *, 4) = sub_08003B7C(3, -0x64, 0, &sub_08061C5C);
        sub_0800380C(M2C_FIELD((void *)0x03001600, s32 *, 4));
        sub_08003BF8(M2C_FIELD((void *)0x03001600, s32 *, 4));
        sub_080009E0(M2C_FIELD((void *)0x03002700, s32 *, 0x18), 0);
        *(s32 *)0x030026C8 = 0;
        var_r5 = 1;
    }
    return var_r5;
}
