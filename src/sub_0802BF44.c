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
s32 sub_08004534(s32);                              /* extern */
M2C_UNK sub_080077C4(u8);                           /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
s32 sub_0801DA58(void *, s32, s32);                 /* extern */
s32 sub_08052140(void *, s32);                      /* extern */

void sub_0802BF44(void *arg0) {
    void *temp_r5;

    temp_r5 = arg0 + 0xC;
    if ((sub_08052140(temp_r5, 0x400) << 0x18) != 0) {
        sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8), 0, 0x400);
    }
    if (((sub_08007874(0xC) << 0x18) == 0) && (sub_0801DA58(temp_r5, 0x400, sub_08004534(M2C_FIELD(arg0, s32 *, 0x28)) << 8) == 4) && (M2C_FIELD(arg0, u8 *, 0x32) == 0)) {
        M2C_FIELD(arg0, u8 *, 0x32) = 1U;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x28), 0x4E0001);
        sub_0800FE28(arg0, M2C_FIELD(arg0, s32 *, 0x24), 0x30);
        sub_080077C4(M2C_FIELD(arg0, u8 *, 0x30));
        sub_08003220(0x08170D54);
    }
}
