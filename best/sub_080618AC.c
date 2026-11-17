/* machine draft (m2c) for agbcc -mthumb-interwork -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 sub_08000970(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK sub_08065CF0(s32, s32, s32);                /* extern */
extern M2C_UNK sub_08043D18;
extern M2C_UNK sub_08043D90;
extern M2C_UNK sub_08043FCC;
extern M2C_UNK sub_080440C8;
extern M2C_UNK sub_080440CC;
extern M2C_UNK sub_080440D0;
extern M2C_UNK sub_0804AEC4;
extern M2C_UNK sub_0804B0EC;
extern M2C_UNK sub_0804B2F8;
extern M2C_UNK sub_0804B5C8;
extern M2C_UNK sub_0804B5D4;
extern M2C_UNK sub_0804B5E0;
extern M2C_UNK sub_08053744;
extern M2C_UNK sub_080538F4;
extern M2C_UNK sub_08053900;
extern M2C_UNK sub_0805390C;
extern M2C_UNK sub_08053980;
extern M2C_UNK sub_08057550;
extern M2C_UNK sub_08057844;
extern M2C_UNK sub_08057848;
extern M2C_UNK sub_0805784C;
extern M2C_UNK sub_08057850;
extern M2C_UNK sub_08058BC4;
extern M2C_UNK sub_08058C5C;
extern M2C_UNK sub_08058C60;
extern M2C_UNK sub_08058C64;
extern M2C_UNK sub_08058CB0;
extern M2C_UNK sub_08059238;
extern M2C_UNK sub_080593B0;
extern M2C_UNK sub_080593B4;
extern M2C_UNK sub_080593B8;
extern M2C_UNK sub_08059428;
extern M2C_UNK sub_08059470;
extern M2C_UNK sub_0805B768;
extern M2C_UNK sub_0805BA38;
extern M2C_UNK sub_0805BBAC;
extern M2C_UNK sub_0805BC50;
extern M2C_UNK sub_0805BC54;
extern M2C_UNK sub_0805BC58;
extern M2C_UNK sub_0805BE9C;
extern M2C_UNK sub_0805C0D8;
extern M2C_UNK sub_0805C0DC;
extern M2C_UNK sub_0805C0E0;
extern M2C_UNK sub_0805C100;
extern M2C_UNK sub_0805C200;
extern M2C_UNK sub_0805C204;
extern M2C_UNK sub_0805C208;
extern M2C_UNK sub_0805C258;
extern M2C_UNK sub_0805C288;
extern M2C_UNK sub_0805C2E4;
extern M2C_UNK sub_0805F5AC;
extern M2C_UNK sub_0805F7B8;
extern M2C_UNK sub_0805F7BC;
extern M2C_UNK sub_0805F7C0;
extern M2C_UNK sub_0805F7C4;

u32 sub_080618AC(void) {
    s32 temp_r1;
    u32 var_r6;

    var_r6 = 0;
    sub_08065CF0(0x03002700, 0, 0x28);
    M2C_FIELD((void *)0x03002700, s32 *, 0x14) = sub_08000970(&sub_080538F4, &sub_08053900, &sub_08053744, &sub_08053980, (M2C_UNK *)0x08053691, &sub_0805390C, 0);
    if (M2C_FIELD((void *)0x03002700, s32 *, 0x14) == 0) {

    } else {
        M2C_FIELD((void *)0x03002700, s32 *, 0x18) = sub_08000970(&sub_08057844, &sub_08057848, &sub_08057550, &sub_0805784C, (M2C_UNK *)0x08057661, &sub_08057850, 0);
        if (M2C_FIELD((void *)0x03002700, s32 *, 0x18) != 0) {
            M2C_FIELD((void *)0x03002700, s32 *, 0x10) = sub_08000970(&sub_08058C5C, &sub_08058C60, &sub_08058C64, &sub_08058CB0, (M2C_UNK *)0x0805847D, &sub_08058BC4, 0);
            if (M2C_FIELD((void *)0x03002700, s32 *, 0x10) != 0) {
                M2C_FIELD((void *)0x03002700, s32 *, 0) = sub_08000970(&sub_0804B5C8, &sub_0804B5D4, &sub_0804AEC4, &sub_0804B5E0, &sub_0804B0EC, &sub_0804B2F8, 0);
                if (M2C_FIELD((void *)0x03002700, s32 *, 0) != 0) {
                    M2C_FIELD((void *)0x03002700, s32 *, 4) = sub_08000970(&sub_080440C8, &sub_080440CC, &sub_080440D0, &sub_08043D18, &sub_08043D90, &sub_08043FCC, 0);
                    if (M2C_FIELD((void *)0x03002700, s32 *, 4) != 0) {
                        M2C_FIELD((void *)0x03002700, s32 *, 0x1C) = sub_08000970(&sub_080593B0, &sub_080593B4, &sub_08059428, &sub_08059470, &sub_08059238, &sub_080593B8, 0);
                        if (M2C_FIELD((void *)0x03002700, s32 *, 0x1C) != 0) {
                            M2C_FIELD((void *)0x03002700, s32 *, 8) = sub_08000970(&sub_0805BC50, &sub_0805BC54, &sub_0805BC58, &sub_0805B768, &sub_0805BA38, &sub_0805BBAC, 0);
                            if (M2C_FIELD((void *)0x03002700, s32 *, 8) != 0) {
                                M2C_FIELD((void *)0x03002700, s32 *, 0x20) = sub_08000970(&sub_0805C200, &sub_0805C204, &sub_0805C288, &sub_0805C2E4, &sub_0805C208, &sub_0805C258, 0);
                                if (M2C_FIELD((void *)0x03002700, s32 *, 0x20) != 0) {
                                    M2C_FIELD((void *)0x03002700, s32 *, 0x24) = sub_08000970(&sub_0805F7B8, &sub_0805F7BC, (M2C_UNK *)0x0805F101, &sub_0805F7C0, &sub_0805F5AC, &sub_0805F7C4, 0);
                                    if (M2C_FIELD((void *)0x03002700, s32 *, 0x24) != 0) {
                                        M2C_FIELD((void *)0x03002700, s32 *, 0xC) = sub_08000970(&sub_0805C0D8, &sub_0805C0DC, &sub_0805BE9C, &sub_0805C0E0, (M2C_UNK *)0x0805BF0D, &sub_0805C100, 0);
                                        temp_r1 = M2C_FIELD((void *)0x03002700, s32 *, 0xC);
                                        var_r6 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return var_r6;
}
