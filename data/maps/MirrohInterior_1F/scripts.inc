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

MirrohInterior_1F_MapScripts::
# 11 "data//maps/MirrohInterior_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MirrohInterior_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MirrohInterior_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 12 "data//maps/MirrohInterior_1F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, MirrohInterior_1F_EventScript_NurseQuest_End
	.2byte 0


MirrohInterior_1F_EventScript_Nurse::
# 34 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Nurse_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_EventScript_Chansey::
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 40 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Chansey_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger0::
# 45 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 47 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger1::
# 54 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2
# 55 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 56 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 58 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0
# 59 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 60 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger2::
# 63 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2
# 64 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 65 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 67 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0
# 68 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 69 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Exclamation::
# 78 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 79 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 80 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 82 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0
# 83 "data//maps/MirrohInterior_1F/scripts.pory"
	release
	return


MirrohInterior_1F_EventScript_NurseQuest_Main::
# 87 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0
# 88 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 90 "data//maps/MirrohInterior_1F/scripts.pory"
	startquest QUEST_MIRROH_NURSE_CHANSEY
# 91 "data//maps/MirrohInterior_1F/scripts.pory"
	setvar VAR_MIRROH_NURSE_CHANSEY_QUEST, 1
# 92 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_NURSE_QUEST_START
# 93 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_EventScript_NurseQuest_MissingChansey::
# 97 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 98 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 99 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 100 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_0
# 101 "data//maps/MirrohInterior_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 102 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_1
# 103 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 104 "data//maps/MirrohInterior_1F/scripts.pory"
	clearflag FLAG_HIDE_MIRROH_LAST_CHANSEY
# 105 "data//maps/MirrohInterior_1F/scripts.pory"
	setvar VAR_MIRROH_NURSE_CHANSEY_QUEST, 2
# 106 "data//maps/MirrohInterior_1F/scripts.pory"
	warp MAP_MIRROH_INTERIOR_1F, 42, 46
	return


MirrohInterior_1F_EventScript_NurseQuest_End::
# 109 "data//maps/MirrohInterior_1F/scripts.pory"
	compare VAR_MIRROH_NURSE_CHANSEY_QUEST, 2
	goto_if_eq MirrohInterior_1F_EventScript_NurseQuest_End_2
MirrohInterior_1F_EventScript_NurseQuest_End_1:
	end

MirrohInterior_1F_EventScript_NurseQuest_End_2:
# 111 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_0
# 112 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 113 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 116 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 117 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH1, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1
# 118 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH2, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1
# 119 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH3, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1
# 120 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH1, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_2
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH2, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_3
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH3, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_4
# 126 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement LOCALID_CH1
# 127 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 129 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_0
# 130 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 131 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_5
# 132 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 133 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_1
# 134 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 135 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 136 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CHANSEY_LAST, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_6
# 137 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 138 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_2
# 140 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 141 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 142 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_7
# 143 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 144 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_3
# 145 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 146 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_8
# 147 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 148 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CHANSEY_LAST, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_9
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 150 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 151 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_4
# 152 "data//maps/MirrohInterior_1F/scripts.pory"
	giveitem ITEM_EVIOLITE
# 153 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_5
# 154 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 155 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 156 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_0
# 157 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 158 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 159 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_6
# 160 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 163 "data//maps/MirrohInterior_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 164 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_CH1
# 165 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_CH2
# 166 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_CH3
# 167 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_CHANSEY_LAST
# 168 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_NURSE
# 169 "data//maps/MirrohInterior_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 172 "data//maps/MirrohInterior_1F/scripts.pory"
	completequest QUEST_MIRROH_NURSE_CHANSEY
# 173 "data//maps/MirrohInterior_1F/scripts.pory"
	setvar VAR_MIRROH_NURSE_CHANSEY_QUEST, 3
# 174 "data//maps/MirrohInterior_1F/scripts.pory"
	release
	goto MirrohInterior_1F_EventScript_NurseQuest_End_1


MirrohInterior_1F_Trainer_A::
# 197 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_A, MirrohInterior_1F_Trainer_A_Text_0, MirrohInterior_1F_Trainer_A_Text_1
# 198 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_A_Text_2
# 199 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_B::
# 204 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_B, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_1
# 205 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_2
# 206 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_C::
# 211 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_C, MirrohInterior_1F_Trainer_C_Text_0, MirrohInterior_1F_Trainer_C_Text_1
# 212 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_C_Text_2
# 213 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_D::
# 218 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 219 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_0
# 220 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 221 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_ROBBER, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_9
# 222 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 223 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 224 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_1
# 226 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_D_Text_2
# 227 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_3
# 228 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 229 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_Trainer_D_Movement_0
# 230 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_ROBBER, MirrohInterior_1F_Trainer_D_Movement_1
# 231 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 232 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_ROBBER
# 234 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_ROBBER
# 235 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_Trainer_E::
# 241 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_E_Text_0, MirrohInterior_1F_Trainer_E_Text_1
# 242 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_E_Text_2
# 243 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_NPC_A::
# 264 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_A_Text_0, MSGBOX_NPC
# 265 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_B::
# 270 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_B_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_C::
# 275 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_C_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_D::
# 281 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_E::
# 287 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_Pineco::
# 291 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_PINECO, CRY_MODE_NORMAL
# 292 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Pineco_Text_0, MSGBOX_NPC
	end


MirrohInterior_Bergmite_A::
# 305 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_BERGMITE_A, MirrohInterior_Bergmite_A_2
# 310 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_Bergmite_A_Text_1
# 311 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_BERGMITE_A
# 312 "data//maps/MirrohInterior_1F/scripts.pory"
	setwildbattle SPECIES_BERGMITE, 28
# 313 "data//maps/MirrohInterior_1F/scripts.pory"
	dowildbattle
	end

MirrohInterior_Bergmite_A_2:
# 306 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_Bergmite_A_Text_0, MSGBOX_NPC
	end


MirrohInterior_Bergmite_B::
# 318 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_BERGMITE_B, MirrohInterior_Bergmite_B_2
# 323 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_Bergmite_A_Text_1
# 324 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_BERGMITE_B
# 325 "data//maps/MirrohInterior_1F/scripts.pory"
	setwildbattle SPECIES_BERGMITE, 28
# 326 "data//maps/MirrohInterior_1F/scripts.pory"
	dowildbattle
	end

MirrohInterior_Bergmite_B_2:
# 319 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_Bergmite_A_Text_0, MSGBOX_NPC
	end


MirrohInterior_Bergmite_C::
# 331 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_BERGMITE_C, MirrohInterior_Bergmite_C_2
# 336 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_Bergmite_A_Text_1
# 337 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_BERGMITE_C
# 338 "data//maps/MirrohInterior_1F/scripts.pory"
	setwildbattle SPECIES_BERGMITE, 28
# 339 "data//maps/MirrohInterior_1F/scripts.pory"
	dowildbattle
	end

MirrohInterior_Bergmite_C_2:
# 332 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_Bergmite_A_Text_0, MSGBOX_NPC
	end


# 49 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0:
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 58 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0:
# 58 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 58 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 58 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 58 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 58 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 58 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 67 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0:
# 67 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 67 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 67 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 67 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 67 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 78 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0:
# 78 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_right
# 78 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 111 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_0:
# 111 "data//maps/MirrohInterior_1F/scripts.pory"
	face_left
	step_end

# 117 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1:
# 117 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 123 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_2:
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	face_left
	step_end

# 124 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_3:
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	face_down
	step_end

# 125 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_4:
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_up
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	face_down
	step_end

# 131 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_5:
# 131 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_up
# 131 "data//maps/MirrohInterior_1F/scripts.pory"
	face_right
	step_end

# 136 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_6:
# 136 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_right
	step_end

# 142 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_7:
# 142 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 142 "data//maps/MirrohInterior_1F/scripts.pory"
	face_right
	step_end

# 146 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_8:
# 146 "data//maps/MirrohInterior_1F/scripts.pory"
	face_up
	step_end

# 148 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_9:
# 148 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_down
# 148 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 229 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_Trainer_D_Movement_0:
# 229 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 229 "data//maps/MirrohInterior_1F/scripts.pory"
	face_down
	step_end

# 230 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_Trainer_D_Movement_1:
# 230 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 230 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 230 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 230 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 230 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 230 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 230 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
	step_end

MirrohInterior_1F_EventScript_Nurse_Text_0:
# 34 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Have you found Chansey yet?\n"
	.string "We're all really worried!$"

MirrohInterior_1F_EventScript_Chansey_Text_0:
# 40 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Chansey looks stressed! It must be\n"
	.string "worried about its friend.$"

MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0:
# 82 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Hey! Are you a trainer? I need\n"
	.string "your help!$"

MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0:
# 87 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: I was taking these Chanseys up\n"
	.string "to Winterlily Hollow to help the Nurse\l"
	.string "Joy there, but there was a cave-in and\l"
	.string "one of the Chanseys got lost! We can't\l"
	.string "go through these caves alone - the\l"
	.string "Pokémon are too fierce. Please find\l"
	.string "Chansey for us!$"

MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_0:
# 100 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Chansey: seyy!!!\p"
	.string "Chansey looks so relieved - it's about\n"
	.string "to cry!\p"
	.string "It must have been really scared alone\n"
	.string "here.\p"
	.string "...\p"
	.string "Chansey stretches out a hand...$"

MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_1:
# 102 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Thank you Chansey! You don't need to\n"
	.string "worry any more. It's time to take you\l"
	.string "back to Nurse Joy.$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_0:
# 129 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Chansey!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_1:
# 133 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Oh my! Chansey! Are you alright?$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_2:
# 138 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "CHANSEY: seyyy!!!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_3:
# 144 "data//maps/MirrohInterior_1F/scripts.pory"
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
# 151 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "CHANSEY: seeyyy!!\p"
	.string "Chansey pulls something out of its\n"
	.string "pocket and hands it to you!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_5:
# 153 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Thank you Chansey!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_6:
# 159 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: We should head off to Winterlily\n"
	.string "Hollow now. The nurse there must be\l"
	.string "waiting for us.\p"
	.string "NURSE: Thank you again, {PLAYER} and\n"
	.string "we wish you all the best in your journey.\l"
	.string "Drop by the Pokémon Center any time!$"

MirrohInterior_1F_Trainer_A_Text_0:
# 197 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I'm looking for a Bergmite but why I\n"
	.string "can't find any?$"

MirrohInterior_1F_Trainer_A_Text_1:
# 197 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "If I had a Bergmite I would've won!$"

MirrohInterior_1F_Trainer_A_Text_2:
# 198 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Maybe the Bergmite hide in the rocks or\n"
	.string "something...$"

MirrohInterior_1F_Trainer_B_Text_0:
# 204 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! That item's mine!$"

MirrohInterior_1F_Trainer_B_Text_1:
# 204 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine, you can have it...$"

MirrohInterior_1F_Trainer_B_Text_2:
# 205 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Travelers often leave rare items inside\n"
	.string "caves and mountains. That's where the\l"
	.string "money is, baby!$"

MirrohInterior_1F_Trainer_C_Text_0:
# 211 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I may switch to ICE type Pokémon after\n"
	.string "seeing the Pokémon here!$"

MirrohInterior_1F_Trainer_C_Text_1:
# 211 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I should just use ROCK types!$"

MirrohInterior_1F_Trainer_C_Text_2:
# 212 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "If you go deeper into the mountain,\n"
	.string "you'll find some rare ICE type Pokémon!$"

MirrohInterior_1F_Trainer_D_Text_0:
# 219 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Hehehe - that Chansey in the corner is\n"
	.string "mine! I just need to figure out how to\l"
	.string "clear these rocks out of the way...$"

MirrohInterior_1F_Trainer_D_Text_1:
# 224 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Who're you? Mind your own business, kid.\p"
	.string "...\p"
	.string "You're going to return Chansey to Nurse\n"
	.string "Joy by the entrance?\p"
	.string "Hah! Fat chance. Ever heard about\n"
	.string "finders keepers? Well I'll teach you\l"
	.string "since nobody else did!$"

MirrohInterior_1F_Trainer_D_Text_2:
# 226 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! My new Chansey!$"

MirrohInterior_1F_Trainer_D_Text_3:
# 227 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine! Give that Chansey back to Nurse\n"
	.string "Joy! I'm outta here!$"

MirrohInterior_1F_Trainer_E_Text_0:
# 241 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I can't get through to Winterlily Hollow\n"
	.string "from this side. It's so frustrating!$"

MirrohInterior_1F_Trainer_E_Text_1:
# 241 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "You're also frustrating!$"

MirrohInterior_1F_Trainer_E_Text_2:
# 242 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I mean why even build a tunnel then?$"

MirrohInterior_1F_NPC_A_Text_0:
# 264 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I'm trekking to Winterlily Hollow! But my\n"
	.string "GRASS type Pokémon can't deal with all\l"
	.string "the ICE type Pokémon around here...$"

MirrohInterior_1F_NPC_B_Text_0:
# 270 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "The way to Winterlily Hollow is past the\n"
	.string "ledge above. But how do I cross the\l"
	.string "ledge?$"

MirrohInterior_1F_NPC_C_Text_0:
# 275 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Some dangerous looking people passed\n"
	.string "through here earlier with loads of\l"
	.string "heavy machinery. All that commotion\l"
	.string "caused a bunch of rocks to cave in!$"

MirrohInterior_1F_NPC_D_Text_0:
# 281 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Past this is the trek upto the mountain\n"
	.string "peak. The weather is harsh!$"

MirrohInterior_1F_Pineco_Text_0:
# 292 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Pineco looks cold!$"

MirrohInterior_Bergmite_A_Text_0:
# 306 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "There's nothing here.$"

MirrohInterior_Bergmite_A_Text_1:
# 310 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "{PLAYER} searched the rock...\p"
	.string "...but it wasn't a rock! It was a wild\n"
	.string "Pokemon!$"
