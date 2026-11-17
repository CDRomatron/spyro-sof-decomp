/* identical to sub_08060BC4 in SPYRO 3-U (matched), with its names changed by decompdecomp */
typedef enum { CLASS_SNAN, CLASS_QNAN, CLASS_ZERO, CLASS_NUMBER, CLASS_INFINITY } fp_class_type;
typedef struct { fp_class_type class; unsigned int sign; int normal_exp; union { u32 ll; } fraction; } fp_number_type;
typedef union { float value; u32 value_raw; } FLO_union_type;
void sub_08061D34(FLO_union_type *src, fp_number_type *dst);
int sub_080621DC(fp_number_type *a, fp_number_type *b);

int sub_080622C0(float arg_a, float arg_b)
{
    fp_number_type a;
    fp_number_type b;
    FLO_union_type au, bu;

    au.value = arg_a;
    bu.value = arg_b;
    sub_08061D34(&au, &a);
    sub_08061D34(&bu, &b);
    return sub_080621DC(&a, &b);
}

void _call_via_r0(void) {}

struct FlashInfo { u32 f0; u16 sectorCount; };
extern struct FlashInfo *D_03003E60;
u16 sub_08064054(u16 sectorNum, u16 *src);
void sub_080609E0(u16 sectorNum, u16 *dst);

u16 sub_08064130(u16 sectorNum, u16 *src)
{
    u16 result = 0;
    u16 buf[4];
    u16 *p;
    u8 i;

    if (sectorNum >= D_03003E60->sectorCount)
        return 0x80FF;
    sub_080609E0(sectorNum, buf);
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

u16 sub_08064188(u16 sectorNum, u16 *src)
{
    u8 i;
    u16 result;

    for (i = 0; i < 3; i++)
    {
        result = sub_08064054(sectorNum, src);
        if (result != 0)
            continue;
        result = sub_08064130(sectorNum, src);
        if (result == 0)
            break;
    }
    return result;
}
