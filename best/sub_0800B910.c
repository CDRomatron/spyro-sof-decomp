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

void *sub_0800B910(void) {
    void *temp_r1;
    void *temp_r3;

    if (M2C_FIELD(*(void **)0x03002680, void **, 0x798) == NULL) {
        return NULL;
    }
    temp_r3 = M2C_FIELD(*(void **)0x03002680, void **, 0x798);
    M2C_FIELD(*(void **)0x03002680, void **, 0x798) = (void *) M2C_FIELD(temp_r3, void **, 8);
    M2C_FIELD(temp_r3, void **, 4) = (void *) M2C_FIELD(*(void **)0x03002680, void **, 0x7A0);
    M2C_FIELD(temp_r3, void **, 8) = NULL;
    M2C_FIELD(temp_r3, void **, 0) = (void *) (*(void **)0x03002680 + ((M2C_FIELD(*(void **)0x03002680, s32 *, 0x7A4) * 8) + 0x698));
    M2C_FIELD(temp_r3, s16 *, 0x10) = 1;
    if (M2C_FIELD(*(void **)0x03002680, void **, 0x79C) == NULL) {
        M2C_FIELD(*(void **)0x03002680, void **, 0x79C) = temp_r3;
    } else {
        M2C_FIELD(M2C_FIELD(*(void **)0x03002680, void **, 0x7A0), void **, 8) = temp_r3;
    }
    M2C_FIELD(*(void **)0x03002680, void **, 0x7A0) = temp_r3;
    temp_r1 = *(void **)0x03002680;
    M2C_FIELD(temp_r1, s32 *, 0x7A4) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x7A4) + 1);
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0), s16 *, 0) = 0x100;
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0), s16 *, 2) = 0x100;
    M2C_FIELD(M2C_FIELD(temp_r3, void **, 0), s16 *, 4) = 0;
    return temp_r3;
}
