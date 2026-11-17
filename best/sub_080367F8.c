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

M2C_UNK sub_08003C58(s32, s32);                     /* extern */
M2C_UNK sub_08004408(s32, s32);                     /* extern */
M2C_UNK sub_0800443C(s32, s32);                     /* extern */
u32 sub_08004508(s32);                              /* extern */
M2C_UNK sub_0800D950(void *, s32);                  /* extern */
M2C_UNK sub_0800FE28(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08036BF0;
extern M2C_UNK sub_08036C5C;
extern M2C_UNK sub_08036C68;
extern M2C_UNK sub_08036C88;

void sub_080367F8(void *arg0, u16 arg1) {
    s32 temp_r1;
    u16 temp_r2;
    u16 temp_r5;
    u32 temp_r0;

    temp_r5 = arg1;
    temp_r2 = 0xFFFE & M2C_FIELD(arg0, u16 *, 0x22);
    M2C_FIELD(arg0, u16 *, 0x22) = temp_r2;
    switch (temp_r5) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        M2C_FIELD(arg0, M2C_UNK **, 0x44) = &sub_08036BF0;
        sub_0800443C(M2C_FIELD(arg0, s32 *, 0x48), -1);
        M2C_FIELD(arg0, s32 *, 0x40) = 0x1CC;
        break;
    case 1:                                         /* switch 1 */
        M2C_FIELD(arg0, M2C_UNK **, 0x44) = &sub_08036C5C;
        sub_08004408(M2C_FIELD(arg0, s32 *, 0x48), -1);
        break;
    case 3:                                         /* switch 1 */
        M2C_FIELD(arg0, M2C_UNK **, 0x44) = &sub_08036C88;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (temp_r2 | 1);
        break;
    case 2:                                         /* switch 1 */
        M2C_FIELD(arg0, M2C_UNK **, 0x44) = &sub_08036C68;
        M2C_FIELD(arg0, u16 *, 0x22) = (u16) (temp_r2 | 1);
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
        M2C_FIELD(arg0, s32 *, 0x6C) = 0;
        sub_0800D950(arg0 + 0x60, 2);
        temp_r0 = sub_08004508(M2C_FIELD(arg0, s32 *, 0x48));
        switch (temp_r0) {                          /* switch 2; irregular */
        case 0x330001:                              /* switch 2 */
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x48), 0x330000);
            break;
        case 0x220001:                              /* switch 2 */
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x48), 0x220000);
            break;
        case 0x1B0001:                              /* switch 2 */
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x48), 0x1B0000);
            break;
        }
        temp_r1 = M2C_FIELD(arg0, s32 *, 0x94);
        if (temp_r1 != 0) {
            sub_0800FE28(arg0, temp_r1, 0x42);
        }
        break;
    }
    M2C_FIELD(arg0, s8 *, 0x9A) = (s8) temp_r5;
}
