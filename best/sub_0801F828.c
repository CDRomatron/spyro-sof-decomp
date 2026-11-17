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
M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
s32 sub_080502E8();                                 /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08054828(s32);                          /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_0801F938;

void *sub_0801F828(void *arg2) {
    s32 temp_r0_2;
    s32 temp_r4_2;
    s32 temp_r6;
    void *temp_r0;
    void *temp_r4;

    temp_r0 = sub_08002B34(0x48, 1);
    sub_08065CF0(temp_r0, 0, 0x48);
    M2C_FIELD(temp_r0, s8 *, 0x45) = 1;
    temp_r0_2 = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0x34) = temp_r0_2;
    sub_08003C58(temp_r0_2, 0xC0000);
    sub_08004408(M2C_FIELD(temp_r0, s32 *, 0x34), 5);
    sub_08004454(M2C_FIELD(temp_r0, s32 *, 0x34), temp_r0, &sub_0801F938);
    M2C_FIELD(temp_r0, s32 *, 0x38) = sub_08004370();
    temp_r4 = temp_r0 + 0x24;
    sub_080520FC(temp_r4, temp_r0 + 0xC);
    sub_08052078(temp_r4, 0x66);
    sub_08052098(temp_r4, 0x6400);
    sub_08054828(1);
    temp_r4_2 = M2C_FIELD(arg2, s32 *, 0);
    temp_r6 = M2C_FIELD(arg2, s32 *, 4);
    sub_080528D4(temp_r0, temp_r4_2, temp_r6, sub_080502E8());
    return temp_r0;
}
