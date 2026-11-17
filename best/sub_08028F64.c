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

M2C_UNK sub_0800F538();                             /* extern */
s32 sub_0800FCA4(s32, s32, M2C_UNK *);              /* extern */
M2C_UNK sub_0800FDA0(void *, s32, M2C_UNK *);       /* extern */
M2C_UNK sub_08029000(void *, s32);                  /* extern */
M2C_UNK sub_080501CC(void *, M2C_UNK *);            /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
extern M2C_UNK sub_08028D24;

s32 sub_08028F64(u16 arg0, u8 arg1, void *arg2) {
    M2C_UNK sp0;
    u16 temp_r0;
    u8 temp_r1;
    u8 temp_r2;
    void *temp_r0_2;
    void *temp_r0_3;

    temp_r0 = arg0;
    switch ((s32) temp_r0) {                        /* irregular */
    case 3:
        temp_r0_2 = M2C_FIELD(arg2, void **, 0x38);
        temp_r0_3 = temp_r0_2 + 0xC;
        M2C_FIELD(&sp0, s32 *, 0) = (s32) M2C_FIELD(temp_r0_2, s32 *, 0xC);
        M2C_FIELD(&sp0, s32 *, 4) = (s32) M2C_FIELD(temp_r0_3, s32 *, 4);
        M2C_FIELD(&sp0, s32 *, 8) = (s32) M2C_FIELD(temp_r0_3, s32 *, 8);
        sub_0800FDA0(arg2, sub_0800FCA4(0x26, 1, &sp0), &sp0);
        break;
    case 0:
        if (arg1 != 0) {
            M2C_FIELD(arg2, u8 *, 0x52) = 1U;
        }
        break;
    default:
        sub_0800F538();
        sub_080534A0(3);
        temp_r1 = M2C_FIELD(arg2, u8 *, 0x58);
        if (temp_r1 == 0) {
            temp_r2 = M2C_FIELD(arg2, u8 *, 0x54);
            if (temp_r2 != 0) {
                M2C_FIELD(arg2, u8 *, 0x54) = temp_r1;
                goto block_11;
            }
            if (M2C_FIELD(arg2, u8 *, 0x52) != 0) {
                M2C_FIELD(arg2, u8 *, 0x52) = temp_r2;
                sub_08029000(arg2, 2);
            }
        } else {
block_11:
            sub_080501CC(arg2, &sub_08028D24);
        }
        break;
    }
    return 1;
}
