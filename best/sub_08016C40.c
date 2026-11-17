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

void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
s32 sub_08007498(s32);                              /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800FCA4(s32, s32, void *);             /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08016DE8;
extern M2C_UNK sub_08016E44;

void *sub_08016C40(void *arg2) {
    void *temp_r0;
    void *temp_r4;

    temp_r0 = sub_08002B34(0x4C, 1);
    sub_08065CF0(temp_r0, 0, 0x4C);
    M2C_FIELD(temp_r0, s32 *, 0x34) = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x38) = sub_08004370();
    temp_r4 = temp_r0 + 0x24;
    sub_080520FC(temp_r4, temp_r0 + 0xC);
    sub_08052078(temp_r4, 0x80);
    sub_08052098(temp_r4, 0x6400);
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x34), temp_r0, &sub_08016DE8);
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    M2C_FIELD(temp_r0, M2C_UNK **, 0x3C) = &sub_08016E44;
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x34), 0x250000);
    M2C_FIELD(temp_r0, s8 *, 0x48) = 0;
    if (((sub_08007874(4) << 0x18) != 0) && ((sub_08007874(0x64) << 0x18) == 0) && ((sub_08007498(0x31) << 0x18) == 0)) {
        M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) + 0x1000);
        sub_0800FCA4(0x31, 1, arg2);
        M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) + 0xFFFFF000);
    }
    if (((sub_08007874(5) << 0x18) != 0) && ((sub_08007874(0x65) << 0x18) == 0) && ((sub_08007498(0x4D) << 0x18) == 0)) {
        M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) + 0xFFFFF000);
        sub_0800FCA4(0x4D, 1, arg2);
        M2C_FIELD(arg2, s32 *, 4) = (s32) (M2C_FIELD(arg2, s32 *, 4) + 0x1000);
    }
    return temp_r0;
}
