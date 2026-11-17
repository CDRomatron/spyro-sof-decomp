
extern void *sub_08002B34(s32, s32);
extern void sub_08003C58(s32, s32);
extern s32 sub_08004370(void);
extern void sub_0800D9D0(void *, s32);
extern void sub_080528D4(void *, s32, s32, s32);
extern void sub_08065CF0(void *, s32, s32);

void *sub_08028928(void) {
    u8 *p;
    s32 v;
    p = sub_08002B34(0x88, 1);
    sub_08065CF0(p, 0, 0x88);
    sub_0800D9D0(p + 0x5C, 0);
    v = sub_08004370();
    *(s32 *)(p + 0x58) = v;
    sub_08003C58(v, 0x690000);
    *(u8 *)(p + 0x87) = 0;
    *(u8 *)((p + 0x87) - 3) = 0;
    *(u16 *)(p + 0x22) = (u16)(*(u16 *)(p + 0x22) | 1);
    sub_080528D4(p, 0, 0, 0);
    return p;
}

extern void sub_08050228(s32, void *, s32);

void sub_080288A4(u8 *arg0) {
    s32 a = *(s32 *)(arg0 + 0x2C);
    u8 *p = arg0 + 0xC;
    sub_08050228(a, p, 0);
    sub_08050228(*(s32 *)(arg0 + 0x28), p, 0);
}
