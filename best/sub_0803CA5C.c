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

M2C_UNK sub_08003220(s32, u16);                     /* extern */
M2C_UNK sub_0800659C(u16);                          /* extern */
s32 sub_08006664(u8);                               /* extern */
u8 sub_080072C0(u8);                                /* extern */
M2C_UNK sub_080073AC(u8);                           /* extern */
u16 sub_080073E8();                                 /* extern */
M2C_UNK sub_0800781C(u8, s32);                      /* extern */
M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_0800F550(u16, s32 (*)(u16, u8, void *), void *, s32); /* extern */
M2C_UNK sub_080501CC(void *, M2C_UNK *);            /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
M2C_UNK sub_08054674();                             /* extern */
M2C_UNK sub_08054688();                             /* extern */
extern M2C_UNK sub_0803CCCC;

s32 sub_0803CA5C(u16 arg0, u8 arg1, void *arg2) {
    u16 temp_r1_2;
    u16 temp_r5;
    u16 var_r0;
    void *temp_r1;

    temp_r5 = arg0;
    switch (temp_r5) {                              /* irregular */
    case 0:
        if (arg1 != 0) {
            temp_r1 = M2C_FIELD(arg2, void **, 0x34);
            if ((u32) sub_080073E8() >= (u32) M2C_FIELD(temp_r1, u16 *, 0x10)) {
                sub_0800659C(M2C_FIELD(temp_r1, u16 *, 0x10));
                sub_080073AC(sub_080072C0(M2C_FIELD(M2C_FIELD(arg2, void **, 0x34), u8 *, 0xC)));
                sub_0800781C(M2C_FIELD(M2C_FIELD(arg2, void **, 0x34), u8 *, 0xE), 1);
                sub_0800F550(M2C_FIELD(M2C_FIELD(arg2, void **, 0x34), u16 *, 6), sub_0803CA5C, arg2, 1);
                sub_08054674();
                M2C_FIELD((void *)0x03001600, u16 *, 0x20) = temp_r5;
                M2C_FIELD((void *)0x03001600, u16 *, 0x22) = temp_r5;
                M2C_FIELD((void *)0x03001600, u16 *, 0x24) = temp_r5;
                M2C_FIELD((void *)0x03001600, u16 *, 0x26) = temp_r5;
                temp_r1_2 = M2C_FIELD((void *)0x03001600, u16 *, 0x28);
                M2C_FIELD((void *)0x03001600, u16 *, 0x28) = temp_r5;
                sub_08003220(0x08171550, temp_r1_2);
            } else {
                var_r0 = M2C_FIELD(temp_r1, u16 *, 0xA);
                goto block_8;
            }
        } else {
            var_r0 = M2C_FIELD(M2C_FIELD(arg2, void **, 0x34), u16 *, 8);
block_8:
            sub_0800F550(var_r0, sub_0803CA5C, arg2, 0);
        }
        break;
    case 1:
        sub_0800F538();
        if ((sub_08006664(sub_080072C0(M2C_FIELD(M2C_FIELD(arg2, void **, 0x34), u8 *, 0xC))) << 0x18) != 0) {
            sub_080501CC(arg2, &sub_0803CCCC);
        } else {
            sub_080534A0(3);
        }
        sub_08054688();
        break;
    }
    return 1;
}
