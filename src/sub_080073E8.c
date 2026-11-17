
struct S73E8 { u8 pad[0x608]; u16 val; };
extern struct S73E8 D_03001650;
u16 sub_080073E8(void) {
    return D_03001650.val;
}

u16 sub_08007402(s32 a, s32 b, u8 *p) {
    u16 *q = (u16 *)(p + 0x632);
    u16 old = *q;
    *q += 1;
    return old;
}

void sub_08007400(void) { }
