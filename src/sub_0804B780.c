/* identical to sub_0804B8FC in SPYRO 2-E (matched), with its names changed by decompdecomp */
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

s32 sub_0804B780(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 <= (s32) M2C_FIELD(arg0, s16 *, 0x14)) && (arg1 >= (s32) M2C_FIELD(arg0, s16 *, 0x10)) && (arg2 <= (s32) M2C_FIELD(arg0, s16 *, 0x16)) && (arg2 >= (s32) M2C_FIELD(arg0, s16 *, 0x12))) {
        return 1;
    }
    return 0;
}
