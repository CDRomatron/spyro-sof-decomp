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

u8 sub_0800897C();                                  /* extern */
M2C_UNK sub_08009F74(u16);                          /* extern */
M2C_UNK sub_0800A2D8(u16);                          /* extern */
M2C_UNK *sub_0800A3D4(u16);                         /* extern */
M2C_UNK sub_0800A400(u16, void *);                  /* extern */
M2C_UNK sub_0800A474(u16, s32);                     /* extern */

void sub_0800DCE0(u16 arg0) {
    M2C_UNK sp0;
    s32 sp4;
    s32 var_r1;
    u16 temp_r0;
    u32 temp_r0_2;
    void *temp_r0_3;
    void *temp_r4;
    void *var_r5;

    temp_r0 = arg0;
    sp4 = (s32) temp_r0;
    temp_r4 = *(void **)0x030008CC;
    if (temp_r0 == 0) {
        M2C_FIELD(&sp0, u16 *, 0) = (u16) M2C_FIELD(&sp0, u16 *, 4);
        M2C_FIELD((void *)0x040000D4, M2C_UNK **, 0) = &sp0;
        M2C_FIELD((void *)0x040000D4, void **, 4) = (void *)0x06000B00;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000010;
        M2C_FIELD(temp_r4, s16 *, 0x2FE) = 1;
        M2C_FIELD(temp_r4, u16 *, 0xA4) = (u16) M2C_FIELD(&sp0, u16 *, 4);
        M2C_FIELD(temp_r4, s8 *, 0x334) = 0;
    } else {
        var_r1 = 0;
        var_r5 = (void *)0x08175434;
loop_3:
        if (M2C_FIELD(var_r5, u16 *, 0) != sp4) {
            var_r5 += 0x10;
            var_r1 += 1;
            if (var_r1 <= 0x1E) {
                goto loop_3;
            }
        } else {
            M2C_FIELD(temp_r4, s32 *, 0x2D0) = (s32) M2C_FIELD(var_r5, s32 *, 4);
            sub_08009F74(M2C_FIELD(var_r5, u16 *, 0xC));
            M2C_FIELD((void *)0x040000D4, M2C_UNK **, 0) = sub_0800A3D4(M2C_FIELD(var_r5, u16 *, 0xC));
            M2C_FIELD((void *)0x040000D4, void **, 4) = (void *)0x03001380;
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
            M2C_FIELD((void *)0x040000D4, M2C_UNK **, 0) = sub_0800A3D4(M2C_FIELD(var_r5, u16 *, 0xC));
            M2C_FIELD((void *)0x040000D4, void **, 4) = (void *) (temp_r4 + 0x64);
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
            sub_0800A2D8(M2C_FIELD(var_r5, u16 *, 0xC));
            sub_0800A400(M2C_FIELD(var_r5, u16 *, 8), temp_r4);
            sub_0800A474(M2C_FIELD(var_r5, u16 *, 0xA), 0x06000B00);
            temp_r0_2 = (u16) M2C_FIELD(temp_r4, u16 *, 2) >> 2;
            switch (temp_r0_2) {                    /* irregular */
            case 2:
                M2C_FIELD(temp_r4, s16 *, 0x2FE) = 3;
                temp_r0_3 = temp_r4 + 0xA4;
                M2C_FIELD(temp_r4, u16 *, 0xA4) = 0U;
                M2C_FIELD(temp_r0_3, s16 *, 2) = 1;
                M2C_FIELD((temp_r0_3 + 2), s16 *, 2) = 0;
                M2C_FIELD(temp_r4, s8 *, 0x334) = 1;
                break;
            case 3:
                M2C_FIELD(temp_r4, s16 *, 0x2FE) = 5;
                M2C_FIELD(temp_r4, u16 *, 0xA4) = 0U;
                M2C_FIELD((temp_r4 + 0xA4), s16 *, 2) = 1;
                M2C_FIELD(temp_r4, s16 *, 0xA8) = 2;
                M2C_FIELD(temp_r4, s16 *, 0xAA) = 1;
                M2C_FIELD((temp_r4 + 0xAA), s16 *, 2) = 0;
                M2C_FIELD(temp_r4, s8 *, 0x334) = 1;
                break;
            default:
                M2C_FIELD(temp_r4, s16 *, 0x2FE) = 1;
                M2C_FIELD(temp_r4, u16 *, 0xA4) = 0U;
                M2C_FIELD(temp_r4, s8 *, 0x334) = 0;
                break;
            }
            M2C_FIELD(temp_r4, s16 *, 0x300) = 0;
            M2C_FIELD(temp_r4, s16 *, 0x304) = (s16) (sub_0800897C() + 0x3C);
        }
    }
    M2C_FIELD(temp_r4, u16 *, 0x2F8) = (u16) M2C_FIELD(&sp0, u16 *, 4);
}
