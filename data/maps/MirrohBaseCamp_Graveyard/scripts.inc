MirrohBaseCamp_Graveyard_MapScripts::
	.byte 0


MirrohBaseCamp_Graveyard_KohlaBattle::
# 8 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	lockall
# 10 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	call Common_EventScript_SaveGameBeforeSomber
# 12 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	faceplayer
# 14 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 30
# 15 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	speakername MirrohBaseCamp_Graveyard_KohlaBattle_Text_0
# 16 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_1
# 17 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 18 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	applymovement 1, MirrohBaseCamp_Graveyard_KohlaBattle_Movement_0
# 19 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 20 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	speakername MirrohBaseCamp_Graveyard_KohlaBattle_Text_0
# 21 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_2
# 22 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 23 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 24 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	faceplayer
# 25 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 16
# 26 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	speakername MirrohBaseCamp_Graveyard_KohlaBattle_Text_0
# 27 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_3
# 28 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 29 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 16
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHBASECAMP_KOHLA, MirrohBaseCamp_Graveyard_KohlaBattle_Text_4
# 35 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	speakername MirrohBaseCamp_Graveyard_KohlaBattle_Text_0
# 37 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_5
# 38 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 39 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	applymovement 1, MirrohBaseCamp_Graveyard_KohlaBattle_Movement_1
# 41 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	waitmovement 0
# 42 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	removeobject 1
# 45 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	setflag FLAG_MIRROH_KOHLA_BATTLE
# 46 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	releaseall
	return


MirrohBaseCamp_Graveyard_Spiritomb::
# 61 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_Spiritomb_Text_0, MSGBOX_NPC
# 63 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	goto_if_set FLAG_GRAVEYARD_SPIRITOMB, MirrohBaseCamp_Graveyard_Spiritomb_2
# 65 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	checkitem ITEM_ODD_KEYSTONE
# 66 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Graveyard_Spiritomb_5
MirrohBaseCamp_Graveyard_Spiritomb_4:
	end

MirrohBaseCamp_Graveyard_Spiritomb_2:
	end

MirrohBaseCamp_Graveyard_Spiritomb_5:
# 67 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_Spiritomb_Text_1, MSGBOX_YESNO
# 69 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Graveyard_Spiritomb_7
	goto MirrohBaseCamp_Graveyard_Spiritomb_4

MirrohBaseCamp_Graveyard_Spiritomb_7:
# 70 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_Spiritomb_Text_2, MSGBOX_SIGN
# 71 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 16
# 72 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_NORMAL
# 73 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	waitmoncry
# 74 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	setflag FLAG_GRAVEYARD_SPIRITOMB
# 75 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	setwildbattle SPECIES_SPIRITOMB, 30
# 76 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	dowildbattle
	end


# 18 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
MirrohBaseCamp_Graveyard_KohlaBattle_Movement_0:
# 18 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	face_up
	step_end

# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
MirrohBaseCamp_Graveyard_KohlaBattle_Movement_1:
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 40 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
	step_end

MirrohBaseCamp_Graveyard_KohlaBattle_Text_0:
# 15 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "Kohla$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_1:
# 16 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "It's you.$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_2:
# 21 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "Do you know what happens if you push\n"
	.string "something too hard?$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_3:
# 27 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "No, I suppose you don't.$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_4:
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "...$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_5:
# 37 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "I have to carry on.\p"
	.string "I'll see you at Mt. Mirroh.$"

MirrohBaseCamp_Graveyard_Spiritomb_Text_0:
# 61 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "A patch of dirt. Perhaps for a new\n"
	.string "gravestone?$"

MirrohBaseCamp_Graveyard_Spiritomb_Text_1:
# 67 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "Place the Odd Keystone?$"

MirrohBaseCamp_Graveyard_Spiritomb_Text_2:
# 70 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "{PLAYER} placed the Odd Keystone on\n"
	.string "the dirt patch.$"
