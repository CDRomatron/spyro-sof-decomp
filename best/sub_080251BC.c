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
M2C_UNK sub_0800443C(s32, s32);                     /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
M2C_UNK sub_0800D9D0(void *, s32);                  /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *, s32);          /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08025310;
extern M2C_UNK sub_08025348;

void *sub_080251BC(void *arg2) {
    s32 temp_r0_2;
    void *temp_r0;
    void *temp_r5;

    temp_r0 = sub_08002B34(0x78, 1);
    sub_08065CF0(temp_r0, 0, 0x78);
    M2C_FIELD(temp_r0, s32 *, 8) = 0x081777F4;
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x68) = temp_r0_2;
    sub_0800443C(temp_r0_2, 0xD);
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x68), 0x2B0000);
    M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r0, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r0, s32 *, 0x2C) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r0, s16 *, 0x74) = 0xB4;
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (M2C_FIELD(temp_r0, u16 *, 0x22) | 1);
    M2C_FIELD(temp_r0, s32 *, 0x6C) = sub_08004370();
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x68), temp_r0, &sub_08025310);
    M2C_FIELD(temp_r0, s8 *, 0x77) = 1;
    temp_r5 = temp_r0 + 0x58;
    sub_080520FC(temp_r5, temp_r0 + 0xC, M2C_FIELD(temp_r0, s32 *, 0x6C));
    sub_08052078(temp_r5, 0x59);
    sub_08052098(temp_r5, 0x3C00);
    sub_0800D9D0(temp_r0 + 0x30, 7);
    M2C_FIELD(temp_r0, s32 *, 0x34) = (s32) M2C_FIELD(arg2, s32 *, 0xC);
    M2C_FIELD(temp_r0, s32 *, 0x38) = (s32) M2C_FIELD(arg2, s32 *, 0x10);
    M2C_FIELD(temp_r0, s32 *, 0x3C) = (s32) M2C_FIELD(arg2, s32 *, 0x14);
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    M2C_FIELD(temp_r0, M2C_UNK **, 0x70) = &sub_08025348;
    return temp_r0;
}
