
extern s32 sub_080042A4(s32, s32, s32);

typedef struct {
    s32 pad[5];
    s32 f14;
    s32 f18;
    s32 pad2[2];
    s32 f24;
} Arg;
typedef struct {
    s32 pad[0x4C/4];
    s32 f4C;
    s32 f50;
} Global;
extern Global *D_030026EC;

void sub_0805D6E4(Arg *arg0) {
    s32 v = arg0->f24;
    s32 a = arg0->f14;
    s32 b;
    if (a < 0) a += 0xFF;
    a >>= 8;
    a -= D_030026EC->f4C;
    b = arg0->f18;
    if (b < 0) b += 0xFF;
    b >>= 8;
    b -= D_030026EC->f50;
    sub_080042A4(v, a, b);
}

extern s32 sub_08064204(s32, s32);

s32 sub_0805D37C(s32 num, u32 n, s32 *out) {
    s32 pow10 = 1;
    u32 i;
    s32 j;
    s32 digit, q, rem;
    for (i = 0; i < n; i++) {
        out[i] = 0;
        pow10 = pow10 * 10;
    }
    for (j = (s32)n - 1; j != -1; j--) {
        q = sub_08064204(pow10, 10);
        rem = num - q;
        digit = 0;
        while (rem >= 0) {
            num = rem;
            digit++;
            rem -= q;
        }
        out[j] = digit;
        pow10 = q;
    }
    return 0;
}

extern void sub_08003DA8(s32, s32);
extern void sub_08004408(s32, s32);

s32 sub_0805D33C(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 == 8) {
        sub_08003DA8(arg0, 0);
        sub_08004408(arg0, 0);
    }
    return 1;
}

typedef struct { s32 x0, x1; } Rect;

s32 sub_0805DA94(Rect *a, Rect *b) {
    s32 ret;
    if (a->x0 < b->x0) ret = 1;
    else if (a->x0 > b->x1) ret = 0;
    else if (a->x1 < b->x1) ret = 3;
    else if (a->x1 <= b->x1) ret = 4;
    else ret = 2;
    return ret;
}
