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
# 35 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Nurse_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_EventScript_Chansey::
# 40 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Chansey_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger0::
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2
# 47 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 52 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger1::
# 55 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2
# 56 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 59 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0
# 60 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 61 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger2::
# 64 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2
# 65 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 66 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 68 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0
# 69 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 70 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Exclamation::
# 79 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 80 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 81 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 83 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0
# 84 "data//maps/MirrohInterior_1F/scripts.pory"
	release
	return


MirrohInterior_1F_EventScript_NurseQuest_Main::
# 88 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0
# 89 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 91 "data//maps/MirrohInterior_1F/scripts.pory"
	startquest QUEST_MIRROH_NURSE_CHANSEY
# 92 "data//maps/MirrohInterior_1F/scripts.pory"
	setvar VAR_MIRROH_NURSE_CHANSEY_QUEST, 1
# 93 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_NURSE_QUEST_START
# 94 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_EventScript_NurseQuest_MissingChansey::
# 98 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 99 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 100 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 101 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_0
# 102 "data//maps/MirrohInterior_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 103 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_1
# 104 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 105 "data//maps/MirrohInterior_1F/scripts.pory"
	clearflag FLAG_HIDE_MIRROH_LAST_CHANSEY
# 106 "data//maps/MirrohInterior_1F/scripts.pory"
	setvar VAR_MIRROH_NURSE_CHANSEY_QUEST, 2
# 107 "data//maps/MirrohInterior_1F/scripts.pory"
	warp MAP_MIRROH_INTERIOR_1F, 42, 46
	return


MirrohInterior_1F_EventScript_NurseQuest_End::
# 110 "data//maps/MirrohInterior_1F/scripts.pory"
	compare VAR_MIRROH_NURSE_CHANSEY_QUEST, 2
	goto_if_eq MirrohInterior_1F_EventScript_NurseQuest_End_2
MirrohInterior_1F_EventScript_NurseQuest_End_1:
	end

MirrohInterior_1F_EventScript_NurseQuest_End_2:
# 112 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_0
# 113 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 114 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 117 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 118 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH1, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1
# 119 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH2, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1
# 120 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH3, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1
# 121 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH1, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_2
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH2, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_3
# 126 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CH3, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_4
# 127 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement LOCALID_CH1
# 128 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 130 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_0
# 131 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 132 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_5
# 133 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 134 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_1
# 135 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 136 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 137 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CHANSEY_LAST, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_6
# 138 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 139 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_2
# 141 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 142 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 143 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_7
# 144 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 145 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_3
# 146 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 147 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_8
# 148 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_CHANSEY_LAST, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_9
# 150 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 151 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 152 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_4
# 153 "data//maps/MirrohInterior_1F/scripts.pory"
	giveitem ITEM_EVIOLITE
# 154 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_5
# 155 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 156 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 157 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_0
# 158 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 159 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 160 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_6
# 161 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 164 "data//maps/MirrohInterior_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 165 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_CH1
# 166 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_CH2
# 167 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_CH3
# 168 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_CHANSEY_LAST
# 169 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_NURSE
# 170 "data//maps/MirrohInterior_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 173 "data//maps/MirrohInterior_1F/scripts.pory"
	completequest QUEST_MIRROH_NURSE_CHANSEY
# 174 "data//maps/MirrohInterior_1F/scripts.pory"
	setvar VAR_MIRROH_NURSE_CHANSEY_QUEST, 3
# 175 "data//maps/MirrohInterior_1F/scripts.pory"
	release
	goto MirrohInterior_1F_EventScript_NurseQuest_End_1


MirrohInterior_1F_Trainer_A::
# 198 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_A, MirrohInterior_1F_Trainer_A_Text_0, MirrohInterior_1F_Trainer_A_Text_1
# 199 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_A_Text_2
# 200 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_B::
# 205 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_B, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_1
# 206 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_2
# 207 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_C::
# 212 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_C, MirrohInterior_1F_Trainer_C_Text_0, MirrohInterior_1F_Trainer_C_Text_1
# 213 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_C_Text_2
# 214 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_D::
# 219 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 220 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_0
# 221 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 222 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_ROBBER, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_9
# 223 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 224 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 225 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_1
# 227 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_D_Text_2
# 228 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_3
# 229 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 230 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_Trainer_D_Movement_0
# 231 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_ROBBER, MirrohInterior_1F_Trainer_D_Movement_1
# 232 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 233 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_ROBBER
# 235 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_ROBBER
# 236 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_Trainer_E::
# 242 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_E_Text_0, MirrohInterior_1F_Trainer_E_Text_1
# 243 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_E_Text_2
# 244 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_NPC_A::
# 265 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_A_Text_0, MSGBOX_NPC
# 266 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_B::
# 271 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_B_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_C::
# 276 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_C_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_D::
# 282 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_E::
# 288 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_Pineco::
# 292 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_PINECO, CRY_MODE_NORMAL
# 293 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Pineco_Text_0, MSGBOX_NPC
	end


# 50 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0:
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 59 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0:
# 59 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 59 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 59 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 59 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 59 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 59 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 68 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0:
# 68 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 68 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 68 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 68 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 68 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 79 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0:
# 79 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_right
# 79 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 112 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_0:
# 112 "data//maps/MirrohInterior_1F/scripts.pory"
	face_left
	step_end

# 118 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1:
# 118 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 124 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_2:
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	face_left
	step_end

# 125 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_3:
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	face_down
	step_end

# 126 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_4:
# 126 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_right
# 126 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_up
# 126 "data//maps/MirrohInterior_1F/scripts.pory"
	face_down
	step_end

# 132 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_5:
# 132 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_up
# 132 "data//maps/MirrohInterior_1F/scripts.pory"
	face_right
	step_end

# 137 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_6:
# 137 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_right
	step_end

# 143 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_7:
# 143 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 143 "data//maps/MirrohInterior_1F/scripts.pory"
	face_right
	step_end

# 147 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_8:
# 147 "data//maps/MirrohInterior_1F/scripts.pory"
	face_up
	step_end

# 149 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_9:
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_down
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 230 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_Trainer_D_Movement_0:
# 230 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 230 "data//maps/MirrohInterior_1F/scripts.pory"
	face_down
	step_end

# 231 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_Trainer_D_Movement_1:
# 231 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 231 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 231 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 231 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 231 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 231 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 231 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
	step_end

MirrohInterior_1F_EventScript_Nurse_Text_0:
# 35 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Have you found Chansey yet?\n"
	.string "We're all really worried!$"

MirrohInterior_1F_EventScript_Chansey_Text_0:
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Chansey looks stressed! It must be\n"
	.string "worried about its friend.$"

MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0:
# 83 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Hey! Are you a trainer? I need\n"
	.string "your help!$"

MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0:
# 88 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: I was taking these Chanseys up\n"
	.string "to Winterlily Hollow to help the Nurse\l"
	.string "Joy there, but there was a cave-in and\l"
	.string "one of the Chanseys got lost! We can't\l"
	.string "go through these caves alone - the\l"
	.string "Pokémon are too fierce. Please find\l"
	.string "Chansey for us!$"

MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_0:
# 101 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Chansey: seyy!!!\p"
	.string "Chansey looks so relieved - it's about\n"
	.string "to cry!\p"
	.string "It must have been really scared alone\n"
	.string "here.\p"
	.string "...\p"
	.string "Chansey stretches out a hand...$"

MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_1:
# 103 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Thank you Chansey! You don't need to\n"
	.string "worry any more. It's time to take you\l"
	.string "back to Nurse Joy.$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_0:
# 130 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Chansey!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_1:
# 134 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Oh my! Chansey! Are you alright?$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_2:
# 139 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "CHANSEY: seyyy!!!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_3:
# 145 "data//maps/MirrohInterior_1F/scripts.pory"
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
# 152 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "CHANSEY: seeyyy!!\p"
	.string "Chansey pulls something out of its\n"
	.string "pocket and hands it to you!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_5:
# 154 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Thank you Chansey!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_6:
# 160 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: We should head off to Winterlily\n"
	.string "Hollow now. The nurse there must be\l"
	.string "waiting for us.\p"
	.string "NURSE: Thank you again, {PLAYER} and\n"
	.string "we wish you all the best in your journey.\l"
	.string "Drop by the Pokémon Center any time!$"

MirrohInterior_1F_Trainer_A_Text_0:
# 198 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Ho ho! Didn't expect to see a fellow\n"
	.string "traveler up here in this frozen\l"
	.string "mountain!$"

MirrohInterior_1F_Trainer_A_Text_1:
# 198 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Keep traveling, traveler!$"

MirrohInterior_1F_Trainer_A_Text_2:
# 199 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I love delving deep into the mountains\n"
	.string "of Cormoria!$"

MirrohInterior_1F_Trainer_B_Text_0:
# 205 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! That item's mine!$"

MirrohInterior_1F_Trainer_B_Text_1:
# 205 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine, you can have it...$"

MirrohInterior_1F_Trainer_B_Text_2:
# 206 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Travelers often leave rare items inside\n"
	.string "caves and mountains. That's where the\l"
	.string "money is, baby!$"

MirrohInterior_1F_Trainer_C_Text_0:
# 212 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I may switch to ICE type Pokémon after\n"
	.string "seeing the Pokémon here!$"

MirrohInterior_1F_Trainer_C_Text_1:
# 212 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I should just use ROCK types!$"

MirrohInterior_1F_Trainer_C_Text_2:
# 213 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "If you go deeper into the mountain,\n"
	.string "you'll find some rare ICE type Pokémon!$"

MirrohInterior_1F_Trainer_D_Text_0:
# 220 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Hehehe - that Chansey in the corner is\n"
	.string "mine! I just need to figure out how to\l"
	.string "clear these rocks out of the way...$"

MirrohInterior_1F_Trainer_D_Text_1:
# 225 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Who're you? Mind your own business, kid.\p"
	.string "...\p"
	.string "You're going to return Chansey to Nurse\n"
	.string "Joy by the entrance?\p"
	.string "Hah! Fat chance. Ever heard about\n"
	.string "finders keepers? Well I'll teach you\l"
	.string "since nobody else did!$"

MirrohInterior_1F_Trainer_D_Text_2:
# 227 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! My new Chansey!$"

MirrohInterior_1F_Trainer_D_Text_3:
# 228 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine! Give that Chansey back to Nurse\n"
	.string "Joy! I'm outta here!$"

MirrohInterior_1F_Trainer_E_Text_0:
# 242 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I can't get through to Winterlily Hollow\n"
	.string "from this side. It's so frustrating!$"

MirrohInterior_1F_Trainer_E_Text_1:
# 242 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "You're also frustrating!$"

MirrohInterior_1F_Trainer_E_Text_2:
# 243 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I mean why even build a tunnel then?$"

MirrohInterior_1F_NPC_A_Text_0:
# 265 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I'm trekking to Winterlily Hollow! But my\n"
	.string "GRASS type Pokémon can't deal with all\l"
	.string "the ICE type Pokémon around here...$"

MirrohInterior_1F_NPC_B_Text_0:
# 271 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "The way to Winterlily Hollow is past the\n"
	.string "ledge above. But how do I cross the\l"
	.string "ledge?$"

MirrohInterior_1F_NPC_C_Text_0:
# 276 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Some dangerous looking people passed\n"
	.string "through here earlier with loads of\l"
	.string "heavy machinery. All that commotion\l"
	.string "caused a bunch of rocks to cave in!$"

MirrohInterior_1F_NPC_D_Text_0:
# 282 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Past this is the trek upto the mountain\n"
	.string "peak. The weather is harsh!$"

MirrohInterior_1F_Pineco_Text_0:
# 293 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Pineco looks cold!$"
