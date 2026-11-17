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
s32 sub_080076A4(u8);                               /* extern */
u8 sub_080076C8();                                  /* extern */
s32 sub_080502E8(void *);                           /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_0801E5A8(u16 arg0, void *arg2) {
    s32 temp_r0_2;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 var_r8;
    u16 temp_r4;
    u8 var_r5;
    void *temp_r0;
    void *var_r6;

    temp_r4 = arg0;
    var_r6 = NULL;
    var_r5 = 0;
    var_r8 = 1;
    if (temp_r4 == 0x1DA) {
        if ((sub_08007498(0x54) << 0x18) == 0) {
            goto block_5;
        }
    } else {
        var_r5 = sub_080076C8();
        if ((sub_080076A4(var_r5) << 0x18) != 0) {
            var_r8 = 0;
        }
block_5:
        if (var_r8 != 0) {
            temp_r0 = sub_08002B34(0x34, 1);
            var_r6 = temp_r0;
            sub_08065CF0(temp_r0, 0, 0x34);
            M2C_FIELD(var_r6, s8 *, 0x31) = 1;
            M2C_FIELD(var_r6, u16 *, 0x2C) = temp_r4;
            M2C_FIELD(var_r6, s16 *, 0x2E) = (s16) var_r5;
            if (temp_r4 == 0x1DA) {
                M2C_FIELD(var_r6, s8 *, 0x30) = 1;
            }
            temp_r0_2 = sub_08004370();
            M2C_FIELD(var_r6, s32 *, 0x28) = temp_r0_2;
            sub_08003C58(temp_r0_2, 0x100000);
            temp_r4_2 = M2C_FIELD(arg2, s32 *, 0);
            temp_r5 = M2C_FIELD(arg2, s32 *, 4);
            sub_080528D4(var_r6, temp_r4_2, temp_r5, sub_080502E8(arg2));
        }
    }
    return var_r6;
}
