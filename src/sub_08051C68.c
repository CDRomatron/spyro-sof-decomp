/* identical to sub_0804A180 in SPYRO 3-U (matched), with its names changed by decompdecomp */
#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
s32 sub_08051C68(s32 arg0, s32 arg1, s32 arg2)
{
  int new_var2;
  int new_var;
  new_var2 = 0xFFF & arg1;
  if (((s32) (arg2 & 0xFFF)) > ((s32) new_var2))
  {
    new_var = 0xF;
    if ((((u32) (0xFF0000 & arg0)) >> 0x10) != 8)
    {
      return (0xF & arg0) << 0xC;
    }
    goto block_5;
  }
  if ((((u32) (0xFF0000 & arg0)) >> 0x10) != 9)
  {
    return (0xF0 & arg0) << 8;
  }
  block_5:
  return 0x20000;

}

