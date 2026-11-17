/* identical to sub_08025104 (matched), with its names changed by decompdecomp */

extern s32 sub_08004478(s32, s32);
extern s32 sub_08004520(s32);
extern s32 sub_08050228(s32, void *, s32);
extern s32 sub_0805209C(void *, s32);

void sub_0803DBE0(u8 *arg0) {
    void *p = arg0 + 0xC;
    s32 t;
    sub_08050228(*(s32 *)(arg0 + 0x78), p, *(s32 *)(arg0 + 0x84));
    t = *(s32 *)(arg0 + 0x7C);
    sub_08004478(t, sub_08004520(*(s32 *)(arg0 + 0x78)));
    sub_0805209C(arg0 + 0x64, *(s32 *)(arg0 + 0x84));
}
