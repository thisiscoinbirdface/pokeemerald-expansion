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
	lockall
# 14 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 15 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_NurseDemo_Text_0
# 16 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_NurseJoy_OnRoute::
# 21 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 22 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 23 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NurseJoy_OnRoute_Text_0
# 24 "data//maps/VilethornWoods/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 25 "data//maps/VilethornWoods/scripts.pory"
	delay 30
# 26 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Ralts_FirstTrigger::
# 35 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_HIDE_VILETHORN_RALTS_1, VilethornWoods_Ralts_FirstTrigger_2
# 36 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_RALTS_FINISHED, VilethornWoods_Ralts_FirstTrigger_5
# 38 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 39 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 40 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS1, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 41 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 42 "data//maps/VilethornWoods/scripts.pory"
	delay 24
# 43 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS1, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 44 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 48 "data//maps/VilethornWoods/scripts.pory"
	removeobject 20
# 49 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_1
# 50 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_2
# 54 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_FirstTrigger_Text_0
# 55 "data//maps/VilethornWoods/scripts.pory"
	release
# 57 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_FirstTrigger_2:
	end

VilethornWoods_Ralts_FirstTrigger_5:
	end


VilethornWoods_Ralts_SecondTrigger::
# 62 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_HIDE_VILETHORN_RALTS_2, VilethornWoods_Ralts_SecondTrigger_2
# 63 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_RALTS_FINISHED, VilethornWoods_Ralts_SecondTrigger_5
# 65 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 66 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 67 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS2, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 68 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 69 "data//maps/VilethornWoods/scripts.pory"
	delay 24
# 70 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS2, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 71 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 75 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS2
# 76 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_2
# 77 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_3
# 81 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_SecondTrigger_Text_0
# 82 "data//maps/VilethornWoods/scripts.pory"
	release
# 84 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_SecondTrigger_2:
	end

VilethornWoods_Ralts_SecondTrigger_5:
	end


VilethornWoods_Ralts::
# 90 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 91 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 92 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS3, VilethornWoods_Ralts_Movement_0
# 93 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 94 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 95 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 96 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 97 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_Text_0
# 98 "data//maps/VilethornWoods/scripts.pory"
	release
# 100 "data//maps/VilethornWoods/scripts.pory"
	setwildbattle SPECIES_RALTS, 18
# 101 "data//maps/VilethornWoods/scripts.pory"
	dowildbattle
# 103 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_3
# 104 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_RALTS_FINISHED
# 105 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS3
# 107 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_EventScript_TriggerProf::
# 132 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_PROF, VilethornWoods_EventScript_TriggerProf_2
# 136 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 139 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 140 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 141 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 142 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_0
# 143 "data//maps/VilethornWoods/scripts.pory"
	release
# 144 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_Ralts_Movement_0
# 145 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 146 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 147 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_1
# 148 "data//maps/VilethornWoods/scripts.pory"
	release
# 151 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_EventScript_TriggerProf_Movement_1
# 152 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_1
# 153 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 154 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 155 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_2
# 156 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 157 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 158 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_3
# 159 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 160 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 161 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_4
# 162 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 163 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 164 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 165 "data//maps/VilethornWoods/scripts.pory"
	release
# 166 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_1
# 167 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 169 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 0, 0
# 170 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_PROF, 1, 0
# 171 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_GRUNT, 0, 0
# 172 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_PROF, 1, 0
# 174 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_PROF
# 175 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_EventScript_TriggerProf_2:
	end


VilethornWoods_Trainer_A::
# 186 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_A, VilethornWoods_Trainer_A_Text_0, VilethornWoods_Trainer_A_Text_1
# 187 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_A_Text_2
# 188 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_B::
# 193 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_B, VilethornWoods_Trainer_B_Text_0, VilethornWoods_Trainer_B_Text_1
# 194 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_B_Text_2
# 195 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_C::
# 200 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_C, VilethornWoods_Trainer_C_Text_0, VilethornWoods_Trainer_C_Text_1
# 201 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_C_Text_2
# 202 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_D::
# 207 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_D, VilethornWoods_Trainer_D_Text_0, VilethornWoods_Trainer_D_Text_1
# 208 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_D_Text_2
# 209 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_E::
# 214 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_E, VilethornWoods_Trainer_E_Text_0, VilethornWoods_Trainer_E_Text_1
# 215 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_E_Text_2
# 216 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F1::
# 221 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 222 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 223 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 224 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 225 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F2::
# 230 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 231 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 232 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 233 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 234 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_G::
# 239 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_G, VilethornWoods_Trainer_G_Text_0, VilethornWoods_Trainer_G_Text_1
# 240 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_G_Text_2
# 241 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_H::
# 246 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_H, VilethornWoods_Trainer_H_Text_0, VilethornWoods_Trainer_H_Text_1
# 247 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_H_Text_2
# 248 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_NPC1::
# 255 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 256 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 257 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC1_Text_0
# 258 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_NPC2::
# 263 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 264 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 266 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_MUSHROOMS, VilethornWoods_NPC2_2
# 269 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_1, MSGBOX_YESNO
# 271 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC2_5
# 290 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_7
VilethornWoods_NPC2_1:
# 293 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_NPC2_2:
# 267 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_0
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_5:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VilethornWoods_NPC2_8
# 287 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_6
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_8:
# 274 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_2
# 275 "data//maps/VilethornWoods/scripts.pory"
	release
# 277 "data//maps/VilethornWoods/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, VilethornWoods_NPC2_Text_3, VilethornWoods_NPC2_Text_4
# 278 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VilethornWoods_NPC2_12
# 281 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
VilethornWoods_NPC2_11:
# 284 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_MUSHROOMS
# 285 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_5
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_12:
# 279 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_TWISTEDSPOON
	goto VilethornWoods_NPC2_11


VilethornWoods_NPC3::
# 298 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 299 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 300 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_ITEM, VilethornWoods_NPC3_2
# 303 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_1
# 304 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 305 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_ITEM
VilethornWoods_NPC3_1:
# 308 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_NPC3_2:
# 301 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_0
	goto VilethornWoods_NPC3_1


# 40 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_0:
# 40 "data//maps/VilethornWoods/scripts.pory"
	face_up
# 40 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 43 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_1:
# 43 "data//maps/VilethornWoods/scripts.pory"
	fly_up
	step_end

# 92 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_Movement_0:
# 92 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 139 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_0:
# 139 "data//maps/VilethornWoods/scripts.pory"
	jump_in_place_right
	step_end

# 151 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_1:
# 151 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 151 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 151 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 151 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 151 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 151 "data//maps/VilethornWoods/scripts.pory"
	walk_up
	step_end

# 155 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_2:
# 155 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 155 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 155 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 155 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 155 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 155 "data//maps/VilethornWoods/scripts.pory"
	walk_down
	step_end

# 158 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_3:
# 158 "data//maps/VilethornWoods/scripts.pory"
	face_left
	step_end

# 161 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_4:
# 161 "data//maps/VilethornWoods/scripts.pory"
	face_right
	step_end

VilethornWoods_EventScript_NurseDemo_Text_0:
# 15 "data//maps/VilethornWoods/scripts.pory"
	.string "This area is closed for the demo.$"

VilethornWoods_NurseJoy_OnRoute_Text_0:
# 23 "data//maps/VilethornWoods/scripts.pory"
	.string "These woods are so creepy! I'm so glad\n"
	.string "CHANSEY is here with me.$"

VilethornWoods_Ralts_FirstTrigger_Text_0:
# 54 "data//maps/VilethornWoods/scripts.pory"
	.string "RALTS teleported away! It can't have\n"
	.string "gone far...$"

VilethornWoods_Ralts_SecondTrigger_Text_0:
# 81 "data//maps/VilethornWoods/scripts.pory"
	.string "RALTS teleported away again! It must\n"
	.string "be somewhere in this accursed forest...$"

VilethornWoods_Ralts_Text_0:
# 97 "data//maps/VilethornWoods/scripts.pory"
	.string "Aha! RALTS can't escape this time!$"

VilethornWoods_EventScript_TriggerProf_Text_0:
# 142 "data//maps/VilethornWoods/scripts.pory"
	.string "GRUNT: Move, Professor! Otherwise\n"
	.string "someone will see us.$"

VilethornWoods_EventScript_TriggerProf_Text_1:
# 147 "data//maps/VilethornWoods/scripts.pory"
	.string "PROF: Fine, fine! I'm moving. Don't\n"
	.string "manhandle me, you animal.$"

VilethornWoods_EventScript_TriggerProf_Text_2:
# 164 "data//maps/VilethornWoods/scripts.pory"
	.string "Must be a wild IMPIDIMP or something...$"

VilethornWoods_Trainer_A_Text_0:
# 186 "data//maps/VilethornWoods/scripts.pory"
	.string "PSYCHIC type Pokemon are my natural\n"
	.string "enemies! That's why I'm training here.$"

VilethornWoods_Trainer_A_Text_1:
# 186 "data//maps/VilethornWoods/scripts.pory"
	.string "I like PSYCHIC types more than you!$"

VilethornWoods_Trainer_A_Text_2:
# 187 "data//maps/VilethornWoods/scripts.pory"
	.string "I like training but I don't want to go to\n"
	.string "deep into this forest...$"

VilethornWoods_Trainer_B_Text_0:
# 193 "data//maps/VilethornWoods/scripts.pory"
	.string "I thought these woods would have BUG\n"
	.string "type Pokemon, but I can't find any. I'm\l"
	.string "so bummed! But beating you in battle\l"
	.string "will make me feel better!$"

VilethornWoods_Trainer_B_Text_1:
# 193 "data//maps/VilethornWoods/scripts.pory"
	.string "I don't feel better at all!$"

VilethornWoods_Trainer_B_Text_2:
# 194 "data//maps/VilethornWoods/scripts.pory"
	.string "This forest is weird...a dense fog, no\n"
	.string "BUG types...$"

VilethornWoods_Trainer_C_Text_0:
# 200 "data//maps/VilethornWoods/scripts.pory"
	.string "The sweet, delicious fog envelops\n"
	.string "us...we are one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_1:
# 200 "data//maps/VilethornWoods/scripts.pory"
	.string "You're not one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_2:
# 201 "data//maps/VilethornWoods/scripts.pory"
	.string "I want to go deeper...sink\n"
	.string "deeper...escape my real life...$"

VilethornWoods_Trainer_D_Text_0:
# 207 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a Pokemon Breeder. Like all\n"
	.string "breeders, we specialise in certain\l"
	.string "Pokemon forms. I'm a horse breeding\l"
	.string "expert!$"

VilethornWoods_Trainer_D_Text_1:
# 207 "data//maps/VilethornWoods/scripts.pory"
	.string "Well fought!$"

VilethornWoods_Trainer_D_Text_2:
# 208 "data//maps/VilethornWoods/scripts.pory"
	.string "I need to raise my horses to become\n"
	.string "stronger. Maybe some VITAMINS would\l"
	.string "help...$"

VilethornWoods_Trainer_E_Text_0:
# 214 "data//maps/VilethornWoods/scripts.pory"
	.string "Eek! These woods creep me out! I'm so\n"
	.string "scared of the DROWZEE - what if I get\l"
	.string "hypnotised?$"

VilethornWoods_Trainer_E_Text_1:
# 214 "data//maps/VilethornWoods/scripts.pory"
	.string "You creep me out too!$"

VilethornWoods_Trainer_E_Text_2:
# 215 "data//maps/VilethornWoods/scripts.pory"
	.string "I've been stuck here for hours. I need\n"
	.string "to get out of here...$"

VilethornWoods_Trainer_F1_Text_0:
# 223 "data//maps/VilethornWoods/scripts.pory"
	.string "We're on our way to Silversun City to\n"
	.string "interview the great Gloria! Get out of\l"
	.string "our way!$"

VilethornWoods_Trainer_F1_Text_1:
# 223 "data//maps/VilethornWoods/scripts.pory"
	.string "We lost!$"

VilethornWoods_Trainer_F1_Text_2:
# 224 "data//maps/VilethornWoods/scripts.pory"
	.string "If we can get an exclusive interview\n"
	.string "with her, itll be the scoop of the week!$"

VilethornWoods_Trainer_G_Text_0:
# 239 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm one of the best bug catchers\n"
	.string "around. I want to become a Gym Leader\l"
	.string "one day!$"

VilethornWoods_Trainer_G_Text_1:
# 239 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you a Gym Leader or something?$"

VilethornWoods_Trainer_G_Text_2:
# 240 "data//maps/VilethornWoods/scripts.pory"
	.string "As a Gym Leader to-be, my team needs to\n"
	.string "be able to handle a variety of threats.$"

VilethornWoods_Trainer_H_Text_0:
# 246 "data//maps/VilethornWoods/scripts.pory"
	.string "I wonder what's inside this\n"
	.string "house...maybe there's some loot!$"

VilethornWoods_Trainer_H_Text_1:
# 246 "data//maps/VilethornWoods/scripts.pory"
	.string "No loot for me!$"

VilethornWoods_Trainer_H_Text_2:
# 247 "data//maps/VilethornWoods/scripts.pory"
	.string "Fine, I'll just stand here and look while\n"
	.string "you loot everything...$"

VilethornWoods_NPC1_Text_0:
# 257 "data//maps/VilethornWoods/scripts.pory"
	.string "The MORELULL here in Vilethorn Woods\n"
	.string "release spores when in danger. That's\l"
	.string "what creates this fog.$"

VilethornWoods_NPC2_Text_0:
# 267 "data//maps/VilethornWoods/scripts.pory"
	.string "These mushrooms are really rare, you\n"
	.string "know?$"

VilethornWoods_NPC2_Text_1:
# 269 "data//maps/VilethornWoods/scripts.pory"
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
# 274 "data//maps/VilethornWoods/scripts.pory"
	.string "Perfect! This'll be a great addition to\n"
	.string "our pantry. Thank you! Now I must give\l"
	.string "you something in exchage...how about an\l"
	.string "old spood from the restaurant? Or\l"
	.string "maybe this seed I found earlier?$"

VilethornWoods_NPC2_Text_3:
# 277 "data//maps/VilethornWoods/scripts.pory"
	.string "TWISTEDSPOON$"

VilethornWoods_NPC2_Text_4:
# 277 "data//maps/VilethornWoods/scripts.pory"
	.string "MIRACLE SEED$"

VilethornWoods_NPC2_Text_5:
# 285 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over Cormoria. And if you\l"
	.string "ever visit Pelluca City, be sure to drop\l"
	.string "by our restaurant!$"

VilethornWoods_NPC2_Text_6:
# 287 "data//maps/VilethornWoods/scripts.pory"
	.string "Hey, you don't have any! Are you trying\n"
	.string "to trick me? The DROWZEE and MORELULL\l"
	.string "doing enough of that!$"

VilethornWoods_NPC2_Text_7:
# 290 "data//maps/VilethornWoods/scripts.pory"
	.string "Come back when you do!$"

VilethornWoods_NPC3_Text_0:
# 301 "data//maps/VilethornWoods/scripts.pory"
	.string "I am well and truly lost...$"

VilethornWoods_NPC3_Text_1:
# 303 "data//maps/VilethornWoods/scripts.pory"
	.string "I am well and truly lost...even with this\n"
	.string "SCOPE LENS, I can't see a thing! Why\l"
	.string "don't you have it?$"
