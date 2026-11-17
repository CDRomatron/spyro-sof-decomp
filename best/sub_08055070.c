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

M2C_UNK sub_08007240(void *, void *);               /* extern */
u8 sub_08007324();                                  /* extern */
s32 sub_08063D80(s32, s32);                         /* extern */

void sub_08055070(void *arg0, s32 arg2, s32 arg4, s32 arg5) {
    s32 temp_r4;
    s32 var_r0;
    u16 var_r1;
    u8 temp_r2;

    temp_r2 = sub_08007324();
    var_r1 = 0;
loop_1:
    if (M2C_FIELD(((var_r1 * 0xC) + 0x0817AC58), u16 *, 0xA) == temp_r2) {
        var_r0 = 1;
    } else {
        var_r1 += 1;
        if ((u32) var_r1 > 0xDU) {
            var_r0 = 0;
        } else {
            goto loop_1;
        }
    }
    if (var_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (arg5 >> 1);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (arg4 >> 1);
        temp_r4 = arg2 >> 6;
        M2C_FIELD(arg0, s32 *, 0x34) = sub_08063D80(0xF00000, arg2);
        M2C_FIELD(arg0, s32 *, 0x14) = sub_08063D80(0xF0000, temp_r4);
        M2C_FIELD(arg0, s32 *, 0x18) = sub_08063D80(0x100000, temp_r4);
        M2C_FIELD(arg0, s32 *, 0x1C) = sub_08063D80(((s32) (M2C_FIELD(arg0, s32 *, 0x2C) * 2) >> 6) * M2C_FIELD(arg0, s32 *, 0x14), 0x100);
        M2C_FIELD(arg0, s32 *, 0x20) = sub_08063D80(((s32) (M2C_FIELD(arg0, s32 *, 0x30) * 2) >> 6) * M2C_FIELD(arg0, s32 *, 0x14), 0x100);
        M2C_FIELD(arg0, s32 *, 0x24) = sub_08063D80(((s32) (M2C_FIELD(arg0, s32 *, 0x2C) * 2) >> 6) * M2C_FIELD(arg0, s32 *, 0x18), 0x100);
        M2C_FIELD(arg0, s32 *, 0x28) = sub_08063D80(((s32) (M2C_FIELD(arg0, s32 *, 0x30) * 2) >> 6) * M2C_FIELD(arg0, s32 *, 0x18), 0x100);
        sub_08007240(arg0 + 0x38, arg0 + 0x3C);
        M2C_FIELD(arg0, s8 *, 0x40) = 1;
    }
}
