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

/* Warning: missing "bx $lr" in last block of sub_0802F574 (initial). */

void *sub_08002B34(s32, s32);                       /* extern */
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
s32 sub_08004370();                                 /* extern */
s32 sub_08007874(s32);                              /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32);             /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern s32 _0802F628;

s32 sub_0802F574(void *arg2) {
    s32 temp_r0_2;
    void *temp_r0;
    void *temp_r4;

    temp_r0 = sub_08002B34(0x44, 1);
    sub_08065CF0(temp_r0, 0, 0x44);
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x34) = temp_r0_2;
    sub_08003C58(temp_r0_2, 0x250000);
    M2C_FIELD(temp_r0, s32 *, 0x38) = sub_08004370();
    temp_r4 = temp_r0 + 0x24;
    sub_080520FC(temp_r4, temp_r0 + 0xC);
    sub_08052078(temp_r4, 0x66);
    sub_08052098(temp_r4, 0x6400);
    M2C_FIELD(arg2, s32 *, 8) = sub_080502E8(arg2);
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4));
    M2C_FIELD(temp_r0, s32 *, 0x3C) = (s32) _0802F628;
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0x34), 0x250000);
    M2C_FIELD(temp_r0, s8 *, 0x41) = 0;
    return sub_08007874(0x11) << 0x18;
}
