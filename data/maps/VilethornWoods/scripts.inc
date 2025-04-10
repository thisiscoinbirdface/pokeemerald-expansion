# 1 "data//maps/VilethornWoods/scripts.pory"

# 2 "data//maps/VilethornWoods/scripts.pory"
    .set LOCALID_GRUNT, 17
# 3 "data//maps/VilethornWoods/scripts.pory"
    .set LOCALID_PROF, 16
# 4 "data//maps/VilethornWoods/scripts.pory"
    .set LOCALID_RALTS1, 18
# 5 "data//maps/VilethornWoods/scripts.pory"
    .set LOCALID_RALTS2, 19
# 6 "data//maps/VilethornWoods/scripts.pory"
    .set LOCALID_RALTS3, 20

VilethornWoods_MapScripts::
	.byte 0


VilethornWoods_EventScript_NurseDemo::
# 13 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_NurseDemo_Text_0, MSGBOX_NPC
	end


VilethornWoods_NurseJoy_OnRoute::
# 18 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 19 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 20 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NurseJoy_OnRoute_Text_0
# 21 "data//maps/VilethornWoods/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 22 "data//maps/VilethornWoods/scripts.pory"
	delay 30
# 23 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Ralts_FirstTrigger::
# 32 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_HIDE_VILETHORN_RALTS_1, VilethornWoods_Ralts_FirstTrigger_2
# 33 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_RALTS_FINISHED, VilethornWoods_Ralts_FirstTrigger_5
# 35 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 36 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 37 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS1, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 38 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 39 "data//maps/VilethornWoods/scripts.pory"
	delay 24
# 40 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS1, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 41 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 45 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS1
# 46 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_1
# 47 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_2
# 51 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_FirstTrigger_Text_0
# 52 "data//maps/VilethornWoods/scripts.pory"
	release
# 54 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_FirstTrigger_2:
	end

VilethornWoods_Ralts_FirstTrigger_5:
	end


VilethornWoods_Ralts_SecondTrigger::
# 59 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_HIDE_VILETHORN_RALTS_2, VilethornWoods_Ralts_SecondTrigger_2
# 60 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_RALTS_FINISHED, VilethornWoods_Ralts_SecondTrigger_5
# 62 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 63 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 64 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS2, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 65 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 66 "data//maps/VilethornWoods/scripts.pory"
	delay 24
# 67 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS2, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 68 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 72 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS2
# 73 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_2
# 74 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_3
# 78 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_SecondTrigger_Text_0
# 79 "data//maps/VilethornWoods/scripts.pory"
	release
# 81 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_SecondTrigger_2:
	end

VilethornWoods_Ralts_SecondTrigger_5:
	end


VilethornWoods_Ralts::
# 87 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 88 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 89 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS3, VilethornWoods_Ralts_Movement_0
# 90 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 91 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 92 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 93 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 94 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_Text_0
# 95 "data//maps/VilethornWoods/scripts.pory"
	release
# 97 "data//maps/VilethornWoods/scripts.pory"
	setwildbattle SPECIES_RALTS, 18
# 98 "data//maps/VilethornWoods/scripts.pory"
	dowildbattle
# 100 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_3
# 101 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_RALTS_FINISHED
# 102 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS3
# 104 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_EventScript_TriggerProf::
# 129 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_PROF, VilethornWoods_EventScript_TriggerProf_2
# 133 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 136 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_Ralts_Movement_0
# 137 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 138 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 139 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_0
# 140 "data//maps/VilethornWoods/scripts.pory"
	release
# 143 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_EventScript_TriggerProf_Movement_0
# 144 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 145 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 146 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 147 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_1
# 148 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 149 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 150 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_2
# 151 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 152 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 153 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_3
# 154 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 155 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 156 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_1
# 157 "data//maps/VilethornWoods/scripts.pory"
	release
# 158 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 159 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 161 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 0, 0
# 162 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_PROF, 1, 0
# 163 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_GRUNT, 0, 0
# 164 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_PROF, 1, 0
# 166 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_PROF
# 167 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_EventScript_TriggerProf_2:
	end


VilethornWoods_Trainer_A::
# 178 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_A, VilethornWoods_Trainer_A_Text_0, VilethornWoods_Trainer_A_Text_1
# 179 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_A_Text_2
# 180 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_B::
# 185 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_B, VilethornWoods_Trainer_B_Text_0, VilethornWoods_Trainer_B_Text_1
# 186 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_B_Text_2
# 187 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_C::
# 192 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_C, VilethornWoods_Trainer_C_Text_0, VilethornWoods_Trainer_C_Text_1
# 193 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_C_Text_2
# 194 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_D::
# 199 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_D, VilethornWoods_Trainer_D_Text_0, VilethornWoods_Trainer_D_Text_1
# 200 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_D_Text_2
# 201 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_E::
# 206 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_E, VilethornWoods_Trainer_E_Text_0, VilethornWoods_Trainer_E_Text_1
# 207 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_E_Text_2
# 208 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F1::
# 213 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 214 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 215 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 216 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 217 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F2::
# 222 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 223 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 224 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 225 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 226 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_G::
# 231 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_G, VilethornWoods_Trainer_G_Text_0, VilethornWoods_Trainer_G_Text_1
# 232 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_G_Text_2
# 233 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_H::
# 238 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_H, VilethornWoods_Trainer_H_Text_0, VilethornWoods_Trainer_H_Text_1
# 239 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_H_Text_2
# 240 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_NPC1::
# 247 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC1_Text_0, MSGBOX_NPC
	end


VilethornWoods_NPC2::
# 253 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 254 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 256 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_MUSHROOMS, VilethornWoods_NPC2_2
# 259 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_1, MSGBOX_YESNO
# 261 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC2_5
# 278 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_7
VilethornWoods_NPC2_1:
# 281 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_NPC2_2:
# 257 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_0
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_5:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VilethornWoods_NPC2_8
# 275 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_6
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_8:
# 264 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_2
# 265 "data//maps/VilethornWoods/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, VilethornWoods_NPC2_Text_3, VilethornWoods_NPC2_Text_4
# 266 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VilethornWoods_NPC2_12
# 269 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
VilethornWoods_NPC2_11:
# 272 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_MUSHROOMS
# 273 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_5
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_12:
# 267 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_TWISTEDSPOON
	goto VilethornWoods_NPC2_11


VilethornWoods_NPC3::
# 286 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_ITEM, VilethornWoods_NPC3_2
# 289 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_1, MSGBOX_NPC
# 290 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 291 "data//maps/VilethornWoods/scripts.pory"
	release
# 292 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_ITEM
VilethornWoods_NPC3_1:
	end

VilethornWoods_NPC3_2:
# 287 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_0, MSGBOX_NPC
	goto VilethornWoods_NPC3_1


# 37 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_0:
# 37 "data//maps/VilethornWoods/scripts.pory"
	face_up
# 37 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 40 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_1:
# 40 "data//maps/VilethornWoods/scripts.pory"
	fly_up
	step_end

# 89 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_Movement_0:
# 89 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 143 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_0:
# 143 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 143 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 143 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 143 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 143 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 143 "data//maps/VilethornWoods/scripts.pory"
	walk_up
	step_end

# 147 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_1:
# 147 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 147 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 147 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 147 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 147 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 147 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 147 "data//maps/VilethornWoods/scripts.pory"
	emote_question_mark
	step_end

# 150 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_2:
# 150 "data//maps/VilethornWoods/scripts.pory"
	face_left
	step_end

# 153 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_3:
# 153 "data//maps/VilethornWoods/scripts.pory"
	face_right
	step_end

VilethornWoods_EventScript_NurseDemo_Text_0:
# 13 "data//maps/VilethornWoods/scripts.pory"
	.string "This area is closed for the demo.$"

VilethornWoods_NurseJoy_OnRoute_Text_0:
# 20 "data//maps/VilethornWoods/scripts.pory"
	.string "These woods are so creepy! I'm so glad\n"
	.string "CHANSEY is here with me.$"

VilethornWoods_Ralts_FirstTrigger_Text_0:
# 51 "data//maps/VilethornWoods/scripts.pory"
	.string "RALTS teleported away! It can't have\n"
	.string "gone far...$"

VilethornWoods_Ralts_SecondTrigger_Text_0:
# 78 "data//maps/VilethornWoods/scripts.pory"
	.string "RALTS teleported away again! It must\n"
	.string "be somewhere in this accursed forest...$"

VilethornWoods_Ralts_Text_0:
# 94 "data//maps/VilethornWoods/scripts.pory"
	.string "Aha! RALTS can't escape this time!$"

VilethornWoods_EventScript_TriggerProf_Text_0:
# 139 "data//maps/VilethornWoods/scripts.pory"
	.string "GRUNT: ...yes boss. We've picked up the\n"
	.string "Professor.\p"
	.string "...\p"
	.string "GRUNT: No, nobody saw us, boss.\p"
	.string "...\p"
	.string "GRUNT: Yes boss, I'm positive.\p"
	.string "...\p"
	.string "GRUNT: ...okay, we'll head back to HQ\n"
	.string "right away.$"

VilethornWoods_EventScript_TriggerProf_Text_1:
# 156 "data//maps/VilethornWoods/scripts.pory"
	.string "GRUNT: Must be a wild Impidimp or\n"
	.string "something...$"

VilethornWoods_Trainer_A_Text_0:
# 178 "data//maps/VilethornWoods/scripts.pory"
	.string "PSYCHIC type Pokemon are my natural\n"
	.string "enemies! That's why I'm training here.$"

VilethornWoods_Trainer_A_Text_1:
# 178 "data//maps/VilethornWoods/scripts.pory"
	.string "I like PSYCHIC types more than you!$"

VilethornWoods_Trainer_A_Text_2:
# 179 "data//maps/VilethornWoods/scripts.pory"
	.string "I like training but I don't want to go to\n"
	.string "deep into this forest...$"

VilethornWoods_Trainer_B_Text_0:
# 185 "data//maps/VilethornWoods/scripts.pory"
	.string "I thought these woods would have BUG\n"
	.string "type Pokemon, but I can't find any. I'm\l"
	.string "so bummed! But beating you in battle\l"
	.string "will make me feel better!$"

VilethornWoods_Trainer_B_Text_1:
# 185 "data//maps/VilethornWoods/scripts.pory"
	.string "I don't feel better at all!$"

VilethornWoods_Trainer_B_Text_2:
# 186 "data//maps/VilethornWoods/scripts.pory"
	.string "This forest is weird...a dense fog, no\n"
	.string "BUG types...$"

VilethornWoods_Trainer_C_Text_0:
# 192 "data//maps/VilethornWoods/scripts.pory"
	.string "The sweet, delicious fog envelops\n"
	.string "us...we are one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_1:
# 192 "data//maps/VilethornWoods/scripts.pory"
	.string "You're not one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_2:
# 193 "data//maps/VilethornWoods/scripts.pory"
	.string "I want to go deeper...sink\n"
	.string "deeper...escape my real life...$"

VilethornWoods_Trainer_D_Text_0:
# 199 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a Pokemon Breeder. Like all\n"
	.string "breeders, we specialise in certain\l"
	.string "Pokemon forms. I'm a horse breeding\l"
	.string "expert!$"

VilethornWoods_Trainer_D_Text_1:
# 199 "data//maps/VilethornWoods/scripts.pory"
	.string "Well fought!$"

VilethornWoods_Trainer_D_Text_2:
# 200 "data//maps/VilethornWoods/scripts.pory"
	.string "I need to raise my horses to become\n"
	.string "stronger. Maybe some VITAMINS would\l"
	.string "help...$"

VilethornWoods_Trainer_E_Text_0:
# 206 "data//maps/VilethornWoods/scripts.pory"
	.string "Eek! These woods creep me out! I'm so\n"
	.string "scared of the DROWZEE - what if I get\l"
	.string "hypnotised?$"

VilethornWoods_Trainer_E_Text_1:
# 206 "data//maps/VilethornWoods/scripts.pory"
	.string "You creep me out too!$"

VilethornWoods_Trainer_E_Text_2:
# 207 "data//maps/VilethornWoods/scripts.pory"
	.string "I've been stuck here for hours. I need\n"
	.string "to get out of here...$"

VilethornWoods_Trainer_F1_Text_0:
# 215 "data//maps/VilethornWoods/scripts.pory"
	.string "We're on our way to Silversun City to\n"
	.string "interview the great Gloria! Get out of\l"
	.string "our way!$"

VilethornWoods_Trainer_F1_Text_1:
# 215 "data//maps/VilethornWoods/scripts.pory"
	.string "We lost!$"

VilethornWoods_Trainer_F1_Text_2:
# 216 "data//maps/VilethornWoods/scripts.pory"
	.string "If we can get an exclusive interview\n"
	.string "with her, itll be the scoop of the week!$"

VilethornWoods_Trainer_G_Text_0:
# 231 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm one of the best bug catchers\n"
	.string "around. I want to become a Gym Leader\l"
	.string "one day!$"

VilethornWoods_Trainer_G_Text_1:
# 231 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you a Gym Leader or something?$"

VilethornWoods_Trainer_G_Text_2:
# 232 "data//maps/VilethornWoods/scripts.pory"
	.string "As a Gym Leader to-be, my team needs to\n"
	.string "be able to handle a variety of threats.$"

VilethornWoods_Trainer_H_Text_0:
# 238 "data//maps/VilethornWoods/scripts.pory"
	.string "I wonder what's inside this\n"
	.string "house...maybe there's some loot!$"

VilethornWoods_Trainer_H_Text_1:
# 238 "data//maps/VilethornWoods/scripts.pory"
	.string "No loot for me!$"

VilethornWoods_Trainer_H_Text_2:
# 239 "data//maps/VilethornWoods/scripts.pory"
	.string "Fine, I'll just stand here and look while\n"
	.string "you loot everything...$"

VilethornWoods_NPC1_Text_0:
# 247 "data//maps/VilethornWoods/scripts.pory"
	.string "The Morelull here in Vilethorn Woods\n"
	.string "release spores when in danger. That's\l"
	.string "what creates this fog.$"

VilethornWoods_NPC2_Text_0:
# 257 "data//maps/VilethornWoods/scripts.pory"
	.string "These mushrooms are really rare, you\n"
	.string "know?$"

VilethornWoods_NPC2_Text_1:
# 259 "data//maps/VilethornWoods/scripts.pory"
	.string "Oh, it's you again! Fancy seeing you\n"
	.string "here. I'm a traveling chef! While I\l"
	.string "usually cook at the Pelluca Restaurant,\l"
	.string "I'm here to collect mushrooms to create\l"
	.string "new recipes...but I can only find TINY\l"
	.string "MUSHROOMs! Say, why don't you help me?\l"
	.string "If you can get me a BIG MUSHROOM, I'll\l"
	.string "find something to give you in exchange!\p"
	.string "Have you got a BIG MUSHROOM?$"

VilethornWoods_NPC2_Text_2:
# 264 "data//maps/VilethornWoods/scripts.pory"
	.string "Perfect! This'll be a great addition to\n"
	.string "our pantry. Thank you! Now I must give\l"
	.string "you something in exchage...how about an\l"
	.string "old spood from the restaurant? Or\l"
	.string "maybe this seed I found earlier?$"

VilethornWoods_NPC2_Text_3:
# 265 "data//maps/VilethornWoods/scripts.pory"
	.string "TWISTEDSPOON$"

VilethornWoods_NPC2_Text_4:
# 265 "data//maps/VilethornWoods/scripts.pory"
	.string "MIRACLE SEED$"

VilethornWoods_NPC2_Text_5:
# 273 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over Cormoria. And if you\l"
	.string "ever visit Pelluca City, be sure to drop\l"
	.string "by our restaurant!$"

VilethornWoods_NPC2_Text_6:
# 275 "data//maps/VilethornWoods/scripts.pory"
	.string "Hey, you don't have any! Are you trying\n"
	.string "to trick me? The DROWZEE and MORELULL\l"
	.string "doing enough of that!$"

VilethornWoods_NPC2_Text_7:
# 278 "data//maps/VilethornWoods/scripts.pory"
	.string "Come back when you do!$"

VilethornWoods_NPC3_Text_0:
# 287 "data//maps/VilethornWoods/scripts.pory"
	.string "I am well and truly lost...$"

VilethornWoods_NPC3_Text_1:
# 289 "data//maps/VilethornWoods/scripts.pory"
	.string "I am well and truly lost...even with this\n"
	.string "SCOPE LENS, I can't see a thing! Why\l"
	.string "don't you have it?$"
