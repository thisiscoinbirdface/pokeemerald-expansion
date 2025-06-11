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
# 7 "data//maps/VilethornWoods/scripts.pory"
    .set LOCALID_CELEBI, 31

VilethornWoods_MapScripts::
# 11 "data//maps/VilethornWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VilethornWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

VilethornWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_SetLayout
	return


VilethornWoods_SetLayout::
# 16 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_CELEBI, 2
	goto_if_eq VilethornWoods_SetLayout_1
	return

VilethornWoods_SetLayout_1:
# 17 "data//maps/VilethornWoods/scripts.pory"
	setmaplayoutindex LAYOUT_VILETHORN_MANSION
	return


VilethornWoods_EventScript_NurseDemo::
# 23 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_NurseDemo_Text_0, MSGBOX_NPC
	end


VilethornWoods_NurseJoy_OnRoute::
# 28 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 29 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 30 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NurseJoy_OnRoute_Text_0
# 31 "data//maps/VilethornWoods/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 32 "data//maps/VilethornWoods/scripts.pory"
	delay 30
# 33 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Ralts_FirstTrigger::
# 51 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_HIDE_VILETHORN_RALTS_1, VilethornWoods_Ralts_FirstTrigger_2
# 52 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_RALTS_FINISHED, VilethornWoods_Ralts_FirstTrigger_5
# 54 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 55 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 56 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS1, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 57 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 58 "data//maps/VilethornWoods/scripts.pory"
	delay 24
# 59 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS1, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 60 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 64 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS1
# 65 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_1
# 66 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_2
# 70 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_FirstTrigger_Text_0
# 71 "data//maps/VilethornWoods/scripts.pory"
	release
# 73 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_FirstTrigger_2:
	end

VilethornWoods_Ralts_FirstTrigger_5:
	end


VilethornWoods_Ralts_SecondTrigger::
# 78 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_HIDE_VILETHORN_RALTS_2, VilethornWoods_Ralts_SecondTrigger_2
# 79 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_RALTS_FINISHED, VilethornWoods_Ralts_SecondTrigger_5
# 81 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 82 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 83 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS2, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 84 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 85 "data//maps/VilethornWoods/scripts.pory"
	delay 24
# 86 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS2, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 87 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 91 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS2
# 92 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_2
# 93 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_3
# 97 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_SecondTrigger_Text_0
# 98 "data//maps/VilethornWoods/scripts.pory"
	release
# 100 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_SecondTrigger_2:
	end

VilethornWoods_Ralts_SecondTrigger_5:
	end


VilethornWoods_Ralts::
# 106 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 107 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 108 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS3, VilethornWoods_Ralts_Movement_0
# 109 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 110 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 111 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 112 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 113 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_Text_0
# 114 "data//maps/VilethornWoods/scripts.pory"
	release
# 116 "data//maps/VilethornWoods/scripts.pory"
	setwildbattle SPECIES_RALTS, 18
# 117 "data//maps/VilethornWoods/scripts.pory"
	dowildbattle
# 119 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_3
# 120 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_RALTS_FINISHED
# 121 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS3
# 123 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_EventScript_TriggerProf::
# 148 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_PROF, VilethornWoods_EventScript_TriggerProf_2
# 152 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 155 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_Ralts_Movement_0
# 156 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 157 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 158 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 159 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_1
# 160 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 161 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 162 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_3
# 163 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 164 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 165 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_4
# 166 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 167 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 168 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_5
# 169 "data//maps/VilethornWoods/scripts.pory"
	release
# 172 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_EventScript_TriggerProf_Movement_0
# 173 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 174 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 175 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 176 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_1
# 177 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 178 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 179 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_2
# 180 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 181 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 182 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_3
# 183 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 184 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 185 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 186 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_6
# 187 "data//maps/VilethornWoods/scripts.pory"
	release
# 188 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 189 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 191 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 0, 0
# 192 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_PROF, 1, 0
# 193 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_GRUNT, 0, 0
# 194 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_PROF, 1, 0
# 196 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_PROF
# 197 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_EventScript_TriggerProf_2:
	end


VilethornWoods_Trainer_A::
# 208 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_A, VilethornWoods_Trainer_A_Text_0, VilethornWoods_Trainer_A_Text_1
# 209 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_A_Text_2
# 210 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_B::
# 215 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_B, VilethornWoods_Trainer_B_Text_0, VilethornWoods_Trainer_B_Text_1
# 216 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_B_Text_2
# 217 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_C::
# 222 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_C, VilethornWoods_Trainer_C_Text_0, VilethornWoods_Trainer_C_Text_1
# 223 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_C_Text_2
# 224 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_D::
# 229 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_D, VilethornWoods_Trainer_D_Text_0, VilethornWoods_Trainer_D_Text_1
# 230 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_D_Text_2
# 231 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_E::
# 236 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_E, VilethornWoods_Trainer_E_Text_0, VilethornWoods_Trainer_E_Text_1
# 237 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_E_Text_2
# 238 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F1::
# 243 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 244 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 245 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 246 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 247 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F2::
# 252 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 253 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 254 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 255 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 256 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_G::
# 261 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_G, VilethornWoods_Trainer_G_Text_0, VilethornWoods_Trainer_G_Text_1
# 262 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_G_Text_2
# 263 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_H::
# 268 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_H, VilethornWoods_Trainer_H_Text_0, VilethornWoods_Trainer_H_Text_1
# 269 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_H_Text_2
# 270 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_NPC1::
# 277 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC1_Text_0, MSGBOX_NPC
	end


VilethornWoods_NPC2::
# 283 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 284 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 286 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_MUSHROOMS, VilethornWoods_NPC2_2
# 290 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 291 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_2, MSGBOX_YESNO
# 293 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC2_5
# 307 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 308 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_5
VilethornWoods_NPC2_1:
# 311 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_NPC2_2:
# 287 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 288 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_1
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_5:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VilethornWoods_NPC2_8
# 303 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 304 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_4
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_8:
# 296 "data//maps/VilethornWoods/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 297 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 298 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_3
# 300 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_Reward
	goto VilethornWoods_NPC2_1


VilethornWoods_Cook_Reward::
# 316 "data//maps/VilethornWoods/scripts.pory"
	message VilethornWoods_Cook_Reward_Text_0
# 317 "data//maps/VilethornWoods/scripts.pory"
	waitmessage
# 318 "data//maps/VilethornWoods/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, VilethornWoods_Cook_Reward_Text_1, VilethornWoods_Cook_Reward_Text_2
# 319 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VilethornWoods_Cook_Reward_2
VilethornWoods_Cook_Reward_1:
# 320 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Cook_Reward_5
VilethornWoods_Cook_Reward_4:
# 321 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_Reward_Give
	return

VilethornWoods_Cook_Reward_2:
# 319 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8006, ITEM_TWISTEDSPOON
	goto VilethornWoods_Cook_Reward_1

VilethornWoods_Cook_Reward_5:
# 320 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8006, ITEM_ROSE_INCENSE
	goto VilethornWoods_Cook_Reward_4


VilethornWoods_Cook_Reward_Give::
# 325 "data//maps/VilethornWoods/scripts.pory"
	showitemdescription
# 326 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Cook_Reward_Give_Text_0, MSGBOX_YESNO
# 327 "data//maps/VilethornWoods/scripts.pory"
	hideitemdescription
# 328 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Cook_Reward_Give_1
# 329 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_Reward
	return

VilethornWoods_Cook_Reward_Give_1:
# 328 "data//maps/VilethornWoods/scripts.pory"
	giveitem VAR_0x8006
# 328 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_RewardEnd
	return


VilethornWoods_Cook_RewardEnd::
# 333 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_MUSHROOMS
# 334 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Cook_RewardEnd_Text_0, MSGBOX_NPC
	end


VilethornWoods_NPC3::
# 342 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_ITEM, VilethornWoods_NPC3_2
# 345 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 346 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 347 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_1, MSGBOX_YESNO
# 348 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC3_5
# 357 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_5, MSGBOX_NPC
VilethornWoods_NPC3_1:
	end

VilethornWoods_NPC3_2:
# 343 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_0, MSGBOX_NPC
	goto VilethornWoods_NPC3_1

VilethornWoods_NPC3_5:
# 349 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_2
# 350 "data//maps/VilethornWoods/scripts.pory"
	release
# 351 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_VILETHORN_I, VilethornWoods_NPC3_Text_3
# 352 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_BIG_ROOT
# 353 "data//maps/VilethornWoods/scripts.pory"
	release
# 354 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_ITEM
# 355 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_4, MSGBOX_NPC
	goto VilethornWoods_NPC3_1


VilethornWoods_Celebi_Seed::
# 370 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_CELEBI, 1
	goto_if_eq VilethornWoods_Celebi_Seed_2
# 414 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_CELEBI, 0
	goto_if_eq VilethornWoods_Celebi_Seed_5
# 436 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Celebi_Seed_2:
# 371 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_0, MSGBOX_NPC
# 373 "data//maps/VilethornWoods/scripts.pory"
	checkitem ITEM_TIME_WATER
# 375 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Celebi_Seed_8
VilethornWoods_Celebi_Seed_7:
# 409 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Celebi_Seed_5:
# 416 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_4, MSGBOX_NPC
# 418 "data//maps/VilethornWoods/scripts.pory"
	checkitem ITEM_TIME_SEED
# 420 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Celebi_Seed_11
VilethornWoods_Celebi_Seed_10:
# 433 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Celebi_Seed_8:
# 376 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_1, MSGBOX_YESNO
# 377 "data//maps/VilethornWoods/scripts.pory"
	release
# 379 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Celebi_Seed_13
	goto VilethornWoods_Celebi_Seed_7

VilethornWoods_Celebi_Seed_11:
# 421 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_5, MSGBOX_YESNO
# 422 "data//maps/VilethornWoods/scripts.pory"
	release
# 423 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Celebi_Seed_15
	goto VilethornWoods_Celebi_Seed_10

VilethornWoods_Celebi_Seed_13:
# 380 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_CELEBI, 2
# 381 "data//maps/VilethornWoods/scripts.pory"
	removeitem ITEM_TIME_SEED
# 383 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_2, MSGBOX_SIGN
# 384 "data//maps/VilethornWoods/scripts.pory"
	release
# 385 "data//maps/VilethornWoods/scripts.pory"
	delay 32
# 386 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2, MSGBOX_SIGN
# 387 "data//maps/VilethornWoods/scripts.pory"
	delay 32
# 388 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2, MSGBOX_SIGN
# 389 "data//maps/VilethornWoods/scripts.pory"
	delay 32
# 390 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2, MSGBOX_SIGN
# 391 "data//maps/VilethornWoods/scripts.pory"
	delay 32
# 393 "data//maps/VilethornWoods/scripts.pory"
	message VilethornWoods_Celebi_Seed_Text_3
# 395 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8004, 2
# 396 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8005, 2
# 397 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8006, 30
# 398 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8007, 5
# 399 "data//maps/VilethornWoods/scripts.pory"
	special ShakeCamera
# 400 "data//maps/VilethornWoods/scripts.pory"
	delay 20
# 401 "data//maps/VilethornWoods/scripts.pory"
	waitmessage
# 403 "data//maps/VilethornWoods/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 404 "data//maps/VilethornWoods/scripts.pory"
	warp MAP_VILETHORN_WOODS, VAR_TEMP_2, VAR_TEMP_3
# 405 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	goto VilethornWoods_Celebi_Seed_7

VilethornWoods_Celebi_Seed_15:
# 424 "data//maps/VilethornWoods/scripts.pory"
	removeitem ITEM_TIME_SEED
# 425 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_CELEBI, 1
# 426 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_6, MSGBOX_SIGN
# 427 "data//maps/VilethornWoods/scripts.pory"
	release
# 428 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 429 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_7, MSGBOX_SIGN
	goto VilethornWoods_Celebi_Seed_10


VilethornWoods_Celebi::
# 442 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 444 "data//maps/VilethornWoods/scripts.pory"
	special SaveGame
# 445 "data//maps/VilethornWoods/scripts.pory"
	waitstate
# 446 "data//maps/VilethornWoods/scripts.pory"
	release
# 449 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
# 450 "data//maps/VilethornWoods/scripts.pory"
	waitmoncry
# 451 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_CELEBI
# 453 "data//maps/VilethornWoods/scripts.pory"
	setwildbattle SPECIES_CELEBI, 50
# 454 "data//maps/VilethornWoods/scripts.pory"
	dowildbattle
# 455 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_CELEBI
# 457 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


# 56 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_0:
# 56 "data//maps/VilethornWoods/scripts.pory"
	face_up
# 56 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 59 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_1:
# 59 "data//maps/VilethornWoods/scripts.pory"
	fly_up
	step_end

# 108 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_Movement_0:
# 108 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 172 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_0:
# 172 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 172 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 172 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 172 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 172 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 172 "data//maps/VilethornWoods/scripts.pory"
	walk_up
	step_end

# 176 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_1:
# 176 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 176 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 176 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 176 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 176 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 176 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 176 "data//maps/VilethornWoods/scripts.pory"
	emote_question_mark
	step_end

# 179 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_2:
# 179 "data//maps/VilethornWoods/scripts.pory"
	face_left
	step_end

# 182 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_3:
# 182 "data//maps/VilethornWoods/scripts.pory"
	face_right
	step_end

VilethornWoods_EventScript_NurseDemo_Text_0:
# 23 "data//maps/VilethornWoods/scripts.pory"
	.string "This area is closed for the demo.$"

VilethornWoods_NurseJoy_OnRoute_Text_0:
# 30 "data//maps/VilethornWoods/scripts.pory"
	.string "These woods are so creepy! I'm so glad\n"
	.string "Chansey is here with me.$"

VilethornWoods_Ralts_FirstTrigger_Text_0:
# 70 "data//maps/VilethornWoods/scripts.pory"
	.string "Ralts teleported away!\n"
	.string "It can't have gone far...$"

VilethornWoods_Ralts_SecondTrigger_Text_0:
# 97 "data//maps/VilethornWoods/scripts.pory"
	.string "Ralts teleported away again! It must be\n"
	.string "somewhere in this accursed forest...$"

VilethornWoods_Ralts_Text_0:
# 113 "data//maps/VilethornWoods/scripts.pory"
	.string "Aha! Ralts can't escape this time!$"

VilethornWoods_EventScript_TriggerProf_Text_0:
# 158 "data//maps/VilethornWoods/scripts.pory"
	.string "Grunt$"

VilethornWoods_EventScript_TriggerProf_Text_1:
# 159 "data//maps/VilethornWoods/scripts.pory"
	.string "...yes boss. We've picked up the\n"
	.string "Professor.$"

VilethornWoods_EventScript_TriggerProf_Text_2:
# 160 "data//maps/VilethornWoods/scripts.pory"
	.string "...$"

VilethornWoods_EventScript_TriggerProf_Text_3:
# 162 "data//maps/VilethornWoods/scripts.pory"
	.string "No, nobody saw us, boss.$"

VilethornWoods_EventScript_TriggerProf_Text_4:
# 165 "data//maps/VilethornWoods/scripts.pory"
	.string "Yes boss, I'm positive.$"

VilethornWoods_EventScript_TriggerProf_Text_5:
# 168 "data//maps/VilethornWoods/scripts.pory"
	.string "...okay, we'll head back to HQ right away.$"

VilethornWoods_EventScript_TriggerProf_Text_6:
# 186 "data//maps/VilethornWoods/scripts.pory"
	.string "Must be a wild Impidimp or something...$"

VilethornWoods_Trainer_A_Text_0:
# 208 "data//maps/VilethornWoods/scripts.pory"
	.string "PSYCHIC type Pokémon are my natural\n"
	.string "enemies! That's why I'm training here.$"

VilethornWoods_Trainer_A_Text_1:
# 208 "data//maps/VilethornWoods/scripts.pory"
	.string "I like PSYCHIC types more than you!$"

VilethornWoods_Trainer_A_Text_2:
# 209 "data//maps/VilethornWoods/scripts.pory"
	.string "I like training but I don't want to go to\n"
	.string "deep into this forest...$"

VilethornWoods_Trainer_B_Text_0:
# 215 "data//maps/VilethornWoods/scripts.pory"
	.string "I thought these woods would have BUG\n"
	.string "type Pokémon, but I can't find any. I'm\l"
	.string "so bummed! But beating you in battle\l"
	.string "will make me feel better!$"

VilethornWoods_Trainer_B_Text_1:
# 215 "data//maps/VilethornWoods/scripts.pory"
	.string "I don't feel better at all!$"

VilethornWoods_Trainer_B_Text_2:
# 216 "data//maps/VilethornWoods/scripts.pory"
	.string "This forest is weird...a dense fog, no\n"
	.string "BUG types...$"

VilethornWoods_Trainer_C_Text_0:
# 222 "data//maps/VilethornWoods/scripts.pory"
	.string "The sweet, delicious fog envelops\n"
	.string "us...we are one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_1:
# 222 "data//maps/VilethornWoods/scripts.pory"
	.string "You're not one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_2:
# 223 "data//maps/VilethornWoods/scripts.pory"
	.string "I want to go deeper...sink\n"
	.string "deeper...escape my real life...$"

VilethornWoods_Trainer_D_Text_0:
# 229 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a Pokémon Breeder. We all specialise\n"
	.string "in different Pokémon forms. I'm a horse\l"
	.string "breeding expert!$"

VilethornWoods_Trainer_D_Text_1:
# 229 "data//maps/VilethornWoods/scripts.pory"
	.string "Well fought!$"

VilethornWoods_Trainer_D_Text_2:
# 230 "data//maps/VilethornWoods/scripts.pory"
	.string "I need to raise my horses to become\n"
	.string "stronger. Maybe some Vitamins would\l"
	.string "help...$"

VilethornWoods_Trainer_E_Text_0:
# 236 "data//maps/VilethornWoods/scripts.pory"
	.string "Eek! These woods are creepy! I was\n"
	.string "supposed to go to {COLOR BLUE}Gloria{COLOR DARK_GRAY}'s theater\l"
	.string "studio in {COLOR BLUE}Silversun City{COLOR DARK_GRAY}...but I'm lost!$"

VilethornWoods_Trainer_E_Text_1:
# 236 "data//maps/VilethornWoods/scripts.pory"
	.string "You creep me out too!$"

VilethornWoods_Trainer_E_Text_2:
# 237 "data//maps/VilethornWoods/scripts.pory"
	.string "I've been stuck here for hours. I need\n"
	.string "to get out!$"

VilethornWoods_Trainer_F1_Text_0:
# 245 "data//maps/VilethornWoods/scripts.pory"
	.string "We're on our way to {COLOR BLUE}Silversun City{COLOR DARK_GRAY} to\n"
	.string "interview the great {COLOR BLUE}Gloria{COLOR DARK_GRAY}! Get out of\l"
	.string "our way!$"

VilethornWoods_Trainer_F1_Text_1:
# 245 "data//maps/VilethornWoods/scripts.pory"
	.string "We lost!$"

VilethornWoods_Trainer_F1_Text_2:
# 246 "data//maps/VilethornWoods/scripts.pory"
	.string "If we can get an exclusive interview\n"
	.string "with her, itll be the scoop of the week!$"

VilethornWoods_Trainer_G_Text_0:
# 261 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm not like the others! I'm one of the\n"
	.string "best bug catchers around.\p"
	.string "I'm going to become the first BUG-type\n"
	.string "Pokémon Champion one day!$"

VilethornWoods_Trainer_G_Text_1:
# 261 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you a Gym Leader or something?$"

VilethornWoods_Trainer_G_Text_2:
# 262 "data//maps/VilethornWoods/scripts.pory"
	.string "As a Gym Leader to-be, my team needs to\n"
	.string "be able to handle a variety of threats.$"

VilethornWoods_Trainer_H_Text_0:
# 268 "data//maps/VilethornWoods/scripts.pory"
	.string "I wonder what's inside this\n"
	.string "house...maybe there's some loot!$"

VilethornWoods_Trainer_H_Text_1:
# 268 "data//maps/VilethornWoods/scripts.pory"
	.string "No loot for me!$"

VilethornWoods_Trainer_H_Text_2:
# 269 "data//maps/VilethornWoods/scripts.pory"
	.string "Fine, I'll just stand here and look while\n"
	.string "you loot everything...$"

VilethornWoods_NPC1_Text_0:
# 277 "data//maps/VilethornWoods/scripts.pory"
	.string "The Morelull here in {COLOR RED}Vilethorn Woods{COLOR DARK_GRAY}\n"
	.string "release spores when in danger. That's\l"
	.string "what creates this fog.$"

VilethornWoods_NPC2_Text_0:
# 287 "data//maps/VilethornWoods/scripts.pory"
	.string "Chef$"

VilethornWoods_NPC2_Text_1:
# 288 "data//maps/VilethornWoods/scripts.pory"
	.string "These mushrooms are really rare, you\n"
	.string "know?$"

VilethornWoods_NPC2_Text_2:
# 291 "data//maps/VilethornWoods/scripts.pory"
	.string "Oh, it's you again! Fancy seeing you\n"
	.string "here. I'm a traveling chef! While I\l"
	.string "usually cook at the Pelluca Restaurant,\l"
	.string "I'm here to collect mushrooms to create\l"
	.string "new recipes...but I can only find Tiny\l"
	.string "Mushrooms! Say, why don't you help me?\l"
	.string "If you can get me a Big Mushroom, I'll\l"
	.string "find something to give you in exchange!\p"
	.string "Have you got a Big Mushroom?$"

VilethornWoods_NPC2_Text_3:
# 298 "data//maps/VilethornWoods/scripts.pory"
	.string "Perfect! This'll be a great addition to\n"
	.string "our pantry. Thank you! Now I must give\l"
	.string "you something in exchage.$"

VilethornWoods_NPC2_Text_4:
# 304 "data//maps/VilethornWoods/scripts.pory"
	.string "Hey, you don't have any! Are you trying\n"
	.string "to trick me? The Drowzee and Morelull\l"
	.string "doing enough of that!$"

VilethornWoods_NPC2_Text_5:
# 308 "data//maps/VilethornWoods/scripts.pory"
	.string "Come back when you do!$"

VilethornWoods_Cook_Reward_Text_0:
# 316 "data//maps/VilethornWoods/scripts.pory"
	.string "Perhaps a spoon from the restaurant?\n"
	.string "Or this incense?$"

VilethornWoods_Cook_Reward_Text_1:
# 318 "data//maps/VilethornWoods/scripts.pory"
	.string "Twisted Spoon$"

VilethornWoods_Cook_Reward_Text_2:
# 318 "data//maps/VilethornWoods/scripts.pory"
	.string "Rose Incense$"

VilethornWoods_Cook_Reward_Give_Text_0:
# 326 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you sure?$"

VilethornWoods_Cook_RewardEnd_Text_0:
# 334 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over Cormoria. And if you\l"
	.string "ever visit {COLOR BLUE}Pelluca City{COLOR DARK_GRAY}, be sure to drop\l"
	.string "by our restaurant!$"

VilethornWoods_NPC3_Text_0:
# 343 "data//maps/VilethornWoods/scripts.pory"
	.string "My foot hurts!$"

VilethornWoods_NPC3_Text_1:
# 347 "data//maps/VilethornWoods/scripts.pory"
	.string "Gah! I got lost in this stupid forest\n"
	.string "and tripped on a giant tree root. I got\l"
	.string "mad and ripped it out! Do you want it?$"

VilethornWoods_NPC3_Text_2:
# 349 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm so angry that you'll have to battle\n"
	.string "me for it!$"

VilethornWoods_NPC3_Text_3:
# 351 "data//maps/VilethornWoods/scripts.pory"
	.string "My anger is gone now!$"

VilethornWoods_NPC3_Text_4:
# 355 "data//maps/VilethornWoods/scripts.pory"
	.string "Good riddance! I hope you find some use\n"
	.string "for it.$"

VilethornWoods_NPC3_Text_5:
# 357 "data//maps/VilethornWoods/scripts.pory"
	.string "Just as well. It's a root after all -\n"
	.string "what use would it have?$"

VilethornWoods_Celebi_Seed_Text_0:
# 371 "data//maps/VilethornWoods/scripts.pory"
	.string "A mystical seed has been planted in\n"
	.string "this soil.\p"
	.string "Maybe it needs some type of water to\n"
	.string "grow...$"

VilethornWoods_Celebi_Seed_Text_1:
# 376 "data//maps/VilethornWoods/scripts.pory"
	.string "Water with the Water of Time?$"

VilethornWoods_Celebi_Seed_Text_2:
# 383 "data//maps/VilethornWoods/scripts.pory"
	.string "{PLAYER} watered the fertile soil\n"
	.string "with the Water of Time.$"

VilethornWoods_Celebi_Seed_Text_3:
# 393 "data//maps/VilethornWoods/scripts.pory"
	.string "The trees shift...$"

VilethornWoods_Celebi_Seed_Text_4:
# 416 "data//maps/VilethornWoods/scripts.pory"
	.string "It's fertile soil...but not the same as\n"
	.string "berry tree soil.$"

VilethornWoods_Celebi_Seed_Text_5:
# 421 "data//maps/VilethornWoods/scripts.pory"
	.string "Plant a Seed of Time?$"

VilethornWoods_Celebi_Seed_Text_6:
# 426 "data//maps/VilethornWoods/scripts.pory"
	.string "{PLAYER} planted Seed of Time in the\n"
	.string "fertile soil.$"

VilethornWoods_Celebi_Seed_Text_7:
# 429 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe it needs some type of water to\n"
	.string "grow...$"
