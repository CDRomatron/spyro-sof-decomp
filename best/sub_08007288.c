
struct S_7288 {
    u8 pad[0x3F2];
    u8 data[256];
};
extern struct S_7288 D_03001650;

u8 sub_08007288(u32 arg0) {
    return D_03001650.data[(u8)arg0];
}

u16 sub_080072A0(s32 arg0) {
    u32 base = 0x08172170;
    return *(u16 *)(base + (((u32)arg0 << 24) >> 23));
}

u8 sub_080072FC(void);

s32 sub_08007240(s32 *arg0, s32 *arg1) {
    u8 index = sub_080072FC();
    s32 ret = 0;
    u8 *base;
    s32 offset;
    if (index <= 0x10) {
        base = (u8 *)0x03001682;
        offset = index * 30;
        *arg0 = (s32)(base + offset);
        *arg1 = (s32)(base + 480 + offset);
        ret = 1;
    }
    return ret;
}
