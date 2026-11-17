
extern void sub_080522C8(void *);

s32 sub_08010D6C(s32 arg0, u8 *arg1, u16 arg2, s32 arg3) {
    s32 r = 0;
    if (arg2 == 9) {
        switch (arg3) {
        case 20: {
            s32 one = 1;
            *(u16 *)(arg1 + 0x22) = *(u16 *)(arg1 + 0x22) | one;
            sub_080522C8(arg1);
            arg1[0x53] = one;
            break;
        }
        case 21:
            arg1[0x54] = 1;
            break;
        }
        r = 1;
    }
    return r;
}

extern void sub_0800F538(void);
extern void sub_08050168(void *, void (*)(void *, s32));
extern void sub_080534A0(s32);

void sub_08010A6C(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        arg0[0x47] = arg1;
        sub_08050168(arg0, sub_08010A6C);
        break;
    case 1:
        sub_0800F538();
        sub_080534A0(3);
        break;
    }
}
