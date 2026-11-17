/* identical to sub_08015C78 (matched), with its names changed by decompdecomp */

extern void sub_0800F538(void);
extern void sub_080534A0(s32);

s32 sub_08028D04(u16 arg0) {
    switch (arg0) {
    case 1:
    case 2:
        sub_0800F538();
        sub_080534A0(3);
        break;
    }
    return 1;
}

typedef struct {
    u8 pad[0x2E];
    u8 field : 8;
} BitStruct;
extern volatile BitStruct D_03001600;

void sub_08015C54(u16 arg0, void *arg1) {
    if (arg0 == 4) {
        *(s8 *)((s8 *)(arg1) + (0x51)) = 0;
        D_03001600.field = 0;
    }
}
