
struct S7324 { u8 pad[0x620]; u8 val; };
extern struct S7324 D_03001650;
u8 sub_08007324(void) {
    return D_03001650.val;
}

extern u8 D_03001A42[];
u8 sub_08007470(void) {
    u8 var_r1, var_r2;
    var_r2 = 0;
    var_r1 = 0;
    do {
        var_r2 += *(D_03001A42 + var_r1);
        var_r1 += 1;
    } while ((u32)var_r1 <= 0x18U);
    return var_r2;
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

extern u8 sub_08007470_r(void);
extern u8 sub_08007874(u8);
u8 sub_08007354(u8 arg0) {
    u8 idx = arg0;
    u8 ret = 0;
    switch (idx) {
    case 21: ret = sub_08007874(0x20); break;
    case 22: ret = sub_08007874(0x21); break;
    case 23: ret = sub_08007874(0x22); break;
    case 24: ret = sub_08007874(0x23); break;
    default:
        if (sub_08007470() >= *(u8 *)(0x081721A2 + idx)) ret = 1;
        break;
    }
    return ret;
}
