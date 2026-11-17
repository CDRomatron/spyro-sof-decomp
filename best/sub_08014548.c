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
s32 sub_08007498(s32);                              /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800FCA4(s32, s32, M2C_UNK *);          /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_08052078(void *, s32);                  /* extern */
M2C_UNK sub_08052098(void *, s32);                  /* extern */
M2C_UNK sub_080520FC(void *, void *);               /* extern */
M2C_UNK sub_0805275C(s32, M2C_UNK *);               /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */
extern M2C_UNK sub_080148B0;

void *sub_08014548(void *arg2) {
    M2C_UNK sp0;
    s16 *var_r1;
    s16 var_r0;
    s32 temp_r4_2;
    s32 temp_r5;
    void *temp_r0;
    void *temp_r4;

    temp_r0 = sub_08002B34(0xC0, 1);
    sub_08065CF0(temp_r0, 0, 0xC0);
    M2C_FIELD(temp_r0, s32 *, 8) = 0x08176AD8;
    M2C_FIELD(temp_r0, s32 *, 0xA8) = sub_08004370();
    M2C_FIELD(temp_r0, s32 *, 0xAC) = sub_08004370();
    temp_r4 = temp_r0 + 0x24;
    sub_080520FC(temp_r4, temp_r0 + 0xC);
    sub_08052078(temp_r4, 0x80);
    sub_08052098(temp_r4, 0x6400);
    temp_r4_2 = M2C_FIELD(arg2, s32 *, 0);
    temp_r5 = M2C_FIELD(arg2, s32 *, 4);
    sub_080528D4(temp_r0, temp_r4_2, temp_r5, sub_080502E8(arg2));
    M2C_FIELD(temp_r0, M2C_UNK **, 0xB0) = &sub_080148B0;
    sub_08003C58(M2C_FIELD(temp_r0, s32 *, 0xA8), 0x2F0000);
    M2C_FIELD(temp_r0, s8 *, 0xBA) = 0;
    if ((sub_08007874(2) << 0x18) != 0) {
        M2C_FIELD(temp_r0, s16 *, 0xB8) = 0xBA;
        if ((sub_08007498(0x1A) << 0x18) == 0) {
            sub_0805275C(0x99, &sp0);
            sub_0800FCA4(0x1A, 1, &sp0);
        }
    } else {
        if (M2C_FIELD(temp_r0, u8 *, 0xBC) != 0) {
            var_r1 = temp_r0 + 0xB8;
            var_r0 = 0xB8;
        } else {
            var_r1 = temp_r0 + 0xB8;
            var_r0 = 0xB6;
        }
        *var_r1 = var_r0;
    }
    return temp_r0;
}
