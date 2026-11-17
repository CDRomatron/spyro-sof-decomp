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

M2C_UNK sub_080036B8(s32, s32, s32, s32, s32);      /* extern */

void sub_0805EC70(void) {
    void *temp_r2;

    sub_080036B8(M2C_FIELD(*(void **)0x030026EC, s32 *, 0xC8), 0x030012C0, 0x030012A0, M2C_FIELD(*(void **)0x030026EC, s32 *, 0xD4), 0x10);
    sub_080036B8(M2C_FIELD(*(void **)0x030026EC, s32 *, 0xCC), 0x03001300, 0x030012E0, M2C_FIELD(*(void **)0x030026EC, s32 *, 0xD4), 0x10);
    temp_r2 = *(void **)0x030026EC;
    M2C_FIELD(temp_r2, s32 *, 0xD4) = (s32) (M2C_FIELD(temp_r2, s32 *, 0xD4) + M2C_FIELD(*(void **)0x030026EC, s32 *, 0xD0));
    if ((s32) M2C_FIELD(*(void **)0x030026EC, s32 *, 0xD4) > 0x100) {
        M2C_FIELD(*(void **)0x030026EC, s32 *, 0xD4) = 0x100;
        M2C_FIELD(*(void **)0x030026EC, s32 *, 0xD0) = -0x10;
    }
    if ((s32) M2C_FIELD(*(void **)0x030026EC, s32 *, 0xD4) < 0) {
        M2C_FIELD(*(void **)0x030026EC, s32 *, 0xD4) = 0;
        M2C_FIELD(*(void **)0x030026EC, s32 *, 0xD0) = 0x10;
    }
}
