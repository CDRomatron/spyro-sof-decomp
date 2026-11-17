/* identical to sub_0802C118 in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

M2C_UNK sub_08004020(s32);                          /* extern */
s32 sub_080077E0(u8);                               /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
M2C_UNK sub_0802BF44(void *);                       /* extern */
M2C_UNK sub_080522C8(void *);                       /* extern */
s32 sub_08052CF4(s32);                              /* extern */

s32 sub_0802C074(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x31) != 0) {
        M2C_FIELD(arg0, u8 *, 0x31) = 0U;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
        sub_080522C8(arg0);
        M2C_FIELD(arg0, s32 *, 0x24) = sub_08052CF4(0x12C);
        if (((sub_08007874(0xC) << 0x18) == 0) && ((sub_080077E0(M2C_FIELD(arg0, u8 *, 0x30)) << 0x18) == 0)) {
            sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x24), 0x2F);
        }
    }
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x28));
    sub_0802BF44(arg0);
    return 1;
}
