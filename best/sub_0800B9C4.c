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

void sub_0800B9C4(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r2;
    void *temp_r3;

    if (1 & M2C_FIELD(arg0, u16 *, 0x10)) {
        M2C_FIELD(arg0, u16 *, 0x10) = 0U;
        temp_r1 = *(void **)0x03002680;
        M2C_FIELD(temp_r1, s32 *, 0x7A4) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x7A4) - 1);
        if (arg0 == M2C_FIELD(*(void **)0x03002680, void **, 0x7A0)) {
            temp_r0 = M2C_FIELD(arg0, void **, 4);
            if (temp_r0 != NULL) {
                M2C_FIELD(temp_r0, void **, 8) = NULL;
            } else {
                M2C_FIELD(*(void **)0x03002680, void **, 0x79C) = NULL;
            }
            M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(*(void **)0x03002680, void **, 0x798);
            M2C_FIELD(*(void **)0x03002680, void **, 0x798) = arg0;
            M2C_FIELD(*(void **)0x03002680, void **, 0x7A0) = (void *) M2C_FIELD(arg0, void **, 4);
            return;
        }
        temp_r3 = M2C_FIELD(*(void **)0x03002680, void **, 0x7A0);
        if (M2C_FIELD(*(void **)0x03002680, void **, 0x79C) == arg0) {
            if (M2C_FIELD(arg0, void **, 8) != temp_r3) {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), s32 *, 8) = 0;
                M2C_FIELD(*(void **)0x03002680, void **, 0x7A0) = (void *) M2C_FIELD(temp_r3, void **, 4);
                M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 4) = temp_r3;
                M2C_FIELD(temp_r3, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
            }
            M2C_FIELD(temp_r3, void **, 4) = NULL;
            M2C_FIELD(*(void **)0x03002680, void **, 0x79C) = temp_r3;
        } else {
            if (M2C_FIELD(arg0, void **, 8) == temp_r3) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 8) = temp_r3;
            } else {
                M2C_FIELD(M2C_FIELD(temp_r3, void **, 4), s32 *, 8) = 0;
                M2C_FIELD(*(void **)0x03002680, void **, 0x7A0) = (void *) M2C_FIELD(temp_r3, void **, 4);
                M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 8) = temp_r3;
                M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 4) = temp_r3;
                M2C_FIELD(temp_r3, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
            }
            M2C_FIELD(temp_r3, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
        }
        temp_r2 = M2C_FIELD(arg0, void **, 0);
        temp_r0_2 = M2C_FIELD(temp_r3, void **, 0);
        M2C_FIELD(temp_r2, s32 *, 0) = (s32) M2C_FIELD(temp_r0_2, s32 *, 0);
        M2C_FIELD(temp_r2, s32 *, 4) = (s32) M2C_FIELD(temp_r0_2, s32 *, 4);
        M2C_FIELD(temp_r3, void **, 0) = (void *) M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(*(void **)0x03002680, void **, 0x798);
        M2C_FIELD(*(void **)0x03002680, void **, 0x798) = arg0;
    }
}
