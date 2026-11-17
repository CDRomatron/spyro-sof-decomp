
extern s32 sub_0800897C(void);
extern void sub_0800FDB4(void *, s32, s32 *);
extern void sub_080528D4(void *, s32, s32, s32);

void sub_0802FE78(u8 *arg0) {
    u8 *r4p = arg0 + 0x24;
    s32 sp0, sp4, sp8;
    s32 v = *(s32 *)(arg0 + 0x4C);
    if (v != 0) {
        sub_080528D4(v, *(s32 *)(arg0 + 0x24), *(s32 *)(r4p + 4), *(s32 *)(r4p + 8));
        sp0 = (sub_0800897C() & 0x7F) - 0x40;
        sp4 = (sub_0800897C() & 0x7F) - 0x40;
        sp8 = (sub_0800897C() & 0x3FF) + 0x600;
        sub_0800FDB4(arg0, *(s32 *)(arg0 + 0x4C), &sp0);
    }
}

extern s32 sub_08004478(s32, s32);
extern s32 sub_08004520(s32);
extern s32 sub_0800D9EC(s32, s32);
extern s32 sub_08050228(s32, void *, s32);
extern s32 sub_0805209C(void *, s32);

typedef struct { s32 f0, f4, f8; } S3;
void sub_0802FE14(u8 *arg0) {
    S3 s;
    s = *(S3 *)(arg0 + 0xC);
    if (arg0[0xA8] != 2) {
        sub_0800D9EC((s32)(arg0 + 0x5C), (s32)(arg0 + 0x50));
        s.f8 += *(s32 *)(arg0 + 0x58);
    }
    sub_08050228(*(s32 *)(arg0 + 0x44), &s, *(s32 *)(arg0 + 0x3C));
    {
        s32 v = *(s32 *)(arg0 + 0x94);
        sub_08004478(v, sub_08004520(*(s32 *)(arg0 + 0x44)));
    }
    sub_0805209C(arg0 + 0x84, *(s32 *)(arg0 + 0x3C));
}

u8 sub_0802FDF8(u8 *arg6) {
    *(s32 *)(arg6 + 0x9C) += 0x100;
    return arg6[0xAB];
}

extern s32 sub_08004020(s32);
extern void sub_080641CC(void *, s32);
u8 sub_0802FDCC(u8 *arg0) {
    u8 *r4 = arg0 + 0x24;
    sub_08004020(*(s32 *)(arg0 + 0x44));
    sub_080528D4(arg0, *(s32 *)(arg0 + 0x24), *(s32 *)(r4 + 4), *(s32 *)(r4 + 8));
    {
        s32 flag = *(s32 *)(arg0 + 0x98);
        if (flag != 0) sub_080641CC(arg0, flag);
    }
    return arg0[0xAB];
}
