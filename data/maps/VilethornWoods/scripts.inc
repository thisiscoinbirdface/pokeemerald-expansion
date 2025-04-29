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
# 41 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_HIDE_VILETHORN_RALTS_1, VilethornWoods_Ralts_FirstTrigger_2
# 42 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_RALTS_FINISHED, VilethornWoods_Ralts_FirstTrigger_5
# 44 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 45 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 46 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS1, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 47 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 48 "data//maps/VilethornWoods/scripts.pory"
	delay 24
# 49 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS1, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 50 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 54 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS1
# 55 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_1
# 56 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_2
# 60 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_FirstTrigger_Text_0
# 61 "data//maps/VilethornWoods/scripts.pory"
	release
# 63 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_FirstTrigger_2:
	end

VilethornWoods_Ralts_FirstTrigger_5:
	end


VilethornWoods_Ralts_SecondTrigger::
# 68 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_HIDE_VILETHORN_RALTS_2, VilethornWoods_Ralts_SecondTrigger_2
# 69 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_RALTS_FINISHED, VilethornWoods_Ralts_SecondTrigger_5
# 71 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 72 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 73 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS2, VilethornWoods_Ralts_FirstTrigger_Movement_0
# 74 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 75 "data//maps/VilethornWoods/scripts.pory"
	delay 24
# 76 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS2, VilethornWoods_Ralts_FirstTrigger_Movement_1
# 77 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 81 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS2
# 82 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_2
# 83 "data//maps/VilethornWoods/scripts.pory"
	clearflag FLAG_HIDE_VILETHORN_RALTS_3
# 87 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_SecondTrigger_Text_0
# 88 "data//maps/VilethornWoods/scripts.pory"
	release
# 90 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_Ralts_SecondTrigger_2:
	end

VilethornWoods_Ralts_SecondTrigger_5:
	end


VilethornWoods_Ralts::
# 96 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 97 "data//maps/VilethornWoods/scripts.pory"
	playmoncry SPECIES_RALTS, CRY_MODE_NORMAL
# 98 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_RALTS3, VilethornWoods_Ralts_Movement_0
# 99 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 100 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 101 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 102 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 103 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Ralts_Text_0
# 104 "data//maps/VilethornWoods/scripts.pory"
	release
# 106 "data//maps/VilethornWoods/scripts.pory"
	setwildbattle SPECIES_RALTS, 18
# 107 "data//maps/VilethornWoods/scripts.pory"
	dowildbattle
# 109 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_HIDE_VILETHORN_RALTS_3
# 110 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_RALTS_FINISHED
# 111 "data//maps/VilethornWoods/scripts.pory"
	removeobject LOCALID_RALTS3
# 113 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_EventScript_TriggerProf::
# 138 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_PROF, VilethornWoods_EventScript_TriggerProf_2
# 142 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 145 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_Ralts_Movement_0
# 146 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 147 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 148 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 149 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_1
# 150 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 151 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 152 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_3
# 153 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 154 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 155 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_4
# 156 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 157 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 158 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_5
# 159 "data//maps/VilethornWoods/scripts.pory"
	release
# 162 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_EventScript_TriggerProf_Movement_0
# 163 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 164 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 165 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 166 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_1
# 167 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 168 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 169 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_2
# 170 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 171 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 172 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_3
# 173 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 174 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 175 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 176 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_6
# 177 "data//maps/VilethornWoods/scripts.pory"
	release
# 178 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 179 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 181 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 0, 0
# 182 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_PROF, 1, 0
# 183 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_GRUNT, 0, 0
# 184 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_PROF, 1, 0
# 186 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_PROF
# 187 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_EventScript_TriggerProf_2:
	end


VilethornWoods_Trainer_A::
# 198 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_A, VilethornWoods_Trainer_A_Text_0, VilethornWoods_Trainer_A_Text_1
# 199 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_A_Text_2
# 200 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_B::
# 205 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_B, VilethornWoods_Trainer_B_Text_0, VilethornWoods_Trainer_B_Text_1
# 206 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_B_Text_2
# 207 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_C::
# 212 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_C, VilethornWoods_Trainer_C_Text_0, VilethornWoods_Trainer_C_Text_1
# 213 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_C_Text_2
# 214 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_D::
# 219 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_D, VilethornWoods_Trainer_D_Text_0, VilethornWoods_Trainer_D_Text_1
# 220 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_D_Text_2
# 221 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_E::
# 226 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_E, VilethornWoods_Trainer_E_Text_0, VilethornWoods_Trainer_E_Text_1
# 227 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_E_Text_2
# 228 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F1::
# 233 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 234 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 235 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 236 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 237 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F2::
# 242 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 243 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 244 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 245 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 246 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_G::
# 251 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_G, VilethornWoods_Trainer_G_Text_0, VilethornWoods_Trainer_G_Text_1
# 252 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_G_Text_2
# 253 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_H::
# 258 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_H, VilethornWoods_Trainer_H_Text_0, VilethornWoods_Trainer_H_Text_1
# 259 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_H_Text_2
# 260 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_NPC1::
# 267 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC1_Text_0, MSGBOX_NPC
	end


VilethornWoods_NPC2::
# 273 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 274 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 276 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_MUSHROOMS, VilethornWoods_NPC2_2
# 280 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 281 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_2, MSGBOX_YESNO
# 283 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC2_5
# 297 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 298 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_5
VilethornWoods_NPC2_1:
# 301 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_NPC2_2:
# 277 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 278 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_1
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_5:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VilethornWoods_NPC2_8
# 293 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 294 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_4
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_8:
# 286 "data//maps/VilethornWoods/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 287 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 288 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_3
# 290 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_Reward
	goto VilethornWoods_NPC2_1


VilethornWoods_Cook_Reward::
# 306 "data//maps/VilethornWoods/scripts.pory"
	message VilethornWoods_Cook_Reward_Text_0
# 307 "data//maps/VilethornWoods/scripts.pory"
	waitmessage
# 308 "data//maps/VilethornWoods/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, VilethornWoods_Cook_Reward_Text_1, VilethornWoods_Cook_Reward_Text_2
# 309 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VilethornWoods_Cook_Reward_2
VilethornWoods_Cook_Reward_1:
# 310 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Cook_Reward_5
VilethornWoods_Cook_Reward_4:
# 311 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_Reward_Give
	return

VilethornWoods_Cook_Reward_2:
# 309 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8006, ITEM_TWISTEDSPOON
	goto VilethornWoods_Cook_Reward_1

VilethornWoods_Cook_Reward_5:
# 310 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8006, ITEM_ROSE_INCENSE
	goto VilethornWoods_Cook_Reward_4


VilethornWoods_Cook_Reward_Give::
# 315 "data//maps/VilethornWoods/scripts.pory"
	showitemdescription
# 316 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Cook_Reward_Give_Text_0, MSGBOX_YESNO
# 317 "data//maps/VilethornWoods/scripts.pory"
	hideitemdescription
# 318 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Cook_Reward_Give_1
# 319 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_Reward
	return

VilethornWoods_Cook_Reward_Give_1:
# 318 "data//maps/VilethornWoods/scripts.pory"
	giveitem VAR_0x8006
# 318 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_RewardEnd
	return


VilethornWoods_Cook_RewardEnd::
# 323 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_MUSHROOMS
# 324 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Cook_RewardEnd_Text_0, MSGBOX_NPC
	end


VilethornWoods_NPC3::
# 332 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_ITEM, VilethornWoods_NPC3_2
# 335 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_1, MSGBOX_YESNO
# 336 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC3_5
# 344 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_5, MSGBOX_NPC
VilethornWoods_NPC3_1:
	end

VilethornWoods_NPC3_2:
# 333 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_0, MSGBOX_NPC
	goto VilethornWoods_NPC3_1

VilethornWoods_NPC3_5:
# 337 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_2
# 338 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_VILETHORN_I, VilethornWoods_NPC3_Text_3
# 339 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_BIG_ROOT
# 340 "data//maps/VilethornWoods/scripts.pory"
	release
# 341 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_ITEM
# 342 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_4, MSGBOX_NPC
	goto VilethornWoods_NPC3_1


VilethornWoods_Celebi_Seed::
# 356 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_0, MSGBOX_NPC
# 358 "data//maps/VilethornWoods/scripts.pory"
	checkitem ITEM_TIME_SEED
# 360 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Celebi_Seed_2
VilethornWoods_Celebi_Seed_1:
	end

VilethornWoods_Celebi_Seed_2:
# 361 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_1, MSGBOX_YESNO
# 363 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Celebi_Seed_4
	goto VilethornWoods_Celebi_Seed_1

VilethornWoods_Celebi_Seed_4:
# 364 "data//maps/VilethornWoods/scripts.pory"
	removeitem ITEM_TIME_SEED
# 366 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_2, MSGBOX_SIGN
# 367 "data//maps/VilethornWoods/scripts.pory"
	release
# 368 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 369 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_3, MSGBOX_SIGN
	goto VilethornWoods_Celebi_Seed_1


# 46 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_0:
# 46 "data//maps/VilethornWoods/scripts.pory"
	face_up
# 46 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 49 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_FirstTrigger_Movement_1:
# 49 "data//maps/VilethornWoods/scripts.pory"
	fly_up
	step_end

# 98 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_Ralts_Movement_0:
# 98 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 162 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_0:
# 162 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 162 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 162 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 162 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 162 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 162 "data//maps/VilethornWoods/scripts.pory"
	walk_up
	step_end

# 166 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_1:
# 166 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 166 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 166 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 166 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 166 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 166 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 166 "data//maps/VilethornWoods/scripts.pory"
	emote_question_mark
	step_end

# 169 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_2:
# 169 "data//maps/VilethornWoods/scripts.pory"
	face_left
	step_end

# 172 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_3:
# 172 "data//maps/VilethornWoods/scripts.pory"
	face_right
	step_end

VilethornWoods_EventScript_NurseDemo_Text_0:
# 13 "data//maps/VilethornWoods/scripts.pory"
	.string "This area is closed for the demo.$"

VilethornWoods_NurseJoy_OnRoute_Text_0:
# 20 "data//maps/VilethornWoods/scripts.pory"
	.string "These woods are so creepy! I'm so glad\n"
	.string "Chansey is here with me.$"

VilethornWoods_Ralts_FirstTrigger_Text_0:
# 60 "data//maps/VilethornWoods/scripts.pory"
	.string "Ralts teleported away!\n"
	.string "It can't have gone far...$"

VilethornWoods_Ralts_SecondTrigger_Text_0:
# 87 "data//maps/VilethornWoods/scripts.pory"
	.string "Ralts teleported away again! It must be\n"
	.string "somewhere in this accursed forest...$"

VilethornWoods_Ralts_Text_0:
# 103 "data//maps/VilethornWoods/scripts.pory"
	.string "Aha! Ralts can't escape this time!$"

VilethornWoods_EventScript_TriggerProf_Text_0:
# 148 "data//maps/VilethornWoods/scripts.pory"
	.string "Grunt$"

VilethornWoods_EventScript_TriggerProf_Text_1:
# 149 "data//maps/VilethornWoods/scripts.pory"
	.string "...yes boss. We've picked up the\n"
	.string "Professor.$"

VilethornWoods_EventScript_TriggerProf_Text_2:
# 150 "data//maps/VilethornWoods/scripts.pory"
	.string "...$"

VilethornWoods_EventScript_TriggerProf_Text_3:
# 152 "data//maps/VilethornWoods/scripts.pory"
	.string "No, nobody saw us, boss.$"

VilethornWoods_EventScript_TriggerProf_Text_4:
# 155 "data//maps/VilethornWoods/scripts.pory"
	.string "Yes boss, I'm positive.$"

VilethornWoods_EventScript_TriggerProf_Text_5:
# 158 "data//maps/VilethornWoods/scripts.pory"
	.string "...okay, we'll head back to HQ right away.$"

VilethornWoods_EventScript_TriggerProf_Text_6:
# 176 "data//maps/VilethornWoods/scripts.pory"
	.string "Must be a wild Impidimp or something...$"

VilethornWoods_Trainer_A_Text_0:
# 198 "data//maps/VilethornWoods/scripts.pory"
	.string "PSYCHIC type Pokémon are my natural\n"
	.string "enemies! That's why I'm training here.$"

VilethornWoods_Trainer_A_Text_1:
# 198 "data//maps/VilethornWoods/scripts.pory"
	.string "I like PSYCHIC types more than you!$"

VilethornWoods_Trainer_A_Text_2:
# 199 "data//maps/VilethornWoods/scripts.pory"
	.string "I like training but I don't want to go to\n"
	.string "deep into this forest...$"

VilethornWoods_Trainer_B_Text_0:
# 205 "data//maps/VilethornWoods/scripts.pory"
	.string "I thought these woods would have BUG\n"
	.string "type Pokemon, but I can't find any. I'm\l"
	.string "so bummed! But beating you in battle\l"
	.string "will make me feel better!$"

VilethornWoods_Trainer_B_Text_1:
# 205 "data//maps/VilethornWoods/scripts.pory"
	.string "I don't feel better at all!$"

VilethornWoods_Trainer_B_Text_2:
# 206 "data//maps/VilethornWoods/scripts.pory"
	.string "This forest is weird...a dense fog, no\n"
	.string "BUG types...$"

VilethornWoods_Trainer_C_Text_0:
# 212 "data//maps/VilethornWoods/scripts.pory"
	.string "The sweet, delicious fog envelops\n"
	.string "us...we are one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_1:
# 212 "data//maps/VilethornWoods/scripts.pory"
	.string "You're not one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_2:
# 213 "data//maps/VilethornWoods/scripts.pory"
	.string "I want to go deeper...sink\n"
	.string "deeper...escape my real life...$"

VilethornWoods_Trainer_D_Text_0:
# 219 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a Pokémon Breeder. Like all\n"
	.string "breeders, we specialise in certain\l"
	.string "Pokémon forms. I'm a horse breeding\l"
	.string "expert!$"

VilethornWoods_Trainer_D_Text_1:
# 219 "data//maps/VilethornWoods/scripts.pory"
	.string "Well fought!$"

VilethornWoods_Trainer_D_Text_2:
# 220 "data//maps/VilethornWoods/scripts.pory"
	.string "I need to raise my horses to become\n"
	.string "stronger. Maybe some VITAMINS would\l"
	.string "help...$"

VilethornWoods_Trainer_E_Text_0:
# 226 "data//maps/VilethornWoods/scripts.pory"
	.string "Eek! These woods creep me out! I was\n"
	.string "supposed to go to Gloria's theater\l"
	.string "studio in Silversun City...but I got\l"
	.string "lost!$"

VilethornWoods_Trainer_E_Text_1:
# 226 "data//maps/VilethornWoods/scripts.pory"
	.string "You creep me out too!$"

VilethornWoods_Trainer_E_Text_2:
# 227 "data//maps/VilethornWoods/scripts.pory"
	.string "I've been stuck here for hours. I need\n"
	.string "to get out!$"

VilethornWoods_Trainer_F1_Text_0:
# 235 "data//maps/VilethornWoods/scripts.pory"
	.string "We're on our way to Silversun City to\n"
	.string "interview the great Gloria! Get out of\l"
	.string "our way!$"

VilethornWoods_Trainer_F1_Text_1:
# 235 "data//maps/VilethornWoods/scripts.pory"
	.string "We lost!$"

VilethornWoods_Trainer_F1_Text_2:
# 236 "data//maps/VilethornWoods/scripts.pory"
	.string "If we can get an exclusive interview\n"
	.string "with her, itll be the scoop of the week!$"

VilethornWoods_Trainer_G_Text_0:
# 251 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm one of the best bug catchers\n"
	.string "around. I want to become a Gym Leader\l"
	.string "one day!$"

VilethornWoods_Trainer_G_Text_1:
# 251 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you a Gym Leader or something?$"

VilethornWoods_Trainer_G_Text_2:
# 252 "data//maps/VilethornWoods/scripts.pory"
	.string "As a Gym Leader to-be, my team needs to\n"
	.string "be able to handle a variety of threats.$"

VilethornWoods_Trainer_H_Text_0:
# 258 "data//maps/VilethornWoods/scripts.pory"
	.string "I wonder what's inside this\n"
	.string "house...maybe there's some loot!$"

VilethornWoods_Trainer_H_Text_1:
# 258 "data//maps/VilethornWoods/scripts.pory"
	.string "No loot for me!$"

VilethornWoods_Trainer_H_Text_2:
# 259 "data//maps/VilethornWoods/scripts.pory"
	.string "Fine, I'll just stand here and look while\n"
	.string "you loot everything...$"

VilethornWoods_NPC1_Text_0:
# 267 "data//maps/VilethornWoods/scripts.pory"
	.string "The Morelull here in Vilethorn Woods\n"
	.string "release spores when in danger. That's\l"
	.string "what creates this fog.$"

VilethornWoods_NPC2_Text_0:
# 277 "data//maps/VilethornWoods/scripts.pory"
	.string "Chef$"

VilethornWoods_NPC2_Text_1:
# 278 "data//maps/VilethornWoods/scripts.pory"
	.string "These mushrooms are really rare, you\n"
	.string "know?$"

VilethornWoods_NPC2_Text_2:
# 281 "data//maps/VilethornWoods/scripts.pory"
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
# 288 "data//maps/VilethornWoods/scripts.pory"
	.string "Perfect! This'll be a great addition to\n"
	.string "our pantry. Thank you! Now I must give\l"
	.string "you something in exchage.$"

VilethornWoods_NPC2_Text_4:
# 294 "data//maps/VilethornWoods/scripts.pory"
	.string "Hey, you don't have any! Are you trying\n"
	.string "to trick me? The Drowzee and Morelull\l"
	.string "doing enough of that!$"

VilethornWoods_NPC2_Text_5:
# 298 "data//maps/VilethornWoods/scripts.pory"
	.string "Come back when you do!$"

VilethornWoods_Cook_Reward_Text_0:
# 306 "data//maps/VilethornWoods/scripts.pory"
	.string "Perhaps a spoon from the restaurant?\n"
	.string "Or this incense?$"

VilethornWoods_Cook_Reward_Text_1:
# 308 "data//maps/VilethornWoods/scripts.pory"
	.string "Twisted Spoon$"

VilethornWoods_Cook_Reward_Text_2:
# 308 "data//maps/VilethornWoods/scripts.pory"
	.string "Rose Incense$"

VilethornWoods_Cook_Reward_Give_Text_0:
# 316 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you sure?$"

VilethornWoods_Cook_RewardEnd_Text_0:
# 324 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over Cormoria. And if you\l"
	.string "ever visit Pelluca City, be sure to drop\l"
	.string "by our restaurant!$"

VilethornWoods_NPC3_Text_0:
# 333 "data//maps/VilethornWoods/scripts.pory"
	.string "My foot hurts!$"

VilethornWoods_NPC3_Text_1:
# 335 "data//maps/VilethornWoods/scripts.pory"
	.string "Gah! I got lost in this stupid forest\n"
	.string "and tripped on a giant tree root. I got\l"
	.string "mad and ripped it out! Do you want it?$"

VilethornWoods_NPC3_Text_2:
# 337 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm so angry that you'll have to battle\n"
	.string "me for it!$"

VilethornWoods_NPC3_Text_3:
# 338 "data//maps/VilethornWoods/scripts.pory"
	.string "My anger is gone now!$"

VilethornWoods_NPC3_Text_4:
# 342 "data//maps/VilethornWoods/scripts.pory"
	.string "Good riddance! I hope you find some use\n"
	.string "for it.$"

VilethornWoods_NPC3_Text_5:
# 344 "data//maps/VilethornWoods/scripts.pory"
	.string "Just as well. It's a root after all -\n"
	.string "what use would it have?$"

VilethornWoods_Celebi_Seed_Text_0:
# 356 "data//maps/VilethornWoods/scripts.pory"
	.string "It's fertile soil...but not the same as\n"
	.string "berry tree soil.$"

VilethornWoods_Celebi_Seed_Text_1:
# 361 "data//maps/VilethornWoods/scripts.pory"
	.string "Plant a Time Seed?$"

VilethornWoods_Celebi_Seed_Text_2:
# 366 "data//maps/VilethornWoods/scripts.pory"
	.string "{PLAYER} planted the time seed in the\n"
	.string "fertile soil.$"

VilethornWoods_Celebi_Seed_Text_3:
# 369 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe it needs some type of water to\n"
	.string "grow...$"
