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

M2C_UNK sub_08000C9C(void *);                       /* extern */
M2C_UNK sub_080043A4(s32);                          /* extern */
M2C_UNK sub_08048640(void *);                       /* extern */
M2C_UNK sub_08048720(void *);                       /* extern */
s32 sub_0804B804(s32, s32);                         /* extern */
M2C_UNK sub_0804C194(s32, void *);                  /* extern */
M2C_UNK sub_0804D584();                             /* extern */

void sub_08048990(void *arg0) {
    s32 temp_r1;
    void *temp_r2;

    if ((sub_0804B804(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14)) << 0x18) == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 5;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x30);
    if (M2C_FIELD(arg0, s32 *, 0x4C) != temp_r1) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x4C) = temp_r1;
    sub_08048720(arg0);
    sub_08048640(arg0);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) + 1);
    if (M2C_FIELD(arg0, s32 *, 0x30) == 5) {
        temp_r2 = M2C_FIELD(arg0, void **, 0x18);
        if (temp_r2 != NULL) {
            M2C_FIELD(temp_r2, u16 *, 0x12) = (u16) (0xFFBF & M2C_FIELD(temp_r2, u16 *, 0x12));
        }
        if (M2C_FIELD(arg0, s32 *, 0x50) != 0) {
            sub_0804D584();
            M2C_FIELD(arg0, s32 *, 0x50) = 0;
        }
        sub_08000C9C(arg0);
        sub_080043A4(M2C_FIELD(arg0, s32 *, 0x1C));
        sub_0804C194(M2C_FIELD(*(void **)0x030026A4, s32 *, 0x84), arg0);
    }
}
