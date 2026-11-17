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

M2C_UNK sub_08000C20(void *, void *);               /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
M2C_UNK sub_08004478(s32, s32);                     /* extern */
void *sub_0804C168(s32);                            /* extern */
extern M2C_UNK sub_08046834;
extern M2C_UNK sub_080469B0;

void *sub_080468F8(s32 arg0, s32 arg1) {
    s32 temp_r0_2;
    s32 temp_r5;
    void *temp_r0;

    temp_r0 = sub_0804C168(M2C_FIELD(*(void **)0x030026A4, s32 *, 0x84));
    M2C_FIELD(temp_r0, M2C_UNK **, 8) = &sub_08046834;
    M2C_FIELD(temp_r0, M2C_UNK **, 0xC) = &sub_080469B0;
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x20) = temp_r0_2;
    M2C_FIELD(temp_r0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10) = (s32) (arg0 + 0x800);
    temp_r5 = arg1 + 0xFFFFA000;
    M2C_FIELD(temp_r0, s32 *, 0x14) = temp_r5;
    M2C_FIELD(temp_r0, s32 *, 0x34) = 1;
    M2C_FIELD(temp_r0, s32 *, 0x38) = 2;
    M2C_FIELD(temp_r0, s32 *, 0x3C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x40) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x44) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x48) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x4C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x50) = 0x100;
    M2C_FIELD(temp_r0, s32 *, 0x24) = 0xFFFFE700;
    M2C_FIELD(temp_r0, s32 *, 0x28) = 0xFFFFE400;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = 0x1900;
    M2C_FIELD(temp_r0, s32 *, 0x30) = 0x800;
    M2C_FIELD(temp_r0, s32 *, 0x5C) = (s32) M2C_FIELD(temp_r0, s32 *, 0x10);
    M2C_FIELD(temp_r0, s32 *, 0x60) = (s32) M2C_FIELD(temp_r0, s32 *, 0x14);
    M2C_FIELD(temp_r0, s32 *, 0x68) = temp_r5;
    M2C_FIELD(temp_r0, s32 *, 0x64) = (s32) (arg0 + 0xFFFF2C00);
    sub_08003C58(temp_r0_2, 0x820001);
    sub_08004478(M2C_FIELD(temp_r0, s32 *, 0x20), 0);
    sub_08000C20(*(void **)0x030026A4 + 0x18, temp_r0);
    return temp_r0;
}
