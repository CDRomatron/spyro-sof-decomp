
struct FlashInfo { u32 f0; u16 sectorCount; };
extern struct FlashInfo *D_030033D0;
void sub_08063FA4(u16 sectorNum, u16 *dst);

u16 sub_08064130(u16 sectorNum, u16 *src)
{
    u16 result = 0;
    u16 buf[4];
    u16 *p;
    u8 i;

    if (sectorNum >= D_030033D0->sectorCount)
        return 0x80FF;
    sub_08063FA4(sectorNum, buf);
    p = buf;
    for (i = 0; i < 4; i++)
    {
        if (*src++ != *p++)
        {
            result = 0x8000;
            break;
        }
    }
    return result;
}

extern vu8 D_03000CF0;
extern vu16 *D_03000CF8;
extern u16 D_03000CFC;
void sub_08063EE0(void) {
    *(vu16 *)0x04000208 = 0;
    *D_03000CF8++ = 0;
    *D_03000CF8-- = 0;
    *(vu16 *)0x04000200 &= ~(8 << D_03000CF0);
    *(vu16 *)0x04000208 = D_03000CFC;
}
