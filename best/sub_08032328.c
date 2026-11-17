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
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, void *, s32);  /* extern */
M2C_UNK sub_0800FD78(void *, s32, void *);          /* extern */
s32 sub_080529D4();                                 /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_08031FCC;
extern M2C_UNK sub_0803209C;
extern M2C_UNK sub_080326D8;
extern M2C_UNK sub_08032748;

void sub_08032328(void *arg0, u16 arg1) {
    s32 var_r0;
    u16 temp_r5;

    temp_r5 = arg1;
    switch (temp_r5) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = &sub_080326D8;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x78), 0x6F0003);
        break;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = &sub_08032748;
        sub_080534A0(5);
        sub_0800FD78(arg0, sub_080529D4(), arg0 + 0xC);
        if ((sub_08007874(0x10) << 0x18) == 0) {
            var_r0 = 0x115;
            goto block_14;
        }
        if ((sub_08007874(0x13) << 0x18) == 0) {
            if (M2C_FIELD(arg0, u8 *, 0x8D) != 0) {
                var_r0 = 0x118;
            } else {
                var_r0 = 0x116;
            }
block_14:
            sub_0800F550(var_r0, &sub_08031FCC, arg0, 0);
        }
        break;
    case 2:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = &sub_0803209C;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x78), 0x6F0002);
        break;
    case 3:
        M2C_FIELD(arg0, M2C_UNK **, 0x80) = (M2C_UNK *)0x080321A9;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x78), 0x6F0001);
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x8A) = (s8) temp_r5;
}
