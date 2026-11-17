/* identical to Random_Seed in SPYRO 3 (matched), with its names changed by decompdecomp */
extern volatile s32 D_03002674;
extern u32 *gMtNext;
extern u32 D_03001CB0[];

u32 sub_080031CC(void);

void sub_08008948(u32 seed)
{
    u32 x = seed | 1;
    u32 *p = D_03001CB0;
    s32 i;
    D_03002674 = 0;
    *p++ = x;
    for (i = 623; i != 0; i--) {
        x *= 69069;
        *p++ = x;
    }
}

u32 Random_Next(void)
{
    u32 y;

    D_03002674--;
    if (D_03002674 < 0)
        return sub_080031CC();

    y = *gMtNext++;
    y ^= y >> 11;
    y ^= (y << 7) & 0x9D2C5680;
    y ^= (y << 15) & 0xEFC60000;
    y ^= y >> 18;
    return y;
}

s32 sub_0800334C(void)
{
    sub_08008948(0x1105);
    return 1;
}

void sub_08003360(void)
{
}
