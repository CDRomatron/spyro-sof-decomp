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

extern M2C_UNK sub_080009EC;
extern M2C_UNK sub_08000C08;

s32 sub_08000AB0(void) {
    *(M2C_UNK **)0x03000800 = &sub_08000C08;
    *(s32 *)0x030010B4 = 0;
    *(s8 *)0x030010B8 = 0;
    *(s8 *)0x030010A8 = 0;
    *(s16 *)0x030010B0 = 0;
    *(s16 *)0x030010AC = 0;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 0) = &sub_080009EC;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 4) = &sub_08000C08;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 8) = &sub_08000C08;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 0xC) = &sub_08000C08;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 0x10) = &sub_08000C08;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 0x14) = &sub_08000C08;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 0x18) = &sub_08000C08;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 0x1C) = &sub_08000C08;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 0x20) = &sub_08000C08;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 0x24) = &sub_08000C08;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 0x28) = &sub_08000C08;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 0x2C) = &sub_08000C08;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 0x30) = &sub_08000C08;
    M2C_FIELD((void *)0x03001110, M2C_UNK **, 0x34) = &sub_08000C08;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x080000FC;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x03000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000400;
    *(s32 *)0x03007FFC = 0x03000000;
    *(s16 *)0x04000208 = 1;
    *(s16 *)0x04000200 = 1;
    *(s16 *)0x04000004 = 8;
    *(s8 *)0x03000804 = 0;
    return 1;
}
