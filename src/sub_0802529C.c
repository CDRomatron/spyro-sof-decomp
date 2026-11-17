
extern s32 sub_08004478(s32, s32);
extern s32 sub_08004520(s32);
extern s32 sub_08050228(s32, void *, s32);
extern s32 sub_0805209C(void *, s32);

void sub_08025104(u8 *arg0) {
    void *p = arg0 + 0xC;
    s32 *q = (s32 *)(arg0 + 0x84);
    s32 t;
    sub_08050228(*(s32 *)(arg0 + 0x78), p, *q);
    t = *(s32 *)(arg0 + 0x7C);
    sub_08004478(t, sub_08004520(*(s32 *)(arg0 + 0x78)));
    sub_0805209C(arg0 + 0x64, *q);
}

extern s32 sub_08004020(s32);
extern void sub_080528D4(void *, s32, s32, s32);
extern void _call_via_r1_080641CC(void *, void *);

u8 sub_080250C2(u8 *arg0) {
    u8 *p = arg0;
    u8 *r4 = arg0 + 0x24;
    u32 fp;
    sub_08004020(*(s32 *)(arg0 + 0x78));
    sub_080528D4(arg0, *(s32 *)(arg0 + 0x24) + *(s32 *)(arg0 + 0x30), *(s32 *)(r4 + 4) + *(s32 *)(arg0 + 0x34), *(s32 *)(r4 + 8));
    fp = *(u32 *)(arg0 + 0x80);
    if (fp != 0) _call_via_r1_080641CC(arg0, (void *)fp);
    return p[0x96];
}

extern s32 sub_08002BE0(void *, s32);
extern s32 sub_080043A4(s32);

void sub_08025094(u8 *arg0) {
    void *p = arg0 + 0x88;
    u8 *q = arg0 + 0x8D;
    sub_080043A4(*(s32 *)(arg0 + 0x78));
    sub_080043A4(*(s32 *)(arg0 + 0x7C));
    sub_08002BE0(*(void **)p, *q);
    sub_08002BE0(arg0, 0x98);
}

u8 sub_0802529C(u8 *arg0) {
    u8 *p = arg0;
    u8 *r4 = arg0 + 0x24;
    u32 fp;
    sub_08004020(*(s32 *)(arg0 + 0x68));
    sub_080528D4(arg0, *(s32 *)(arg0 + 0x24), *(s32 *)(r4 + 4), *(s32 *)(r4 + 8));
    fp = *(u32 *)(arg0 + 0x70);
    if (fp != 0) _call_via_r1_080641CC(arg0, (void *)fp);
    return p[0x77];
}
