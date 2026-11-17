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
M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
M2C_UNK sub_0802790C(void *);                       /* extern */
s32 sub_08055038(s32);                              /* extern */
extern M2C_UNK sub_08027B9C;

void sub_08027AD8(void *arg0) {
    if ((sub_08055038(arg0 + 0xC) << 0x18) == 0) {
        M2C_FIELD(arg0, s8 *, 0x59) = 4;
        sub_08003220(0x08170CAC);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x24), 0x200002);
        sub_08004454(M2C_FIELD(arg0, s32 *, 0x24), arg0, &sub_08027B9C);
        sub_0802790C(arg0);
    }
}
