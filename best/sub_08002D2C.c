/* identical to sub_080034D4 in SPYRO 3 (matched), with its names changed by decompdecomp */
struct Range { u32 start; u32 end; u8 pad[8]; } __attribute__((packed));
extern struct Range D_08062A24[];

s32 sub_08002D2C(u32 addr)
{
    s32 found = 0;
    s32 i;

    for (i = 0; i <= 1; i++) {
        if (addr >= D_08062A24[i].start && addr < D_08062A24[i].end) {
            found = 1;
            break;
        }
    }
    return found;
}
