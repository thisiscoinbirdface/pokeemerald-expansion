# 1 "data//maps/MirrohInterior_1F/scripts.pory"

# 2 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_NURSE, 1
# 3 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_ROBBER, 2
# 4 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_CH1, 24
# 5 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_CH2, 25
# 6 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_CH3, 26        
# 7 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_CHANSEY_LAST, 32
# 8 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_GRUNT1, 29
# 9 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_GRUNT2, 17

MirrohInterior_1F_MapScripts::
# 13 "data//maps/MirrohInterior_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MirrohInterior_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MirrohInterior_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 14 "data//maps/MirrohInterior_1F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, MirrohInterior_1F_EventScript_NurseQuest_End
	.2byte 0


MirrohInterior_1F_EventScript_Nurse::
# 36 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Nurse_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_EventScript_Chansey::
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Chansey_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger0::
# 47 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0
# 52 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 53 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger1::
# 56 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 58 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 60 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0
# 61 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 62 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger2::
# 65 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2
# 66 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 67 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 69 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0
# 70 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 71 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Exclamation::
# 80 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 81 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 82 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 84 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0
# 85 "data//maps/MirrohInterior_1F/scripts.pory"
	release
	return


MirrohInterior_1F_EventScript_NurseQuest_Main::
# 89 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0
# 90 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 92 "data//maps/MirrohInterior_1F/scripts.pory"
	startquest QUEST_MIRROH_NURSE_CHANSEY
# 93 "data//maps/MirrohInterior_1F/scripts.pory"
	setvar VAR_MIRROH_NURSE_CHANSEY_QUEST, 1
# 94 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_NURSE_QUEST_START
# 95 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_EventScript_NurseQuest_MissingChansey::
# 99 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 100 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 101 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 102 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_0
# 103 "data//maps/MirrohInterior_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 104 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_1
# 105 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 106 "data//maps/MirrohInterior_1F/scripts.pory"
	clearflag FLAG_HIDE_MIRROH_LAST_CHANSEY
# 107 "data//maps/MirrohInterior_1F/scripts.pory"
	setvar VAR_MIRROH_NURSE_CHANSEY_QUEST, 2
# 108 "data//maps/MirrohInterior_1F/scripts.pory"
	warp MAP_MIRROH_INTERIOR_1F, 42, 46
	return


MirrohInterior_1F_EventScript_NurseQuest_End::
# 111 "data//maps/MirrohInterior_1F/scripts.pory"
	compare VAR_MIRROH_NURSE_CHANSEY_QUEST, 2
	goto_if_eq MirrohInterior_1F_EventScript_NurseQuest_End_2
MirrohInterior_1F_EventScript_NurseQuest_End_1:
	end

MirrohInterior_1F_EventScript_NurseQuest_End_2:
# 113 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_0
# 114 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 115 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 118 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 119 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH1, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1
# 120 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH2, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1
# 121 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH3, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1
# 122 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH1, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_2
# 126 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH2, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_3
# 127 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH3, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_4
# 128 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement LOCALID_CH1
# 129 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 131 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_0
# 132 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 133 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_5
# 134 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 135 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_1
# 136 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 137 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 138 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CHANSEY_LAST, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_6
# 139 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 140 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_2
# 142 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 143 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 144 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_7
# 145 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 146 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_3
# 147 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 148 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_8
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 150 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CHANSEY_LAST, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_9
# 151 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 152 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 153 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_4
# 154 "data//maps/MirrohInterior_1F/scripts.pory"
	giveitem ITEM_EVIOLITE
# 155 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_5
# 156 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 157 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 158 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_0
# 159 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 160 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 161 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_6
# 162 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 165 "data//maps/MirrohInterior_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 166 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_CH1
# 167 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_CH2
# 168 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_CH3
# 169 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_CHANSEY_LAST
# 170 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_NURSE
# 171 "data//maps/MirrohInterior_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 174 "data//maps/MirrohInterior_1F/scripts.pory"
	completequest QUEST_MIRROH_NURSE_CHANSEY
# 175 "data//maps/MirrohInterior_1F/scripts.pory"
	setvar VAR_MIRROH_NURSE_CHANSEY_QUEST, 3
# 176 "data//maps/MirrohInterior_1F/scripts.pory"
	release
	goto MirrohInterior_1F_EventScript_NurseQuest_End_1


MirrohInterior_1F_Trainer_A::
# 199 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_A, MirrohInterior_1F_Trainer_A_Text_0, MirrohInterior_1F_Trainer_A_Text_1
# 200 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_A_Text_2
# 201 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_B::
# 206 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_B, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_1
# 207 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_2
# 208 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_C::
# 213 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_C, MirrohInterior_1F_Trainer_C_Text_0, MirrohInterior_1F_Trainer_C_Text_1
# 214 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_C_Text_2
# 215 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_D::
# 220 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 221 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_0
# 222 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 223 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_ROBBER, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_9
# 224 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 225 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 226 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_1
# 228 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_D_Text_2
# 229 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_3
# 230 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 231 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_Trainer_D_Movement_0
# 232 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_ROBBER, MirrohInterior_1F_Trainer_D_Movement_1
# 233 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 234 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_ROBBER
# 236 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_ROBBER
# 237 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_Trainer_E::
# 243 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_E_Text_0, MirrohInterior_1F_Trainer_E_Text_1
# 244 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_E_Text_2
# 245 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_NPC_A::
# 266 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_A_Text_0, MSGBOX_NPC
# 267 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_B::
# 272 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_B_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_C::
# 277 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_C_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_D::
# 283 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_E::
# 289 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_Pineco::
# 293 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_PINECO, CRY_MODE_NORMAL
# 294 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Pineco_Text_0, MSGBOX_NPC
	end


MirrohInterior_Bergmite_A::
# 307 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_BERGMITE_A, MirrohInterior_Bergmite_A_2
# 312 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_Bergmite_A_Text_1
# 313 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_BERGMITE_A
# 314 "data//maps/MirrohInterior_1F/scripts.pory"
	setwildbattle SPECIES_BERGMITE, 28
# 315 "data//maps/MirrohInterior_1F/scripts.pory"
	dowildbattle
	end

MirrohInterior_Bergmite_A_2:
# 308 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_Bergmite_A_Text_0, MSGBOX_NPC
	end


MirrohInterior_Bergmite_B::
# 320 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_BERGMITE_B, MirrohInterior_Bergmite_B_2
# 325 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_Bergmite_A_Text_1
# 326 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_BERGMITE_B
# 327 "data//maps/MirrohInterior_1F/scripts.pory"
	setwildbattle SPECIES_BERGMITE, 28
# 328 "data//maps/MirrohInterior_1F/scripts.pory"
	dowildbattle
	end

MirrohInterior_Bergmite_B_2:
# 321 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_Bergmite_A_Text_0, MSGBOX_NPC
	end


MirrohInterior_Bergmite_C::
# 333 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_BERGMITE_C, MirrohInterior_Bergmite_C_2
# 338 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_Bergmite_A_Text_1
# 339 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_BERGMITE_C
# 340 "data//maps/MirrohInterior_1F/scripts.pory"
	setwildbattle SPECIES_BERGMITE, 28
# 341 "data//maps/MirrohInterior_1F/scripts.pory"
	dowildbattle
	end

MirrohInterior_Bergmite_C_2:
# 334 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_Bergmite_A_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_SomberGrunts_Trigger::
# 366 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_INT_SOMBER_GRUNTS, MirrohInterior_1F_SomberGrunts_Trigger_2
# 368 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 369 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT1, MirrohInterior_1F_SomberGrunts_Trigger_Movement_0
# 370 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 371 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 372 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_SomberGrunts_Trigger_Text_0
# 373 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 374 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT2, MirrohInterior_1F_SomberGrunts_Trigger_Movement_1
# 375 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 376 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 377 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_SomberGrunts_Trigger_Text_1
# 378 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 379 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 24
# 381 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT1, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 382 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT2, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 383 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 384 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 24
# 386 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_SomberGrunts_Trigger_Text_2
# 387 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 389 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT1, MirrohInterior_1F_SomberGrunts_Trigger_Movement_2
# 390 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT2, MirrohInterior_1F_SomberGrunts_Trigger_Movement_2
# 391 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 392 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 24
# 394 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHINT_E, MirrohInterior_1F_SomberGrunts_Trigger_Text_3
# 396 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT1, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 397 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 398 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 399 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_SomberGrunts_Trigger_Text_4
# 400 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 401 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 8
# 402 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT2, MirrohInterior_1F_SomberGrunts_Trigger_Movement_3
# 403 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 404 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 405 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_SomberGrunts_Trigger_Text_5
# 406 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 407 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 24
# 409 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT1, MirrohInterior_1F_SomberGrunts_Trigger_Movement_4
# 410 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT2, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_8
# 411 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 412 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_SomberGrunts_Trigger_Text_6
# 413 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 416 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT1, MirrohInterior_1F_SomberGrunts_Trigger_Movement_5
# 417 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT2, MirrohInterior_1F_SomberGrunts_Trigger_Movement_5
# 418 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 419 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_GRUNT2
# 420 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_GRUNT1, MirrohInterior_1F_SomberGrunts_Trigger_Movement_6
# 421 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 422 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_GRUNT1
# 424 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_INT_SOMBER_GRUNTS
# 426 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end

MirrohInterior_1F_SomberGrunts_Trigger_2:
	end


# 51 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0:
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 60 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0:
# 60 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 60 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 60 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 60 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 60 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 60 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 69 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0:
# 69 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 69 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 69 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 69 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 69 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 80 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0:
# 80 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_right
# 80 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 113 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_0:
# 113 "data//maps/MirrohInterior_1F/scripts.pory"
	face_left
	step_end

# 119 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1:
# 119 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 125 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_2:
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	face_left
	step_end

# 126 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_3:
# 126 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
# 126 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
# 126 "data//maps/MirrohInterior_1F/scripts.pory"
	face_down
	step_end

# 127 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_4:
# 127 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
# 127 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_up
# 127 "data//maps/MirrohInterior_1F/scripts.pory"
	face_down
	step_end

# 133 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_5:
# 133 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_up
# 133 "data//maps/MirrohInterior_1F/scripts.pory"
	face_right
	step_end

# 138 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_6:
# 138 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_right
	step_end

# 144 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_7:
# 144 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 144 "data//maps/MirrohInterior_1F/scripts.pory"
	face_right
	step_end

# 148 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_8:
# 148 "data//maps/MirrohInterior_1F/scripts.pory"
	face_up
	step_end

# 150 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_9:
# 150 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_down
# 150 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 231 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_Trainer_D_Movement_0:
# 231 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 231 "data//maps/MirrohInterior_1F/scripts.pory"
	face_down
	step_end

# 232 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_Trainer_D_Movement_1:
# 232 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 232 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 232 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 232 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 232 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 232 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 232 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
	step_end

# 369 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_SomberGrunts_Trigger_Movement_0:
# 369 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_down
	step_end

# 374 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_SomberGrunts_Trigger_Movement_1:
# 374 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_up
	step_end

# 389 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_SomberGrunts_Trigger_Movement_2:
# 389 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
	step_end

# 402 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_SomberGrunts_Trigger_Movement_3:
# 402 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_question_mark
	step_end

# 409 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_SomberGrunts_Trigger_Movement_4:
# 409 "data//maps/MirrohInterior_1F/scripts.pory"
	face_down
	step_end

# 416 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_SomberGrunts_Trigger_Movement_5:
# 416 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 416 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 416 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 416 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 416 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 416 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 416 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
	step_end

# 420 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_SomberGrunts_Trigger_Movement_6:
# 420 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
	step_end

MirrohInterior_1F_EventScript_Nurse_Text_0:
# 36 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Have you found Chansey yet?\n"
	.string "We're all really worried!$"

MirrohInterior_1F_EventScript_Chansey_Text_0:
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Chansey looks stressed! It must be\n"
	.string "worried about its friend.$"

MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0:
# 84 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Hey! Are you a trainer? I need\n"
	.string "your help!$"

MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0:
# 89 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: I was taking these Chanseys up\n"
	.string "to Winterlily Hollow to help the Nurse\l"
	.string "Joy there, but there was a cave-in and\l"
	.string "one of the Chanseys got lost! We can't\l"
	.string "go through these caves alone - the\l"
	.string "Pokémon are too fierce. Please find\l"
	.string "Chansey for us!$"

MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_0:
# 102 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Chansey: seyy!!!\p"
	.string "Chansey looks so relieved - it's about\n"
	.string "to cry!\p"
	.string "It must have been really scared alone\n"
	.string "here.\p"
	.string "...\p"
	.string "Chansey stretches out a hand...$"

MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_1:
# 104 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Thank you Chansey! You don't need to\n"
	.string "worry any more. It's time to take you\l"
	.string "back to Nurse Joy.$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_0:
# 131 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Chansey!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_1:
# 135 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Oh my! Chansey! Are you alright?$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_2:
# 140 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "CHANSEY: seyyy!!!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_3:
# 146 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Thank you trainer! You saved\n"
	.string "Chansey!\p"
	.string "...\p"
	.string "NURSE: So these Team Somber people\n"
	.string "caused the cave-ins. How scary! I hope\l"
	.string "we don't run into them.\p"
	.string "We're all in your debt, {PLAYER}.\n"
	.string "There's not much in the way of a reward\l"
	.string "that I can...oh?$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_4:
# 153 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "CHANSEY: seeyyy!!\p"
	.string "Chansey pulls something out of its\n"
	.string "pocket and hands it to you!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_5:
# 155 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Thank you Chansey!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_6:
# 161 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: We should head off to Winterlily\n"
	.string "Hollow now. The nurse there must be\l"
	.string "waiting for us.\p"
	.string "NURSE: Thank you again, {PLAYER} and\n"
	.string "we wish you all the best in your journey.\l"
	.string "Drop by the Pokémon Center any time!$"

MirrohInterior_1F_Trainer_A_Text_0:
# 199 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I'm looking for a Bergmite but why I\n"
	.string "can't find any?$"

MirrohInterior_1F_Trainer_A_Text_1:
# 199 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "If I had a Bergmite I would've won!$"

MirrohInterior_1F_Trainer_A_Text_2:
# 200 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Maybe the Bergmite hide in the rocks or\n"
	.string "something...$"

MirrohInterior_1F_Trainer_B_Text_0:
# 206 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! That item's mine!$"

MirrohInterior_1F_Trainer_B_Text_1:
# 206 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine, you can have it...$"

MirrohInterior_1F_Trainer_B_Text_2:
# 207 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Travelers often leave rare items inside\n"
	.string "caves and mountains. That's where the\l"
	.string "money is, baby!$"

MirrohInterior_1F_Trainer_C_Text_0:
# 213 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I may switch to ICE type Pokémon after\n"
	.string "seeing the Pokémon here!$"

MirrohInterior_1F_Trainer_C_Text_1:
# 213 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I should just use ROCK types!$"

MirrohInterior_1F_Trainer_C_Text_2:
# 214 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "If you go deeper into the mountain,\n"
	.string "you'll find some rare ICE type Pokémon!$"

MirrohInterior_1F_Trainer_D_Text_0:
# 221 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Hehehe - that Chansey in the corner is\n"
	.string "mine! I just need to figure out how to\l"
	.string "clear these rocks out of the way...$"

MirrohInterior_1F_Trainer_D_Text_1:
# 226 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Who're you? Mind your own business, kid.\p"
	.string "...\p"
	.string "You're going to return Chansey to Nurse\n"
	.string "Joy by the entrance?\p"
	.string "Hah! Fat chance. Ever heard about\n"
	.string "finders keepers? Well I'll teach you\l"
	.string "since nobody else did!$"

MirrohInterior_1F_Trainer_D_Text_2:
# 228 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! My new Chansey!$"

MirrohInterior_1F_Trainer_D_Text_3:
# 229 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine! Give that Chansey back to Nurse\n"
	.string "Joy! I'm outta here!$"

MirrohInterior_1F_Trainer_E_Text_0:
# 243 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I can't get through to Winterlily Hollow\n"
	.string "from this side. It's so frustrating!$"

MirrohInterior_1F_Trainer_E_Text_1:
# 243 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "You're also frustrating!$"

MirrohInterior_1F_Trainer_E_Text_2:
# 244 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I mean why even build a tunnel then?$"

MirrohInterior_1F_NPC_A_Text_0:
# 266 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I'm trekking to Winterlily Hollow! But my\n"
	.string "GRASS type Pokémon can't deal with all\l"
	.string "the ICE type Pokémon around here...$"

MirrohInterior_1F_NPC_B_Text_0:
# 272 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "The way to Winterlily Hollow is past the\n"
	.string "ledge above. But how do I cross the\l"
	.string "ledge?$"

MirrohInterior_1F_NPC_C_Text_0:
# 277 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Some dangerous looking people passed\n"
	.string "through here earlier with loads of\l"
	.string "heavy machinery. All that commotion\l"
	.string "caused a bunch of rocks to cave in!$"

MirrohInterior_1F_NPC_D_Text_0:
# 283 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Past this is the trek upto the mountain\n"
	.string "peak. The weather is harsh!$"

MirrohInterior_1F_Pineco_Text_0:
# 294 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Pineco looks cold!$"

MirrohInterior_Bergmite_A_Text_0:
# 308 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "There's nothing here.$"

MirrohInterior_Bergmite_A_Text_1:
# 312 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "{PLAYER} searched the rock...\p"
	.string "...but it wasn't a rock! It was a wild\n"
	.string "Pokemon!$"

MirrohInterior_1F_SomberGrunts_Trigger_Text_0:
# 372 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "GRUNT: Did you move all the equipment?\n"
	.string "The boss is gonna be angry - we gotta\l"
	.string "get the Dreamalyser up and running\l"
	.string "quick!$"

MirrohInterior_1F_SomberGrunts_Trigger_Text_1:
# 377 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "GRUNT: Would you relax? I'm not\n"
	.string "Gabrielle - of course I moved\l"
	.string "everything! Caused some cave-ins, but\l"
	.string "that's not our problem! Haha!$"

MirrohInterior_1F_SomberGrunts_Trigger_Text_2:
# 386 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "GRUNT: Hey! What are you doing? Didn't\n"
	.string "your parents tell you it was rude to\l"
	.string "eavesdrop!$"

MirrohInterior_1F_SomberGrunts_Trigger_Text_3:
# 394 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Darn, we lost! My Pokemon are useless!$"

MirrohInterior_1F_SomberGrunts_Trigger_Text_4:
# 399 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "GRUNT: Argh! Stupid Mime Jr! You're\n"
	.string "useless!$"

MirrohInterior_1F_SomberGrunts_Trigger_Text_5:
# 405 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "GRUNT: Hey - aren't you that lab\n"
	.string "assistant who beat boss Melea back in\l"
	.string "Silversun City?$"

MirrohInterior_1F_SomberGrunts_Trigger_Text_6:
# 412 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "GRUNT: Yeah its the same trainer! The\n"
	.string "boss will want to know. Let's go!$"
