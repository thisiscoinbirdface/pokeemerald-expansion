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
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 140 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_1
# 141 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 142 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 143 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_3
# 144 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 145 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 146 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_4
# 147 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 148 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 149 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_5
# 150 "data//maps/VilethornWoods/scripts.pory"
	release
# 153 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_EventScript_TriggerProf_Movement_0
# 154 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 155 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 156 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 157 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_1
# 158 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 159 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 160 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_2
# 161 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 162 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 163 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_3
# 164 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 165 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 166 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_EventScript_TriggerProf_Text_0
# 167 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_6
# 168 "data//maps/VilethornWoods/scripts.pory"
	release
# 169 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 170 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 172 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 0, 0
# 173 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_PROF, 1, 0
# 174 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_GRUNT, 0, 0
# 175 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_PROF, 1, 0
# 177 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_PROF
# 178 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_EventScript_TriggerProf_2:
	end


VilethornWoods_Trainer_A::
# 189 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_A, VilethornWoods_Trainer_A_Text_0, VilethornWoods_Trainer_A_Text_1
# 190 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_A_Text_2
# 191 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_B::
# 196 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_B, VilethornWoods_Trainer_B_Text_0, VilethornWoods_Trainer_B_Text_1
# 197 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_B_Text_2
# 198 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_C::
# 203 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_C, VilethornWoods_Trainer_C_Text_0, VilethornWoods_Trainer_C_Text_1
# 204 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_C_Text_2
# 205 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_D::
# 210 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_D, VilethornWoods_Trainer_D_Text_0, VilethornWoods_Trainer_D_Text_1
# 211 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_D_Text_2
# 212 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_E::
# 217 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_E, VilethornWoods_Trainer_E_Text_0, VilethornWoods_Trainer_E_Text_1
# 218 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_E_Text_2
# 219 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F1::
# 224 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 225 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 226 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 227 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 228 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F2::
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


VilethornWoods_Trainer_G::
# 242 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_G, VilethornWoods_Trainer_G_Text_0, VilethornWoods_Trainer_G_Text_1
# 243 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_G_Text_2
# 244 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_H::
# 249 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_H, VilethornWoods_Trainer_H_Text_0, VilethornWoods_Trainer_H_Text_1
# 250 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_H_Text_2
# 251 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_NPC1::
# 258 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC1_Text_0, MSGBOX_NPC
	end


VilethornWoods_NPC2::
# 264 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 265 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 267 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_MUSHROOMS, VilethornWoods_NPC2_2
# 271 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 272 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_2, MSGBOX_YESNO
# 274 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC2_5
# 288 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 289 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_5
VilethornWoods_NPC2_1:
# 292 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_NPC2_2:
# 268 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 269 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_1
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_5:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VilethornWoods_NPC2_8
# 284 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 285 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_4
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_8:
# 277 "data//maps/VilethornWoods/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 278 "data//maps/VilethornWoods/scripts.pory"
	speakername VilethornWoods_NPC2_Text_0
# 279 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_3
# 281 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_Reward
	goto VilethornWoods_NPC2_1


VilethornWoods_Cook_Reward::
# 297 "data//maps/VilethornWoods/scripts.pory"
	message VilethornWoods_Cook_Reward_Text_0
# 298 "data//maps/VilethornWoods/scripts.pory"
	waitmessage
# 299 "data//maps/VilethornWoods/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, VilethornWoods_Cook_Reward_Text_1, VilethornWoods_Cook_Reward_Text_2
# 300 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VilethornWoods_Cook_Reward_1
# 303 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_RewardB
	return

VilethornWoods_Cook_Reward_1:
# 301 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_RewardA
	return


VilethornWoods_Cook_RewardA::
# 308 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8006, ITEM_TWISTEDSPOON
# 309 "data//maps/VilethornWoods/scripts.pory"
	showitemdescription
# 310 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Cook_RewardA_Text_0, MSGBOX_YESNO
# 311 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Cook_RewardA_1
# 316 "data//maps/VilethornWoods/scripts.pory"
	hideitemdescription
# 317 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_Reward
	return

VilethornWoods_Cook_RewardA_1:
# 312 "data//maps/VilethornWoods/scripts.pory"
	hideitemdescription
# 313 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_TWISTEDSPOON
# 314 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_RewardEnd
	return


VilethornWoods_Cook_RewardB::
# 322 "data//maps/VilethornWoods/scripts.pory"
	setvar VAR_0x8006, ITEM_MIRACLE_SEED
# 323 "data//maps/VilethornWoods/scripts.pory"
	showitemdescription
# 324 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Cook_RewardA_Text_0, MSGBOX_YESNO
# 325 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_Cook_RewardB_1
# 330 "data//maps/VilethornWoods/scripts.pory"
	hideitemdescription
# 331 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_Reward
	return

VilethornWoods_Cook_RewardB_1:
# 326 "data//maps/VilethornWoods/scripts.pory"
	hideitemdescription
# 327 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 328 "data//maps/VilethornWoods/scripts.pory"
	goto VilethornWoods_Cook_RewardEnd
	return


VilethornWoods_Cook_RewardEnd::
# 336 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_MUSHROOMS
# 337 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Cook_RewardEnd_Text_0, MSGBOX_NPC
	end


VilethornWoods_NPC3::
# 345 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_ITEM, VilethornWoods_NPC3_2
# 348 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_1, MSGBOX_YESNO
# 349 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC3_5
# 355 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_3, MSGBOX_NPC
VilethornWoods_NPC3_1:
	end

VilethornWoods_NPC3_2:
# 346 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_0, MSGBOX_NPC
	goto VilethornWoods_NPC3_1

VilethornWoods_NPC3_5:
# 350 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_BIG_ROOT
# 351 "data//maps/VilethornWoods/scripts.pory"
	release
# 352 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_ITEM
# 353 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_2, MSGBOX_NPC
	goto VilethornWoods_NPC3_1


VilethornWoods_Celebi_Seed::
# 367 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Celebi_Seed_Text_0
# 368 "data//maps/VilethornWoods/scripts.pory"
	release
	end


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

# 153 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_0:
# 153 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 153 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 153 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 153 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 153 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 153 "data//maps/VilethornWoods/scripts.pory"
	walk_up
	step_end

# 157 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_1:
# 157 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 157 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 157 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 157 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 157 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 157 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 157 "data//maps/VilethornWoods/scripts.pory"
	emote_question_mark
	step_end

# 160 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_2:
# 160 "data//maps/VilethornWoods/scripts.pory"
	face_left
	step_end

# 163 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_3:
# 163 "data//maps/VilethornWoods/scripts.pory"
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
# 51 "data//maps/VilethornWoods/scripts.pory"
	.string "Ralts teleported away!\n"
	.string "It can't have gone far...$"

VilethornWoods_Ralts_SecondTrigger_Text_0:
# 78 "data//maps/VilethornWoods/scripts.pory"
	.string "Ralts teleported away again! It must be\n"
	.string "somewhere in this accursed forest...$"

VilethornWoods_Ralts_Text_0:
# 94 "data//maps/VilethornWoods/scripts.pory"
	.string "Aha! Ralts can't escape this time!$"

VilethornWoods_EventScript_TriggerProf_Text_0:
# 139 "data//maps/VilethornWoods/scripts.pory"
	.string "Grunt$"

VilethornWoods_EventScript_TriggerProf_Text_1:
# 140 "data//maps/VilethornWoods/scripts.pory"
	.string "...yes boss. We've picked up the\n"
	.string "Professor.$"

VilethornWoods_EventScript_TriggerProf_Text_2:
# 141 "data//maps/VilethornWoods/scripts.pory"
	.string "...$"

VilethornWoods_EventScript_TriggerProf_Text_3:
# 143 "data//maps/VilethornWoods/scripts.pory"
	.string "No, nobody saw us, boss.$"

VilethornWoods_EventScript_TriggerProf_Text_4:
# 146 "data//maps/VilethornWoods/scripts.pory"
	.string "Yes boss, I'm positive.$"

VilethornWoods_EventScript_TriggerProf_Text_5:
# 149 "data//maps/VilethornWoods/scripts.pory"
	.string "...okay, we'll head back to HQ right away.$"

VilethornWoods_EventScript_TriggerProf_Text_6:
# 167 "data//maps/VilethornWoods/scripts.pory"
	.string "Must be a wild Impidimp or something...$"

VilethornWoods_Trainer_A_Text_0:
# 189 "data//maps/VilethornWoods/scripts.pory"
	.string "PSYCHIC type Pokémon are my natural\n"
	.string "enemies! That's why I'm training here.$"

VilethornWoods_Trainer_A_Text_1:
# 189 "data//maps/VilethornWoods/scripts.pory"
	.string "I like PSYCHIC types more than you!$"

VilethornWoods_Trainer_A_Text_2:
# 190 "data//maps/VilethornWoods/scripts.pory"
	.string "I like training but I don't want to go to\n"
	.string "deep into this forest...$"

VilethornWoods_Trainer_B_Text_0:
# 196 "data//maps/VilethornWoods/scripts.pory"
	.string "I thought these woods would have BUG\n"
	.string "type Pokemon, but I can't find any. I'm\l"
	.string "so bummed! But beating you in battle\l"
	.string "will make me feel better!$"

VilethornWoods_Trainer_B_Text_1:
# 196 "data//maps/VilethornWoods/scripts.pory"
	.string "I don't feel better at all!$"

VilethornWoods_Trainer_B_Text_2:
# 197 "data//maps/VilethornWoods/scripts.pory"
	.string "This forest is weird...a dense fog, no\n"
	.string "BUG types...$"

VilethornWoods_Trainer_C_Text_0:
# 203 "data//maps/VilethornWoods/scripts.pory"
	.string "The sweet, delicious fog envelops\n"
	.string "us...we are one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_1:
# 203 "data//maps/VilethornWoods/scripts.pory"
	.string "You're not one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_2:
# 204 "data//maps/VilethornWoods/scripts.pory"
	.string "I want to go deeper...sink\n"
	.string "deeper...escape my real life...$"

VilethornWoods_Trainer_D_Text_0:
# 210 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a Pokémon Breeder. Like all\n"
	.string "breeders, we specialise in certain\l"
	.string "Pokémon forms. I'm a horse breeding\l"
	.string "expert!$"

VilethornWoods_Trainer_D_Text_1:
# 210 "data//maps/VilethornWoods/scripts.pory"
	.string "Well fought!$"

VilethornWoods_Trainer_D_Text_2:
# 211 "data//maps/VilethornWoods/scripts.pory"
	.string "I need to raise my horses to become\n"
	.string "stronger. Maybe some VITAMINS would\l"
	.string "help...$"

VilethornWoods_Trainer_E_Text_0:
# 217 "data//maps/VilethornWoods/scripts.pory"
	.string "Eek! These woods creep me out! I'm so\n"
	.string "scared of the DROWZEE - what if I get\l"
	.string "hypnotised?$"

VilethornWoods_Trainer_E_Text_1:
# 217 "data//maps/VilethornWoods/scripts.pory"
	.string "You creep me out too!$"

VilethornWoods_Trainer_E_Text_2:
# 218 "data//maps/VilethornWoods/scripts.pory"
	.string "I've been stuck here for hours. I need\n"
	.string "to get out of here...$"

VilethornWoods_Trainer_F1_Text_0:
# 226 "data//maps/VilethornWoods/scripts.pory"
	.string "We're on our way to Silversun City to\n"
	.string "interview the great Gloria! Get out of\l"
	.string "our way!$"

VilethornWoods_Trainer_F1_Text_1:
# 226 "data//maps/VilethornWoods/scripts.pory"
	.string "We lost!$"

VilethornWoods_Trainer_F1_Text_2:
# 227 "data//maps/VilethornWoods/scripts.pory"
	.string "If we can get an exclusive interview\n"
	.string "with her, itll be the scoop of the week!$"

VilethornWoods_Trainer_G_Text_0:
# 242 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm one of the best bug catchers\n"
	.string "around. I want to become a Gym Leader\l"
	.string "one day!$"

VilethornWoods_Trainer_G_Text_1:
# 242 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you a Gym Leader or something?$"

VilethornWoods_Trainer_G_Text_2:
# 243 "data//maps/VilethornWoods/scripts.pory"
	.string "As a Gym Leader to-be, my team needs to\n"
	.string "be able to handle a variety of threats.$"

VilethornWoods_Trainer_H_Text_0:
# 249 "data//maps/VilethornWoods/scripts.pory"
	.string "I wonder what's inside this\n"
	.string "house...maybe there's some loot!$"

VilethornWoods_Trainer_H_Text_1:
# 249 "data//maps/VilethornWoods/scripts.pory"
	.string "No loot for me!$"

VilethornWoods_Trainer_H_Text_2:
# 250 "data//maps/VilethornWoods/scripts.pory"
	.string "Fine, I'll just stand here and look while\n"
	.string "you loot everything...$"

VilethornWoods_NPC1_Text_0:
# 258 "data//maps/VilethornWoods/scripts.pory"
	.string "The Morelull here in Vilethorn Woods\n"
	.string "release spores when in danger. That's\l"
	.string "what creates this fog.$"

VilethornWoods_NPC2_Text_0:
# 268 "data//maps/VilethornWoods/scripts.pory"
	.string "Chef$"

VilethornWoods_NPC2_Text_1:
# 269 "data//maps/VilethornWoods/scripts.pory"
	.string "These mushrooms are really rare, you\n"
	.string "know?$"

VilethornWoods_NPC2_Text_2:
# 272 "data//maps/VilethornWoods/scripts.pory"
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
# 279 "data//maps/VilethornWoods/scripts.pory"
	.string "Perfect! This'll be a great addition to\n"
	.string "our pantry. Thank you! Now I must give\l"
	.string "you something in exchage.$"

VilethornWoods_NPC2_Text_4:
# 285 "data//maps/VilethornWoods/scripts.pory"
	.string "Hey, you don't have any! Are you trying\n"
	.string "to trick me? The Drowzee and Morelull\l"
	.string "doing enough of that!$"

VilethornWoods_NPC2_Text_5:
# 289 "data//maps/VilethornWoods/scripts.pory"
	.string "Come back when you do!$"

VilethornWoods_Cook_Reward_Text_0:
# 297 "data//maps/VilethornWoods/scripts.pory"
	.string "Perhaps a spoon from the restaurant?\n"
	.string "Or this seed I found?$"

VilethornWoods_Cook_Reward_Text_1:
# 299 "data//maps/VilethornWoods/scripts.pory"
	.string "TWISTEDSPOON$"

VilethornWoods_Cook_Reward_Text_2:
# 299 "data//maps/VilethornWoods/scripts.pory"
	.string "MIRACLE SEED$"

VilethornWoods_Cook_RewardA_Text_0:
# 310 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you sure?$"

VilethornWoods_Cook_RewardEnd_Text_0:
# 337 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over Cormoria. And if you\l"
	.string "ever visit Pelluca City, be sure to drop\l"
	.string "by our restaurant!$"

VilethornWoods_NPC3_Text_0:
# 346 "data//maps/VilethornWoods/scripts.pory"
	.string "My foot hurts!$"

VilethornWoods_NPC3_Text_1:
# 348 "data//maps/VilethornWoods/scripts.pory"
	.string "Gah! I got lost in this stupid forest\n"
	.string "and tripped on a giant tree root. I got\l"
	.string "mad and ripped it out! Do you want it?$"

VilethornWoods_NPC3_Text_2:
# 353 "data//maps/VilethornWoods/scripts.pory"
	.string "Good riddance! I hope you find some use\n"
	.string "for it.$"

VilethornWoods_NPC3_Text_3:
# 355 "data//maps/VilethornWoods/scripts.pory"
	.string "Just as well. It's a root after all -\n"
	.string "what use would it have?$"

VilethornWoods_Celebi_Seed_Text_0:
# 367 "data//maps/VilethornWoods/scripts.pory"
	.string "It's fertile soil...but not the same as\n"
	.string "berry tree soil.$"
