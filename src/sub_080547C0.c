/* identical to sub_0805495C in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

s32 sub_08007874(s32);                              /* extern */
M2C_UNK sub_0800C3FC(s32, s32, s32);                /* extern */
M2C_UNK sub_0800C4DC(s32, void *, M2C_UNK *);       /* extern */
s32 sub_0800D610(s32);                              /* extern */
M2C_UNK sub_0800D730(s32, s32);                     /* extern */
extern M2C_UNK sub_080546D0;

void sub_080547C0(void *arg0) {
    if ((sub_08007874(0x5F) << 0x18) != 0) {
        if ((M2C_FIELD(arg0, u16 *, 0x48) == 0) || ((sub_0800D610(M2C_FIELD(arg0, s32 *, 0x40)) << 0x18) == 0)) {
            sub_0800C3FC(M2C_FIELD(arg0, s32 *, 0x40), 0, 0);
            sub_0800D730(M2C_FIELD(arg0, s32 *, 0x40), -1);
            M2C_FIELD(arg0, u16 *, 0x48) = 1U;
        }
    } else if (M2C_FIELD(arg0, u16 *, 0x48) != 0) {
        sub_0800D730(M2C_FIELD(arg0, s32 *, 0x40), 0);
        sub_0800C4DC(M2C_FIELD(arg0, s32 *, 0x40), arg0 + 0x40, &sub_080546D0);
    }
}
