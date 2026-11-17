
struct S7334 { u8 pad[0x621]; u8 val; };
extern struct S7334 D_03001650;
u8 sub_08007334(void) {
    return D_03001650.val;
}

extern u8 sub_08007470(void);
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
