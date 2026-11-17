s32 sub_08065B00(s32 a, s32 b, s32 c, s32 d){ return c < 0 ? 0 : d >> (0x1E - c) * (b!=0 ? -1 : 1); }
