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
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
u8 sub_0800770C(u8);                                /* extern */
u8 sub_08007730();                                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_08042594(void *arg2) {
    s32 temp_r0_2;
    u8 temp_r6;
    u8 temp_r7;
    void *temp_r0;

    temp_r7 = sub_08007730();
    temp_r6 = sub_0800770C(temp_r7);
    if (temp_r6 == 0) {
        temp_r0 = sub_08002B34(0x30, 1);
        sub_08065CF0(temp_r0, 0, 0x30);
        M2C_FIELD(arg2, s32 *, 8) = sub_080502E8(arg2);
        temp_r0_2 = sub_08004370();
        M2C_FIELD(temp_r0, s32 *, 0x24) = temp_r0_2;
        sub_08003C58(temp_r0_2, 0x360001);
        M2C_FIELD(temp_r0, s16 *, 0x2C) = (s16) temp_r6;
        M2C_FIELD(temp_r0, s8 *, 0x2E) = 1;
        M2C_FIELD(temp_r0, s32 *, 0x28) = (s32) temp_r7;
        sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
        return temp_r0;
    }
    return NULL;
}
