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
M2C_UNK sub_08004020(s32);                          /* extern */
M2C_UNK sub_080042A4(s32, s32, s32);                /* extern */
M2C_UNK sub_080043A4(s32);                          /* extern */
M2C_UNK sub_0804C194(s32, void *);                  /* extern */
extern s32 *sub_08048C10;

void sub_08048B60(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    default:
block_9:
        sub_08004020(M2C_FIELD(arg0, s32 *, 0x28));
        if (M2C_FIELD(arg0, s32 *, 0x2C) != 2) {
            var_r0 = M2C_FIELD(arg0, s32 *, 0x20);
            if (var_r0 < 0) {
                var_r0 += 0xFF;
            }
            var_r0_2 = *(s32 *)0x03002694;
            if (var_r0_2 < 0) {
                var_r0_2 += 0xFF;
            }
            var_r0_3 = M2C_FIELD(arg0, s32 *, 0x24);
            if (var_r0_3 < 0) {
                var_r0_3 += 0xFF;
            }
            var_r0_4 = *sub_08048C10;
            if (var_r0_4 < 0) {
                var_r0_4 += 0xFF;
            }
            sub_080042A4(M2C_FIELD(arg0, s32 *, 0x28), (var_r0 >> 8) - (var_r0_2 >> 8), (var_r0_3 >> 8) - (var_r0_4 >> 8));
        }
        return;
    case 1:
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x18) + M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(arg0, s32 *, 0x18) = temp_r2;
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x14);
        M2C_FIELD(arg0, s32 *, 0x1C) = temp_r1;
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + temp_r2);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + temp_r1);
        goto block_9;
    case 2:
        sub_080043A4(M2C_FIELD(arg0, s32 *, 0x28));
        sub_08000C9C(arg0);
        sub_0804C194(M2C_FIELD(*(void **)0x030026A4, s32 *, 0x84), arg0);
        return;
    }
}
