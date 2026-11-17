
extern void sub_080652F8(u32 *, u32 *);
extern s32 sub_080657A0(u32 *, u32 *);

void sub_08065884(s32 arg0, s32 arg1) {
    u32 sp0[4], sp10[4];
    s32 sp20, sp24;
    sp20 = arg0;
    sp24 = arg1;
    sub_080652F8(&sp20, sp0);
    sub_080652F8(&sp24, sp10);
    sub_080657A0(sp0, sp10);
}
