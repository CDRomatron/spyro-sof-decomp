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
void *sub_0805B4A8(s32);                            /* extern */
extern M2C_UNK sub_0805B598;
extern M2C_UNK sub_0805B684;

void *sub_0805B624(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = sub_0805B4A8(M2C_FIELD(*(void **)0x030026D8, s32 *, 0xA4));
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, M2C_UNK **, 8) = &sub_0805B598;
        M2C_FIELD(temp_r0, M2C_UNK **, 0xC) = &sub_0805B684;
        M2C_FIELD(temp_r0, s32 *, 0x18) = arg0;
        M2C_FIELD(temp_r0, s32 *, 0x1C) = arg1;
        temp_r0_2 = sub_08004370();
        M2C_FIELD(temp_r0, s32 *, 0x28) = temp_r0_2;
        M2C_FIELD(temp_r0, s32 *, 0x2C) = 0;
        sub_08003C58(temp_r0_2, arg2);
        sub_08000C20(*(void **)0x030026D8 + 0x98, temp_r0);
    }
    return temp_r0;
}
