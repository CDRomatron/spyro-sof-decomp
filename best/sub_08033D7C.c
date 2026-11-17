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
M2C_UNK sub_08033884(void *, s32);                  /* extern */
s32 sub_08052C28(void *, s32);                      /* extern */

void sub_08033D7C(void *arg0) {
    u8 temp_r0;

    if ((M2C_FIELD(arg0, u8 *, 0xB3) != 0) && (M2C_FIELD(arg0, u16 *, 0xA8) == 0)) {
        sub_08033884(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x90) = sub_08052C28(arg0 + 0x24, M2C_FIELD(arg0, s32 *, 0xA4) + 0xC);
        temp_r0 = M2C_FIELD(arg0, u8 *, 0xAE);
        switch (temp_r0) {                          /* irregular */
        case 0:
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x80), 0x3F0002);
            return;
        case 1:
            sub_08003C58(M2C_FIELD(arg0, s32 *, 0x80), 0x5D0002);
            break;
        }
    }
}
