/* identical to sub_080013B0 in SPYRO 3-U (matched), with its names changed by decompdecomp */
typedef void (*IrqFunc)(void);
void sub_08000C08(void);
extern IrqFunc D_03001A90[];
IrqFunc sub_08000B64(s32 idx, IrqFunc fn)
{
    IrqFunc *tbl = D_03001A90;
    IrqFunc *slot = tbl + idx;
    tbl = (IrqFunc *)*slot;
    if (fn == 0)
        fn = sub_08000C08;
    *slot = fn;
    return (IrqFunc)tbl;
}
