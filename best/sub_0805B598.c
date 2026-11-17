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

M2C_UNK sub_08003220(s32);                          /* extern */
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_080042A4(s32, s32, s32);                /* extern */

void sub_0805B598(void *arg0) {
    u32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u32 *, 0x2C);
    switch (temp_r2) {                              /* irregular */
    case 2:
        if (!(((u32) *(u32 *)0x030010B4 >> 4) & 1)) {
        default:
block_10:
            sub_08004020(M2C_FIELD(arg0, s32 *, 0x28));
            sub_080042A4(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, s32 *, 0x1C));
        }
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + M2C_FIELD(arg0, s32 *, 0x10));
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(*(void **)0x030026D8, u32 *, 0x44) = temp_r2;
        if ((M2C_FIELD(arg0, s32 *, 0x18) == M2C_FIELD(arg0, s32 *, 0x20)) && (M2C_FIELD(arg0, s32 *, 0x1C) == M2C_FIELD(arg0, s32 *, 0x24))) {
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
            M2C_FIELD(*(void **)0x030026D8, u32 *, 0x44) = 0U;
            M2C_FIELD(*(void **)0x030026D8, u32 *, 0x4C) = temp_r2;
            if (M2C_FIELD(*(void **)0x030026D8, s32 *, 0x50) != 0) {
                sub_08003220(0x081715C0);
            }
            M2C_FIELD(*(void **)0x030026D8, s32 *, 0x50) = 0;
        }
        goto block_10;
    }
}
