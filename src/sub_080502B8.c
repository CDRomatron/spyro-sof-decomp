/* identical to sub_08048F70 in SPYRO 3 (matched), with its names changed by decompdecomp */
s32 sub_0804FDE0(s32 a, s32 lo, s32 hi);
u16 *sub_0800369C(u16 id);
void *sub_08003364(u32 size, s32 b);
void sub_080626E4(void *p, s32 v, u32 n);
void sub_08003824(u16 id);
u8 *sub_0804CFF8(s32 a);

struct S03003110 {
    u16 *data;
    u16 w;
    u16 h;
    u16 id;
    u16 pad;
    s32 f10;
    s32 f14;
};
extern struct S03003110 *D_03003110;

void sub_080502B8(s32 a, s32 lo, s32 hi)
{
    if (lo < hi) {
        s32 p = sub_0804FDE0(a, lo, hi);
        sub_080502B8(a, lo, p - 1);
        sub_080502B8(a, p + 1, hi);
    }
}

void sub_08048FA0(u16 id)
{
    u16 *d = sub_0800369C(id);
    D_03003110 = sub_08003364(0x18, 1);
    sub_080626E4(D_03003110, 0, 0x18);
    D_03003110->id = id;
    D_03003110->w = d[0];
    D_03003110->h = d[1];
    D_03003110->data = d + 2;
    D_03003110->f14 = 0x3000;
    D_03003110->f10 = 0x600;
}

void sub_08048FF8(void)
{
    sub_08003824(D_03003110->id);
    Heap_Free(D_03003110, 0x18);
}

void sub_08049018(s32 a, s32 *x, s32 *y)
{
    u8 *obj = sub_0804CFF8(a);
    u16 *d = sub_0800369C(*(u16 *)(obj + 0x14));
    *x = d[0] << 4;
    *y = d[1] << 4;
    sub_08003824(*(u16 *)(obj + 0x14));
}
