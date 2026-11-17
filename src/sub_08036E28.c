
extern s32 sub_08004020(s32);
extern void sub_080528D4(void *, s32, s32, s32);
extern void sub_080641CC(void *, s32);
extern void sub_08003C58(s32, s32);
extern s32 sub_08004508(void);
extern s32 sub_080502E8(void *);
extern void sub_08052880(s32, s32, s32, s32);
extern s32 sub_0800D9EC(s32, s32);
extern void sub_080367F8(s32, s32);

u8 sub_08036E28(u8 *arg0) {
    u8 *p = arg0;
    u8 *r4 = arg0 + 0x24;
    sub_08004020(*(s32 *)(arg0 + 0x68));
    sub_080528D4(arg0, *(s32 *)(arg0 + 0x24), *(s32 *)(r4 + 4), *(s32 *)(r4 + 8));
    {
        s32 flag = *(s32 *)(arg0 + 0x70);
        if (flag != 0) sub_080641CC(arg0, flag);
    }
    return p[0x75];
}

s32 sub_08036E8C(s32 arg0, void *arg1, s32 arg2) {
    s32 temp;
    if (arg2 == 8) {
        temp = sub_08004508();
        switch (temp) {
        case 0x230001:
            *(s8 *)((u8 *)arg1 + 0x75) = 0;
            break;
        case 0x230002:
            sub_08003C58(arg0, 0x230000);
            break;
        }
    }
    return 1;
}

s32 sub_08036C8C(s32 arg0, s32 arg1, u8 *arg2) {
    s32 a = *(s32 *)(arg2 + 0);
    s32 b = *(s32 *)(arg2 + 4);
    sub_08052880(a, b, sub_080502E8(arg2), *(s32 *)(arg2 + 8));
    return 0;
}

void sub_08036C68(u8 *arg0) {
    if (sub_0800D9EC((s32)(arg0 + 0x60), (s32)(arg0 + 0x24)) == 3) {
        sub_080367F8((s32)arg0, 3);
    }
}
