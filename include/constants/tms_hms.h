#ifndef GUARD_CONSTANTS_TMS_HMS_H
#define GUARD_CONSTANTS_TMS_HMS_H

#define FOREACH_TM(F) \
    F(GIGA_IMPACT) \
    F(HYPER_BEAM) \
    F(SCORCHING_SANDS) \
    F(TRIPLE_AXEL) \
    F(ELECTROWEB) \
    F(ENDEAVOR) \
    F(DUAL_WINGBEAT) \
    F(BURNING_JEALOUSY) \
    F(SCALD) \
    F(VACUUM_WAVE) \
    F(KNOCK_OFF) \
    F(TOXIC) \
    F(HAZE) \
    F(ROAR) \
    F(CLOSE_COMBAT) \
    F(THUNDER) \
    F(FLARE_BLITZ) \
    F(BRAVE_BIRD) \
    F(BUG_BUZZ) \
    F(HURRICANE) \
    F(FOCUS_BLAST) \
    F(OUTRAGE) \
    F(PHANTOM_FORCE) \
    F(STONE_EDGE) \
    F(EARTHQUAKE) \
    F(SLUDGE_BOMB) \
    F(WILD_CHARGE) \
    F(BLIZZARD) \
    F(NASTY_PLOT) \
    F(ICE_BEAM) \
    F(BATON_PASS) \
    F(CALM_MIND) \
    F(THUNDERBOLT) \
    F(FLAMETHROWER) \
    F(ENCORE) \
    F(PSYCHIC) \
    F(STEALTH_ROCK) \
    F(SHADOW_BALL) \
    F(GIGA_DRAIN) \
    F(LIQUIDATION) \
    F(TRICK) \
    F(WILL_O_WISP) \
    F(X_SCISSOR) \
    F(SUBSTITUTE) \
    F(DRAGON_DANCE) \
    F(IRON_HEAD) \
    F(DARK_PULSE) \
    F(FLASH_CANNON) \
    F(TOXIC_SPIKES) \
    F(SPIKES) \
    F(SWORDS_DANCE) \
    F(TAUNT) \
    F(ROCK_SLIDE) \
    F(REST) \
    F(THUNDER_WAVE) \
    F(DAZZLING_GLEAM) \
    F(DRAGON_CLAW) \
    F(DRAIN_PUNCH) \
    F(SEED_BOMB) \
    F(SLEEP_TALK) \
    F(BULK_UP) \
    F(SHADOW_CLAW) \
    F(U_TURN) \
    F(ZEN_HEADBUTT) \
    F(FALSE_SWIPE) \
    F(VOLT_SWITCH) \
    F(ENDURE) \
    F(STORED_POWER) \
    F(MUD_SHOT) \
    F(ICY_WIND) \
    F(HEX) \
    F(AERIAL_ACE) \
    F(FACADE) \
    F(POUNCE) \
    F(TRAILBLAZE) \
    F(THIEF) \
    F(CONFUSE_RAY) \
    F(ACROBATICS) \
    F(ACID_SPRAY) \
    F(WATER_PULSE)

#define FOREACH_HM(F) \
    F(SPLASH) \
    F(FLY) \
    F(SURF) \
    F(STRENGTH) \
    F(FLIP_TURN) \
    F(ROCK_SMASH) \
    F(WATERFALL) \
    F(DIVE)

#define FOREACH_TMHM(F) \
    FOREACH_TM(F) \
    FOREACH_HM(F)

#endif
