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
M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_0800380C();                             /* extern */
s32 sub_08003B7C(s32, s32, void *, M2C_UNK *);      /* extern */
M2C_UNK sub_08003BF8(s32);                          /* extern */
M2C_UNK sub_0800781C(s32, s32);                     /* extern */
u8 sub_0800897C();                                  /* extern */
M2C_UNK sub_0800F538();                             /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08018258;

s32 sub_08018538(u16 arg0, void *arg2) {
    s32 temp_r4;
    void *temp_r0;

    if (arg0 == 1) {
        sub_0800781C(0x60, 1);
        sub_0800781C(0x61, 1);
        temp_r0 = sub_08002B34(8, 1);
        sub_08065CF0(temp_r0, 0, 8);
        M2C_FIELD(temp_r0, s8 *, 4) = 0;
        M2C_FIELD(temp_r0, s8 *, 5) = 0;
        M2C_FIELD(temp_r0, s16 *, 0) = (s16) (sub_0800897C() + 0x12C);
        temp_r4 = sub_08003B7C(3, 0, temp_r0, &sub_08018258);
        sub_0800380C();
        sub_08003BF8(temp_r4);
        sub_08003220(0x08170D54);
        M2C_FIELD(arg2, s8 *, 0x42) = 0;
        sub_080534A0(3);
        sub_0800F538();
    }
    return 1;
}
