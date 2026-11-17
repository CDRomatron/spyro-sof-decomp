
struct S741C { u8 pad[0x60A]; u16 val; };
extern struct S741C D_03001650;
u16 sub_0800741C(void) {
    return D_03001650.val;
}

typedef struct { u8 pad1[0x40B]; u8 f40B; u8 pad2[0x214]; u8 f620; } G7430;
extern G7430 D_03001650_g;
s32 sub_08007430(s32 arg0) {
    u32 t = (u32)arg0 << 16;
    u16 y = *(u16 *)(0x0817211A + D_03001650_g.f620 * 2);
    s32 z = *(u8 *)(&D_03001650_g.f40B + y + (t >> 19));
    s32 shift = (t & 0x70000) >> 16;
    return (z >> shift) & 1;
}

struct S73AC { u8 pad[0x59F]; u8 val; };
extern struct S73AC D_03001650_s;
void sub_080073AC(s32 arg0) {
    u32 t = (u32)arg0 << 24;
    volatile u8 *p = &D_03001650_s.val + (t >> 27);
    u8 v0 = *p;
    u8 v1 = *p;
    s32 bit = (t & 0x07000000) >> 24;
    *p = (u8)((1 << bit) | v0);
    (void)v1;
}

u16 sub_08007402(s32 a, s32 b, u8 *p) {
    volatile u16 *q;
    u16 v0, v2;
    s32 v1;
    q = (volatile u16 *)(p + 0x632);
    v0 = *q;
    v1 = *q;
    v1 = v1 + 1;
    v2 = *q;
    *q = (u16)v1;
    return v0;
}
