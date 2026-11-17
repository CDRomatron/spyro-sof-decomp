/* identical to sub_080110F8 in SPYRO 3-U (matched), with its names changed by decompdecomp */
extern vu16 D_0806275C[];
struct Vec2 { s32 x, y; };

void sub_08011158(s32 ang, s32 r, struct Vec2 *out) {
    out->x = ((s16)D_0806275C[(s32)((u16)(ang + 0x4000)) >> 8] * r) >> 8;
    out->y = ((s16)D_0806275C[(s32)(ang & 0xFFFF) >> 8] * r) >> 8;
}

s32 sub_08008900(s32 a, s32 b) {
    s32 d;
    a &= 0xFFFF;
    b &= 0xFFFF;
    if (a > b) {
        d = a - b;
        if (d <= 0x7FFF) return -d;
        return 0x10000 - d;
    } else {
        d = b - a;
        if (d > 0x7FFF) return d - 0x10000;
        return d;
    }
}
