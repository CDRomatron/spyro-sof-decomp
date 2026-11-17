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

void *sub_08000CE8(void *arg0) {
    void **temp_r0;
    void *temp_r1;
    void *var_r2;

    var_r2 = M2C_FIELD(arg0, void **, 8);
    temp_r1 = M2C_FIELD(var_r2, void **, 0);
    if (temp_r1 != NULL) {
        temp_r0 = M2C_FIELD(var_r2, void ***, 4);
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r1, void ***, 4) = temp_r0;
            *M2C_FIELD(var_r2, void ***, 4) = M2C_FIELD(var_r2, void **, 0);
        }
        M2C_FIELD(var_r2, void ***, 4) = NULL;
        M2C_FIELD(var_r2, void **, 0) = NULL;
    } else {
        var_r2 = NULL;
    }
    return var_r2;
}
