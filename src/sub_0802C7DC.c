/* identical to sub_08012020 (matched), with its names changed by decompdecomp */

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern s32 sub_08050228(s32, void *, s32);
extern s32 sub_08012034(void *, s32);
extern s32 sub_08004020(s32);
extern s32 sub_0800FA98(s32, s32, s32, s32, s32, s32);
extern s32 sub_08052140(void *, s32);
extern s32 sub_080641CC(void *);

void sub_0802C7DC(void *arg0) {
    void *p;
    p = arg0 + 0xC;
    sub_08050228(M2C_FIELD(arg0, s32 *, 0x24), p, 0);
}

s32 sub_08012090(s32 arg0, void *arg1, s32 arg2) {
    if ((arg2 == 8) && (M2C_FIELD(arg1, u8 *, 0x31) == 1)) {
        sub_08012034(arg1, 2);
    }
    return 1;
}

s32 sub_08011FD4(void *arg0) {
    void *temp_r5;
    temp_r5 = arg0 + 0xC;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x24));
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        sub_080641CC(arg0);
    }
    if ((sub_08052140(temp_r5, 0x800) << 0x18) != 0) {
        sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8), 0, 0x800);
    }
    return 1;
}

s32 sub_08011DD0(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0) < (arg1 >> 1)) {
        if (M2C_FIELD(arg0, s32 *, 4) < (arg2 >> 1)) {
            return 0x2000;
        }
        return 0xE000;
    }
    if (M2C_FIELD(arg0, s32 *, 4) >= (arg2 >> 1)) {
        return 0xA000;
    }
    return 0x6000;
}
