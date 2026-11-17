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
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void sub_0800F8FC(void) {
    void *temp_r0;

    temp_r0 = sub_08002B34(0x81C, 1);
    sub_08065CF0(temp_r0, 0, 0x81C);
    *(void **)0x03002684 = temp_r0;
    M2C_FIELD(temp_r0, void **, 0x800) = temp_r0;
    M2C_FIELD(temp_r0, void **, 0x804) = (void *) (temp_r0 + 0x200);
    M2C_FIELD(temp_r0, void **, 0x808) = (void *) (temp_r0 + 0x400);
    M2C_FIELD(temp_r0, void **, 0x80C) = (void *) (temp_r0 + 0x600);
}
