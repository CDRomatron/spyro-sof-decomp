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
M2C_UNK sub_08003C58(s32);                          /* extern */
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_080042A4(s32, s32, s32);                /* extern */
M2C_UNK sub_080043A4(s32);                          /* extern */
s32 sub_08004508(s32);                              /* extern */
M2C_UNK sub_08048F00(void *);                       /* extern */
s32 sub_0804B804(s32, s32);                         /* extern */
M2C_UNK sub_0804C194(s32, void *);                  /* extern */

void sub_08048FF8(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r5;
    s32 var_r1;
    s32 var_r1_2;
    void *temp_r2;

    if ((sub_0804B804(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, s32 *, 0x14)) << 0x18) == 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 1;
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
        sub_08048F00(arg0);
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_r0 = sub_08004508(temp_r5);
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x30);
    switch (temp_r1) {                              /* irregular */
    case 1:
        break;
    case 0:
        if (temp_r0 != 0x7C0003) {
            sub_08003C58(temp_r5);
        }
        /* fallthrough */
    default:
        sub_08004020(M2C_FIELD(arg0, s32 *, 0x18));
        var_r1 = M2C_FIELD(arg0, s32 *, 0x10) - *(s32 *)0x03002694;
        if (var_r1 < 0) {
            var_r1 += 0xFF;
        }
        var_r1_2 = M2C_FIELD(arg0, s32 *, 0x14) - *(s32 *)0x03002698;
        if (var_r1_2 < 0) {
            var_r1_2 += 0xFF;
        }
        sub_080042A4(M2C_FIELD(arg0, s32 *, 0x18), var_r1 >> 8, var_r1_2 >> 8);
        break;
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) == 1) {
        temp_r2 = M2C_FIELD(arg0, void **, 0x2C);
        if (temp_r2 != NULL) {
            M2C_FIELD(temp_r2, u16 *, 0x12) = (u16) (0xFFBF & M2C_FIELD(temp_r2, u16 *, 0x12));
        }
        sub_080043A4(M2C_FIELD(arg0, s32 *, 0x18));
        sub_08000C9C(arg0);
        sub_0804C194(M2C_FIELD(*(void **)0x030026A4, s32 *, 0x84), arg0);
    }
}
