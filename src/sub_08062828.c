
u32 sub_08061C90(u32, u32);
extern u8 D_08066264[];
extern u32 D_08066318[];
struct WaveData_F264 { u32 type; u32 freq; };

u32 sub_08062828(struct WaveData_F264 *wav, u8 key, u8 fineAdjust) {
    u32 val1, val2;
    u32 fine = fineAdjust << 24;
    if (key > 178) {
        key = 178;
        fine = 255 << 24;
    }
    val1 = D_08066264[key];
    val1 = D_08066318[val1 & 0xF] >> (val1 >> 4);
    val2 = D_08066264[key + 1];
    val2 = D_08066318[val2 & 0xF] >> (val2 >> 4);
    return sub_08061C90(wav->freq, val1 + sub_08061C90(val2 - val1, fine));
}
