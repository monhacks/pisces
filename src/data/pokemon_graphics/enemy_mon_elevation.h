// This determines how much higher above the usual position the enemy Pokémon
// is during battle. Species that float or fly have nonzero values.
const u8 gEnemyMonElevation[NUM_SPECIES + 1] =
{
    [SPECIES_BUTTERFREE] = 10,
    [SPECIES_BEEDRILL] = 9,
    [SPECIES_PIDGEOT] = 5,
    [SPECIES_FEAROW] = 6,
    [SPECIES_ZUBAT] = 16,
    [SPECIES_GOLBAT] = 10,
    [SPECIES_VENOMOTH] = 16,
    [SPECIES_GEODUDE] = 10,
    [SPECIES_MAGNEMITE] = 17,
    [SPECIES_MAGNETON] = 9,
    [SPECIES_GASTLY] = 10,
    [SPECIES_HAUNTER] = 11,
    [SPECIES_KOFFING] = 14,
    [SPECIES_WEEZING] = 6,
    [SPECIES_AERODACTYL] = 9,
    [SPECIES_ZAPDOS] = 8,
    [SPECIES_MEW] = 11,
    [SPECIES_LEDYBA] = 8,
    [SPECIES_LEDIAN] = 4,
    [SPECIES_CROBAT] = 9,
    [SPECIES_HOPPIP] = 15,
    [SPECIES_SKIPLOOM] = 15,
    [SPECIES_JUMPLUFF] = 9,
    [SPECIES_YANMA] = 13,
    [SPECIES_MURKROW] = 12,
    [SPECIES_MISDREAVUS] = 8,
    [SPECIES_UNOWN] = 8,
    [SPECIES_MANTINE] = 6,
    [SPECIES_PORYGON2] = 9,
    [SPECIES_LUGIA] = 6,
    [SPECIES_HO_OH] = 6,
    [SPECIES_CELEBI] = 15,
    [SPECIES_BEAUTIFLY] = 10,
    [SPECIES_DUSTOX] = 12,
    [SPECIES_NINJASK] = 8,
    [SPECIES_SHEDINJA] = 12,
    [SPECIES_WINGULL] = 15,
    [SPECIES_PELIPPER] = 8,
    [SPECIES_MASQUERAIN] = 10,
    [SPECIES_BALTOY] = 5,
    [SPECIES_CLAYDOL] = 10,
    [SPECIES_SPOINK] = 8,
    [SPECIES_HEMOKO] = 12,
    [SPECIES_FLYGON] = 7,
    [SPECIES_GLALIE] = 8,
    [SPECIES_LUNATONE] = 12,
    [SPECIES_SOLROCK] = 8,
    [SPECIES_ALTARIA] = 8,
    [SPECIES_DUSKULL] = 13,
    [SPECIES_SHUPPET] = 14,
    [SPECIES_BANETTE] = 8,
    [SPECIES_CASTFORM] = 16,
    [SPECIES_BELDUM] = 8,
    [SPECIES_SALAMENCE] = 8,
    [SPECIES_RAYQUAZA] = 6,
    [SPECIES_LATIAS] = 12,
    [SPECIES_LATIOS] = 6,
    [SPECIES_JIRACHI] = 14,
    [SPECIES_CHIMECHO] = 16,
    // Gen 4
    [SPECIES_DRIFLOON] = 5,
    [SPECIES_DRIFBLIM] = 7,
    [SPECIES_MISMAGIUS] = 4,
    [SPECIES_CHINGLING] = 5,
    [SPECIES_BRONZONG] = 4,
    [SPECIES_MAGNEZONE] = 4,
    [SPECIES_TOGEKISS] = 14,
    [SPECIES_YANMEGA] = 6,
    [SPECIES_GLISCOR] = 4,
    [SPECIES_PORYGON_Z] = 12,
    [SPECIES_PROBOPASS] = 6,
    [SPECIES_ROTOM] = 10,
    [SPECIES_UXIE] = 6,
    [SPECIES_MESPRIT] = 6,
    [SPECIES_AZELF] = 6,
    [SPECIES_CRESSELIA] = 3,
    [SPECIES_DARKRAI] = 4,
    // Gen 5
    [SPECIES_MUNNA] = 7,
    [SPECIES_MUSHARNA] = 5,
    [SPECIES_WOOBAT] = 19,
    [SPECIES_SWOOBAT] = 12,
    [SPECIES_PETILIL] = 7,
    [SPECIES_SIGILYPH] = 7,
    [SPECIES_YAMASK] = 10,
    [SPECIES_ARCHEOPS] = 8,
    [SPECIES_SOLOSIS] = 14,
    [SPECIES_DUOSION] = 7,
    [SPECIES_REUNICLUS] = 8,
    [SPECIES_EMOLGA] = 19,
    [SPECIES_TYNAMO] = 16,
    [SPECIES_EELEKTRIK] = 8,
    [SPECIES_EELEKTROSS] = 8,
    [SPECIES_CRYOGONAL] = 3,
    [SPECIES_BRAVIARY] = 8,
    [SPECIES_HYDREIGON] = 3,
    [SPECIES_VOLCARONA] = 6,
    [SPECIES_TORNADUS] = 7,
    [SPECIES_THUNDURUS] = 7,
    [SPECIES_LANDORUS] = 7,
    [SPECIES_MELOETTA] = 8,
    // Gen 6
    [SPECIES_FLETCHINDER] = 9,
    [SPECIES_TALONFLAME] = 7,
    [SPECIES_VIVILLON] = 9,
    [SPECIES_FLABEBE] = 6,
    [SPECIES_FLOETTE] = 4,
    [SPECIES_HONEDGE] = 4,
    [SPECIES_DOUBLADE] = 5,
    [SPECIES_AEGISLASH] = 3,
    [SPECIES_SPRITZEE] = 14,
    [SPECIES_INKAY] = 14,
    [SPECIES_CARBINK] = 4,
    [SPECIES_KLEFKI] = 5,
    [SPECIES_PHANTUMP] = 5,
    [SPECIES_NOIBAT] = 8,
    [SPECIES_YVELTAL] = 5,
    [SPECIES_HOOPA] = 13,
    // Gen 7
    [SPECIES_VIKAVOLT] = 8,
    [SPECIES_CUTIEFLY] = 10,
    [SPECIES_RIBOMBEE] = 6,
    [SPECIES_COMFEY] = 8,
    [SPECIES_MINIOR] = 16,
    [SPECIES_DHELMISE] = 2,
    [SPECIES_TAPU_KOKO] = 9,
    [SPECIES_TAPU_LELE] = 8,
    [SPECIES_TAPU_BULU] = 5,
    [SPECIES_TAPU_FINI] = 6,
    [SPECIES_COSMOG] = 7,
    [SPECIES_COSMOEM] = 3,
    [SPECIES_LUNALA] = 6,
    [SPECIES_NIHILEGO] = 6,
    [SPECIES_KARTANA] = 3,
    [SPECIES_NECROZMA] = 6,
    [SPECIES_POIPOLE] = 9,
    [SPECIES_NAGANADEL] = 7,
    // Gen 8
    [SPECIES_CORVISQUIRE] = 10,
    [SPECIES_ORBEETLE] = 8,
    [SPECIES_FLAPPLE] = 9,
    [SPECIES_SINISTEA] = 9,
    [SPECIES_POLTEAGEIST] = 11,
    [SPECIES_RUNERIGUS] = 5,
    [SPECIES_MILCERY] = 10,
    [SPECIES_FROSMOTH] = 7,
    [SPECIES_DREEPY] = 5,
    [SPECIES_DRAKLOAK] = 5,
    [SPECIES_DRAGAPULT] = 3,
    [SPECIES_ETERNATUS] = 4,
    [SPECIES_REGIELEKI] = 8,
    [SPECIES_REGIDRAGO] = 5,
    // PISCES
    [SPECIES_GHAERIAL] = 4,
    [SPECIES_SAINTISOW] = 8,
    [SPECIES_SOWPHIROTH] = 4,
    [SPECIES_NANGGAL] = 4,
    [SPECIES_MAERACHOLY] = 4,
    [SPECIES_LUMELMO] = 12,
    [SPECIES_LUMENDELA] = 8,
    [SPECIES_STOMAWAY] = 4,
    [SPECIES_CRAWLAXY] = 4,
    [SPECIES_MAGNALURE] = 8,
    [SPECIES_MAGNANICOR] = 4,
    [SPECIES_UHEFOE] = 4,
    [SPECIES_MYSTOMANIA] = 4,
    [SPECIES_SLICKSLICE] = 4,
    [SPECIES_LOAFOOF] = 4,
    [SPECIES_SPIRITOAST] = 4,
    [SPECIES_ABSOLARIA] = 8,
    [SPECIES_CINDRILLON] = 8,
    [SPECIES_FROSLASS] = 8,
    [SPECIES_FOGGLEHIND] = 8,
    [SPECIES_EERIKO] = 8,
    [SPECIES_MANNIKO] = 8,
    [SPECIES_KOWAKO] = 4,
    [SPECIES_UMBRAT] = 8,
    [SPECIES_CHIROBERRA] = 4,
    [SPECIES_BUTTERWEE] = 12,
    [SPECIES_FRACTOFLY] = 4,
    [SPECIES_TORSTEVIC] = 4,
    [SPECIES_RAITAIC] = 8,
    [SPECIES_NIMBOZOA] = 4,
    [SPECIES_SQUEESHY] = 8,
    [SPECIES_SQUISHIME] = 4,
    [SPECIES_OCTOHIME] = 4,
    [SPECIES_BOOZARD] = 8,
    [SPECIES_COCKABOO] = 4,
    [SPECIES_MORAGAN] = 4,
    [SPECIES_MARSOYART] = 12,
    [SPECIES_PROMISCBUS] = 4,
    [SPECIES_KOREMAI] = 8,
    [SPECIES_KORESATO] = 8,
    [SPECIES_AJOKUJOKU] = 4,
    [SPECIES_FOOLTAGE] = 4,
    [SPECIES_AETHEREAL] = 4,
    [SPECIES_MOTHRAMITY] = 8,
    [SPECIES_LEVIALAGO] = 4,
    [SPECIES_NEOROACH] = 12,
    [SPECIES_SOLASU] = 4,
    [SPECIES_SUMMERASU] = 4,
    [SPECIES_SHAYON] = 8,
    [SPECIES_PURGATIVAL] = 8,
    [SPECIES_PEBLRANIUM] = 4,
    // Megas
    [SPECIES_BEEDRILL_MEGA] = 5,
    [SPECIES_PIDGEOT_MEGA] = 8,
    [SPECIES_ALAKAZAM_MEGA] = 7,
    [SPECIES_PINSIR_MEGA] = 4,
    [SPECIES_GYARADOS_MEGA] = 6,
    [SPECIES_AERODACTYL_MEGA] = 7,
    [SPECIES_MEWTWO_MEGA_Y] = 3,
    [SPECIES_SHARPEDO_MEGA] = 1,
    [SPECIES_ALTARIA_MEGA] = 6,
    [SPECIES_BANETTE_MEGA] = 5,
    [SPECIES_GLALIE_MEGA] = 8,
    [SPECIES_METAGROSS_MEGA] = 4,
    [SPECIES_LATIAS_MEGA] = 8,
    [SPECIES_LATIOS_MEGA] = 8,
    [SPECIES_RAYQUAZA_MEGA] = 4,
    // Alolan Forms
    [SPECIES_RAICHU_ALOLAN] = 4,
    [SPECIES_GEODUDE_ALOLAN] = 16,
    // Galarian Forms
    [SPECIES_WEEZING_GALARIAN] = 6,
    [SPECIES_ARTICUNO_GALARIAN] = 10,
    [SPECIES_YAMASK_GALARIAN] = 4,
    // Hisuian Forms
    [SPECIES_VOLTORB_HISUIAN] = 1,
    [SPECIES_ELECTRODE_HISUIAN] = 4,
    [SPECIES_BRAVIARY_HISUIAN] = 3,
    // Other Forms
    [SPECIES_UNOWN_B] = 8,
    [SPECIES_UNOWN_C] = 8,
    [SPECIES_UNOWN_D] = 8,
    [SPECIES_UNOWN_E] = 8,
    [SPECIES_UNOWN_F] = 8,
    [SPECIES_UNOWN_G] = 8,
    [SPECIES_UNOWN_H] = 8,
    [SPECIES_UNOWN_I] = 8,
    [SPECIES_UNOWN_J] = 8,
    [SPECIES_UNOWN_K] = 8,
    [SPECIES_UNOWN_L] = 8,
    [SPECIES_UNOWN_M] = 8,
    [SPECIES_UNOWN_N] = 8,
    [SPECIES_UNOWN_O] = 8,
    [SPECIES_UNOWN_P] = 8,
    [SPECIES_UNOWN_Q] = 8,
    [SPECIES_UNOWN_R] = 8,
    [SPECIES_UNOWN_S] = 8,
    [SPECIES_UNOWN_T] = 8,
    [SPECIES_UNOWN_U] = 8,
    [SPECIES_UNOWN_V] = 8,
    [SPECIES_UNOWN_W] = 8,
    [SPECIES_UNOWN_X] = 8,
    [SPECIES_UNOWN_Y] = 8,
    [SPECIES_UNOWN_Z] = 8,
    [SPECIES_UNOWN_QMARK] = 8,
    [SPECIES_UNOWN_EMARK] = 8,
    [SPECIES_CASTFORM_SUNNY] = 12,
    [SPECIES_CASTFORM_RAINY] = 12,
    [SPECIES_CASTFORM_SNOWY] = 12,
    [SPECIES_ROTOM_HEAT] = 6,
    [SPECIES_ROTOM_WASH] = 6,
    [SPECIES_ROTOM_FROST] = 6,
    [SPECIES_ROTOM_FAN] = 6,
    [SPECIES_ROTOM_MOW] = 6,
    [SPECIES_GIRATINA_ORIGIN] = 7,
    [SPECIES_THUNDURUS_THERIAN] = 7,
    [SPECIES_MELOETTA_PIROUETTE] = 5,
    [SPECIES_VIVILLON_POLAR] = 9,
    [SPECIES_VIVILLON_TUNDRA] = 9,
    [SPECIES_VIVILLON_CONTINENTAL] = 9,
    [SPECIES_VIVILLON_GARDEN] = 9,
    [SPECIES_VIVILLON_ELEGANT] = 9,
    [SPECIES_VIVILLON_MEADOW] = 9,
    [SPECIES_VIVILLON_MODERN] = 9,
    [SPECIES_VIVILLON_MARINE] = 9,
    [SPECIES_VIVILLON_ARCHIPELAGO] = 9,
    [SPECIES_VIVILLON_HIGH_PLAINS] = 9,
    [SPECIES_VIVILLON_SANDSTORM] = 9,
    [SPECIES_VIVILLON_RIVER] = 9,
    [SPECIES_VIVILLON_MONSOON] = 9,
    [SPECIES_VIVILLON_SAVANNA] = 9,
    [SPECIES_VIVILLON_SUN] = 9,
    [SPECIES_VIVILLON_OCEAN] = 9,
    [SPECIES_VIVILLON_JUNGLE] = 9,
    [SPECIES_VIVILLON_FANCY] = 9,
    [SPECIES_VIVILLON_POKE_BALL] = 9,
    [SPECIES_FLABEBE_YELLOW_FLOWER] = 6,
    [SPECIES_FLABEBE_ORANGE_FLOWER] = 6,
    [SPECIES_FLABEBE_BLUE_FLOWER] = 6,
    [SPECIES_FLABEBE_WHITE_FLOWER] = 6,
    [SPECIES_FLOETTE_YELLOW_FLOWER] = 4,
    [SPECIES_FLOETTE_ORANGE_FLOWER] = 4,
    [SPECIES_FLOETTE_BLUE_FLOWER] = 4,
    [SPECIES_FLOETTE_WHITE_FLOWER] = 4,
    [SPECIES_FLOETTE_ETERNAL_FLOWER] = 4,
    [SPECIES_AEGISLASH_BLADE] = 3,
    [SPECIES_HOOPA_UNBOUND] = 3,
    [SPECIES_MINIOR_METEOR_ORANGE] = 16,
    [SPECIES_MINIOR_METEOR_YELLOW] = 16,
    [SPECIES_MINIOR_METEOR_GREEN] = 16,
    [SPECIES_MINIOR_METEOR_BLUE] = 16,
    [SPECIES_MINIOR_METEOR_INDIGO] = 16,
    [SPECIES_MINIOR_METEOR_VIOLET] = 16,
    [SPECIES_MINIOR_CORE_RED] = 16,
    [SPECIES_MINIOR_CORE_ORANGE] = 16,
    [SPECIES_MINIOR_CORE_YELLOW] = 16,
    [SPECIES_MINIOR_CORE_GREEN] = 16,
    [SPECIES_MINIOR_CORE_BLUE] = 16,
    [SPECIES_MINIOR_CORE_INDIGO] = 16,
    [SPECIES_MINIOR_CORE_VIOLET] = 16,
    [SPECIES_NECROZMA_DAWN_WINGS] = 6,
    [SPECIES_NECROZMA_ULTRA] = 5,
    [SPECIES_SINISTEA_ANTIQUE] = 10,
    [SPECIES_POLTEAGEIST_ANTIQUE] = 12,
    [SPECIES_ETERNATUS_ETERNAMAX] = 13,
    [SPECIES_CASTFORM_SANDY] = 8,
};
