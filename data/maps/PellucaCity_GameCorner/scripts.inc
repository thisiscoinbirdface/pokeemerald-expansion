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
	goto PellucaCity_GameCorner_Tutor_Teach
# 93 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Tutor_2:
# 81 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Text_0
# 82 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Tutor_Teach
	goto PellucaCity_GameCorner_Tutor_1


PellucaCity_GameCorner_Tutor_Teach::
# 99 "data//maps/PellucaCity_GameCorner/scripts.pory"
	message PellucaCity_GameCorner_Tutor_Teach_Text_0
# 100 "data//maps/PellucaCity_GameCorner/scripts.pory"
	waitmessage
# 101 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_GameCorner_Tutor_Teach_Text_1, PellucaCity_GameCorner_Tutor_Teach_Text_2, PellucaCity_GameCorner_Tutor_Teach_Text_3, PellucaCity_GameCorner_Tutor_Teach_Text_4
# 104 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Tutor_Teach_2
PellucaCity_GameCorner_Tutor_Teach_1:
# 108 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_GameCorner_Tutor_Teach_5
PellucaCity_GameCorner_Tutor_Teach_4:
# 112 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_GameCorner_Tutor_Teach_8
PellucaCity_GameCorner_Tutor_Teach_7:
# 116 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PellucaCity_GameCorner_Tutor_Teach_11
PellucaCity_GameCorner_Tutor_Teach_10:
# 120 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Teach_Text_5, MSGBOX_NPC
# 121 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Tutor_Teach_2:
# 105 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8005, MOVE_BULLET_SEED
# 106 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_TeachMove
	goto PellucaCity_GameCorner_Tutor_Teach_1

PellucaCity_GameCorner_Tutor_Teach_5:
# 109 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8005, MOVE_ICICLE_SPEAR
# 110 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_TeachMove
	goto PellucaCity_GameCorner_Tutor_Teach_4

PellucaCity_GameCorner_Tutor_Teach_8:
# 113 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_BLAST
# 114 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_TeachMove
	goto PellucaCity_GameCorner_Tutor_Teach_7

PellucaCity_GameCorner_Tutor_Teach_11:
# 117 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8005, MOVE_SCALE_SHOT
# 118 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_TeachMove
	goto PellucaCity_GameCorner_Tutor_Teach_10


PellucaCity_GameCorner_TeachMove::
# 126 "data//maps/PellucaCity_GameCorner/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 128 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_TeachMove_2
# 131 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_TeachMove_Text_0, MSGBOX_NPC
PellucaCity_GameCorner_TeachMove_1:
# 133 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_TeachMove_2:
# 129 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Teach_Text_5, MSGBOX_NPC
	goto PellucaCity_GameCorner_TeachMove_1


PellucaCity_GameCorner_Shop1::
# 153 "data//maps/PellucaCity_GameCorner/scripts.pory"
	lockall
# 154 "data//maps/PellucaCity_GameCorner/scripts.pory"
	faceplayer
# 157 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 159 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop1_2
# 165 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_Text_1
# 166 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_Decide
	return

PellucaCity_GameCorner_Shop1_2:
# 160 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_Text_0
# 161 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end


PellucaCity_GameCorner_Shop1_Decide::
# 172 "data//maps/PellucaCity_GameCorner/scripts.pory"
	showcoinsbox 21, 10
# 173 "data//maps/PellucaCity_GameCorner/scripts.pory"
	message PellucaCity_GameCorner_Shop1_Decide_Text_0
# 174 "data//maps/PellucaCity_GameCorner/scripts.pory"
	waitmessage
# 176 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_HAZE
# 177 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_1, ITEM_TM13
# 178 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_STEALTH_ROCK
# 179 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_2, ITEM_TM37
# 180 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_X_SCISSOR
# 181 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_3, ITEM_TM43
# 182 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_IRON_HEAD
# 183 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_4, ITEM_TM46
# 184 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_DARK_PULSE
# 185 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_5, ITEM_TM47
# 186 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_DAZZLING_GLEAM
# 187 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_6, ITEM_TM56
# 188 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_ROCK_SLIDE
# 189 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_7, ITEM_TM53
# 190 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_TM_DRAIN_PUNCH
# 191 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop1_Decide_Text_8, ITEM_TM58
# 194 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 196 "data//maps/PellucaCity_GameCorner/scripts.pory"
	hidecoinsbox 21, 10
# 197 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM43
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_2
PellucaCity_GameCorner_Shop1_Decide_1:
# 198 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM46
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_5
PellucaCity_GameCorner_Shop1_Decide_4:
# 199 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM47
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_8
PellucaCity_GameCorner_Shop1_Decide_7:
# 200 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM56
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_11
PellucaCity_GameCorner_Shop1_Decide_10:
# 201 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM13
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_14
PellucaCity_GameCorner_Shop1_Decide_13:
# 202 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM37
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_17
PellucaCity_GameCorner_Shop1_Decide_16:
# 203 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM53
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_20
PellucaCity_GameCorner_Shop1_Decide_19:
# 204 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_TM58
	goto_if_eq PellucaCity_GameCorner_Shop1_Decide_23
PellucaCity_GameCorner_Shop1_Decide_22:
# 206 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_Decide_Text_9
# 207 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Shop1_Decide_2:
# 197 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM43
# 197 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_X_SCISSOR
# 197 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_1

PellucaCity_GameCorner_Shop1_Decide_5:
# 198 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM46
# 198 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_IRON_HEAD
# 198 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_4

PellucaCity_GameCorner_Shop1_Decide_8:
# 199 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM47
# 199 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_DARK_PULSE
# 199 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_7

PellucaCity_GameCorner_Shop1_Decide_11:
# 200 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM56
# 200 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_DAZZLING_GLEAM
# 200 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_10

PellucaCity_GameCorner_Shop1_Decide_14:
# 201 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM13
# 201 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_HAZE
# 201 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_13

PellucaCity_GameCorner_Shop1_Decide_17:
# 202 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM37
# 202 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_STEALTH_ROCK
# 202 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_16

PellucaCity_GameCorner_Shop1_Decide_20:
# 203 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM53
# 203 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_ROCK_SLIDE
# 203 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_19

PellucaCity_GameCorner_Shop1_Decide_23:
# 204 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_TM58
# 204 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_TM_DRAIN_PUNCH
# 204 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_BuyConfirm
	goto PellucaCity_GameCorner_Shop1_Decide_22


PellucaCity_GameCorner_Shop1_BuyConfirm::
# 214 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkcoins VAR_0x8003
# 215 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto_if_lt VAR_0x8003, VAR_0x8002, PellucaCity_GameCorner_Shop1_NotEnough
# 217 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem VAR_0x8006
# 218 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_GameCorner_Shop1_BuyConfirm_2
PellucaCity_GameCorner_Shop1_BuyConfirm_1:
# 220 "data//maps/PellucaCity_GameCorner/scripts.pory"
	showitemdescription
# 221 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_BuyConfirm_Text_0, MSGBOX_YESNO
# 222 "data//maps/PellucaCity_GameCorner/scripts.pory"
	hideitemdescription
# 224 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop1_BuyConfirm_5
PellucaCity_GameCorner_Shop1_BuyConfirm_4:
# 228 "data//maps/PellucaCity_GameCorner/scripts.pory"
	giveitem VAR_0x8006
# 229 "data//maps/PellucaCity_GameCorner/scripts.pory"
	removecoins VAR_0x8002
# 231 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_BuyConfirm_Text_1
# 232 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Shop1_BuyConfirm_2:
# 218 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_AlreadyHave
	goto PellucaCity_GameCorner_Shop1_BuyConfirm_1

PellucaCity_GameCorner_Shop1_BuyConfirm_5:
# 225 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_Decide
	goto PellucaCity_GameCorner_Shop1_BuyConfirm_4


PellucaCity_GameCorner_Shop1_NotEnough::
# 237 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_NotEnough_Text_0
# 238 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_Decide
	return


PellucaCity_GameCorner_Shop1_AlreadyHave::
# 241 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_AlreadyHave_Text_0
# 242 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop1_Decide
	return


PellucaCity_GameCorner_Shop2::
# 247 "data//maps/PellucaCity_GameCorner/scripts.pory"
	lockall
# 248 "data//maps/PellucaCity_GameCorner/scripts.pory"
	faceplayer
# 251 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 253 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop2_2
# 259 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop2_Text_1
# 260 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_Decide
	return

PellucaCity_GameCorner_Shop2_2:
# 254 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop2_Text_0
# 255 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end


PellucaCity_GameCorner_Shop2_Decide::
# 266 "data//maps/PellucaCity_GameCorner/scripts.pory"
	showcoinsbox 21, 10
# 267 "data//maps/PellucaCity_GameCorner/scripts.pory"
	message PellucaCity_GameCorner_Shop2_Decide_Text_0
# 268 "data//maps/PellucaCity_GameCorner/scripts.pory"
	waitmessage
# 274 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_STONES
# 275 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop2_Decide_Text_1, ITEM_THUNDER_STONE
# 276 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_STONES
# 277 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop2_Decide_Text_2, ITEM_LEAF_STONE
# 278 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_STONES
# 279 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop2_Decide_Text_3, ITEM_SUN_STONE
# 280 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_STONES
# 281 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop2_Decide_Text_4, ITEM_SHINY_STONE
# 282 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_STONES
# 283 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop2_Decide_Text_5, ITEM_DAWN_STONE
# 286 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 288 "data//maps/PellucaCity_GameCorner/scripts.pory"
	hidecoinsbox 21, 10
# 289 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_THUNDER_STONE
	goto_if_eq PellucaCity_GameCorner_Shop2_Decide_2
PellucaCity_GameCorner_Shop2_Decide_1:
# 290 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_LEAF_STONE
	goto_if_eq PellucaCity_GameCorner_Shop2_Decide_5
PellucaCity_GameCorner_Shop2_Decide_4:
# 291 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_SUN_STONE
	goto_if_eq PellucaCity_GameCorner_Shop2_Decide_8
PellucaCity_GameCorner_Shop2_Decide_7:
# 292 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_SHINY_STONE
	goto_if_eq PellucaCity_GameCorner_Shop2_Decide_11
PellucaCity_GameCorner_Shop2_Decide_10:
# 293 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_DAWN_STONE
	goto_if_eq PellucaCity_GameCorner_Shop2_Decide_14
PellucaCity_GameCorner_Shop2_Decide_13:
# 295 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop2_Decide_Text_6
# 296 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Shop2_Decide_2:
# 289 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_THUNDER_STONE
# 289 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_STONES
# 289 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_BuyConfirm
	goto PellucaCity_GameCorner_Shop2_Decide_1

PellucaCity_GameCorner_Shop2_Decide_5:
# 290 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_LEAF_STONE
# 290 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_STONES
# 290 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_BuyConfirm
	goto PellucaCity_GameCorner_Shop2_Decide_4

PellucaCity_GameCorner_Shop2_Decide_8:
# 291 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_SUN_STONE
# 291 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_STONES
# 291 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_BuyConfirm
	goto PellucaCity_GameCorner_Shop2_Decide_7

PellucaCity_GameCorner_Shop2_Decide_11:
# 292 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_SHINY_STONE
# 292 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_STONES
# 292 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_BuyConfirm
	goto PellucaCity_GameCorner_Shop2_Decide_10

PellucaCity_GameCorner_Shop2_Decide_14:
# 293 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_DAWN_STONE
# 293 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_STONES
# 293 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_BuyConfirm
	goto PellucaCity_GameCorner_Shop2_Decide_13


PellucaCity_GameCorner_Shop2_BuyConfirm::
# 302 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkcoins VAR_0x8003
# 303 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto_if_lt VAR_0x8003, VAR_0x8002, PellucaCity_GameCorner_Shop2_NotEnough
# 306 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem VAR_0x8006
# 307 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_GameCorner_Shop2_BuyConfirm_2
PellucaCity_GameCorner_Shop2_BuyConfirm_1:
# 315 "data//maps/PellucaCity_GameCorner/scripts.pory"
	showitemdescription
# 316 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_BuyConfirm_Text_0, MSGBOX_YESNO
# 317 "data//maps/PellucaCity_GameCorner/scripts.pory"
	hideitemdescription
# 319 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop2_BuyConfirm_5
PellucaCity_GameCorner_Shop2_BuyConfirm_4:
# 323 "data//maps/PellucaCity_GameCorner/scripts.pory"
	giveitem VAR_0x8006
# 324 "data//maps/PellucaCity_GameCorner/scripts.pory"
	removecoins VAR_0x8002
# 326 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_BuyConfirm_Text_1
# 327 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Shop2_BuyConfirm_2:
# 308 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop2_BuyConfirm_Text_0, MSGBOX_YESNO
# 309 "data//maps/PellucaCity_GameCorner/scripts.pory"
	release
# 310 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop2_BuyConfirm_7
	goto PellucaCity_GameCorner_Shop2_BuyConfirm_1

PellucaCity_GameCorner_Shop2_BuyConfirm_5:
# 320 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_Decide
	goto PellucaCity_GameCorner_Shop2_BuyConfirm_4

PellucaCity_GameCorner_Shop2_BuyConfirm_7:
# 311 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_Decide
	goto PellucaCity_GameCorner_Shop2_BuyConfirm_1


PellucaCity_GameCorner_Shop2_NotEnough::
# 332 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_NotEnough_Text_0
# 333 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop2_Decide
	return


PellucaCity_GameCorner_Shop3::
# 342 "data//maps/PellucaCity_GameCorner/scripts.pory"
	lockall
# 343 "data//maps/PellucaCity_GameCorner/scripts.pory"
	faceplayer
# 346 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem ITEM_COIN_CASE
# 348 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop3_2
# 354 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop3_Text_1
# 355 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_Decide
	return

PellucaCity_GameCorner_Shop3_2:
# 349 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop3_Text_0
# 350 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end


PellucaCity_GameCorner_Shop3_Decide::
# 361 "data//maps/PellucaCity_GameCorner/scripts.pory"
	showcoinsbox 21, 10
# 362 "data//maps/PellucaCity_GameCorner/scripts.pory"
	message PellucaCity_GameCorner_Shop3_Decide_Text_0
# 363 "data//maps/PellucaCity_GameCorner/scripts.pory"
	waitmessage
# 365 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_BLUNDER_POLICY
# 366 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop3_Decide_Text_1, ITEM_BLUNDER_POLICY
# 367 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_WEAKNESS_POLICY
# 368 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop3_Decide_Text_2, ITEM_WEAKNESS_POLICY
# 369 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_EJECT_BUTTON
# 370 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop3_Decide_Text_3, ITEM_EJECT_BUTTON
# 371 "data//maps/PellucaCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, PRICE_LOADED_DICE
# 372 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultipush PellucaCity_GameCorner_Shop3_Decide_Text_4, ITEM_LOADED_DICE
# 375 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 377 "data//maps/PellucaCity_GameCorner/scripts.pory"
	hidecoinsbox 21, 10
# 378 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_THUNDER_STONE
	goto_if_eq PellucaCity_GameCorner_Shop3_Decide_2
PellucaCity_GameCorner_Shop3_Decide_1:
# 379 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_LEAF_STONE
	goto_if_eq PellucaCity_GameCorner_Shop3_Decide_5
PellucaCity_GameCorner_Shop3_Decide_4:
# 380 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_SUN_STONE
	goto_if_eq PellucaCity_GameCorner_Shop3_Decide_8
PellucaCity_GameCorner_Shop3_Decide_7:
# 381 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, ITEM_SHINY_STONE
	goto_if_eq PellucaCity_GameCorner_Shop3_Decide_11
PellucaCity_GameCorner_Shop3_Decide_10:
# 383 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop2_Decide_Text_6
# 384 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Shop3_Decide_2:
# 378 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_BLUNDER_POLICY
# 378 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_BLUNDER_POLICY
# 378 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_BuyConfirm
	goto PellucaCity_GameCorner_Shop3_Decide_1

PellucaCity_GameCorner_Shop3_Decide_5:
# 379 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_WEAKNESS_POLICY
# 379 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_WEAKNESS_POLICY
# 379 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_BuyConfirm
	goto PellucaCity_GameCorner_Shop3_Decide_4

PellucaCity_GameCorner_Shop3_Decide_8:
# 380 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_EJECT_BUTTON
# 380 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_EJECT_BUTTON
# 380 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_BuyConfirm
	goto PellucaCity_GameCorner_Shop3_Decide_7

PellucaCity_GameCorner_Shop3_Decide_11:
# 381 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8006, ITEM_LOADED_DICE
# 381 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8002, PRICE_LOADED_DICE
# 381 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_BuyConfirm
	goto PellucaCity_GameCorner_Shop3_Decide_10


PellucaCity_GameCorner_Shop3_BuyConfirm::
# 391 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkcoins VAR_0x8003
# 392 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto_if_lt VAR_0x8003, VAR_0x8002, PellucaCity_GameCorner_Shop3_NotEnough
# 395 "data//maps/PellucaCity_GameCorner/scripts.pory"
	checkitem VAR_0x8006
# 396 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_GameCorner_Shop3_BuyConfirm_2
PellucaCity_GameCorner_Shop3_BuyConfirm_1:
# 404 "data//maps/PellucaCity_GameCorner/scripts.pory"
	showitemdescription
# 405 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_BuyConfirm_Text_0, MSGBOX_YESNO
# 406 "data//maps/PellucaCity_GameCorner/scripts.pory"
	hideitemdescription
# 408 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop3_BuyConfirm_5
PellucaCity_GameCorner_Shop3_BuyConfirm_4:
# 412 "data//maps/PellucaCity_GameCorner/scripts.pory"
	giveitem VAR_0x8006
# 413 "data//maps/PellucaCity_GameCorner/scripts.pory"
	removecoins VAR_0x8002
# 415 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_BuyConfirm_Text_1
# 416 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Shop3_BuyConfirm_2:
# 397 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop2_BuyConfirm_Text_0, MSGBOX_YESNO
# 398 "data//maps/PellucaCity_GameCorner/scripts.pory"
	release
# 399 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Shop3_BuyConfirm_7
	goto PellucaCity_GameCorner_Shop3_BuyConfirm_1

PellucaCity_GameCorner_Shop3_BuyConfirm_5:
# 409 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_Decide
	goto PellucaCity_GameCorner_Shop3_BuyConfirm_4

PellucaCity_GameCorner_Shop3_BuyConfirm_7:
# 400 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Shop3_Decide
	goto PellucaCity_GameCorner_Shop3_BuyConfirm_1


PellucaCity_GameCorner_Shop3_NotEnough::
# 421 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Shop1_NotEnough_Text_0
# 422 "data//maps/PellucaCity_GameCorner/scripts.pory"
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
	.string "They sell them up at the {COLOR BLUE}Mirroh Base\l"
	.string "Camp{COLOR DARK_GRAY} if you want one.$"

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

PellucaCity_GameCorner_Tutor_Teach_Text_0:
# 99 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Which move should I teach?$"

PellucaCity_GameCorner_Tutor_Teach_Text_1:
# 102 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Bullet Seed$"

PellucaCity_GameCorner_Tutor_Teach_Text_2:
# 102 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Icicle Spear$"

PellucaCity_GameCorner_Tutor_Teach_Text_3:
# 102 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Rock Blast$"

PellucaCity_GameCorner_Tutor_Teach_Text_4:
# 102 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Scale Shot$"

PellucaCity_GameCorner_Tutor_Teach_Text_5:
# 120 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "You know where to find me!$"

PellucaCity_GameCorner_TeachMove_Text_0:
# 131 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Now you hold all the cards!\n"
	.string "Buy a Loaded Dice for extra power!$"

PellucaCity_GameCorner_Shop1_Text_0:
# 160 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Welcome to the TM Corner!\n"
	.string "Seems like you don't have a Coin Case.\n"
	.string "Please return with a Coin Case!$"

PellucaCity_GameCorner_Shop1_Text_1:
# 165 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Welcome to the TM Corner!$"

PellucaCity_GameCorner_Shop1_Decide_Text_0:
# 173 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Which TM will you purchase?$"

PellucaCity_GameCorner_Shop1_Decide_Text_1:
# 177 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Haze$"

PellucaCity_GameCorner_Shop1_Decide_Text_2:
# 179 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Stealth Rock$"

PellucaCity_GameCorner_Shop1_Decide_Text_3:
# 181 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} X-Scissor$"

PellucaCity_GameCorner_Shop1_Decide_Text_4:
# 183 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Iron Head$"

PellucaCity_GameCorner_Shop1_Decide_Text_5:
# 185 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Dark Pulse$"

PellucaCity_GameCorner_Shop1_Decide_Text_6:
# 187 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Dazzling Gleam$"

PellucaCity_GameCorner_Shop1_Decide_Text_7:
# 189 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Rock Slide$"

PellucaCity_GameCorner_Shop1_Decide_Text_8:
# 191 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Drain Punch$"

PellucaCity_GameCorner_Shop1_Decide_Text_9:
# 206 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Come back any time!\p"
	.string "...sigh, nobody buys anything from me...$"

PellucaCity_GameCorner_Shop1_BuyConfirm_Text_0:
# 221 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Are you sure?$"

PellucaCity_GameCorner_Shop1_BuyConfirm_Text_1:
# 231 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Thank you for your purchase!$"

PellucaCity_GameCorner_Shop1_NotEnough_Text_0:
# 237 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "You don't have enough coins!$"

PellucaCity_GameCorner_Shop1_AlreadyHave_Text_0:
# 241 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "You already have this TM!$"

PellucaCity_GameCorner_Shop2_Text_0:
# 254 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Welcome to the Stone Corner!\p"
	.string "Seems like you don't have a Coin Case.\n"
	.string "Please return with a Coin Case!$"

PellucaCity_GameCorner_Shop2_Text_1:
# 259 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Welcome to the Stone Corner!$"

PellucaCity_GameCorner_Shop2_Decide_Text_0:
# 267 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Which Stone will you purchase?$"

PellucaCity_GameCorner_Shop2_Decide_Text_1:
# 275 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Thunder Stone$"

PellucaCity_GameCorner_Shop2_Decide_Text_2:
# 277 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Leaf Stone$"

PellucaCity_GameCorner_Shop2_Decide_Text_3:
# 279 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Sun Stone$"

PellucaCity_GameCorner_Shop2_Decide_Text_4:
# 281 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Shiny Stone$"

PellucaCity_GameCorner_Shop2_Decide_Text_5:
# 283 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Dawn Stone$"

PellucaCity_GameCorner_Shop2_Decide_Text_6:
# 295 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Come back any time!\p"
	.string "...what's a kid doing with coins?$"

PellucaCity_GameCorner_Shop2_BuyConfirm_Text_0:
# 308 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "You already have this item.\n"
	.string "Do you want another one?$"

PellucaCity_GameCorner_Shop3_Text_0:
# 349 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Welcome to the Item Corner!\p"
	.string "Seems like you don't have a Coin Case.\n"
	.string "Please return with a Coin Case!$"

PellucaCity_GameCorner_Shop3_Text_1:
# 354 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Welcome to the Item Corner!$"

PellucaCity_GameCorner_Shop3_Decide_Text_0:
# 362 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Which Item will you purchase?$"

PellucaCity_GameCorner_Shop3_Decide_Text_1:
# 366 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Blunder Policy$"

PellucaCity_GameCorner_Shop3_Decide_Text_2:
# 368 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Weakness Policy$"

PellucaCity_GameCorner_Shop3_Decide_Text_3:
# 370 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Eject Button$"

PellucaCity_GameCorner_Shop3_Decide_Text_4:
# 372 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "{STR_VAR_1} Loaded Dice$"
