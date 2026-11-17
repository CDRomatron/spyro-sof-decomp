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
extern M2C_UNK sub_0804BC74;

void *sub_0804BBD4(s32 arg0, s32 arg1) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = sub_0804C168(M2C_FIELD(*(void **)0x030026A4, s32 *, 0x84));
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 8) = 0x0804B9C5;
        M2C_FIELD(temp_r0, M2C_UNK **, 0xC) = &sub_0804BC74;
        M2C_FIELD(temp_r0, s32 *, 0x40) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x3C) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x10) = arg0;
        M2C_FIELD(temp_r0, s32 *, 0x14) = arg1;
        M2C_FIELD(temp_r0, s32 *, 0x1C) = (s32) (arg0 + 0xFFFFF800);
        M2C_FIELD(temp_r0, s32 *, 0x20) = (s32) (arg1 + 0xFFFFF800);
        M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) (arg0 + 0x800);
        M2C_FIELD(temp_r0, s32 *, 0x28) = (s32) (arg1 + 0x800);
        M2C_FIELD(temp_r0, s32 *, 0x2C) = (s32) (arg0 + 0xFFFF8000);
        M2C_FIELD(temp_r0, s32 *, 0x30) = (s32) (arg1 + 0xFFFFF000);
        M2C_FIELD(temp_r0, s32 *, 0x34) = (s32) (arg0 + 0x8000);
        M2C_FIELD(temp_r0, s32 *, 0x38) = (s32) (arg1 + 0x1000);
        temp_r0_2 = sub_08004370();
        M2C_FIELD(temp_r0, s32 *, 0x18) = temp_r0_2;
        sub_08003C58(temp_r0_2, 0x8E0004);
        sub_08004478(M2C_FIELD(temp_r0, s32 *, 0x18), 1);
        sub_08000C20(*(void **)0x030026A4 + 0x30, temp_r0);
    }
    return temp_r0;
}
