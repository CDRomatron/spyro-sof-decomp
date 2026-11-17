
extern s32 sub_08004020(s32);
extern void sub_080641CC(void *, s32);

u8 sub_0803FAB4(u8 *arg0) {
    u8 *p = arg0;
    sub_08004020(*(s32 *)(arg0 + 0x38));
    {
        s32 flag = *(s32 *)(arg0 + 0x34);
        if (flag != 0)
            sub_080641CC(arg0, flag);
    }
    return p[0x46];
}
