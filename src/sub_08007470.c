
extern u8 D_03001A42[];
u8 sub_08007470(void) {
    u8 sum = 0;
    u32 i;
    u8 b;
    for (i = 0; i <= 0x18; i++) {
        b = D_03001A42[(u8)i];
        sum = (u8)(b + sum);
    }
    return sum;
}

typedef struct { u32 f0; u8 f4, f5, f6, f7; } E;
extern E D_03001C90[];
s32 sub_08007218(s32 arg0, s32 *out) {
    s32 ret = 0;
    E *p = &D_03001C90[(u8)arg0];
    if ((p->f6 << 31) != 0) {
        *out = (s32)p->f0;
        ret = 1;
    }
    return ret;
}
