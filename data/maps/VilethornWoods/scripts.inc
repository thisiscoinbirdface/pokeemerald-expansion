# 1 "data//maps/VilethornWoods/scripts.pory"

# 2 "data//maps/VilethornWoods/scripts.pory"
    .set LOCALID_GRUNT, 18
# 3 "data//maps/VilethornWoods/scripts.pory"
    .set LOCALID_PROF, 17

VilethornWoods_MapScripts::
	.byte 0


VilethornWoods_EventScript_NurseDemo::
# 10 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 11 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 12 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_NurseDemo_Text_0
# 13 "data//maps/VilethornWoods/scripts.pory"
	releaseall
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
	applymovement 23, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 37 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 38 "data//maps/VilethornWoods/scripts.pory"
	delay 12
# 39 "data//maps/VilethornWoods/scripts.pory"
	applymovement 23, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 40 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 44 "data//maps/VilethornWoods/scripts.pory"
	removeobject 23
# 45 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_1
# 46 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_2
# 50 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_FirstTrigger_Text_0
# 51 "data//maps/VilethornWoods/scripts.pory"
	release
# 53 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_FirstTrigger_2:
	end

VilethornWoods_Ralts_FirstTrigger_5:
	end


VilethornWoods_Ralts_SecondTrigger::
# 58 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_HIDE_VILETHORN_RALTS_2, VilethornWoods_Ralts_SecondTrigger_2
# 59 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_RALTS_FINISHED, VilethornWoods_Ralts_SecondTrigger_5
# 61 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 62 "data//maps/VilethornWoods/scripts.pory"
	applymovement 23, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 63 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 64 "data//maps/VilethornWoods/scripts.pory"
	delay 12
# 65 "data//maps/VilethornWoods/scripts.pory"
	applymovement 23, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 66 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 70 "data//maps/VilethornWoods/scripts.pory"
	removeobject 23
# 71 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_2
# 72 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_3
# 76 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_SecondTrigger_Text_0
# 77 "data//maps/VilethornWoods/scripts.pory"
	release
# 79 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_SecondTrigger_2:
	end

VilethornWoods_Ralts_SecondTrigger_5:
	end


VilethornWoods_Ralts::
# 85 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 86 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 87 "data//maps/VilethornWoods/scripts.pory"
	applymovement 23, VilethornWoods_Ralts_Movement_0
# 88 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 89 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 90 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 91 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_Text_0
# 92 "data//maps/VilethornWoods/scripts.pory"
	release
# 94 "data//maps/VilethornWoods/scripts.pory"
	setwildbattle SPECIES_RALTS, 10
# 95 "data//maps/VilethornWoods/scripts.pory"
	dowildbattle
# 97 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_3
# 98 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_RALTS_FINISHED
# 99 "data//maps/VilethornWoods/scripts.pory"
	removeobject 23
# 101 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_EventScript_TriggerProf::
# 126 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_PROF, VilethornWoods_EventScript_TriggerProf_2
# 130 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 133 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 134 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 135 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 136 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_0
# 137 "data//maps/VilethornWoods/scripts.pory"
	release
# 138 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_Ralts_Movement_0
# 139 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 140 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 141 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_1
# 142 "data//maps/VilethornWoods/scripts.pory"
	release
# 145 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_EventScript_TriggerProf_Movement_1
# 146 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_1
# 147 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 148 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 149 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_2
# 150 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 151 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 152 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_3
# 153 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 154 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 155 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_4
# 156 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 157 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 158 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 159 "data//maps/VilethornWoods/scripts.pory"
	release
# 160 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_1
# 161 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 163 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 0, 0
# 164 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_PROF, 1, 0
# 165 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_GRUNT, 0, 0
# 166 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_PROF, 1, 0
# 168 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_PROF
# 169 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_EventScript_TriggerProf_2:
	end


VilethornWoods_Trainer_A::
# 180 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_A, VilethornWoods_Trainer_A_Text_0, VilethornWoods_Trainer_A_Text_1
# 181 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_A_Text_2
# 182 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_B::
# 187 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_B, VilethornWoods_Trainer_B_Text_0, VilethornWoods_Trainer_B_Text_1
# 188 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_B_Text_2
# 189 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_C::
# 194 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_C, VilethornWoods_Trainer_C_Text_0, VilethornWoods_Trainer_C_Text_1
# 195 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_C_Text_2
# 196 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_D::
# 201 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_D, VilethornWoods_Trainer_D_Text_0, VilethornWoods_Trainer_D_Text_1
# 202 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_D_Text_2
# 203 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_E::
# 208 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_E, VilethornWoods_Trainer_E_Text_0, VilethornWoods_Trainer_E_Text_1
# 209 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_E_Text_2
# 210 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F1::
# 215 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 216 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 217 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 218 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 219 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F2::
# 224 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 225 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 226 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 227 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F2_Text_0
# 228 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_G::
# 233 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_G, VilethornWoods_Trainer_G_Text_0, VilethornWoods_Trainer_G_Text_1
# 234 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_G_Text_2
# 235 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_H::
# 240 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_H, VilethornWoods_Trainer_H_Text_0, VilethornWoods_Trainer_H_Text_1
# 241 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_H_Text_2
# 242 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_NPC1::
# 249 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 250 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 251 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC1_Text_0
# 252 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_NPC2::
# 257 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 258 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 260 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_MUSHROOMS, VilethornWoods_NPC2_2
# 263 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_1, MSGBOX_YESNO
# 265 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC2_5
# 277 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_5
VilethornWoods_NPC2_1:
# 280 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_NPC2_2:
# 261 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_0
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_5:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VilethornWoods_NPC2_8
# 274 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_4
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_8:
# 268 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_2
# 269 "data//maps/VilethornWoods/scripts.pory"
	release
# 270 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_TWISTED_SPOON
# 271 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_MUSHROOMS
# 272 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_3
	goto VilethornWoods_NPC2_1


VilethornWoods_NPC3::
# 285 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 286 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 287 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_ITEM, VilethornWoods_NPC3_2
# 290 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_1
# 291 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 292 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_ITEM
VilethornWoods_NPC3_1:
# 295 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_NPC3_2:
# 288 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_0
	goto VilethornWoods_NPC3_1


# 36 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_0:
# 36 "data//maps/VilethornWoods/scripts.pory"
	face_up
# 36 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 39 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_1:
# 39 "data//maps/VilethornWoods/scripts.pory"
	fly_up
	step_end

# 87 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_Movement_0:
# 87 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 133 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_0:
# 133 "data//maps/VilethornWoods/scripts.pory"
	jump_in_place_right
	step_end

# 145 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_1:
# 145 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 145 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 145 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 145 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 145 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 145 "data//maps/VilethornWoods/scripts.pory"
	walk_up
	step_end

# 149 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_2:
# 149 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 149 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 149 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 149 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 149 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 149 "data//maps/VilethornWoods/scripts.pory"
	walk_down
	step_end

# 152 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_3:
# 152 "data//maps/VilethornWoods/scripts.pory"
	face_left
	step_end

# 155 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_4:
# 155 "data//maps/VilethornWoods/scripts.pory"
	face_right
	step_end

VilethornWoods_EventScript_NurseDemo_Text_0:
# 12 "data//maps/VilethornWoods/scripts.pory"
	.string "This area is closed for the demo.$"

VilethornWoods_NurseJoy_OnRoute_Text_0:
# 20 "data//maps/VilethornWoods/scripts.pory"
	.string "These woods are so creepy! I'm so glad\n"
	.string "CHANSEY is here with me.$"

VilethornWoods_Ralts_FirstTrigger_Text_0:
# 50 "data//maps/VilethornWoods/scripts.pory"
	.string "RALTS teleported away! It can't have\n"
	.string "gone far...$"

VilethornWoods_Ralts_SecondTrigger_Text_0:
# 76 "data//maps/VilethornWoods/scripts.pory"
	.string "RALTS teleported away again! It must\n"
	.string "be somewhere in this accursed forest...$"

VilethornWoods_Ralts_Text_0:
# 91 "data//maps/VilethornWoods/scripts.pory"
	.string "Aha! RALTS can't escape this time!$"

VilethornWoods_EventScript_TriggerProf_Text_0:
# 136 "data//maps/VilethornWoods/scripts.pory"
	.string "GRUNT: Move, Professor! Otherwise\n"
	.string "someone will see us.$"

VilethornWoods_EventScript_TriggerProf_Text_1:
# 141 "data//maps/VilethornWoods/scripts.pory"
	.string "PROF: Fine, fine! I'm moving. Don't\n"
	.string "manhandle me, you animal.$"

VilethornWoods_EventScript_TriggerProf_Text_2:
# 158 "data//maps/VilethornWoods/scripts.pory"
	.string "Must be a wild IMPIDIMP or something...$"

VilethornWoods_Trainer_A_Text_0:
# 180 "data//maps/VilethornWoods/scripts.pory"
	.string "PSYCHIC type {PKMN} are my natural\n"
	.string "enemies! That's why I'm training here.$"

VilethornWoods_Trainer_A_Text_1:
# 180 "data//maps/VilethornWoods/scripts.pory"
	.string "I like PSYCHIC types more than you!$"

VilethornWoods_Trainer_A_Text_2:
# 181 "data//maps/VilethornWoods/scripts.pory"
	.string "I like training but I don't want to go to\n"
	.string "deep into this forest...$"

VilethornWoods_Trainer_B_Text_0:
# 187 "data//maps/VilethornWoods/scripts.pory"
	.string "I thought these woods would have BUG\n"
	.string "type {PKMN}, but I can't find any. I'm so\l"
	.string "bummed! But beating you in battle will\l"
	.string "make me feel better!$"

VilethornWoods_Trainer_B_Text_1:
# 187 "data//maps/VilethornWoods/scripts.pory"
	.string "I don't feel better at all!$"

VilethornWoods_Trainer_B_Text_2:
# 188 "data//maps/VilethornWoods/scripts.pory"
	.string "This forest is weird...a dense fog, no\n"
	.string "BUG types...$"

VilethornWoods_Trainer_C_Text_0:
# 194 "data//maps/VilethornWoods/scripts.pory"
	.string "The sweet, delicious fog envelops\n"
	.string "us...we are one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_1:
# 194 "data//maps/VilethornWoods/scripts.pory"
	.string "You're not one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_2:
# 195 "data//maps/VilethornWoods/scripts.pory"
	.string "I want to go deeper...sink\n"
	.string "deeper...escape my real life...$"

VilethornWoods_Trainer_D_Text_0:
# 201 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a {PKMN} Breeder. Like all breeders, we\n"
	.string "specialise in certain {PKMN} forms. I'm a\l"
	.string "horse breeding expert!$"

VilethornWoods_Trainer_D_Text_1:
# 201 "data//maps/VilethornWoods/scripts.pory"
	.string "Well fought!$"

VilethornWoods_Trainer_D_Text_2:
# 202 "data//maps/VilethornWoods/scripts.pory"
	.string "I need to raise my horses to become\n"
	.string "stronger. Maybe some VITAMINS would\l"
	.string "help...$"

VilethornWoods_Trainer_E_Text_0:
# 208 "data//maps/VilethornWoods/scripts.pory"
	.string "Eek! These woods creep me out! I'm so\n"
	.string "scared of the DROWZEE - what if I get\l"
	.string "hypnotised?$"

VilethornWoods_Trainer_E_Text_1:
# 208 "data//maps/VilethornWoods/scripts.pory"
	.string "You creep me out too!$"

VilethornWoods_Trainer_E_Text_2:
# 209 "data//maps/VilethornWoods/scripts.pory"
	.string "I've been stuck here for hours. I need\n"
	.string "to get out of here...$"

VilethornWoods_Trainer_F1_Text_0:
# 217 "data//maps/VilethornWoods/scripts.pory"
	.string "We bonded over our love for battling! Do\n"
	.string "you want to battle?$"

VilethornWoods_Trainer_F1_Text_1:
# 217 "data//maps/VilethornWoods/scripts.pory"
	.string "We lost!$"

VilethornWoods_Trainer_F1_Text_2:
# 218 "data//maps/VilethornWoods/scripts.pory"
	.string "I met her at a {PKMN} Breeder festival.\n"
	.string "There was a battle competition and we\l"
	.string "were the two finalists!$"

VilethornWoods_Trainer_F2_Text_0:
# 227 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe one day you'll find your true love\n"
	.string "during a battle too!$"

VilethornWoods_Trainer_G_Text_0:
# 233 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm one of the best bug catchers\n"
	.string "around. I want to become a Gym Leader\l"
	.string "one day!$"

VilethornWoods_Trainer_G_Text_1:
# 233 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you a Gym Leader or something?$"

VilethornWoods_Trainer_G_Text_2:
# 234 "data//maps/VilethornWoods/scripts.pory"
	.string "As a Gym Leader to-be, my team needs to\n"
	.string "be able to handle a variety of threats.$"

VilethornWoods_Trainer_H_Text_0:
# 240 "data//maps/VilethornWoods/scripts.pory"
	.string "I wonder what's inside this\n"
	.string "house...maybe there's some loot!$"

VilethornWoods_Trainer_H_Text_1:
# 240 "data//maps/VilethornWoods/scripts.pory"
	.string "No loot for me!$"

VilethornWoods_Trainer_H_Text_2:
# 241 "data//maps/VilethornWoods/scripts.pory"
	.string "Fine, I'll just stand here and look while\n"
	.string "you loot everything...$"

VilethornWoods_NPC1_Text_0:
# 251 "data//maps/VilethornWoods/scripts.pory"
	.string "The MORELULL here in VILETHORN WOODS\n"
	.string "release spores when in danger. That's\l"
	.string "what creates this fog.$"

VilethornWoods_NPC2_Text_0:
# 261 "data//maps/VilethornWoods/scripts.pory"
	.string "These mushrooms are really rare, you\n"
	.string "know?$"

VilethornWoods_NPC2_Text_1:
# 263 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a traveling chef! While I usually\n"
	.string "cook at the PELLUCA RESTAURANT, I'm\l"
	.string "here to collect mushrooms to create\l"
	.string "new recipes...but I can only find TINY\l"
	.string "MUSHROOMs! Say, why don't you help me?\l"
	.string "If you can get me a BIG MUSHROOM, I'll\l"
	.string "find something to give you in exchange!\p"
	.string "Have you got a BIG MUSHROOM?$"

VilethornWoods_NPC2_Text_2:
# 268 "data//maps/VilethornWoods/scripts.pory"
	.string "Perfect! This'll be a great addition to\n"
	.string "our pantry. Thank you! Now I must give\l"
	.string "you something in exchage...$"

VilethornWoods_NPC2_Text_3:
# 272 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over CORMORIA. And if you\l"
	.string "ever visit PELLUCA CITY, be sure to\l"
	.string "drop by our restaurant!$"

VilethornWoods_NPC2_Text_4:
# 274 "data//maps/VilethornWoods/scripts.pory"
	.string "Hey, you don't have any! Are you trying\n"
	.string "to trick me? The DROWZEE and MORELULL\l"
	.string "doing enough of that!$"

VilethornWoods_NPC2_Text_5:
# 277 "data//maps/VilethornWoods/scripts.pory"
	.string "Come back when you do!$"

VilethornWoods_NPC3_Text_0:
# 288 "data//maps/VilethornWoods/scripts.pory"
	.string "I am well and truly lost...$"

VilethornWoods_NPC3_Text_1:
# 290 "data//maps/VilethornWoods/scripts.pory"
	.string "I am well and truly lost...even with this\n"
	.string "SCOPE LENS, I can't see a thing! Why\l"
	.string "don't you have it?$"
