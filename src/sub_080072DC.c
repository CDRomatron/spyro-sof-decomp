
extern u8 D_03001650[];

u8 sub_080072DC(u32 arg0) {
    return *(u8 *)(0x08172219 + (u8)arg0);
}

u8 sub_080072EC(u32 arg0) {
    return *(u8 *)(0x08172200 + (u8)arg0);
}

u8 sub_080072C0(u8 arg0) {
    u8 temp_r1;
    u8 var_r0;
    temp_r1 = arg0;
    var_r0 = 0x19;
    if (temp_r1 != 0x2B) {
        var_r0 = *(u8 *)(0x081721D4 + temp_r1);
    }
    return var_r0;
}

u8 sub_080072FC(void) {
    u8 temp_r0;
    u8 var_r0;
    temp_r0 = D_03001650[0x620];
    var_r0 = 0x19;
    if (temp_r0 != 0x2B) {
        var_r0 = *(u8 *)(0x081721D4 + temp_r0);
    }
    return var_r0;
}
