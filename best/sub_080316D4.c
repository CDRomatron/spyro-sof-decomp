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
M2C_UNK sub_08003C58(void *, s32);                  /* extern */
M2C_UNK sub_08003DA8(void *, s32);                  /* extern */
void *sub_08004370();                               /* extern */
M2C_UNK sub_08004408(void *, s32);                  /* extern */
s32 sub_08007874(s32);                              /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_080316D4(void *arg2) {
    s8 *temp_r1;
    void *temp_r0;
    void *temp_r1_2;

    temp_r0 = sub_08002B34(0x40, 1);
    sub_08065CF0(temp_r0, 0, 0x40);
    M2C_FIELD(arg2, s32 *, 8) = sub_080502E8(arg2);
    M2C_FIELD(temp_r0, s8 *, 0x3F) = 0;
    temp_r1 = (temp_r0 + 0x3F) - 1;
    *temp_r1 = 1;
    temp_r1_2 = temp_r1 - 0x1A;
    M2C_FIELD(temp_r1_2, s32 *, 0) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(temp_r1_2, s32 *, 4) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(temp_r1_2, s32 *, 8) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    M2C_FIELD(temp_r0, void **, 0x34) = sub_08004370();
    M2C_FIELD(temp_r0, void **, 0x38) = sub_08004370();
    sub_08003C58(M2C_FIELD(temp_r0, void **, 0x34), 0x160000);
    M2C_FIELD(temp_r0, u8 *, 0x3C) = (u8) M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x34), u8 *, 0x2D);
    if ((sub_08007874(0x12) << 0x18) == 0) {
        sub_08003DA8(M2C_FIELD(temp_r0, void **, 0x34), 0);
    } else {
        sub_08003DA8(M2C_FIELD(temp_r0, void **, 0x34), -1);
    }
    sub_08004408(M2C_FIELD(temp_r0, void **, 0x34), 0);
    sub_08003C58(M2C_FIELD(temp_r0, void **, 0x38), 0x160001);
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    return temp_r0;
}
