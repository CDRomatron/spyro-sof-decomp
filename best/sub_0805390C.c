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

M2C_UNK sub_08002BE0(void *, s32);                  /* extern */
M2C_UNK sub_0800C068();                             /* extern */
M2C_UNK sub_0800F43C();                             /* extern */
M2C_UNK sub_0800F95C();                             /* extern */
M2C_UNK sub_0800FC78();                             /* extern */
M2C_UNK sub_0805002C();                             /* extern */
M2C_UNK sub_08052074();                             /* extern */
M2C_UNK sub_08052610();                             /* extern */
M2C_UNK sub_08054410();                             /* extern */

void sub_0805390C(void) {
    void *temp_r1;

    temp_r1 = *(void **)0x03001634;
    if (temp_r1 != NULL) {
        if (M2C_FIELD(temp_r1, u8 *, 0x33) == 6) {
            if (M2C_FIELD(temp_r1, u8 *, 0x37) != 0) {
                sub_0805002C();
                M2C_FIELD(temp_r1, u8 *, 0x37) = 0U;
            }
        } else if (M2C_FIELD(temp_r1, u8 *, 0x38) != 0) {
            if (M2C_FIELD(*(void **)0x03001634, u8 *, 0x37) != 0) {
                sub_0805002C();
            }
            sub_08052610();
            sub_08054410();
            sub_0800F43C();
            sub_08052074();
            sub_0800F95C();
            sub_0800FC78();
            sub_0800C068();
            sub_08002BE0(*(void **)0x03001634, 0x40);
            *(void **)0x03001634 = NULL;
        }
    }
}
