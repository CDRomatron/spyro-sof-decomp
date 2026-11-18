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
void *sub_08002B34(s32, s32);
M2C_UNK sub_08014DF0(void *, void *);
M2C_UNK sub_080528D4(void *, s32, s32, s32);
M2C_UNK sub_08065CF0(void *, s32, s32);
void *sub_08014EA0(void *arg2)
{
  u16 *new_var;
  unsigned int new_var2;
  u32 var_r6;
  void *temp_r0;
  void *var_r4;
  if (1)
  {
    temp_r0 = sub_08002B34(0x154, 1);
    sub_08065CF0(temp_r0, 0, 0x154);
    *((s32 *) (((s8 *) temp_r0) + 8)) = 0x08176B00;
    new_var = (u16 *) (((s8 *) temp_r0) + 0x22);
    new_var2 = 1 | (*new_var);
    *((u16 *) (((s8 *) temp_r0) + 0x22)) = (u16) new_var2;
    *((u8 *) (((s8 *) temp_r0) + 0x150)) = 5U;
  }
  var_r6 = 0;
  var_r4 = temp_r0 + 0x24;
  do
  {
    sub_08014DF0(var_r4, arg2);
    var_r4 += 0x3C;
    var_r6 += 1;
  }
  while (var_r6 < ((u32) (*((u8 *) (((s8 *) temp_r0) + 0x150)))));
  *((s8 *) (((s8 *) temp_r0) + 0x151)) = 1;
  sub_080528D4(temp_r0, *((s32 *) (((s8 *) arg2) - -0)), *((s32 *) (((s8 *) arg2) + 4)), *((s32 *) (((s8 *) arg2) + 8)));
  return temp_r0;
}

