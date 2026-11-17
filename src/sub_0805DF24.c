
typedef struct { s32 pad[4]; s32 f10; s32 pad2[4]; s32 f24; s32 pad3; s32 f2C; s32 f30; u32 f34; } S;
extern void sub_0805DC70(S *);
extern void sub_08004020(s32);
extern void sub_080611F8(void);
extern void sub_080641CC(S *, s32);

void sub_0805DF24(S *arg0) {
    S *p = arg0;
    S *q = arg0;
    if (p->f2C == 0) {
        s32 v = p->f30;
        if (v != 0) {
            if (v == 1) {
                if (p->f34++ > 0xB4U) p->f2C = v;
            }
        }
    }
    sub_0805DC70(q);
    sub_08004020(q->f24);
    if (q->f2C == 1) {
        if (q->f30 == 0) sub_080611F8();
        sub_080641CC(arg0, q->f10);
    }
}

extern s32 sub_08064204(s32, s32);
s32 sub_0805D37C(s32 num, u32 n, s32 *out) {
    s32 pow10 = 1;
    u32 i;
    s32 j;
    s32 digit, q, rem;
    for (i = 0; i < n; i++) { out[i] = 0; pow10 = pow10 * 10; }
    for (j = (s32)n - 1; j != -1; j--) {
        q = sub_08064204(pow10, 10);
        rem = num - q;
        digit = 0;
        while (rem >= 0) { num = rem; digit++; rem -= q; }
        out[j] = digit;
        pow10 = q;
    }
    return 0;
}
