
u16 sub_0800C130(s32 *arg0) {
    s32 a = *arg0 + 0xFFFFF968;
    s32 d = *(s32 *)0x03002680;
    return (u16)(((a - d) >> 3) << 9);
}
