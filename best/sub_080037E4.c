/* identical to sub_0800668C in SPYRO 3-U (matched), with its names changed by decompdecomp */
typedef struct { vu16 v:16; } __attribute__((packed, aligned(2))) VB16;
extern VB16 D_03002510[];

void sub_080037E4(u16 v)
{
    u32 i;
    for (i = 0; i < 0x200; i++)
        D_03002510[i].v = v;
}
