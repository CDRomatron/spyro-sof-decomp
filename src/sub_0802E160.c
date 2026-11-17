/* identical to sub_080180AC (matched), with its names changed by decompdecomp */

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern s32 sub_08050228(s32, void *, s32);
extern s32 sub_08007874(s32);
extern s32 sub_08017E60(s32, s32);
extern s32 sub_08052140(void *, s32);
extern s32 sub_08004020(s32);
extern s32 sub_0800FA98(s32, s32, s32, s32, s32, s32);
extern s32 sub_080641CC(void *);
extern s32 sub_08003220(s32);
extern u8 sub_08007598();
extern s32 sub_0800781C(s32, s32);

void sub_0802E160(void *arg0) {
    void *p;
    p = arg0 + 0xC;
    sub_08050228(M2C_FIELD(arg0, s32 *, 0x38), p, 0);
}

void sub_080180E8(s32 arg0) {
    void *p;
    p = (void *)(arg0 + 0xC);
    if (((sub_08007874(0x5F) << 0x18) != 0) && ((sub_08052140(p, 0x800) << 0x18) != 0)) {
        sub_08017E60(arg0, 1);
    }
}

s32 sub_08018060(void *arg0) {
    void *temp_r5;
    temp_r5 = arg0 + 0xC;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x38));
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        sub_080641CC(arg0);
    }
    if ((sub_08052140(temp_r5, 0x800) << 0x18) != 0) {
        sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8), 0, 0x800);
    }
    return 1;
}

u8 sub_080181D4(void *arg0) {
    u8 *var_r4;
    u8 temp_r5;
    temp_r5 = sub_08007598();
    if (temp_r5 != 0) {
        M2C_FIELD(arg0, u8 *, 0x3C) = 0U;
        var_r4 = arg0 + 0x3C;
    } else {
        sub_08004020(M2C_FIELD(arg0, s32 *, 0x34));
        var_r4 = arg0 + 0x3C;
        if ((sub_08052140(arg0 + 0xC, 0x800) << 0x18) != 0) {
            sub_0800781C(0x5F, 1);
            M2C_FIELD(arg0, u8 *, 0x3C) = temp_r5;
            sub_08003220(0x08170D54);
        }
    }
    return *var_r4;
}
