/* identical to sub_080602EC in SPYRO 3-U (matched), with its names changed by decompdecomp */
typedef struct {
    u8 flags;
    u8 pad01[0x12];
    u8 volX;
    u8 pad14[0x3C];
} MPTrack;

typedef struct {
    u32 songHeader;
    u32 status;
    u8 trackCount;
    u8 pad09[0x23];
    MPTrack *tracks;
    u32 pad30;
    u32 ident;
} MPInfo;

void sub_080638B0(MPInfo *mp, u16 trackBits, u16 volume)
{
    s32 i;
    u32 bit;
    MPTrack *t;

    if (mp->ident != 0x68736D53)
        return;
    mp->ident++;
    i = mp->trackCount;
    t = mp->tracks;
    bit = 1;
    while (i > 0) {
        if (trackBits & bit) {
            if (t->flags & 0x80) {
                t->volX = volume / 4;
                t->flags |= 3;
            }
        }
        i--;
        t++;
        bit <<= 1;
    }
    mp->ident = 0x68736D53;
}
