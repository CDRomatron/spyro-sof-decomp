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
M2C_UNK sub_0800F550(u16, M2C_UNK *, void *, u16);  /* extern */
M2C_UNK sub_0800FD78(void *, s32, void *);          /* extern */
M2C_UNK sub_08016A2C(void *);                       /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_08016B34;
extern M2C_UNK sub_08016E44;
extern M2C_UNK sub_08016F0C;

void sub_08016E90(void *arg0, u16 arg1) {
    u16 temp_r5;

    temp_r5 = arg1;
    switch (temp_r5) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &sub_08016E44;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x34), 0x250000);
        break;
    case 1:
        M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &sub_08016F0C;
        sub_080534A0(5);
        sub_0800FD78(arg0, M2C_FIELD(*(void **)0x030026C0, s32 *, 0x51C), arg0 + 0xC);
        sub_08016A2C(arg0);
        sub_0800F550(M2C_FIELD(arg0, u16 *, 0x46), &sub_08016B34, arg0, M2C_FIELD(arg0, u16 *, 0x44));
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x48) = (s8) temp_r5;
}
