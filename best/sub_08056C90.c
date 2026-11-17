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

M2C_UNK sub_080009E0(s32, s32);                     /* extern */
M2C_UNK sub_08002EB0(s32);                          /* extern */
M2C_UNK sub_08003440(s32);                          /* extern */
M2C_UNK sub_080034A8();                             /* extern */
M2C_UNK sub_0800687C(u8);                           /* extern */
u8 sub_080072EC(u8);                                /* extern */
u8 sub_080074E0();                                  /* extern */
s32 sub_08007C58();                                 /* extern */
s32 sub_08007C68();                                 /* extern */
M2C_UNK sub_08009A68();                             /* extern */
M2C_UNK sub_0800A608();                             /* extern */

void sub_08056C90(void) {
    s32 var_r5;
    u8 temp_r0;
    u8 temp_r3;

    var_r5 = 0;
    sub_08009A68();
    sub_0800A608();
    sub_080034A8();
    sub_0800687C(*(u8 *)0x0300162A);
    *(u8 *)0x0300162D = 1;
    if ((sub_08007C68() << 0x18) != 0) {
        sub_08003440(0x80);
    } else {
        sub_08003440(0);
    }
    if ((sub_08007C58() << 0x18) != 0) {
        sub_08002EB0(0x80);
    } else {
        sub_08002EB0(0);
    }
    temp_r0 = sub_080072EC(sub_080074E0());
    temp_r3 = temp_r0;
    if ((u32) ((u32) ((temp_r0 << 0x18) + 0xDD000000) >> 0x18) <= 3U) {
        switch (temp_r3) {                          /* irregular */
        case 35:
            M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xADU;
            var_r5 = 0xC7;
            break;
        case 36:
            M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xAEU;
            var_r5 = 0xC8;
            break;
        case 37:
            M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xAFU;
            var_r5 = 0xC9;
            break;
        case 38:
            M2C_FIELD((void *)0x03001600, u16 *, 0x1E) = 0xB0U;
            var_r5 = 0xCA;
            break;
        }
        sub_080009E0(M2C_FIELD((void *)0x03002700, s32 *, 0), (var_r5 << 8) | (temp_r3 | 0x63000000));
        return;
    }
    sub_080009E0(M2C_FIELD((void *)0x03002700, s32 *, 0x14), temp_r3 | 0x63000000);
}
