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
M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_08004454(s32, void *, M2C_UNK *);       /* extern */
M2C_UNK sub_080349B4(void *);                       /* extern */
extern M2C_UNK sub_080349FC;

void sub_08034588(void *arg0, u16 arg1) {
    u16 temp_r6;

    temp_r6 = arg1;
    M2C_FIELD(arg0, u16 *, 0x22) = (u16) (1 | M2C_FIELD(arg0, u16 *, 0x22));
    M2C_FIELD(arg0, s16 *, 0x48) = 0;
    switch (temp_r6) {                              /* irregular */
    case 0:
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x34), 0);
        break;
    case 1:
        sub_08003220(0x08170CC8);
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x34), -1);
        break;
    case 2:
        sub_08003220(0x08171374);
        M2C_FIELD(arg0, s32 *, 0x44) = 0;
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x34), 0x110000);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x38), 0x200002);
        sub_08004454(M2C_FIELD(arg0, s32 *, 0x38), arg0, &sub_080349FC);
        break;
    case 3:
        sub_08003220(0x08170CAC);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x34), 0x200002);
        sub_08003C58(M2C_FIELD(arg0, s32 *, 0x38), 0x200002);
        sub_08004454(M2C_FIELD(arg0, s32 *, 0x38), arg0, &sub_080349FC);
        sub_080349B4(arg0);
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x4D) = (s8) temp_r6;
}
