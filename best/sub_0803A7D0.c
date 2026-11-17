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
s32 sub_0800D9EC(s32, s32);                         /* extern */
M2C_UNK sub_0803A49C(void *, s32);                  /* extern */

void sub_0803A7D0(void *arg0) {
    s32 temp_r0;
    void *temp_r1;

    temp_r0 = sub_0800D9EC(arg0 + 0x5C, arg0 + 0x24);
    switch (temp_r0) {                              /* irregular */
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) > 0xFFF) {
            sub_08003220(0x08170BE8);
            temp_r1 = M2C_FIELD(arg0, void **, 0x44);
            M2C_FIELD(temp_r1, u8 *, 0x2E) = (u8) (M2C_FIELD(temp_r1, u8 *, 0x2E) + 1);
            return;
        }
block_5:
        sub_0803A49C(arg0, 2);
        return;
    case 1:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) <= 0xFFF) {
            goto block_5;
        }
        sub_0803A49C(arg0, 4);
        return;
    }
}
