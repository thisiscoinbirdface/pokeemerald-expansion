MirrohBaseCamp_Graveyard_MapScripts::
	.byte 0


MirrohBaseCamp_Graveyard_KohlaBattle::
# 7 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	lockall
# 8 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	faceplayer
# 10 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 30
# 11 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	speakername MirrohBaseCamp_Graveyard_KohlaBattle_Text_0
# 12 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_1
# 13 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 14 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	applymovement 1, MirrohBaseCamp_Graveyard_KohlaBattle_Movement_0
# 15 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 16 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	speakername MirrohBaseCamp_Graveyard_KohlaBattle_Text_0
# 17 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_2
# 18 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 19 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 20 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	faceplayer
# 21 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 16
# 22 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	speakername MirrohBaseCamp_Graveyard_KohlaBattle_Text_0
# 23 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_3
# 24 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 25 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 16
# 28 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHBASECAMP_KOHLA, MirrohBaseCamp_Graveyard_KohlaBattle_Text_4
# 31 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 32 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	speakername MirrohBaseCamp_Graveyard_KohlaBattle_Text_0
# 33 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_KohlaBattle_Text_5
# 34 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	release
# 35 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 48
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	applymovement 1, MirrohBaseCamp_Graveyard_KohlaBattle_Movement_1
# 37 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	waitmovement 0
# 38 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	removeobject 1
# 41 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	setflag FLAG_MIRROH_KOHLA_BATTLE
# 42 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	releaseall
	return


MirrohBaseCamp_Graveyard_Spiritomb::
# 57 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_Spiritomb_Text_0, MSGBOX_NPC
# 59 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	goto_if_set FLAG_GRAVEYARD_SPIRITOMB, MirrohBaseCamp_Graveyard_Spiritomb_2
# 61 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	checkitem ITEM_ODD_KEYSTONE
# 62 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Graveyard_Spiritomb_5
MirrohBaseCamp_Graveyard_Spiritomb_4:
	end

MirrohBaseCamp_Graveyard_Spiritomb_2:
	end

MirrohBaseCamp_Graveyard_Spiritomb_5:
# 63 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_Spiritomb_Text_1, MSGBOX_YESNO
# 65 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Graveyard_Spiritomb_7
	goto MirrohBaseCamp_Graveyard_Spiritomb_4

MirrohBaseCamp_Graveyard_Spiritomb_7:
# 66 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	msgbox MirrohBaseCamp_Graveyard_Spiritomb_Text_2, MSGBOX_SIGN
# 67 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	delay 16
# 68 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	playmoncry SPECIES_SPIRITOMB, CRY_MODE_NORMAL
# 69 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	waitmoncry
# 70 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	setflag FLAG_GRAVEYARD_SPIRITOMB
# 71 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	setwildbattle SPECIES_SPIRITOMB, 30
# 72 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	dowildbattle
	end


# 14 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
MirrohBaseCamp_Graveyard_KohlaBattle_Movement_0:
# 14 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	face_up
	step_end

# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
MirrohBaseCamp_Graveyard_KohlaBattle_Movement_1:
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_left
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
# 36 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	walk_down
	step_end

MirrohBaseCamp_Graveyard_KohlaBattle_Text_0:
# 11 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "Kohla$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_1:
# 12 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "It's you.$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_2:
# 17 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "Do you know what happens if you push\n"
	.string "something too hard?$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_3:
# 23 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "No, I suppose you don't.$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_4:
# 28 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "...$"

MirrohBaseCamp_Graveyard_KohlaBattle_Text_5:
# 33 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "I have to carry on.\p"
	.string "I'll see you at Mt. Mirroh.$"

MirrohBaseCamp_Graveyard_Spiritomb_Text_0:
# 57 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "A patch of dirt. Perhaps for a new\n"
	.string "gravestone?$"

MirrohBaseCamp_Graveyard_Spiritomb_Text_1:
# 63 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "Place the Odd Keystone?$"

MirrohBaseCamp_Graveyard_Spiritomb_Text_2:
# 66 "data//maps/MirrohBaseCamp_Graveyard/scripts.pory"
	.string "{PLAYER} placed the Odd Keystone on\n"
	.string "the dirt patch.$"
