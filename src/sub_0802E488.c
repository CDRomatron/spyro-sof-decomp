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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_0800781C(s32, s32);                     /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800F550(s32, M2C_UNK *, void *, s32);  /* extern */
M2C_UNK sub_0800FD78(void *, s32, void *);          /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
s32 sub_080529D4();                                 /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_0802E7C0;
extern M2C_UNK sub_0802E830;
extern M2C_UNK sub_0802E880;

void sub_0802E488(void *arg0, u16 arg1) {
    u16 temp_r5;

    temp_r5 = arg1;
    switch (temp_r5) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 0x50) = (M2C_UNK *) temp_r5;
        break;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x50) = &sub_0802E7C0;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x48), 0x6B0000);
        sub_080528D4(arg0, M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0x38), M2C_FIELD(arg0, s32 *, 0x3C));
        break;
    case 2:
        M2C_FIELD(arg0, M2C_UNK **, 0x50) = &sub_0802E830;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x48), 0x6B0001);
        sub_080534A0(5);
        sub_0800FD78(arg0, sub_080529D4(), arg0 + 0xC);
        if ((sub_08007874(0xF) << 0x18) == 0) {
            M2C_FIELD(arg0, s8 *, 0x5D) = 1;
            sub_0800781C(0xF, 1);
            sub_0800F550(0x103, &sub_0802E880, arg0, 1);
            sub_08003220(0x08171550);
        } else {
            sub_0800F550(0x104, &sub_0802E880, arg0, 0);
        }
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x58) = (s8) temp_r5;
}
