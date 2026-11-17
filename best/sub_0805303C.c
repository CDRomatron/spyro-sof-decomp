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

M2C_UNK sub_08005D3C(s32, s32);                     /* extern */
s32 sub_080072C0(u8);                               /* extern */
s32 sub_080072FC();                                 /* extern */
s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800A4E0();                             /* extern */
M2C_UNK sub_0800F338();                             /* extern */
M2C_UNK sub_0800F8FC();                             /* extern */
M2C_UNK sub_0800FC74();                             /* extern */
M2C_UNK sub_0804EB28();                             /* extern */
M2C_UNK sub_0804FE60();                             /* extern */
M2C_UNK sub_08050084();                             /* extern */
M2C_UNK sub_08050168(s32, s32);                     /* extern */
M2C_UNK sub_08052070();                             /* extern */
M2C_UNK sub_08052D08(u8);                           /* extern */
M2C_UNK sub_080534A0(s32);                          /* extern */
M2C_UNK sub_0805457C();                             /* extern */

void sub_0805303C(void) {
    s32 temp_r4;
    s32 var_r0;
    u32 temp_r4_3;
    u8 temp_r0;
    u8 temp_r4_2;
    void *temp_r7;

    temp_r7 = *(void **)0x03001634;
    sub_0800A4E0();
    sub_0800FC74();
    sub_0800F8FC();
    sub_08052070();
    sub_0800F338();
    sub_0804EB28();
    M2C_FIELD(temp_r7, s8 *, 0x37) = 1;
    temp_r4 = sub_080072C0(M2C_FIELD(temp_r7, u8 *, 0x34));
    temp_r4_2 = temp_r4 ^ sub_080072FC();
    temp_r4_3 = (u32) ((0 - temp_r4_2) | temp_r4_2) >> 0x1F;
    sub_08052D08(M2C_FIELD(temp_r7, u8 *, 0x34));
    M2C_FIELD(temp_r7, s8 *, 0x38) = 1;
    sub_08050084();
    temp_r0 = M2C_FIELD(temp_r7, u8 *, 0x34);
    switch (temp_r0) {                              /* irregular */
    case 10:
        var_r0 = 0x56;
block_9:
        if ((sub_08007874(var_r0) << 0x18) == 0) {
            sub_08050168(0, 0);
        } else {
block_12:
            sub_0804FE60();
            sub_08005D3C(0, 0);
        }
        break;
    case 23:
        var_r0 = 0x57;
        goto block_9;
    case 34:
        var_r0 = 0x58;
        goto block_9;
    default:
        if (temp_r4_3 != 0) {
            goto block_12;
        }
        sub_08050168(0, 0);
        break;
    }
    sub_080534A0(3);
    M2C_FIELD(temp_r7, s8 *, 0x3A) = 1;
    sub_0805457C();
}
