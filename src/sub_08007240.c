
extern u8 D_03001682[];
u8 sub_080072FC(void);

s32 sub_08007240(s32 *arg0, s32 *arg1) {
    u8 index = sub_080072FC();
    s32 ret = 0;
    s32 offset;
    if (index <= 0x10) {
        offset = index * 30;
        *arg0 = (s32)&D_03001682[offset];
        *arg1 = (s32)&D_03001682[offset + 480];
        ret = 1;
    }
    return ret;
}
