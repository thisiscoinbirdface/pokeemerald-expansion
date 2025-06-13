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
	playse SE_WARP_OUT
# 60 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS1, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 61 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 65 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS1
# 66 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_1
# 67 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_2
# 71 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_FirstTrigger_Text_0
# 72 "data//maps/VilethornWoods/scripts.pory"
	release
# 74 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_FirstTrigger_2:
	end

VilethornWoods_Ralts_FirstTrigger_5:
	end


VilethornWoods_Ralts_SecondTrigger::
# 79 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_HIDE_VILETHORN_RALTS_2, VilethornWoods_Ralts_SecondTrigger_2
# 80 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_RALTS_FINISHED, VilethornWoods_Ralts_SecondTrigger_5
# 82 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 83 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 84 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS2, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 85 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 86 "data//maps/VilethornWoods/scripts.pory"
	delay 24
# 87 "data//maps/VilethornWoods/scripts.pory"
	playse SE_WARP_OUT
# 88 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS2, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 89 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 93 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS2
# 94 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_2
# 95 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_3
# 99 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_SecondTrigger_Text_0
# 100 "data//maps/VilethornWoods/scripts.pory"
	release
# 102 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_SecondTrigger_2:
	end

VilethornWoods_Ralts_SecondTrigger_5:
	end


VilethornWoods_Ralts::
# 108 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 109 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 110 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS3, VilethornWoods_Ralts_Movement_0
# 111 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 112 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 113 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 114 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 115 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_Text_0
# 116 "data//maps/VilethornWoods/scripts.pory"
	release
# 118 "data//maps/VilethornWoods/scripts.pory"
	setwildbattle SPECIES_RALTS, 18
# 119 "data//maps/VilethornWoods/scripts.pory"
	dowildbattle
# 121 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_3
# 122 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_RALTS_FINISHED
# 123 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS3
# 125 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_EventScript_TriggerProf::
# 150 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_PROF, VilethornWoods_EventScript_TriggerProf_2
# 154 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 157 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_Ralts_Movement_0
# 158 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 159 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 160 "data//maps/VilethornWoods/scripts.pory"
	playse SE_POKENAV_CALL
# 161 "data//maps/VilethornWoods/scripts.pory"
	waitse
# 162 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 163 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_1
# 164 "data//maps/VilethornWoods/scripts.pory"
	speakername NULL
# 165 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 166 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 167 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_3
# 168 "data//maps/VilethornWoods/scripts.pory"
	speakername NULL
# 169 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 170 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 171 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_4
# 172 "data//maps/VilethornWoods/scripts.pory"
	speakername NULL
# 173 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 174 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 175 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_5
# 176 "data//maps/VilethornWoods/scripts.pory"
	release
# 177 "data//maps/VilethornWoods/scripts.pory"
	playse SE_POKENAV_HANG_UP
# 178 "data//maps/VilethornWoods/scripts.pory"
	waitse
# 181 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_EventScript_TriggerProf_Movement_0
# 182 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 183 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 184 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 185 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_1
# 186 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 187 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 188 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_2
# 189 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 190 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 191 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_3
# 192 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 193 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 194 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 195 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_6
# 196 "data//maps/VilethornWoods/scripts.pory"
	release
# 197 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 198 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 200 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 0, 0
# 201 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_PROF, 1, 0
# 202 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_GRUNT, 0, 0
# 203 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_PROF, 1, 0
# 205 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_PROF
# 206 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_EventScript_TriggerProf_2:
	end


VilethornWoods_Trainer_A::
# 217 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_A, VilethornWoods_Trainer_A_Text_0, VilethornWoods_Trainer_A_Text_1
# 218 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_A_Text_2
# 219 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_B::
# 224 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_B, VilethornWoods_Trainer_B_Text_0, VilethornWoods_Trainer_B_Text_1
# 225 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_B_Text_2
# 226 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_C::
# 231 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_C, VilethornWoods_Trainer_C_Text_0, VilethornWoods_Trainer_C_Text_1
# 232 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_C_Text_2
# 233 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_D::
# 238 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_D, VilethornWoods_Trainer_D_Text_0, VilethornWoods_Trainer_D_Text_1
# 239 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_D_Text_2
# 240 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_E::
# 245 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_E, VilethornWoods_Trainer_E_Text_0, VilethornWoods_Trainer_E_Text_1
# 246 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_E_Text_2
# 247 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F1::
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


VilethornWoods_Trainer_F2::
# 261 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 262 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 263 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 264 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 265 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_G::
# 270 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_G, VilethornWoods_Trainer_G_Text_0, VilethornWoods_Trainer_G_Text_1
# 271 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_G_Text_2
# 272 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_H::
# 277 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_H, VilethornWoods_Trainer_H_Text_0, VilethornWoods_Trainer_H_Text_1
# 278 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_H_Text_2
# 279 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_NPC1::
# 286 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC1_Text_0, MSGBOX_NPC
	end


VilethornWoods_NPC2::
# 292 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 293 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 295 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_MUSHROOMS, VilethornWoods_NPC2_2
# 299 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 300 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_2, MSGBOX_YESNO
# 302 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC2_5
# 316 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 317 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_5
VilethornWoods_NPC2_1:
# 320 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_NPC2_2:
# 296 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 297 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_1
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_5:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VilethornWoods_NPC2_8
# 312 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 313 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_4
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_8:
# 305 "data//maps/VilethornWoods/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 306 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 307 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_3
# 309 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_Reward
	goto VilethornWoods_NPC2_1


VilethornWoods_Cook_Reward::
# 325 "data//maps/VilethornWoods/scripts.pory"
	message VilethornWoods_Cook_Reward_Text_0
# 326 "data//maps/VilethornWoods/scripts.pory"
	waitmessage
# 327 "data//maps/VilethornWoods/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, VilethornWoods_Cook_Reward_Text_1, VilethornWoods_Cook_Reward_Text_2
# 328 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VilethornWoods_Cook_Reward_2
VilethornWoods_Cook_Reward_1:
# 329 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Cook_Reward_5
VilethornWoods_Cook_Reward_4:
# 330 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_Reward_Give
	return

VilethornWoods_Cook_Reward_2:
# 328 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8006, ITEM_TWISTEDSPOON
	goto VilethornWoods_Cook_Reward_1

VilethornWoods_Cook_Reward_5:
# 329 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8006, ITEM_ROSE_INCENSE
	goto VilethornWoods_Cook_Reward_4


VilethornWoods_Cook_Reward_Give::
# 334 "data//maps/VilethornWoods/scripts.pory"
	showitemdescription
# 335 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Cook_Reward_Give_Text_0, MSGBOX_YESNO
# 336 "data//maps/VilethornWoods/scripts.pory"
	hideitemdescription
# 337 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Cook_Reward_Give_1
# 338 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_Reward
	return

VilethornWoods_Cook_Reward_Give_1:
# 337 "data//maps/VilethornWoods/scripts.pory"
	giveitem VAR_0x8006
# 337 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_RewardEnd
	return


VilethornWoods_Cook_RewardEnd::
# 342 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_MUSHROOMS
# 343 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Cook_RewardEnd_Text_0, MSGBOX_NPC
	end


VilethornWoods_NPC3::
# 351 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_ITEM, VilethornWoods_NPC3_2
# 354 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 355 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 356 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_1, MSGBOX_YESNO
# 357 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC3_5
# 366 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_5, MSGBOX_NPC
VilethornWoods_NPC3_1:
	end

VilethornWoods_NPC3_2:
# 352 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_0, MSGBOX_NPC
	goto VilethornWoods_NPC3_1

VilethornWoods_NPC3_5:
# 358 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_2
# 359 "data//maps/VilethornWoods/scripts.pory"
	release
# 360 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_VILETHORN_I, VilethornWoods_NPC3_Text_3
# 361 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_BIG_ROOT
# 362 "data//maps/VilethornWoods/scripts.pory"
	release
# 363 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_ITEM
# 364 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_4, MSGBOX_NPC
	goto VilethornWoods_NPC3_1


VilethornWoods_Celebi_Seed::
# 379 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_CELEBI, 1
	goto_if_eq VilethornWoods_Celebi_Seed_2
# 423 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_CELEBI, 0
	goto_if_eq VilethornWoods_Celebi_Seed_5
# 445 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Celebi_Seed_2:
# 380 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_0, MSGBOX_NPC
# 382 "data//maps/VilethornWoods/scripts.pory"
	checkitem ITEM_TIME_WATER
# 384 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Celebi_Seed_8
VilethornWoods_Celebi_Seed_7:
# 418 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Celebi_Seed_5:
# 425 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_4, MSGBOX_NPC
# 427 "data//maps/VilethornWoods/scripts.pory"
	checkitem ITEM_TIME_SEED
# 429 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Celebi_Seed_11
VilethornWoods_Celebi_Seed_10:
# 442 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Celebi_Seed_8:
# 385 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_1, MSGBOX_YESNO
# 386 "data//maps/VilethornWoods/scripts.pory"
	release
# 388 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Celebi_Seed_13
	goto VilethornWoods_Celebi_Seed_7

VilethornWoods_Celebi_Seed_11:
# 430 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_5, MSGBOX_YESNO
# 431 "data//maps/VilethornWoods/scripts.pory"
	release
# 432 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Celebi_Seed_15
	goto VilethornWoods_Celebi_Seed_10

VilethornWoods_Celebi_Seed_13:
# 389 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_CELEBI, 2
# 390 "data//maps/VilethornWoods/scripts.pory"
	removeitem ITEM_TIME_SEED
# 392 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_2, MSGBOX_SIGN
# 393 "data//maps/VilethornWoods/scripts.pory"
	release
# 394 "data//maps/VilethornWoods/scripts.pory"
	delay 32
# 395 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2, MSGBOX_SIGN
# 396 "data//maps/VilethornWoods/scripts.pory"
	delay 32
# 397 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2, MSGBOX_SIGN
# 398 "data//maps/VilethornWoods/scripts.pory"
	delay 32
# 399 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2, MSGBOX_SIGN
# 400 "data//maps/VilethornWoods/scripts.pory"
	delay 32
# 402 "data//maps/VilethornWoods/scripts.pory"
	message VilethornWoods_Celebi_Seed_Text_3
# 404 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8004, 2
# 405 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8005, 2
# 406 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8006, 30
# 407 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8007, 5
# 408 "data//maps/VilethornWoods/scripts.pory"
	special ShakeCamera
# 409 "data//maps/VilethornWoods/scripts.pory"
	delay 20
# 410 "data//maps/VilethornWoods/scripts.pory"
	waitmessage
# 412 "data//maps/VilethornWoods/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 413 "data//maps/VilethornWoods/scripts.pory"
	warp MAP_VILETHORN_WOODS, VAR_TEMP_2, VAR_TEMP_3
# 414 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	goto VilethornWoods_Celebi_Seed_7

VilethornWoods_Celebi_Seed_15:
# 433 "data//maps/VilethornWoods/scripts.pory"
	removeitem ITEM_TIME_SEED
# 434 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_CELEBI, 1
# 435 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_6, MSGBOX_SIGN
# 436 "data//maps/VilethornWoods/scripts.pory"
	release
# 437 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 438 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_7, MSGBOX_SIGN
	goto VilethornWoods_Celebi_Seed_10


VilethornWoods_Celebi::
# 451 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 453 "data//maps/VilethornWoods/scripts.pory"
	special SaveGame
# 454 "data//maps/VilethornWoods/scripts.pory"
	waitstate
# 455 "data//maps/VilethornWoods/scripts.pory"
	release
# 458 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
# 459 "data//maps/VilethornWoods/scripts.pory"
	waitmoncry
# 460 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_CELEBI
# 462 "data//maps/VilethornWoods/scripts.pory"
	setwildbattle SPECIES_CELEBI, 50
# 463 "data//maps/VilethornWoods/scripts.pory"
	dowildbattle
# 464 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_CELEBI
# 466 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


# 56 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_0:
# 56 "data//maps/VilethornWoods/scripts.pory"
	face_up
# 56 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 60 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_1:
# 60 "data//maps/VilethornWoods/scripts.pory"
	fly_up
	step_end

# 110 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_Movement_0:
# 110 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 181 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_0:
# 181 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 181 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 181 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 181 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 181 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 181 "data//maps/VilethornWoods/scripts.pory"
	walk_up
	step_end

# 185 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_1:
# 185 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 185 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 185 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 185 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 185 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 185 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 185 "data//maps/VilethornWoods/scripts.pory"
	emote_question_mark
	step_end

# 188 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_2:
# 188 "data//maps/VilethornWoods/scripts.pory"
	face_left
	step_end

# 191 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_3:
# 191 "data//maps/VilethornWoods/scripts.pory"
	face_right
	step_end

VilethornWoods_EventScript_NurseDemo_Text_0:
# 23 "data//maps/VilethornWoods/scripts.pory"
	.string "This area is closed for the demo.$"

VilethornWoods_NurseJoy_OnRoute_Text_0:
# 30 "data//maps/VilethornWoods/scripts.pory"
	.string "These woods are so creepy!\n"
	.string "I'm so glad Chansey is here with me.$"

VilethornWoods_Ralts_FirstTrigger_Text_0:
# 71 "data//maps/VilethornWoods/scripts.pory"
	.string "Ralts teleported away!\n"
	.string "It can't have gone far...$"

VilethornWoods_Ralts_SecondTrigger_Text_0:
# 99 "data//maps/VilethornWoods/scripts.pory"
	.string "Ralts teleported away again! It must be\n"
	.string "somewhere in this accursed forest...$"

VilethornWoods_Ralts_Text_0:
# 115 "data//maps/VilethornWoods/scripts.pory"
	.string "Aha! Ralts can't escape this time!$"

VilethornWoods_EventScript_TriggerProf_Text_0:
# 162 "data//maps/VilethornWoods/scripts.pory"
	.string "Grunt$"

VilethornWoods_EventScript_TriggerProf_Text_1:
# 163 "data//maps/VilethornWoods/scripts.pory"
	.string "...\p"
	.string "...yes boss. We have the Professor.$"

VilethornWoods_EventScript_TriggerProf_Text_2:
# 165 "data//maps/VilethornWoods/scripts.pory"
	.string "...$"

VilethornWoods_EventScript_TriggerProf_Text_3:
# 167 "data//maps/VilethornWoods/scripts.pory"
	.string "No, nobody saw us, boss.$"

VilethornWoods_EventScript_TriggerProf_Text_4:
# 171 "data//maps/VilethornWoods/scripts.pory"
	.string "Yes boss, I'm positive.$"

VilethornWoods_EventScript_TriggerProf_Text_5:
# 175 "data//maps/VilethornWoods/scripts.pory"
	.string "...okay, we'll head to HQ right away.$"

VilethornWoods_EventScript_TriggerProf_Text_6:
# 195 "data//maps/VilethornWoods/scripts.pory"
	.string "Must be a wild Impidimp or something...$"

VilethornWoods_Trainer_A_Text_0:
# 217 "data//maps/VilethornWoods/scripts.pory"
	.string "PSYCHIC type Pokémon are my natural\n"
	.string "enemies! That's why I'm training here.$"

VilethornWoods_Trainer_A_Text_1:
# 217 "data//maps/VilethornWoods/scripts.pory"
	.string "I like PSYCHIC types more than you!$"

VilethornWoods_Trainer_A_Text_2:
# 218 "data//maps/VilethornWoods/scripts.pory"
	.string "I like training but I don't want to go to\n"
	.string "deep into this forest...$"

VilethornWoods_Trainer_B_Text_0:
# 224 "data//maps/VilethornWoods/scripts.pory"
	.string "The psychic currents in the air will lead\n"
	.string "me to victory!$"

VilethornWoods_Trainer_B_Text_1:
# 224 "data//maps/VilethornWoods/scripts.pory"
	.string "The currents betrayed me!$"

VilethornWoods_Trainer_B_Text_2:
# 225 "data//maps/VilethornWoods/scripts.pory"
	.string "Did the psychic energy betray me?\n"
	.string "Were you chosen by them?$"

VilethornWoods_Trainer_C_Text_0:
# 231 "data//maps/VilethornWoods/scripts.pory"
	.string "The sweet, delicious fog envelops\n"
	.string "us...we are one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_1:
# 231 "data//maps/VilethornWoods/scripts.pory"
	.string "You're not one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_2:
# 232 "data//maps/VilethornWoods/scripts.pory"
	.string "I want to go deeper...sink deeper...\n"
	.string "escape my real life...$"

VilethornWoods_Trainer_D_Text_0:
# 238 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a Pokémon Breeder. We all specialise\n"
	.string "in different Pokémon forms.\p"
	.string "I'm a horse breeding expert!$"

VilethornWoods_Trainer_D_Text_1:
# 238 "data//maps/VilethornWoods/scripts.pory"
	.string "Well fought!$"

VilethornWoods_Trainer_D_Text_2:
# 239 "data//maps/VilethornWoods/scripts.pory"
	.string "I need to raise my horses to become\n"
	.string "stronger. Maybe witamins will help...$"

VilethornWoods_Trainer_E_Text_0:
# 245 "data//maps/VilethornWoods/scripts.pory"
	.string "Eek! These woods are creepy! I was\n"
	.string "supposed to go to Gloria's theater\l"
	.string "studio in Silversun City...but I'm lost!$"

VilethornWoods_Trainer_E_Text_1:
# 245 "data//maps/VilethornWoods/scripts.pory"
	.string "You creep me out too!$"

VilethornWoods_Trainer_E_Text_2:
# 246 "data//maps/VilethornWoods/scripts.pory"
	.string "I've been stuck here for hours. I need\n"
	.string "to get out!$"

VilethornWoods_Trainer_F1_Text_0:
# 254 "data//maps/VilethornWoods/scripts.pory"
	.string "We're on our way to Silversun City\n"
	.string "to interview the great Gloria!\l"
	.string "Get out of our way!$"

VilethornWoods_Trainer_F1_Text_1:
# 254 "data//maps/VilethornWoods/scripts.pory"
	.string "We lost!$"

VilethornWoods_Trainer_F1_Text_2:
# 255 "data//maps/VilethornWoods/scripts.pory"
	.string "If we can get an exclusive interview\n"
	.string "with her, it'll be the scoop of the week!$"

VilethornWoods_Trainer_G_Text_0:
# 270 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm not like the others! I'm one of the\n"
	.string "best bug catchers around.\p"
	.string "I'm going to become the first BUG-type\n"
	.string "Pokémon Champion one day!$"

VilethornWoods_Trainer_G_Text_1:
# 270 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you a Gym Leader or something?$"

VilethornWoods_Trainer_G_Text_2:
# 271 "data//maps/VilethornWoods/scripts.pory"
	.string "As a Gym Leader to-be, my team needs to\n"
	.string "be able to handle a variety of threats.$"

VilethornWoods_Trainer_H_Text_0:
# 277 "data//maps/VilethornWoods/scripts.pory"
	.string "I wonder what's inside this house...\n"
	.string "maybe there's some loot!$"

VilethornWoods_Trainer_H_Text_1:
# 277 "data//maps/VilethornWoods/scripts.pory"
	.string "No loot for me!$"

VilethornWoods_Trainer_H_Text_2:
# 278 "data//maps/VilethornWoods/scripts.pory"
	.string "Fine, I'll just stand here and look\n"
	.string "while you loot everything...$"

VilethornWoods_NPC1_Text_0:
# 286 "data//maps/VilethornWoods/scripts.pory"
	.string "The Morelull here in Vilethorn Woods\n"
	.string "release spores when in danger.\l"
	.string "That's what creates this fog.$"

VilethornWoods_NPC2_Text_0:
# 296 "data//maps/VilethornWoods/scripts.pory"
	.string "Chef$"

VilethornWoods_NPC2_Text_1:
# 297 "data//maps/VilethornWoods/scripts.pory"
	.string "These mushrooms are really rare, you\n"
	.string "know?$"

VilethornWoods_NPC2_Text_2:
# 300 "data//maps/VilethornWoods/scripts.pory"
	.string "You again! Fancy seeing you here.\n"
	.string "I'm a traveling chef! While I usually\l"
	.string "cook at the Pelluca Restaurant,\l"
	.string "I'm here now to collect mushrooms to\l"
	.string "create new recipes...\l"
	.string "but I can only find Tiny Mushrooms!\p"
	.string "Say, why don't you help me?\n"
	.string "If you can get me a Big Mushroom,\l"
	.string "I can give you something in exchange!\p"
	.string "Have you got a Big Mushroom?$"

VilethornWoods_NPC2_Text_3:
# 307 "data//maps/VilethornWoods/scripts.pory"
	.string "Perfect! This'll be a great addition to\n"
	.string "our pantry. Thank you! Now I must give\l"
	.string "you something in exchage.$"

VilethornWoods_NPC2_Text_4:
# 313 "data//maps/VilethornWoods/scripts.pory"
	.string "Hey, you don't have any!\p"
	.string "Are you trying to trick me? The Drowzee\n"
	.string "and Morelull doing enough of that!$"

VilethornWoods_NPC2_Text_5:
# 317 "data//maps/VilethornWoods/scripts.pory"
	.string "Come back when you do!$"

VilethornWoods_Cook_Reward_Text_0:
# 325 "data//maps/VilethornWoods/scripts.pory"
	.string "Perhaps a spoon from the restaurant?\n"
	.string "Or this incense?$"

VilethornWoods_Cook_Reward_Text_1:
# 327 "data//maps/VilethornWoods/scripts.pory"
	.string "Twisted Spoon$"

VilethornWoods_Cook_Reward_Text_2:
# 327 "data//maps/VilethornWoods/scripts.pory"
	.string "Rose Incense$"

VilethornWoods_Cook_Reward_Give_Text_0:
# 335 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you sure?$"

VilethornWoods_Cook_RewardEnd_Text_0:
# 343 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over Cormoria. And if you\l"
	.string "ever visit Pelluca City, be sure to drop\l"
	.string "by our restaurant!$"

VilethornWoods_NPC3_Text_0:
# 352 "data//maps/VilethornWoods/scripts.pory"
	.string "My foot hurts!$"

VilethornWoods_NPC3_Text_1:
# 356 "data//maps/VilethornWoods/scripts.pory"
	.string "Gah! I got lost in this stupid forest\n"
	.string "and tripped on a giant tree root.\l"
	.string "I got mad and ripped it out!\p"
	.string "Do you want it?$"

VilethornWoods_NPC3_Text_2:
# 358 "data//maps/VilethornWoods/scripts.pory"
	.string "Gah - I'm just so angry that you'll have\n"
	.string "to battle me for it!$"

VilethornWoods_NPC3_Text_3:
# 360 "data//maps/VilethornWoods/scripts.pory"
	.string "My anger is gone now!$"

VilethornWoods_NPC3_Text_4:
# 364 "data//maps/VilethornWoods/scripts.pory"
	.string "Good riddance, stupid root!\n"
	.string "I hope you find some use for it.$"

VilethornWoods_NPC3_Text_5:
# 366 "data//maps/VilethornWoods/scripts.pory"
	.string "Just as well. It's a root after all -\n"
	.string "what use would it have?$"

VilethornWoods_Celebi_Seed_Text_0:
# 380 "data//maps/VilethornWoods/scripts.pory"
	.string "A mystical seed has been planted in\n"
	.string "this soil.\p"
	.string "Maybe it needs some type of water to\n"
	.string "grow...$"

VilethornWoods_Celebi_Seed_Text_1:
# 385 "data//maps/VilethornWoods/scripts.pory"
	.string "Water with the Water of Time?$"

VilethornWoods_Celebi_Seed_Text_2:
# 392 "data//maps/VilethornWoods/scripts.pory"
	.string "{PLAYER} watered the fertile soil\n"
	.string "with the Water of Time.$"

VilethornWoods_Celebi_Seed_Text_3:
# 402 "data//maps/VilethornWoods/scripts.pory"
	.string "The trees shift...$"

VilethornWoods_Celebi_Seed_Text_4:
# 425 "data//maps/VilethornWoods/scripts.pory"
	.string "It's fertile soil...but not the same as\n"
	.string "berry tree soil.$"

VilethornWoods_Celebi_Seed_Text_5:
# 430 "data//maps/VilethornWoods/scripts.pory"
	.string "Plant a Seed of Time?$"

VilethornWoods_Celebi_Seed_Text_6:
# 435 "data//maps/VilethornWoods/scripts.pory"
	.string "{PLAYER} planted Seed of Time in the\n"
	.string "fertile soil.$"

VilethornWoods_Celebi_Seed_Text_7:
# 438 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe it needs some type of water to\n"
	.string "grow...$"
