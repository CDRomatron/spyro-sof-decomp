
extern s32 sub_0800897C(void);
extern void sub_0800FDB4(void *, s32, s32 *);
extern void sub_080528D4(void *, s32, s32, s32);

void sub_0802FE78(u8 *arg0) {
    u8 *p = arg0;
    s32 arr[3];
    s32 v = *(s32 *)(p + 0x4C);
    if (v != 0) {
        u8 *q = p + 0x24;
        sub_080528D4(v, *(s32 *)(p + 0x24), *(s32 *)(q + 4), *(s32 *)(q + 8));
        arr[0] = (sub_0800897C() & 0x7F) - 0x40;
        arr[1] = (sub_0800897C() & 0x7F) - 0x40;
        arr[2] = (sub_0800897C() & 0x3FF) + 0x600;
        sub_0800FDB4(p, *(s32 *)(p + 0x4C), arr);
    }
}

extern s32 sub_08004478(s32, s32);
extern s32 sub_08004520(s32);
extern s32 sub_0800D9EC(s32, s32);
extern s32 sub_08050228(s32, void *, s32);
extern s32 sub_0805209C(void *, s32);

typedef struct { s32 f0, f4, f8; } S3;
void sub_0802FE14(u8 *arg0) {
    u8 *p = arg0;
    S3 s;
    s = *(S3 *)(p + 0xC);
    if (arg0[0xA8] != 2) {
        sub_0800D9EC((s32)(p + 0x5C), (s32)(p + 0x50));
        s.f8 += *(s32 *)(p + 0x58);
    }
    sub_08050228(*(s32 *)(arg0 + 0x44), &s, *(s32 *)(arg0 + 0x3C));
    {
        s32 v = *(s32 *)(arg0 + 0x94);
        sub_08004478(v, sub_08004520(*(s32 *)(arg0 + 0x44)));
    }
    sub_0805209C(arg0 + 0x84, *(s32 *)(arg0 + 0x3C));
}
