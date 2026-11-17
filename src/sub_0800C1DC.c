
u16 sub_0800C130(s32 *arg0) {
    s32 x = *arg0;
    s32 d = *(s32 *)0x03002680;
    x = x + 0xFFFFF968 - d;
    return (u16)((x >> 3) << 9);
}

void sub_0800B9C4(void *a);
void sub_0800C17C(u8 *obj) {
    *(vu32 *)0x03002680;
    if (*(u16 *)(obj + 0x10) & 0x8000) sub_0800B9C4(obj);
}

extern s32 sub_08063D90(void *, void *, s32, s32);
s32 sub_0800C1DC(s32 arg0, u8 *arg1) {
    s32 v = *(s32 *)(arg1 + 0x7A4);
    if (v != 0) sub_08063D90(arg1 + 0x698, arg1 + 0x12, v, 8);
    return 1;
}
