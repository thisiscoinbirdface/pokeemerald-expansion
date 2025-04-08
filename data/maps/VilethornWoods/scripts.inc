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
	applymovement LOCALID_RALTS1, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 40 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 41 "data//maps/VilethornWoods/scripts.pory"
	delay 12
# 42 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS1, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 43 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 47 "data//maps/VilethornWoods/scripts.pory"
	removeobject 20
# 48 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_1
# 49 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_2
# 53 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_FirstTrigger_Text_0
# 54 "data//maps/VilethornWoods/scripts.pory"
	release
# 56 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_FirstTrigger_2:
	end

VilethornWoods_Ralts_FirstTrigger_5:
	end


VilethornWoods_Ralts_SecondTrigger::
# 61 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_HIDE_VILETHORN_RALTS_2, VilethornWoods_Ralts_SecondTrigger_2
# 62 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_RALTS_FINISHED, VilethornWoods_Ralts_SecondTrigger_5
# 64 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 65 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS2, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 66 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 67 "data//maps/VilethornWoods/scripts.pory"
	delay 12
# 68 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS2, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 69 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 73 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS2
# 74 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_2
# 75 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_3
# 79 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_SecondTrigger_Text_0
# 80 "data//maps/VilethornWoods/scripts.pory"
	release
# 82 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_SecondTrigger_2:
	end

VilethornWoods_Ralts_SecondTrigger_5:
	end


VilethornWoods_Ralts::
# 88 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 89 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 90 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS3, VilethornWoods_Ralts_Movement_0
# 91 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 92 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 93 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 94 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 95 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_Text_0
# 96 "data//maps/VilethornWoods/scripts.pory"
	release
# 98 "data//maps/VilethornWoods/scripts.pory"
	setwildbattle SPECIES_RALTS, 18
# 99 "data//maps/VilethornWoods/scripts.pory"
	dowildbattle
# 101 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_3
# 102 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_RALTS_FINISHED
# 103 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS3
# 105 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_EventScript_TriggerProf::
# 130 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_PROF, VilethornWoods_EventScript_TriggerProf_2
# 134 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 137 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 138 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 139 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 140 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_0
# 141 "data//maps/VilethornWoods/scripts.pory"
	release
# 142 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_Ralts_Movement_0
# 143 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 144 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 145 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_1
# 146 "data//maps/VilethornWoods/scripts.pory"
	release
# 149 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_EventScript_TriggerProf_Movement_1
# 150 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_1
# 151 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 152 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 153 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_2
# 154 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 155 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 156 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_3
# 157 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 158 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 159 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_4
# 160 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 161 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 162 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 163 "data//maps/VilethornWoods/scripts.pory"
	release
# 164 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_1
# 165 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 167 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 0, 0
# 168 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_PROF, 1, 0
# 169 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_GRUNT, 0, 0
# 170 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_PROF, 1, 0
# 172 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_PROF
# 173 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_EventScript_TriggerProf_2:
	end


VilethornWoods_Trainer_A::
# 184 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_A, VilethornWoods_Trainer_A_Text_0, VilethornWoods_Trainer_A_Text_1
# 185 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_A_Text_2
# 186 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_B::
# 191 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_B, VilethornWoods_Trainer_B_Text_0, VilethornWoods_Trainer_B_Text_1
# 192 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_B_Text_2
# 193 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_C::
# 198 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_C, VilethornWoods_Trainer_C_Text_0, VilethornWoods_Trainer_C_Text_1
# 199 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_C_Text_2
# 200 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_D::
# 205 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_D, VilethornWoods_Trainer_D_Text_0, VilethornWoods_Trainer_D_Text_1
# 206 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_D_Text_2
# 207 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_E::
# 212 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_E, VilethornWoods_Trainer_E_Text_0, VilethornWoods_Trainer_E_Text_1
# 213 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_E_Text_2
# 214 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F1::
# 219 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 220 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 221 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 222 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 223 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F2::
# 228 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 229 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 230 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 231 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F2_Text_0
# 232 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_G::
# 237 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_G, VilethornWoods_Trainer_G_Text_0, VilethornWoods_Trainer_G_Text_1
# 238 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_G_Text_2
# 239 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_H::
# 244 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_H, VilethornWoods_Trainer_H_Text_0, VilethornWoods_Trainer_H_Text_1
# 245 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_H_Text_2
# 246 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_NPC1::
# 253 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 254 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 255 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC1_Text_0
# 256 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_NPC2::
# 261 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 262 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 264 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_MUSHROOMS, VilethornWoods_NPC2_2
# 267 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_1, MSGBOX_YESNO
# 269 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC2_5
# 288 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_7
VilethornWoods_NPC2_1:
# 291 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_NPC2_2:
# 265 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_0
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_5:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VilethornWoods_NPC2_8
# 285 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_6
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_8:
# 272 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_2
# 273 "data//maps/VilethornWoods/scripts.pory"
	release
# 275 "data//maps/VilethornWoods/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, VilethornWoods_NPC2_Text_3, VilethornWoods_NPC2_Text_4
# 276 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VilethornWoods_NPC2_12
# 279 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
VilethornWoods_NPC2_11:
# 282 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_MUSHROOMS
# 283 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_5
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_12:
# 277 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_TWISTEDSPOON
	goto VilethornWoods_NPC2_11


VilethornWoods_NPC3::
# 296 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 297 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 298 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_ITEM, VilethornWoods_NPC3_2
# 301 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_1
# 302 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 303 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_ITEM
VilethornWoods_NPC3_1:
# 306 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_NPC3_2:
# 299 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_0
	goto VilethornWoods_NPC3_1


# 39 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_0:
# 39 "data//maps/VilethornWoods/scripts.pory"
	face_up
# 39 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 42 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_1:
# 42 "data//maps/VilethornWoods/scripts.pory"
	fly_up
	step_end

# 90 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_Movement_0:
# 90 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 137 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_0:
# 137 "data//maps/VilethornWoods/scripts.pory"
	jump_in_place_right
	step_end

# 149 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_1:
# 149 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 149 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 149 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 149 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 149 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 149 "data//maps/VilethornWoods/scripts.pory"
	walk_up
	step_end

# 153 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_2:
# 153 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 153 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 153 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 153 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 153 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 153 "data//maps/VilethornWoods/scripts.pory"
	walk_down
	step_end

# 156 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_3:
# 156 "data//maps/VilethornWoods/scripts.pory"
	face_left
	step_end

# 159 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_4:
# 159 "data//maps/VilethornWoods/scripts.pory"
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
# 53 "data//maps/VilethornWoods/scripts.pory"
	.string "RALTS teleported away! It can't have\n"
	.string "gone far...$"

VilethornWoods_Ralts_SecondTrigger_Text_0:
# 79 "data//maps/VilethornWoods/scripts.pory"
	.string "RALTS teleported away again! It must\n"
	.string "be somewhere in this accursed forest...$"

VilethornWoods_Ralts_Text_0:
# 95 "data//maps/VilethornWoods/scripts.pory"
	.string "Aha! RALTS can't escape this time!$"

VilethornWoods_EventScript_TriggerProf_Text_0:
# 140 "data//maps/VilethornWoods/scripts.pory"
	.string "GRUNT: Move, Professor! Otherwise\n"
	.string "someone will see us.$"

VilethornWoods_EventScript_TriggerProf_Text_1:
# 145 "data//maps/VilethornWoods/scripts.pory"
	.string "PROF: Fine, fine! I'm moving. Don't\n"
	.string "manhandle me, you animal.$"

VilethornWoods_EventScript_TriggerProf_Text_2:
# 162 "data//maps/VilethornWoods/scripts.pory"
	.string "Must be a wild IMPIDIMP or something...$"

VilethornWoods_Trainer_A_Text_0:
# 184 "data//maps/VilethornWoods/scripts.pory"
	.string "PSYCHIC type Pokemon are my natural\n"
	.string "enemies! That's why I'm training here.$"

VilethornWoods_Trainer_A_Text_1:
# 184 "data//maps/VilethornWoods/scripts.pory"
	.string "I like PSYCHIC types more than you!$"

VilethornWoods_Trainer_A_Text_2:
# 185 "data//maps/VilethornWoods/scripts.pory"
	.string "I like training but I don't want to go to\n"
	.string "deep into this forest...$"

VilethornWoods_Trainer_B_Text_0:
# 191 "data//maps/VilethornWoods/scripts.pory"
	.string "I thought these woods would have BUG\n"
	.string "type Pokemon, but I can't find any. I'm\l"
	.string "so bummed! But beating you in battle\l"
	.string "will make me feel better!$"

VilethornWoods_Trainer_B_Text_1:
# 191 "data//maps/VilethornWoods/scripts.pory"
	.string "I don't feel better at all!$"

VilethornWoods_Trainer_B_Text_2:
# 192 "data//maps/VilethornWoods/scripts.pory"
	.string "This forest is weird...a dense fog, no\n"
	.string "BUG types...$"

VilethornWoods_Trainer_C_Text_0:
# 198 "data//maps/VilethornWoods/scripts.pory"
	.string "The sweet, delicious fog envelops\n"
	.string "us...we are one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_1:
# 198 "data//maps/VilethornWoods/scripts.pory"
	.string "You're not one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_2:
# 199 "data//maps/VilethornWoods/scripts.pory"
	.string "I want to go deeper...sink\n"
	.string "deeper...escape my real life...$"

VilethornWoods_Trainer_D_Text_0:
# 205 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a Pokemon Breeder. Like all\n"
	.string "breeders, we specialise in certain\l"
	.string "Pokemon forms. I'm a horse breeding\l"
	.string "expert!$"

VilethornWoods_Trainer_D_Text_1:
# 205 "data//maps/VilethornWoods/scripts.pory"
	.string "Well fought!$"

VilethornWoods_Trainer_D_Text_2:
# 206 "data//maps/VilethornWoods/scripts.pory"
	.string "I need to raise my horses to become\n"
	.string "stronger. Maybe some VITAMINS would\l"
	.string "help...$"

VilethornWoods_Trainer_E_Text_0:
# 212 "data//maps/VilethornWoods/scripts.pory"
	.string "Eek! These woods creep me out! I'm so\n"
	.string "scared of the DROWZEE - what if I get\l"
	.string "hypnotised?$"

VilethornWoods_Trainer_E_Text_1:
# 212 "data//maps/VilethornWoods/scripts.pory"
	.string "You creep me out too!$"

VilethornWoods_Trainer_E_Text_2:
# 213 "data//maps/VilethornWoods/scripts.pory"
	.string "I've been stuck here for hours. I need\n"
	.string "to get out of here...$"

VilethornWoods_Trainer_F1_Text_0:
# 221 "data//maps/VilethornWoods/scripts.pory"
	.string "We bonded over our love for battling! Do\n"
	.string "you want to battle?$"

VilethornWoods_Trainer_F1_Text_1:
# 221 "data//maps/VilethornWoods/scripts.pory"
	.string "We lost!$"

VilethornWoods_Trainer_F1_Text_2:
# 222 "data//maps/VilethornWoods/scripts.pory"
	.string "I met her at a Pokemon Breeder\n"
	.string "festival. There was a battle\l"
	.string "competition and we were the two\l"
	.string "finalists!$"

VilethornWoods_Trainer_F2_Text_0:
# 231 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe one day you'll find your true love\n"
	.string "during a battle too!$"

VilethornWoods_Trainer_G_Text_0:
# 237 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm one of the best bug catchers\n"
	.string "around. I want to become a Gym Leader\l"
	.string "one day!$"

VilethornWoods_Trainer_G_Text_1:
# 237 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you a Gym Leader or something?$"

VilethornWoods_Trainer_G_Text_2:
# 238 "data//maps/VilethornWoods/scripts.pory"
	.string "As a Gym Leader to-be, my team needs to\n"
	.string "be able to handle a variety of threats.$"

VilethornWoods_Trainer_H_Text_0:
# 244 "data//maps/VilethornWoods/scripts.pory"
	.string "I wonder what's inside this\n"
	.string "house...maybe there's some loot!$"

VilethornWoods_Trainer_H_Text_1:
# 244 "data//maps/VilethornWoods/scripts.pory"
	.string "No loot for me!$"

VilethornWoods_Trainer_H_Text_2:
# 245 "data//maps/VilethornWoods/scripts.pory"
	.string "Fine, I'll just stand here and look while\n"
	.string "you loot everything...$"

VilethornWoods_NPC1_Text_0:
# 255 "data//maps/VilethornWoods/scripts.pory"
	.string "The MORELULL here in Vilethorn Woods\n"
	.string "release spores when in danger. That's\l"
	.string "what creates this fog.$"

VilethornWoods_NPC2_Text_0:
# 265 "data//maps/VilethornWoods/scripts.pory"
	.string "These mushrooms are really rare, you\n"
	.string "know?$"

VilethornWoods_NPC2_Text_1:
# 267 "data//maps/VilethornWoods/scripts.pory"
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
# 272 "data//maps/VilethornWoods/scripts.pory"
	.string "Perfect! This'll be a great addition to\n"
	.string "our pantry. Thank you! Now I must give\l"
	.string "you something in exchage...how about an\l"
	.string "old spood from the restaurant? Or\l"
	.string "maybe this seed I found earlier?$"

VilethornWoods_NPC2_Text_3:
# 275 "data//maps/VilethornWoods/scripts.pory"
	.string "TWISTEDSPOON$"

VilethornWoods_NPC2_Text_4:
# 275 "data//maps/VilethornWoods/scripts.pory"
	.string "MIRACLE SEED$"

VilethornWoods_NPC2_Text_5:
# 283 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over Cormoria. And if you\l"
	.string "ever visit Pelluca City, be sure to drop\l"
	.string "by our restaurant!$"

VilethornWoods_NPC2_Text_6:
# 285 "data//maps/VilethornWoods/scripts.pory"
	.string "Hey, you don't have any! Are you trying\n"
	.string "to trick me? The DROWZEE and MORELULL\l"
	.string "doing enough of that!$"

VilethornWoods_NPC2_Text_7:
# 288 "data//maps/VilethornWoods/scripts.pory"
	.string "Come back when you do!$"

VilethornWoods_NPC3_Text_0:
# 299 "data//maps/VilethornWoods/scripts.pory"
	.string "I am well and truly lost...$"

VilethornWoods_NPC3_Text_1:
# 301 "data//maps/VilethornWoods/scripts.pory"
	.string "I am well and truly lost...even with this\n"
	.string "SCOPE LENS, I can't see a thing! Why\l"
	.string "don't you have it?$"
