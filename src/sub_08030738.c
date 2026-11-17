
s32 sub_08030738(s32 a, s32 b, s32 c) {
    s32 v = (u16)c;
    s32 w = v;
    s32 r;
    if (v == 6) goto yes;
    if (v > 6) goto check7;
    if (v == 5) goto yes;
    goto no;
check7:
    if (w != 7) goto no;
yes:
    r = 1;
    goto end;
no:
    r = 0;
end:
    return r;
}

extern u8 sub_0805399C(void);
extern s32 sub_080529E8(void *, s32);
extern void sub_0803050C(void *);
void sub_0803075C(u8 *arg0) {
    if ((u8)sub_0805399C() == 3) {
        if ((sub_080529E8(arg0 + 0x24, 0x3000) << 0x18) != 0) {
            *(s8 *)(arg0 + 0xA3) = 2;
            *(u16 *)(arg0 + 0x22) |= 1;
        }
        sub_0803050C(arg0);
    }
}
