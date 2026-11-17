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

M2C_UNK sub_0800C228(s32, s32, s32, s32);           /* extern */
M2C_UNK sub_0800C308(s32, s32, s32);                /* extern */
M2C_UNK sub_0800D638(s32, s32);                     /* extern */
M2C_UNK sub_0800D684(s32, s32, s32);                /* extern */
M2C_UNK sub_0800D734(s32, s32);                     /* extern */
M2C_UNK sub_0800D748(s32, s32);                     /* extern */
M2C_UNK sub_0800D758(s32, s32);                     /* extern */

void sub_080544A8(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r4;

    temp_r4 = *(void **)0x030026C4;
    sub_0800D638(M2C_FIELD(temp_r4, s32 *, 0x60), arg0);
    sub_0800D684(M2C_FIELD(temp_r4, s32 *, 0x60), 1, 2);
    sub_0800D748(M2C_FIELD(temp_r4, s32 *, 0x60), 1);
    if (arg1 != 0) {
        sub_0800C308(M2C_FIELD(temp_r4, s32 *, 0x60), arg2, arg1);
        sub_0800C228(M2C_FIELD(temp_r4, s32 *, 0x60), 1, 2, 4);
        sub_0800D758(M2C_FIELD(temp_r4, s32 *, 0x60), 1);
    }
    sub_0800D734(M2C_FIELD(temp_r4, s32 *, 0x60), 8);
    M2C_FIELD((temp_r4 + 0x60), s16 *, 8) = 1;
}
