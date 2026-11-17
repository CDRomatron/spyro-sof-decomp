
extern s32 sub_080522C8(s32);
extern s32 sub_080528AC(s32);

s32 sub_0803E654(s32 a, s32 b, u32 c, s32 d) {
    u16 v = (u16)c;
    a = 0;
    if (v == 9) {
        if (d != 1) {
            if (d == 2) sub_080528AC(b);
        } else {
            sub_080522C8(b);
        }
        a = 1;
    }
    return a;
}
