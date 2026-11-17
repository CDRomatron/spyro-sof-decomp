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
M2C_UNK sub_0800448C(s32, s32);                     /* extern */
s32 sub_0800897C();                                 /* extern */
void *sub_08060598(s32);                            /* extern */
extern M2C_UNK sub_0805D89C;
extern M2C_UNK sub_0805DAC8;
extern M2C_UNK sub_0805DC48;

void sub_0805D9E0(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = sub_08060598(M2C_FIELD(*(void **)0x030026EC, s32 *, 0x48));
    M2C_FIELD(temp_r0, M2C_UNK **, 8) = &sub_0805D89C;
    M2C_FIELD(temp_r0, M2C_UNK **, 0x10) = &sub_0805DC48;
    M2C_FIELD(temp_r0, M2C_UNK **, 0xC) = &sub_0805DAC8;
    M2C_FIELD(temp_r0, s32 *, 0x14) = arg0;
    M2C_FIELD(temp_r0, s32 *, 0x18) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x24) = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x2C) = 1;
    M2C_FIELD(temp_r0, s32 *, 0x30) = (s32) (M2C_FIELD(*(void **)0x030026EC, s32 *, 0xE0) + 0x38);
    M2C_FIELD(temp_r0, s32 *, 0x34) = (s32) (0xFFFF & sub_0800897C());
    M2C_FIELD(temp_r0, s32 *, 0x28) = 0x900;
    M2C_FIELD(temp_r0, s32 *, 0x38) = (s32) (0x7F & sub_0800897C());
    M2C_FIELD(temp_r0, s32 *, 0x3C) = (s32) (0xFFF & sub_0800897C());
    M2C_FIELD(temp_r0, s32 *, 0x40) = 0;
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x24), 0x9C0000);
    sub_08004478(M2C_FIELD(temp_r0, s32 *, 0x24), 2);
    sub_0800448C(M2C_FIELD(temp_r0, s32 *, 0x24), 1);
    sub_08000C20(*(void **)0x030026EC + 0xC, temp_r0);
}
