
extern void sub_0800F538(void);
extern void sub_080534A0(s32);
extern void sub_080043A4(s32);
extern s32 sub_08004508(s32);
extern void sub_08002BE0(void *, s32);
extern vu8 D_03001600[];

s32 sub_08015C78(u16 arg0) {
    if (arg0 > 2) return 1;
    if (arg0 < 1) return 1;
    sub_0800F538();
    sub_080534A0(3);
    return 1;
}

void sub_08015C54(u16 arg0, u8 *arg1) {
    if (arg0 == 4) {
        arg1[0x51] = 0;
        D_03001600[0x2E] &= 0;
    }
}

void sub_08015EC8(u8 *arg0) {
    u32 i;
    u8 *entry;
    i = 0;
    if (i < arg0[0x1B4]) {
        entry = arg0 + 0x68;
        do {
            if (entry[9] == 0) {
                sub_080043A4(*(s32 *)(entry + 0));
                sub_080043A4(*(s32 *)(entry + 4));
                entry[9] = 1;
            }
            entry += 0x50;
            i++;
        } while (i < arg0[0x1B4]);
    }
    sub_08002BE0(arg0, 0x1B8);
}

typedef struct {
    u8 pad[0x44];
    s32 unk44;
    s32 unk48;
    u8 pad2[1];
    u8 unk4D;
} BigStruct;

s32 sub_08015F94(s32 arg0, BigStruct *arg1, s32 arg2) {
    if (arg2 == 8) {
        if (sub_08004508(arg0) == 0x5F0001 || sub_08004508(arg0) == 0x780004) {
            sub_080043A4(arg1->unk44);
            sub_080043A4(arg1->unk48);
            arg1->unk4D = 1;
        }
    }
    return 1;
}
