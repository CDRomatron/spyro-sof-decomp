
extern void _08020B28(void);
extern s32 sub_08007874(s32);

void sub_08020AF4(void) {
    if ((u8)sub_08007874(0x68) == 0) {
        return;
    }
    _08020B28();
}

extern void sub_0800781C(s32, s32);
extern void sub_0800F550(s32, s32, s32, s32);

void sub_08020B00(void *arg) {
    if ((u8)sub_08007874(0x68) == 0) {
        sub_0800781C(0x68, 1);
        sub_0800F550(0xE6, 0x08020DED, arg, 0);
    } else {
        sub_0800F550(0xE7, 0x08020DED, arg, 0);
    }
}
