/* identical to sub_0804A1C4 in SPYRO 3-U (matched), with its names changed by decompdecomp */
s32 sub_08051CAC(s32 arg0, s32 arg1, s32 arg2)
{
    s32 m = 0xFFF;
    arg2 &= m;
    m &= ~arg1;
    if (m >= arg2) {
        if ((((u32)(0xFF0000 & arg0)) >> 0x10) != 6)
            return (0xF & arg0) << 0xC;
        goto block_5;
    }
    if ((((u32)(0xFF0000 & arg0)) >> 0x10) != 7)
        return (0xF0 & arg0) << 8;
block_5:
    return 0x20000;
}
