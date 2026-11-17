
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern s32 sub_08050228(s32, void *, s32);
extern s32 sub_08004478(s32, s32);
extern s32 sub_08004520(s32);
extern s32 sub_0805209C(void *, s32);
extern s32 sub_0800F538();
extern s32 sub_080534A0(s32);

s32 sub_08017C84(s32 arg0, u8 *arg1, u16 arg2) {
    s32 ret = 0;
    if (arg2 == 9) {
        arg1[0xAA] = ret = 1;
    }
    return ret;
}

void sub_08017C40(void *arg0) {
    void *p, *p5, *p6;
    s32 temp_r4;
    if (M2C_FIELD(arg0, u8 *, 0xAE) != 0) {
        p = arg0 + 0xC;
        p5 = arg0 + 0x84;
        p6 = arg0 + 0x94;
        sub_08050228(*(s32 *)p5, p, *(s32 *)p6);
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x88);
        sub_08004478(temp_r4, sub_08004520(*(s32 *)p5));
        sub_0805209C(arg0 + 0x70, *(s32 *)p6);
    }
}

void sub_080184C8(void *arg0) {
    void *p;
    p = arg0 + 0xC;
    sub_08050228(M2C_FIELD(arg0, s32 *, 0x34), p, M2C_FIELD(arg0, s32 *, 0x3C));
    {
        s32 temp_r5 = M2C_FIELD(arg0, s32 *, 0x38);
        sub_08004478(temp_r5, sub_08004520(M2C_FIELD(arg0, s32 *, 0x34)));
    }
    sub_0805209C(arg0 + 0x24, 0);
}

s32 sub_080184F8(u16 arg0, u8 arg1, void *arg2) {
    u16 temp_r0;
    temp_r0 = arg0;
    switch (temp_r0) {
    case 0:
        if (arg1 == 0) {
            M2C_FIELD(arg2, s8 *, 4) = 1;
            M2C_FIELD(arg2, s8 *, 5) = 1;
        }
        break;
    case 2:
        M2C_FIELD(arg2, s8 *, 5) = 1;
        /* fallthrough */
    case 1:
        sub_080534A0(3);
        sub_0800F538();
        break;
    }
    return 1;
}
