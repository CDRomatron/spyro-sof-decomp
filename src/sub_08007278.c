
extern u8 D_03001650[];

u8 sub_08007278(u32 arg0) {
    return *(u8 *)(0x081721BB + (u8)arg0);
}

u8 sub_08007288(u32 arg0) {
    return *(u8 *)((D_03001650 + 0x3F2) + (u8)arg0);
}

u16 sub_080072A0(u32 arg0) {
    return *(u16 *)(0x08172170 + (((u32)arg0 << 24) >> 23));
}

u8 sub_080072FC(void);

s32 sub_08007240(s32 *arg0, s32 *arg1) {
    u8 index = sub_080072FC();
    if (index <= 0x10) {
        s32 base = 0x03001682;
        s32 offset = index * 30;
        *arg0 = offset + base;
        *arg1 = offset + (base + 480);
        return 1;
    }
    return 0;
}
