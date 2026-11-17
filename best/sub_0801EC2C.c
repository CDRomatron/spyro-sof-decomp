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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_0800443C(s32, s32);                     /* extern */
M2C_UNK sub_08007764(u8);                           /* extern */
s32 sub_0800897C();                                 /* extern */
M2C_UNK sub_0800FDB4(void *, s32, s32 *);           /* extern */
M2C_UNK sub_080528D4(s32, s32, s32, s32);           /* extern */
u8 sub_0805399C();                                  /* extern */
extern M2C_UNK sub_0801EAF8;
extern M2C_UNK sub_0801EF4C;

void sub_0801EC2C(void *arg0, u16 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_r4;
    u16 var_r6;
    void *temp_r0;

    var_r6 = arg1;
    M2C_FIELD(arg0, u16 *, 0x22) = (u16) (0xFFFE & M2C_FIELD(arg0, u16 *, 0x22));
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    if (var_r6 == 1) {
        if (sub_0805399C() != 3) {
            var_r6 = 0;
        }
        if (var_r6 != 1) {
            goto block_4;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x38) = &sub_0801EF4C;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (M2C_FIELD(arg0, u16 *, 0x22) | 1);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x34), 0x4A0004);
    } else {
block_4:
        switch ((s32) var_r6) {                     /* irregular */
        case 0:
            M2C_FIELD(arg0, M2C_UNK **, 0x38) = (M2C_UNK *)0x0801EB79;
            M2C_FIELD(arg0, s16 *, 0x42) = (s16) ((sub_0800897C() & 0x7F) + 0x3C);
            M2C_FIELD(arg0, s8 *, 0x4B) = 0;
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x34), 0x4A0006);
            break;
        case 2:
            M2C_FIELD(arg0, M2C_UNK **, 0x38) = &sub_0801EAF8;
            M2C_FIELD(arg0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(arg0, u16 *, 0x22));
            M2C_FIELD(arg0, s16 *, 0x46) = 0xF0;
            sub_0800443C(M2C_FIELD(arg0, s32 *, 0x34), 0xB);
            sub_08004408(M2C_FIELD(arg0, s32 *, 0x34), 0);
            break;
        case 3:
            M2C_FIELD(arg0, M2C_UNK **, 0x38) = NULL;
            M2C_FIELD(arg0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(arg0, u16 *, 0x22));
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x34), 0x4A0005);
            sub_0800443C(M2C_FIELD(arg0, s32 *, 0x34), -1);
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x30);
            if (temp_r4 != 0) {
                temp_r0 = arg0 + 0xC;
                sub_080528D4(temp_r4, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r0, s32 *, 4), M2C_FIELD(temp_r0, s32 *, 8));
                sp0 = (sub_0800897C() & 0x7F) - 0x40;
                sp4 = (sub_0800897C() & 0x7F) - 0x40;
                sp8 = (0x3FF & sub_0800897C()) + 0x600;
                sub_0800FDB4(arg0, M2C_FIELD(arg0, s32 *, 0x30), &sp0);
            }
            sub_08007764(M2C_FIELD(arg0, u8 *, 0x4D));
            break;
        }
    }
    M2C_FIELD(arg0, s8 *, 0x4C) = (s8) var_r6;
}
