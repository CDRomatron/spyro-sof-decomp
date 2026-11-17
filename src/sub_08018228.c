
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern s32 sub_08050228(s32, void *, s32);
extern s32 sub_08004478(s32, s32);
extern s32 sub_08004520(s32);
extern s32 sub_0805209C(void *, s32);
extern s32 sub_08004020(s32);
extern s32 sub_0800FA98(s32, s32, s32, s32, s32, s32);
extern s32 sub_08052140(void *, s32);
extern s32 sub_080641CC(void *);
extern s32 sub_08003220(s32);
extern u8 sub_08007598();
extern s32 sub_0800781C(s32, s32);

void sub_08018228(void *arg0) {
    void *p;
    p = arg0 + 0xC;
    sub_08050228(M2C_FIELD(arg0, s32 *, 0x34), p, 0);
    {
        s32 temp_r5 = M2C_FIELD(arg0, s32 *, 0x38);
        sub_08004478(temp_r5, sub_08004520(M2C_FIELD(arg0, s32 *, 0x34)));
    }
    sub_0805209C(arg0 + 0x24, 0);
}

s32 sub_08017C84(s32 arg0, u8 *arg1, u16 arg2) {
    s32 ret = 0;
    if (arg2 == 9) {
        ret = 1;
        arg1[0xAA] = 1;
    }
    return ret;
}

s32 sub_08018060(void *arg0) {
    void *temp_r5;
    temp_r5 = arg0 + 0xC;
    sub_08004020(M2C_FIELD(arg0, s32 *, 0x38));
    if (*(s32 **)((s8 *)arg0 + 0x40)) {
        sub_080641CC(arg0);
    }
    if ((sub_08052140(temp_r5, 0x800) << 0x18) != 0) {
        sub_0800FA98(6, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(temp_r5, s32 *, 4), M2C_FIELD(temp_r5, s32 *, 8), 0, 0x800);
    }
    return 1;
}

u8 sub_080181D4(void *arg0) {
    u8 temp;
    temp = sub_08007598();
    if (temp != 0) {
        *(u8 *)((s8 *)arg0 + 0x3C) = 0U;
        arg0 = (s8 *)arg0 + 0x3C;
    } else {
        s32 v;
        sub_08004020(*(s32 *)((s8 *)arg0 + 0x34));
        v = sub_08052140((s8 *)arg0 + 0xC, 0x800) << 0x18;
        arg0 = (s8 *)arg0 + 0x3C;
        if (v != 0) {
            sub_0800781C(0x5F, 1);
            *(u8 *)arg0 = temp;
            sub_08003220(0x08170D54);
        }
    }
    return *(u8 *)arg0;
}
