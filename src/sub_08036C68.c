
extern void sub_08003C58(s32, s32);
extern s32 sub_08004508(void);
extern s32 sub_0800D9EC(s32, s32);
extern void sub_080367F8(s32, s32);

s32 sub_08036E8C(s32 arg0, void *arg1, s32 arg2) {
    s32 temp;
    if (arg2 == 8) {
        temp = sub_08004508();
        if (temp == 0x230001) {
            *(s8 *)((u8 *)arg1 + 0x75) = 0;
        } else if (temp == 0x230002) {
            sub_08003C58(arg0, 0x230000);
        }
    }
    return 1;
}

void sub_08036C68(u8 *arg0) {
    s32 v = (s32)(arg0 + 0x24);
    if (sub_0800D9EC((s32)(arg0 + 0x60), v) == 3) {
        sub_080367F8((s32)arg0, 3);
    }
}
