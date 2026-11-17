
extern u8 D_03001C90[];
extern u8 D_03001600[];
extern u8 D_03001650[];

void sub_08007C88(u8 arg0) {
    u8 *base = D_03001C90;
    s32 a = 0;
    s32 w;
    s32 b, sh1, sh2;
    s32 m1 = 9, m2 = 5;
    w = arg0;
    if (w == 0) a = 1;
    sh1 = a << 3;
    base[0x1C] = sh1 | (base[0x1C] & -m1);
    if (D_03001600[0x2D] != 0) {
        u8 *p = D_03001650;
        b = 0;
        if (w == 0) b = 1;
        sh2 = b << 2;
        p[0x611] = sh2 | (p[0x611] & -m2);
    }
}

void sub_08007CE4(u8 arg0) {
    u8 *base = D_03001C90;
    s32 a = 0;
    s32 w;
    s32 b, sh1, sh2;
    s32 m1 = 5, m2 = 3;
    w = arg0;
    if (w == 0) a = 1;
    sh1 = a << 2;
    base[0x1C] = sh1 | (base[0x1C] & -m1);
    if (D_03001600[0x2D] != 0) {
        u8 *p = D_03001650;
        b = 0;
        if (w == 0) b = 1;
        sh2 = b << 1;
        p[0x611] = sh2 | (p[0x611] & -m2);
    }
}

void sub_08007D40(u8 arg0) {
    u8 *base = D_03001C90;
    s32 a = 0;
    s32 w;
    s32 b, sh1, sh2;
    s32 m1 = 3, m2 = 2;
    w = arg0;
    if (w == 0) a = 1;
    sh1 = a << 1;
    base[0x1C] = sh1 | (base[0x1C] & -m1);
    if (D_03001600[0x2D] != 0) {
        u8 *p = D_03001650;
        b = 0;
        if (w == 0) b = 1;
        sh2 = b;
        p[0x611] = sh2 | (p[0x611] & -m2);
    }
}

void sub_08007D9C(u8 arg0) {
    u8 *base = D_03001C90;
    s32 a = 0;
    s32 w;
    s32 b, sh1, sh2;
    s32 m1 = 0x11, m2 = 9;
    w = arg0;
    if (w == 0) a = 1;
    sh1 = a << 4;
    base[0x1C] = sh1 | (base[0x1C] & -m1);
    if (D_03001600[0x2D] != 0) {
        u8 *p = D_03001650;
        b = 0;
        if (w == 0) b = 1;
        sh2 = b << 3;
        p[0x611] = sh2 | (p[0x611] & -m2);
    }
}
