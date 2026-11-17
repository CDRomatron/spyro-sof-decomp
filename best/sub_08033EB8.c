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

s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, void *, s32);  /* extern */
M2C_UNK sub_0800FD8C(void *, s32, s32);             /* extern */
M2C_UNK sub_0800FDA0(void *, s32, M2C_UNK *);       /* extern */
M2C_UNK sub_0804EC14(M2C_UNK *);                    /* extern */
M2C_UNK sub_080500D8();                             /* extern */
M2C_UNK sub_08050168(void *, void (*)(void *, s32)); /* extern */
s32 sub_080502E8(M2C_UNK *);                        /* extern */
M2C_UNK sub_0805275C(s32, M2C_UNK *);               /* extern */
s32 sub_080529D4();                                 /* extern */
s32 sub_08052B40(void *);                           /* extern */
extern M2C_UNK sub_080342FC;

void sub_08033EB8(void *arg0, s32 arg1) {
    M2C_UNK sp0;
    s32 sp8;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 var_r0;

    switch (arg1) {                                 /* irregular */
    case 0:
        temp_r4 = sub_080529D4();
        sub_0805275C(0xF2, &sp0);
        sp8 = sub_080502E8(&sp0);
        sub_0800FDA0(arg0, temp_r4, &sp0);
        sub_0804EC14(&sp0);
        sub_080500D8();
        temp_r4_2 = sub_080529D4();
        sub_0800FD8C(arg0, temp_r4_2, sub_08052B40(arg0 + 0xC));
        sub_08050168(arg0, sub_08033EB8);
        return;
    case 1:
        if (M2C_FIELD(arg0, u8 *, 0x4A) != 0) {
            if ((sub_08007874(0x17) << 0x18) != 0) {
                var_r0 = 0x10E;
            } else {
                var_r0 = 0x10D;
            }
            sub_0800F550(var_r0, &sub_080342FC, arg0, 1);
            return;
        }
        if ((sub_08007874(0x16) << 0x18) != 0) {
            sub_0800F550(0x10A, &sub_080342FC, arg0, 0);
            return;
        }
        sub_0800F550(0x109, &sub_080342FC, arg0, 0);
        return;
    }
}
