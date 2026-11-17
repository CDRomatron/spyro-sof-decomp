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
M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08015C98(void *, void *, void *);       /* extern */
M2C_UNK sub_080528D4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_08065CF0(void *, s32, s32);             /* extern */

void *sub_08015D50(u16 arg0, void *arg2) {
    s8 *var_r1;
    s8 var_r0;
    u16 temp_r6;
    u32 var_r6;
    void *temp_r0;
    void *var_r4;

    temp_r6 = arg0;
    temp_r0 = sub_08002B34(0x1B8, 1);
    sub_08065CF0(temp_r0, 0, 0x1B8);
    M2C_FIELD(temp_r0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(temp_r0, u16 *, 0x22));
    switch (temp_r6) {                              /* irregular */
    case 0xCF:
        var_r1 = temp_r0 + 0x1B4;
        var_r0 = 3;
block_9:
        *var_r1 = var_r0;
        break;
    case 0xD0:
        var_r1 = temp_r0 + 0x1B4;
        var_r0 = 4;
        goto block_9;
    case 0xD1:
        var_r1 = temp_r0 + 0x1B4;
        var_r0 = 5;
        goto block_9;
    }
    var_r6 = 0;
    if ((u32) M2C_FIELD(temp_r0, u8 *, 0x1B4) > 0U) {
        var_r4 = temp_r0 + 0x24;
        do {
            sub_08015C98(temp_r0, var_r4, arg2);
            var_r4 += 0x50;
            var_r6 += 1;
        } while (var_r6 < (u32) M2C_FIELD(temp_r0, u8 *, 0x1B4));
    }
    sub_08003220(0x08170B08);
    M2C_FIELD(temp_r0, u8 *, 0x1B5) = (u8) M2C_FIELD(temp_r0, u8 *, 0x1B4);
    M2C_FIELD(temp_r0, s8 *, 0x1B6) = 1;
    sub_080528D4(temp_r0, M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg2, s32 *, 4), M2C_FIELD(arg2, s32 *, 8));
    return temp_r0;
}
