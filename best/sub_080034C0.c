/* identical to sub_08004050 in SPYRO 3-U (matched), with its names changed by decompdecomp */
struct Snd860 { u8 pad[0x10]; s32 f10; s32 f14; s32 f18; u8 pad1C[0x18]; u8 f34; };
extern struct Snd860 D_03000860;
struct Ent1014 { s32 f0; s32 f4; s32 f8; };
extern struct Ent1014 D_08071014[];
void sub_08063120(s32 a);
void *Heap_Alloc(s32 size, s32 heap);
struct Blk4990 { s32 f0; s32 f4; s32 f8; s32 fC; u8 f10; u8 f11; u8 f12; u8 f13; u16 f14; u16 f16; u8 pad[4]; };

void sub_080034C0(u8 i);

void sub_0800402C(void)
{
    sub_080034C0(0);
    D_03000860.f10 = 0;
    D_03000860.f34 = 0;
    D_03000860.f14 = D_03000860.f18;
}

void sub_080034C0(u8 i)
{
    if (i != 0xFF)
        sub_08063120(D_08071014[i].f0);
}

struct Blk4990 *sub_08004990(void)
{
    struct Blk4990 *b = Heap_Alloc(0x1C, 1);
    b->f0 = 0;
    b->f4 = 0;
    b->fC = 0;
    b->f10 = 0xFF;
    b->f11 = 0;
    b->f16 = 0;
    b->f12 = 0;
    b->f13 = 0;
    b->f14 = 0;
    return b;
}

void sub_08004014(void)
{
}
