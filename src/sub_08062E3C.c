/* identical to sub_0805C2D4 in SPYRO-U (matched), with its names changed by decompdecomp */

void sub_08062F28(void);
void sub_08062D98(u32);

void sub_08062E3C(u32 a) {
    u8 *p = *(u8 **)0x03007FF0;
    u32 t;
    u8 *q;
    if (*(u32 *)p == 0x68736D53) {
        *(u32 *)p = *(u32 *)p + 1;
        t = a & 0xFF;
        if (t != 0) {
            p[5] = t & 0x7F;
        }
        t = a & 0xF00;
        if (t != 0) {
            p[6] = t >> 8;
            t = 12;
            q = p + 0x50;
            do {
                *q = 0;
                t--;
                q += 0x40;
            } while (t != 0);
        }
        t = a & 0xF000;
        if (t != 0) {
            p[7] = t >> 12;
        }
        t = a & 0xB00000;
        if (t != 0) {
            t = (t & 0x300000) >> 14;
            *(u8 *)0x04000089 = (*(u8 *)0x04000089 & 0x3F) | t;
        }
        t = a & 0xF0000;
        if (t != 0) {
            sub_08062F28();
            sub_08062D98(t);
        }
        *(u32 *)p = 0x68736D53;
    }
}
