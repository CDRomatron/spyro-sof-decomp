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

M2C_UNK sub_080043A4(s32);                          /* extern */
u8 sub_080072DC(u8);                                /* extern */
u8 sub_080072FC();                                  /* extern */
M2C_UNK sub_08007944(s32);                          /* extern */
M2C_UNK sub_080082DC();                             /* extern */
M2C_UNK sub_08056298(u8, M2C_UNK, u16);             /* extern */
M2C_UNK sub_08061BD0(s32, s32);                     /* extern */

void sub_0805721C(void) {
    s32 *var_r4;
    s32 *var_r4_2;
    u16 temp_r2;
    u32 var_r5;
    u32 var_r5_2;
    u8 temp_r0;
    void *temp_r5;
    void *temp_r6;

    temp_r5 = *(void **)0x030008D4;
    if ((s32) M2C_FIELD(temp_r5, s16 *, 0x7C4) <= 0x10) {
        *(u16 *)0x030011B0 = 0xFF;
        temp_r2 = *(u16 *)0x030011B4;
        *(u16 *)0x030011B4 = (u16) M2C_FIELD(temp_r5, s16 *, 0x7C4);
        M2C_FIELD(temp_r5, s16 *, 0x7C4) = (s16) ((u16) M2C_FIELD(temp_r5, s16 *, 0x7C4) + 1);
        temp_r0 = M2C_FIELD(temp_r5, u8 *, 0x7D8);
        if (temp_r0 != 0) {
            sub_08056298(temp_r0, 0x030011B4, temp_r2);
        }
        if ((s32) M2C_FIELD(temp_r5, s16 *, 0x7C4) > 0x10) {
            *(u16 *)0x030011C0 = 0;
            M2C_FIELD(temp_r5, s8 *, 0x7DA) = 0;
            if (M2C_FIELD(temp_r5, u8 *, 0x7D8) != 0) {
                temp_r6 = *(void **)0x030008D4;
                var_r5 = 0;
                if ((u32) M2C_FIELD(temp_r6, u8 *, 0x7D0) > 0U) {
                    var_r4 = temp_r6 + 0x464;
                    do {
                        sub_080043A4(*var_r4);
                        var_r4 += 0x1C;
                        var_r5 += 1;
                    } while (var_r5 < (u32) M2C_FIELD(temp_r6, u8 *, 0x7D0));
                }
                var_r5_2 = 0;
                var_r4_2 = temp_r6 + 0x65C;
                do {
                    sub_080043A4(*var_r4_2);
                    var_r4_2 += 0x14;
                    var_r5_2 += 1;
                } while (var_r5_2 <= 0xFU);
                sub_080082DC();
            }
            sub_08007944(5);
            sub_08061BD0(5, sub_080072DC(sub_080072FC()) | 0x6300DF00);
        }
    }
}
