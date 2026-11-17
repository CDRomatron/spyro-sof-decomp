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

M2C_UNK sub_080042A4(s32, s32, s32);                /* extern */

s32 sub_08043D18(void) {
    void *temp_r5;

    temp_r5 = *(void **)0x030008D0;
    if ((u32) (*(s32 *)0x030010B4 & 0x3F) > 0x1FU) {
        if (1 & M2C_FIELD(temp_r5, u8 *, 0x7E)) {
            sub_080042A4(M2C_FIELD(temp_r5, s32 *, 0x50), 0x84, 4);
        }
        if (2 & M2C_FIELD(temp_r5, u8 *, 0x7E)) {
            sub_080042A4(M2C_FIELD(temp_r5, s32 *, 0x54), 0x84, 0x9C);
        }
        if (4 & M2C_FIELD(temp_r5, u8 *, 0x7E)) {
            sub_080042A4(M2C_FIELD(temp_r5, s32 *, 0x58), 4, 0x50);
        }
        if (8 & M2C_FIELD(temp_r5, u8 *, 0x7E)) {
            sub_080042A4(M2C_FIELD(temp_r5, s32 *, 0x5C), 0xEC, 0x50);
        }
    }
    return 0;
}
