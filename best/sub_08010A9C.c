
extern void sub_080528AC(void *);
extern s32 sub_080529D4(void);
extern void sub_080522C8(s32);
extern s8 sub_0805275C(s32, void *);

void sub_08010A9C(u8 *arg0, s32 arg1) {
    u8 buf[0x18];
    s32 r6;
    if (arg1 == 0) {
        sub_080528AC(arg0);
        r6 = sub_080529D4();
        sub_080522C8(*(s32 *)(arg0 + 0x34));
        if (sub_0805275C(0xEA, buf + 0xC) != 0) {
            if (sub_0805275C(0xEB, buf) != 0) {
                (void)r6;
            }
        }
    }
}
