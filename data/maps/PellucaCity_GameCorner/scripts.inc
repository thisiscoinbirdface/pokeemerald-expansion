# 1 "data//maps/PellucaCity_GameCorner/scripts.pory"

# 2 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_TM_X_SCISSOR, 500
# 3 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_TM_IRON_HEAD, 500
# 4 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_TM_DARK_PULSE, 700
# 5 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_TM_DAZZLING_GLEAM, 700
# 6 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_TM_HAZE, 300
# 7 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_TM_STEALTH_ROCK, 300
# 8 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_TM_ROCK_SLIDE, 900
# 9 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_TM_DRAIN_PUNCH, 900
# 10 "data//maps/PellucaCity_GameCorner/scripts.pory"

# 11 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_STONES, 300
# 12 "data//maps/PellucaCity_GameCorner/scripts.pory"

# 13 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_LOADED_DICE, 900
# 14 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_EJECT_BUTTON, 700
# 15 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_WEAKNESS_POLICY, 500
# 16 "data//maps/PellucaCity_GameCorner/scripts.pory"
    .set PRICE_BLUNDER_POLICY, 500

PellucaCity_GameCorner_MapScripts::
	.byte 0


PellucaCity_GameCorner_NPC1::
# 29 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_NPC2::
# 33 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_NPC2_Doublade::
# 37 "data//maps/PellucaCity_GameCorner/scripts.pory"
	playmoncry SPECIES_VOLTORB_HISUI, CRY_MODE_NORMAL
# 38 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC2_Doublade_Text_0
# 39 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end


PellucaCity_GameCorner_NPC3::
# 44 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_NPC4::
# 48 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_NPC5::
# 52 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC5_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_NPC6::
# 56 "data//maps/PellucaCity_GameCorner/scripts.pory"
	lockall
# 57 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC6_Text_0
# 58 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end


PellucaCity_GameCorner_NPC7::
# 62 "data//maps/PellucaCity_GameCorner/scripts.pory"
	lockall
# 63 "data//maps/PellucaCity_GameCorner/scripts.pory"
	applymovement 6, PellucaCity_GameCorner_NPC7_Movement_0
# 64 "data//maps/PellucaCity_GameCorner/scripts.pory"
	waitmovement 0
# 65 "data//maps/PellucaCity_GameCorner/scripts.pory"
	delay 16
# 66 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC7_Text_0
# 67 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end


PellucaCity_GameCorner_NPC8::
# 71 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_Tutor::
# 77 "data//maps/PellucaCity_GameCorner/scripts.pory"
	lockall
# 78 "data//maps/PellucaCity_GameCorner/scripts.pory"
	faceplayer
# 80 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto_if_set FLAG_PELLUCA_GC_TUTOR_BATTLE, PellucaCity_GameCorner_Tutor_2
PellucaCity_GameCorner_Tutor_1:
# 85 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Text_1
# 87 "data//maps/PellucaCity_GameCorner/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_GAMBLER, PellucaCity_GameCorner_Tutor_Text_2
# 89 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setflag FLAG_PELLUCA_GC_TUTOR_BATTLE
# 90 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Text_3
# 91 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Text_4, MSGBOX_YESNO
# 93 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Tutor_5
# 99 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 100 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Tutor_8
# 106 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Tutor_Teach
# 108 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Tutor_2:
# 81 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Text_0
# 82 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Tutor_Teach
	goto PellucaCity_GameCorner_Tutor_1

PellucaCity_GameCorner_Tutor_5:
# 94 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Text_5, MSGBOX_NPC
# 95 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Tutor_8:
# 101 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Text_6, MSGBOX_NPC
# 102 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end


PellucaCity_GameCorner_Tutor_Teach::
# 114 "data//maps/PellucaCity_GameCorner/scripts.pory"
	message PellucaCity_GameCorner_Tutor_Teach_Text_0
# 115 "data//maps/PellucaCity_GameCorner/scripts.pory"
	waitmessage
# 116 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_GameCorner_Tutor_Teach_Text_1, PellucaCity_GameCorner_Tutor_Teach_Text_2, PellucaCity_GameCorner_Tutor_Teach_Text_3, PellucaCity_GameCorner_Tutor_Teach_Text_4
# 119 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Tutor_Teach_2
PellucaCity_GameCorner_Tutor_Teach_1:
# 123 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_GameCorner_Tutor_Teach_5
PellucaCity_GameCorner_Tutor_Teach_4:
# 127 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_GameCorner_Tutor_Teach_8
PellucaCity_GameCorner_Tutor_Teach_7:
# 131 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PellucaCity_GameCorner_Tutor_Teach_11
PellucaCity_GameCorner_Tutor_Teach_10:
# 135 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Text_5, MSGBOX_NPC
# 136 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Tutor_Teach_2:
# 120 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8005, MOVE_BULLET_SEED
# 121 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_TeachMove
	goto PellucaCity_GameCorner_Tutor_Teach_1

PellucaCity_GameCorner_Tutor_Teach_5:
# 124 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8005, MOVE_ICICLE_SPEAR
# 125 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_TeachMove
	goto PellucaCity_GameCorner_Tutor_Teach_4

PellucaCity_GameCorner_Tutor_Teach_8:
# 128 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_BLAST
# 129 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_TeachMove
	goto PellucaCity_GameCorner_Tutor_Teach_7

PellucaCity_GameCorner_Tutor_Teach_11:
# 132 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8005, MOVE_SCALE_SHOT
# 133 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_TeachMove
	goto PellucaCity_GameCorner_Tutor_Teach_10


PellucaCity_GameCorner_TeachMove::
# 141 "data//maps/PellucaCity_GameCorner/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 143 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_TeachMove_2
# 146 "data//maps/PellucaCity_GameCorner/scripts.pory"
	removeitem ITEM_BLUE_SHARD
# 147 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_TeachMove_Text_0, MSGBOX_NPC
PellucaCity_GameCorner_TeachMove_1:
# 149 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_TeachMove_2:
# 144 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Text_5, MSGBOX_NPC
	goto PellucaCity_GameCorner_TeachMove_1


PellucaCity_GameCorner_Shop1::
# 169 "data//maps/PellucaCity_GameCorner/scripts.pory"
	lockall
# 170 "data//maps/PellucaCity_GameCorner/scripts.pory"
	faceplayer
# 173 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 175 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop1_2
# 181 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_Text_1
# 182 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_Decide
	return

PellucaCity_GameCorner_Shop1_2:
# 176 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_Text_0
# 177 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end


PellucaCity_GameCorner_Shop1_Decide::
# 188 "data//maps/PellucaCity_GameCorner/scripts.pory"
	showcoinsbox 21, 10
# 189 "data//maps/PellucaCity_GameCorner/scripts.pory"
	message PellucaCity_GameCorner_Shop1_Decide_Text_0
# 190 "data//maps/PellucaCity_GameCorner/scripts.pory"
	waitmessage
# 194 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_STEALTH_ROCK
# 195 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_1, ITEM_TM37
# 196 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_X_SCISSOR
# 197 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_2, ITEM_TM43
# 198 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_IRON_HEAD
# 199 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_3, ITEM_TM46
# 200 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_DARK_PULSE
# 201 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_4, ITEM_TM47
# 202 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_DAZZLING_GLEAM
# 203 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_5, ITEM_TM56
# 204 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_ROCK_SLIDE
# 205 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_6, ITEM_TM53
# 206 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_DRAIN_PUNCH
# 207 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_7, ITEM_TM58
# 210 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 212 "data//maps/PellucaCity_GameCorner/scripts.pory"
	hidecoinsbox 21, 10
# 213 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM43
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_2
PellucaCity_GameCorner_Shop1_Decide_1:
# 214 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM46
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_5
PellucaCity_GameCorner_Shop1_Decide_4:
# 215 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM47
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_8
PellucaCity_GameCorner_Shop1_Decide_7:
# 216 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM56
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_11
PellucaCity_GameCorner_Shop1_Decide_10:
# 217 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM13
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_14
PellucaCity_GameCorner_Shop1_Decide_13:
# 218 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM37
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_17
PellucaCity_GameCorner_Shop1_Decide_16:
# 219 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM53
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_20
PellucaCity_GameCorner_Shop1_Decide_19:
# 220 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM58
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_23
PellucaCity_GameCorner_Shop1_Decide_22:
# 222 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_Decide_Text_8
# 223 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Shop1_Decide_2:
# 213 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM43
# 213 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_X_SCISSOR
# 213 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_1

PellucaCity_GameCorner_Shop1_Decide_5:
# 214 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM46
# 214 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_IRON_HEAD
# 214 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_4

PellucaCity_GameCorner_Shop1_Decide_8:
# 215 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM47
# 215 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_DARK_PULSE
# 215 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_7

PellucaCity_GameCorner_Shop1_Decide_11:
# 216 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM56
# 216 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_DAZZLING_GLEAM
# 216 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_10

PellucaCity_GameCorner_Shop1_Decide_14:
# 217 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM13
# 217 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_HAZE
# 217 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_13

PellucaCity_GameCorner_Shop1_Decide_17:
# 218 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM37
# 218 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_STEALTH_ROCK
# 218 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_16

PellucaCity_GameCorner_Shop1_Decide_20:
# 219 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM53
# 219 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_ROCK_SLIDE
# 219 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_19

PellucaCity_GameCorner_Shop1_Decide_23:
# 220 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM58
# 220 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_DRAIN_PUNCH
# 220 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_22


PellucaCity_GameCorner_Shop1_BuyConfirm::
# 230 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkcoins VAR_0x8003
# 231 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto_if_lt VAR_0x8003, VAR_0x8002, PellucaCity_GameCorner_Shop1_NotEnough
# 233 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem VAR_0x8006
# 234 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_GameCorner_Shop1_BuyConfirm_2
PellucaCity_GameCorner_Shop1_BuyConfirm_1:
# 236 "data//maps/PellucaCity_GameCorner/scripts.pory"
	showitemdescription
# 237 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_BuyConfirm_Text_0, MSGBOX_YESNO
# 238 "data//maps/PellucaCity_GameCorner/scripts.pory"
	hideitemdescription
# 240 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop1_BuyConfirm_5
PellucaCity_GameCorner_Shop1_BuyConfirm_4:
# 244 "data//maps/PellucaCity_GameCorner/scripts.pory"
	giveitem VAR_0x8006
# 245 "data//maps/PellucaCity_GameCorner/scripts.pory"
	removecoins VAR_0x8002
# 247 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_BuyConfirm_Text_1
# 248 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Shop1_BuyConfirm_2:
# 234 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_AlreadyHave
	goto PellucaCity_GameCorner_Shop1_BuyConfirm_1

PellucaCity_GameCorner_Shop1_BuyConfirm_5:
# 241 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_Decide
	goto PellucaCity_GameCorner_Shop1_BuyConfirm_4


PellucaCity_GameCorner_Shop1_NotEnough::
# 253 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_NotEnough_Text_0
# 254 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_Decide
	return


PellucaCity_GameCorner_Shop1_AlreadyHave::
# 257 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_AlreadyHave_Text_0
# 258 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_Decide
	return


PellucaCity_GameCorner_Shop2::
# 263 "data//maps/PellucaCity_GameCorner/scripts.pory"
	lockall
# 264 "data//maps/PellucaCity_GameCorner/scripts.pory"
	faceplayer
# 267 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 269 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop2_2
# 275 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop2_Text_1
# 276 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_Decide
	return

PellucaCity_GameCorner_Shop2_2:
# 270 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop2_Text_0
# 271 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end


PellucaCity_GameCorner_Shop2_Decide::
# 282 "data//maps/PellucaCity_GameCorner/scripts.pory"
	showcoinsbox 21, 10
# 283 "data//maps/PellucaCity_GameCorner/scripts.pory"
	message PellucaCity_GameCorner_Shop2_Decide_Text_0
# 284 "data//maps/PellucaCity_GameCorner/scripts.pory"
	waitmessage
# 290 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_STONES
# 291 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop2_Decide_Text_1, ITEM_THUNDER_STONE
# 292 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_STONES
# 293 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop2_Decide_Text_2, ITEM_LEAF_STONE
# 294 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_STONES
# 295 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop2_Decide_Text_3, ITEM_SUN_STONE
# 296 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_STONES
# 297 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop2_Decide_Text_4, ITEM_SHINY_STONE
# 298 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_STONES
# 299 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop2_Decide_Text_5, ITEM_DAWN_STONE
# 302 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 304 "data//maps/PellucaCity_GameCorner/scripts.pory"
	hidecoinsbox 21, 10
# 305 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_THUNDER_STONE
	goto_if_eq PellucaCity_GameCorner_Shop2_Decide_2
PellucaCity_GameCorner_Shop2_Decide_1:
# 306 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_LEAF_STONE
	goto_if_eq PellucaCity_GameCorner_Shop2_Decide_5
PellucaCity_GameCorner_Shop2_Decide_4:
# 307 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_SUN_STONE
	goto_if_eq PellucaCity_GameCorner_Shop2_Decide_8
PellucaCity_GameCorner_Shop2_Decide_7:
# 308 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_SHINY_STONE
	goto_if_eq PellucaCity_GameCorner_Shop2_Decide_11
PellucaCity_GameCorner_Shop2_Decide_10:
# 309 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_DAWN_STONE
	goto_if_eq PellucaCity_GameCorner_Shop2_Decide_14
PellucaCity_GameCorner_Shop2_Decide_13:
# 311 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop2_Decide_Text_6
# 312 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Shop2_Decide_2:
# 305 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_THUNDER_STONE
# 305 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_STONES
# 305 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_BuyConfirm
	goto PellucaCity_GameCorner_Shop2_Decide_1

PellucaCity_GameCorner_Shop2_Decide_5:
# 306 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_LEAF_STONE
# 306 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_STONES
# 306 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_BuyConfirm
	goto PellucaCity_GameCorner_Shop2_Decide_4

PellucaCity_GameCorner_Shop2_Decide_8:
# 307 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_SUN_STONE
# 307 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_STONES
# 307 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_BuyConfirm
	goto PellucaCity_GameCorner_Shop2_Decide_7

PellucaCity_GameCorner_Shop2_Decide_11:
# 308 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_SHINY_STONE
# 308 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_STONES
# 308 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_BuyConfirm
	goto PellucaCity_GameCorner_Shop2_Decide_10

PellucaCity_GameCorner_Shop2_Decide_14:
# 309 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_DAWN_STONE
# 309 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_STONES
# 309 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_BuyConfirm
	goto PellucaCity_GameCorner_Shop2_Decide_13


PellucaCity_GameCorner_Shop2_BuyConfirm::
# 318 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkcoins VAR_0x8003
# 319 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto_if_lt VAR_0x8003, VAR_0x8002, PellucaCity_GameCorner_Shop2_NotEnough
# 322 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem VAR_0x8006
# 323 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_GameCorner_Shop2_BuyConfirm_2
PellucaCity_GameCorner_Shop2_BuyConfirm_1:
# 331 "data//maps/PellucaCity_GameCorner/scripts.pory"
	showitemdescription
# 332 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_BuyConfirm_Text_0, MSGBOX_YESNO
# 333 "data//maps/PellucaCity_GameCorner/scripts.pory"
	hideitemdescription
# 335 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop2_BuyConfirm_5
PellucaCity_GameCorner_Shop2_BuyConfirm_4:
# 339 "data//maps/PellucaCity_GameCorner/scripts.pory"
	giveitem VAR_0x8006
# 340 "data//maps/PellucaCity_GameCorner/scripts.pory"
	removecoins VAR_0x8002
# 342 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_BuyConfirm_Text_1
# 343 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Shop2_BuyConfirm_2:
# 324 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop2_BuyConfirm_Text_0, MSGBOX_YESNO
# 325 "data//maps/PellucaCity_GameCorner/scripts.pory"
	release
# 326 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop2_BuyConfirm_7
	goto PellucaCity_GameCorner_Shop2_BuyConfirm_1

PellucaCity_GameCorner_Shop2_BuyConfirm_5:
# 336 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_Decide
	goto PellucaCity_GameCorner_Shop2_BuyConfirm_4

PellucaCity_GameCorner_Shop2_BuyConfirm_7:
# 327 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_Decide
	goto PellucaCity_GameCorner_Shop2_BuyConfirm_1


PellucaCity_GameCorner_Shop2_NotEnough::
# 348 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_NotEnough_Text_0
# 349 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_Decide
	return


PellucaCity_GameCorner_Shop3::
# 358 "data//maps/PellucaCity_GameCorner/scripts.pory"
	lockall
# 359 "data//maps/PellucaCity_GameCorner/scripts.pory"
	faceplayer
# 362 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 364 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop3_2
# 370 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop3_Text_1
# 371 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_Decide
	return

PellucaCity_GameCorner_Shop3_2:
# 365 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop3_Text_0
# 366 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end


PellucaCity_GameCorner_Shop3_Decide::
# 377 "data//maps/PellucaCity_GameCorner/scripts.pory"
	showcoinsbox 21, 10
# 378 "data//maps/PellucaCity_GameCorner/scripts.pory"
	message PellucaCity_GameCorner_Shop3_Decide_Text_0
# 379 "data//maps/PellucaCity_GameCorner/scripts.pory"
	waitmessage
# 381 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_BLUNDER_POLICY
# 382 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop3_Decide_Text_1, ITEM_BLUNDER_POLICY
# 383 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_WEAKNESS_POLICY
# 384 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop3_Decide_Text_2, ITEM_WEAKNESS_POLICY
# 385 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_EJECT_BUTTON
# 386 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop3_Decide_Text_3, ITEM_EJECT_BUTTON
# 387 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_LOADED_DICE
# 388 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop3_Decide_Text_4, ITEM_LOADED_DICE
# 391 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 393 "data//maps/PellucaCity_GameCorner/scripts.pory"
	hidecoinsbox 21, 10
# 394 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_BLUNDER_POLICY
	goto_if_eq PellucaCity_GameCorner_Shop3_Decide_2
PellucaCity_GameCorner_Shop3_Decide_1:
# 395 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_WEAKNESS_POLICY
	goto_if_eq PellucaCity_GameCorner_Shop3_Decide_5
PellucaCity_GameCorner_Shop3_Decide_4:
# 396 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_EJECT_BUTTON
	goto_if_eq PellucaCity_GameCorner_Shop3_Decide_8
PellucaCity_GameCorner_Shop3_Decide_7:
# 397 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_LOADED_DICE
	goto_if_eq PellucaCity_GameCorner_Shop3_Decide_11
PellucaCity_GameCorner_Shop3_Decide_10:
# 399 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop2_Decide_Text_6
# 400 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Shop3_Decide_2:
# 394 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_BLUNDER_POLICY
# 394 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_BLUNDER_POLICY
# 394 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_BuyConfirm
	goto PellucaCity_GameCorner_Shop3_Decide_1

PellucaCity_GameCorner_Shop3_Decide_5:
# 395 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_WEAKNESS_POLICY
# 395 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_WEAKNESS_POLICY
# 395 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_BuyConfirm
	goto PellucaCity_GameCorner_Shop3_Decide_4

PellucaCity_GameCorner_Shop3_Decide_8:
# 396 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_EJECT_BUTTON
# 396 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_EJECT_BUTTON
# 396 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_BuyConfirm
	goto PellucaCity_GameCorner_Shop3_Decide_7

PellucaCity_GameCorner_Shop3_Decide_11:
# 397 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_LOADED_DICE
# 397 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_LOADED_DICE
# 397 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_BuyConfirm
	goto PellucaCity_GameCorner_Shop3_Decide_10


PellucaCity_GameCorner_Shop3_BuyConfirm::
# 407 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkcoins VAR_0x8003
# 408 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto_if_lt VAR_0x8003, VAR_0x8002, PellucaCity_GameCorner_Shop3_NotEnough
# 411 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem VAR_0x8006
# 412 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_GameCorner_Shop3_BuyConfirm_2
PellucaCity_GameCorner_Shop3_BuyConfirm_1:
# 420 "data//maps/PellucaCity_GameCorner/scripts.pory"
	showitemdescription
# 421 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_BuyConfirm_Text_0, MSGBOX_YESNO
# 422 "data//maps/PellucaCity_GameCorner/scripts.pory"
	hideitemdescription
# 424 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop3_BuyConfirm_5
PellucaCity_GameCorner_Shop3_BuyConfirm_4:
# 428 "data//maps/PellucaCity_GameCorner/scripts.pory"
	giveitem VAR_0x8006
# 429 "data//maps/PellucaCity_GameCorner/scripts.pory"
	removecoins VAR_0x8002
# 431 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_BuyConfirm_Text_1
# 432 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Shop3_BuyConfirm_2:
# 413 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop2_BuyConfirm_Text_0, MSGBOX_YESNO
# 414 "data//maps/PellucaCity_GameCorner/scripts.pory"
	release
# 415 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop3_BuyConfirm_7
	goto PellucaCity_GameCorner_Shop3_BuyConfirm_1

PellucaCity_GameCorner_Shop3_BuyConfirm_5:
# 425 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_Decide
	goto PellucaCity_GameCorner_Shop3_BuyConfirm_4

PellucaCity_GameCorner_Shop3_BuyConfirm_7:
# 416 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_Decide
	goto PellucaCity_GameCorner_Shop3_BuyConfirm_1


PellucaCity_GameCorner_Shop3_NotEnough::
# 437 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_NotEnough_Text_0
# 438 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_Decide
	return


# 63 "data//maps/PellucaCity_GameCorner/scripts.pory"
PellucaCity_GameCorner_NPC7_Movement_0:
# 63 "data//maps/PellucaCity_GameCorner/scripts.pory"
	emote_exclamation_mark
# 63 "data//maps/PellucaCity_GameCorner/scripts.pory"
	jump_in_place_right
	step_end

PellucaCity_GameCorner_NPC1_Text_0:
# 29 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "I don't have a Coin Case so I can't play.\n"
	.string "They sell them up at the Mirroh Base\l"
	.string "Camp if you want one.$"

PellucaCity_GameCorner_NPC2_Text_0:
# 33 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Don't disturb me! I need to win big,\n"
	.string "buy a Leaf Stone and evolve Voltorb!$"

PellucaCity_GameCorner_NPC2_Doublade_Text_0:
# 38 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Voltorb seems more worried about its\n"
	.string "trainer than evolving...$"

PellucaCity_GameCorner_NPC3_Text_0:
# 44 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Another loss! I hate this!$"

PellucaCity_GameCorner_NPC4_Text_0:
# 48 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "I'm taking a break. I just lose control\n"
	.string "playing Blackjack!$"

PellucaCity_GameCorner_NPC5_Text_0:
# 52 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Hehe, this'll be my lucky day!$"

PellucaCity_GameCorner_NPC6_Text_0:
# 57 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "I can't bear to see my wife toss all our\n"
	.string "money down the drain!$"

PellucaCity_GameCorner_NPC7_Text_0:
# 66 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Stupid machine! Give me my coins back!$"

PellucaCity_GameCorner_NPC8_Text_0:
# 71 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "The house always wins...unless you're\n"
	.string "me! I just hit it big in Voltorb Flip!$"

PellucaCity_GameCorner_Tutor_Text_0:
# 81 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "So you've realised the power of luck,\n"
	.string "have you?$"

PellucaCity_GameCorner_Tutor_Text_1:
# 85 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "I'm an Ace Trainer! And a gambler!\n"
	.string "So I guess I'm an Ace Gambler! Haha!\l"
	.string "In battle, I don't use brains or brawns.\l"
	.string "Why bother? Just get lucky instead!\p"
	.string "...\p"
	.string "What? You think I'm all talk?\n"
	.string "I can show you in battle!$"

PellucaCity_GameCorner_Tutor_Text_2:
# 87 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "I got unlucky...or did you get lucky?$"

PellucaCity_GameCorner_Tutor_Text_3:
# 90 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Incredible! So strong...and you're using\n"
	.string "such unlucky moves. Let me teach your\l"
	.string "Pokémon how to be luckier.$"

PellucaCity_GameCorner_Tutor_Text_4:
# 91 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "In exchange for one Blue Shard, should\n"
	.string "I teach a lucky move?$"

PellucaCity_GameCorner_Tutor_Text_5:
# 94 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "You know where to find me!$"

PellucaCity_GameCorner_Tutor_Text_6:
# 101 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "You don't have a Blue Shard.\n"
	.string "Get one and come back to me!$"

PellucaCity_GameCorner_Tutor_Teach_Text_0:
# 114 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Which move should I teach?$"

PellucaCity_GameCorner_Tutor_Teach_Text_1:
# 117 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Bullet Seed$"

PellucaCity_GameCorner_Tutor_Teach_Text_2:
# 117 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Icicle Spear$"

PellucaCity_GameCorner_Tutor_Teach_Text_3:
# 117 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Rock Blast$"

PellucaCity_GameCorner_Tutor_Teach_Text_4:
# 117 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Scale Shot$"

PellucaCity_GameCorner_TeachMove_Text_0:
# 147 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Now you hold all the cards!\n"
	.string "Buy a Loaded Dice for extra power!$"

PellucaCity_GameCorner_Shop1_Text_0:
# 176 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Welcome to the TM Corner!\n"
	.string "Seems like you don't have a Coin Case.\n"
	.string "Please return with a Coin Case!$"

PellucaCity_GameCorner_Shop1_Text_1:
# 181 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Welcome to the TM Corner!$"

PellucaCity_GameCorner_Shop1_Decide_Text_0:
# 189 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Which TM will you purchase?$"

PellucaCity_GameCorner_Shop1_Decide_Text_1:
# 195 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Stealth Rock$"

PellucaCity_GameCorner_Shop1_Decide_Text_2:
# 197 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} X-Scissor$"

PellucaCity_GameCorner_Shop1_Decide_Text_3:
# 199 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Iron Head$"

PellucaCity_GameCorner_Shop1_Decide_Text_4:
# 201 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Dark Pulse$"

PellucaCity_GameCorner_Shop1_Decide_Text_5:
# 203 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Dazzling Gleam$"

PellucaCity_GameCorner_Shop1_Decide_Text_6:
# 205 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Rock Slide$"

PellucaCity_GameCorner_Shop1_Decide_Text_7:
# 207 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Drain Punch$"

PellucaCity_GameCorner_Shop1_Decide_Text_8:
# 222 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Come back any time!\p"
	.string "...sigh, nobody buys anything from me...$"

PellucaCity_GameCorner_Shop1_BuyConfirm_Text_0:
# 237 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Are you sure?$"

PellucaCity_GameCorner_Shop1_BuyConfirm_Text_1:
# 247 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Thank you for your purchase!$"

PellucaCity_GameCorner_Shop1_NotEnough_Text_0:
# 253 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "You don't have enough coins!$"

PellucaCity_GameCorner_Shop1_AlreadyHave_Text_0:
# 257 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "You already have this TM!$"

PellucaCity_GameCorner_Shop2_Text_0:
# 270 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Welcome to the Stone Corner!\p"
	.string "Seems like you don't have a Coin Case.\n"
	.string "Please return with a Coin Case!$"

PellucaCity_GameCorner_Shop2_Text_1:
# 275 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Welcome to the Stone Corner!$"

PellucaCity_GameCorner_Shop2_Decide_Text_0:
# 283 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Which Stone will you purchase?$"

PellucaCity_GameCorner_Shop2_Decide_Text_1:
# 291 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Thunder Stone$"

PellucaCity_GameCorner_Shop2_Decide_Text_2:
# 293 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Leaf Stone$"

PellucaCity_GameCorner_Shop2_Decide_Text_3:
# 295 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Sun Stone$"

PellucaCity_GameCorner_Shop2_Decide_Text_4:
# 297 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Shiny Stone$"

PellucaCity_GameCorner_Shop2_Decide_Text_5:
# 299 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Dawn Stone$"

PellucaCity_GameCorner_Shop2_Decide_Text_6:
# 311 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Come back any time!\p"
	.string "...what's a kid doing with coins?$"

PellucaCity_GameCorner_Shop2_BuyConfirm_Text_0:
# 324 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "You already have this item.\n"
	.string "Do you want another one?$"

PellucaCity_GameCorner_Shop3_Text_0:
# 365 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Welcome to the Item Corner!\p"
	.string "Seems like you don't have a Coin Case.\n"
	.string "Please return with a Coin Case!$"

PellucaCity_GameCorner_Shop3_Text_1:
# 370 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Welcome to the Item Corner!$"

PellucaCity_GameCorner_Shop3_Decide_Text_0:
# 378 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Which Item will you purchase?$"

PellucaCity_GameCorner_Shop3_Decide_Text_1:
# 382 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Blunder Policy$"

PellucaCity_GameCorner_Shop3_Decide_Text_2:
# 384 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Weakness Policy$"

PellucaCity_GameCorner_Shop3_Decide_Text_3:
# 386 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Eject Button$"

PellucaCity_GameCorner_Shop3_Decide_Text_4:
# 388 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Loaded Dice$"
