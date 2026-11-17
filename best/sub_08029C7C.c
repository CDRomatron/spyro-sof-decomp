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

M2C_UNK _080298B8(void *, s32);                     /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08003DA8(s32, s32);                     /* extern */
s32 sub_08029D08(void *, s32);                      /* extern */
M2C_UNK sub_08029D68(void *);                       /* extern */

s32 sub_08029C7C(s32 arg0, void *arg1, u16 arg2, s32 arg3) {
    if (arg2 == 9) {
        switch (arg3) {                             /* irregular */
        case 10:
            M2C_FIELD(arg1, s16 *, 0x82) = 0;
            M2C_FIELD(arg1, s32 *, 0x78) = 0;
            _080298B8(arg1, 0);
            sub_08003C58(M2C_FIELD(arg1, s32 *, 0x6C), 0x1F0002);
            sub_08003DA8(M2C_FIELD(arg1, s32 *, 0x6C), 2);
            return 1;
        case 11:
            if (M2C_FIELD(arg1, u8 *, 0x89) == 4) {
                M2C_FIELD(arg1, s32 *, 0x78) = 0;
                sub_08029D68(arg1);
            } else {
                _080298B8(arg1, 0);
                sub_08003C58(M2C_FIELD(arg1, s32 *, 0x6C), 0x1F0001);
                M2C_FIELD(arg1, s32 *, 0x7C) = sub_08029D08(arg1 + 0xC, arg0 + 0xC);
            }
            M2C_FIELD(arg1, s32 *, 0x78) = 0;
            return 1;
        }
    } else {
        return 0;
    }
}
