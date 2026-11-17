/* identical to m4aMPlayStop in SPYRO 3-U (matched), with its names changed by decompdecomp */
int sub_080600EC(int a, u8 *p, int c) { *p = a | c; return 1; }
void sub_08060606(void) { }

struct MPTrack { u8 pad[0x40]; u8 *cmdPtr; u8 pad2[0x0C]; };
struct MPInfo { u32 f0; u32 status; u8 trackCount; u8 pad[0x23]; struct MPTrack *tracks; u32 pad30; u32 ident; };
void sub_08062524(struct MPInfo *, struct MPTrack *);

void sub_08063120(struct MPInfo *mplay)
{
    s32 i;
    struct MPTrack *track;

    if (mplay->ident != 0x68736D53)
        return;
    mplay->ident++;
    mplay->status |= 0x80000000;
    i = mplay->trackCount;
    track = mplay->tracks;
    while (i > 0)
    {
        sub_08062524(mplay, track);
        i--;
        track++;
    }
    mplay->ident = 0x68736D53;
}

extern void (*const D_080634E0[])(struct MPInfo *, struct MPTrack *);

void ply_xcmd(struct MPInfo *mplay, struct MPTrack *track)
{
    u32 n = *track->cmdPtr;
    track->cmdPtr++;
    D_080634E0[n](mplay, track);
}
