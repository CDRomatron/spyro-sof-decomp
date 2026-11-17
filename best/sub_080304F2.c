
extern void sub_0803050C(void);
extern void sub_08030402(s32, u16, s32);

void sub_08030302(void) {
    sub_0803050C();
}

s32 sub_08030300(s32 arg0) {
    s32 x = arg0;
    return x;
}

void sub_080303C4(u16 arg0, s32 arg1, s32 arg2) {
    u16 temp_r1;
    temp_r1 = arg0;
    if (temp_r1 != 0x150) {
        if ((s32) temp_r1 <= 0x150) {
            if (temp_r1 != 0x14F) {
                sub_08030402(0x14F, temp_r1, 0);
                return;
            }
            sub_08030402(0x14F, temp_r1, 0x87);
            return;
        }
        if (temp_r1 != 0x151) {
            sub_08030402(0x151, temp_r1, 0);
            return;
        }
        sub_08030402(0x151, temp_r1, 0x89);
        return;
    }
    sub_08030402(0x150, temp_r1, 0x88);
}

s32 sub_080304F2(s32 arg0) {
    return arg0;
}
