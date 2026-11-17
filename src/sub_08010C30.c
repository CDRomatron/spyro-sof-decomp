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
M2C_UNK sub_08004020(s32);
s32 sub_0800F2AC();
M2C_UNK sub_0800FA98(s32, s32, s32, s32, s32, s32);
M2C_UNK sub_0800FE28(void *, s32, s32);
M2C_UNK sub_08050098(void *, M2C_UNK *, void *);
s32 sub_08052140(void *, s32);
M2C_UNK sub_080528AC();
s32 sub_08052BB4(void *);
s32 sub_08052CF4(s32);
M2C_UNK sub_080534A0(s32);
M2C_UNK sub_080641CC(void *);
extern M2C_UNK sub_08010DAC;
u8 sub_08010C30(void *arg0)
{
  s32 temp_r0;
  void *temp_r6;
  temp_r6 = arg0 + 0xC;
  sub_08004020(*((s32 *) (((s8 *) arg0) + 0x40)));
  temp_r0 = *((s32 *) (((s8 *) arg0) + 0x48));
  if (temp_r0 != 0)
  {
    sub_080641CC(arg0);
  }
  if ((*((u8 *) (((s8 *) arg0) + 0x55))) != 0)
  {
    *((u8 *) (((s8 *) arg0) + 0x55)) = 0U;
    *((s32 *) (((s8 *) arg0) + 0x34)) = sub_08052CF4(0x9A);
    sub_080528AC();
  }
  if ((sub_08052140(temp_r6, 0x800) << 0x18) != 0)
  {
    sub_0800FA98(6, *((s32 *) (((s8 *) arg0) + 0xC)), *((s32 *) (((s8 *) temp_r6) + 4)), *((s32 *) (((s8 *) temp_r6) + 8)), 0, 0x800);
  }
  if (((*((u8 *) (((s8 *) arg0) + 0x53))) != 0) && ((sub_0800F2AC() << 0x18) != 0))
  {
    *((u8 *) (((s8 *) arg0) + 0x53)) = 0U;
    *((s8 *) (((s8 *) arg0) + 0x52)) = 0;
    temp_r0 = sub_08052CF4(0xD6);
    if (temp_r0 != 0)
    {
      sub_0800FE28(arg0, temp_r0, 0x16);
    }
    sub_080534A0(5);
    sub_08050098(temp_r6, &sub_08010DAC, arg0);
  }
  if (((*((u8 *) (((s8 *) arg0) + 0x54))) != 0) && ((sub_0800F2AC() << 0x18) != 0))
  {
    *((u8 *) (((s8 *) arg0) + 0x54)) = 0U;
    *((s8 *) (((s8 *) arg0) + 0x52)) = 0;
    sub_080534A0(5);
    sub_08050098(temp_r6, &sub_08010DAC, arg0);
  }
  *((s32 *) (((s8 *) arg0) + 0x4C)) = sub_08052BB4(temp_r6);
  return *((u8 *) (((s8 *) arg0) + 0x56));
}

