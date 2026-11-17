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
M2C_UNK sub_080034C0(s32);                          /* extern */
M2C_UNK sub_080034E4(s32);                          /* extern */
s32 sub_08007C68();                                 /* extern */
M2C_UNK sub_080096A4(u8, s32, M2C_UNK *);           /* extern */
extern M2C_UNK sub_080578B8;

void sub_08057974(s32 arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = *(void **)0x030008D4;
    if (arg1 == 0) {
        sub_08003220(0x08171010);
        sub_080096A4(M2C_FIELD(temp_r4, u8 *, 0x7CB), 2, &sub_080578B8);
        return;
    }
    if (((u32) (arg1 - 2) <= 1U) && (arg0 == 1)) {
        if ((sub_08007C68() << 0x18) != 0) {
            sub_080034E4(0);
            return;
        }
        sub_080034C0(0);
    }
}
