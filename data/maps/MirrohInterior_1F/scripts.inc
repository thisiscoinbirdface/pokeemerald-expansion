# 1 "data//maps/MirrohInterior_1F/scripts.pory"

# 2 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_NURSE, 1
# 3 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_ROBBER, 2

MirrohInterior_1F_MapScripts::
# 7 "data//maps/MirrohInterior_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MirrohInterior_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MirrohInterior_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data//maps/MirrohInterior_1F/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, MirrohInterior_1F_EventScript_NurseQuest_End
	.2byte 0


MirrohInterior_1F_EventScript_Nurse::
# 31 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Nurse_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_EventScript_Chansey::
# 36 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 37 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Chansey_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger0::
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2
# 43 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 44 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0
# 47 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger1::
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2
# 52 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 53 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 55 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0
# 56 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger2::
# 60 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2
# 61 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 62 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 64 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0
# 65 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 66 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Exclamation::
# 75 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 76 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 77 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 79 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0
# 80 "data//maps/MirrohInterior_1F/scripts.pory"
	release
	return


MirrohInterior_1F_EventScript_NurseQuest_Main::
# 84 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0
# 85 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 87 "data//maps/MirrohInterior_1F/scripts.pory"
	startquest QUEST_MIRROH_NURSE_CHANSEY
# 88 "data//maps/MirrohInterior_1F/scripts.pory"
	setvar VAR_MIRROH_NURSE_CHANSEY_QUEST, 1
# 89 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_NURSE_QUEST_START
# 90 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_EventScript_NurseQuest_MissingChansey::
# 94 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 95 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 96 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 97 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_0
# 98 "data//maps/MirrohInterior_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 99 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_1
# 100 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 101 "data//maps/MirrohInterior_1F/scripts.pory"
	clearflag FLAG_HIDE_MIRROH_LAST_CHANSEY
# 102 "data//maps/MirrohInterior_1F/scripts.pory"
	setvar VAR_MIRROH_NURSE_CHANSEY_QUEST, 2
# 103 "data//maps/MirrohInterior_1F/scripts.pory"
	warp MAP_MIRROH_INTERIOR_1F, 42, 46
	return


MirrohInterior_1F_EventScript_NurseQuest_End::
# 106 "data//maps/MirrohInterior_1F/scripts.pory"
	compare VAR_MIRROH_NURSE_CHANSEY_QUEST, 2
	goto_if_eq MirrohInterior_1F_EventScript_NurseQuest_End_2
MirrohInterior_1F_EventScript_NurseQuest_End_1:
	end

MirrohInterior_1F_EventScript_NurseQuest_End_2:
# 108 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 109 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 110 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 112 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_0
# 113 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 114 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_0
# 115 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 116 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_1
# 117 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 118 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 119 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_2
# 120 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 121 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 16
# 122 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_End_Text_3
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 126 "data//maps/MirrohInterior_1F/scripts.pory"
	completequest QUEST_MIRROH_NURSE_CHANSEY
# 127 "data//maps/MirrohInterior_1F/scripts.pory"
	setvar VAR_MIRROH_NURSE_CHANSEY_QUEST, 3
# 128 "data//maps/MirrohInterior_1F/scripts.pory"
	release
	goto MirrohInterior_1F_EventScript_NurseQuest_End_1


MirrohInterior_1F_Trainer_A::
# 151 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_A, MirrohInterior_1F_Trainer_A_Text_0, MirrohInterior_1F_Trainer_A_Text_1
# 152 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_A_Text_2
# 153 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_B::
# 158 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_B, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_1
# 159 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_2
# 160 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_C::
# 165 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_C, MirrohInterior_1F_Trainer_C_Text_0, MirrohInterior_1F_Trainer_C_Text_1
# 166 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_C_Text_2
# 167 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_D::
# 172 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 173 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_0
# 174 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 175 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_ROBBER, MirrohInterior_1F_Trainer_D_Movement_0
# 176 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 177 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 178 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_1
# 180 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_D_Text_2
# 181 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_3
# 182 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 183 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_Trainer_D_Movement_1
# 184 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_ROBBER, MirrohInterior_1F_Trainer_D_Movement_2
# 185 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 186 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_ROBBER
# 188 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_ROBBER
# 189 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_Trainer_E::
# 195 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_E_Text_0, MirrohInterior_1F_Trainer_E_Text_1
# 196 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_E_Text_2
# 197 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_NPC_A::
# 218 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_A_Text_0, MSGBOX_NPC
# 219 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_B::
# 224 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_B_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_C::
# 229 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_C_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_D::
# 235 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_E::
# 241 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_Pineco::
# 245 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Pineco_Text_0, MSGBOX_NPC
	end


# 46 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0:
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 55 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0:
# 55 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 55 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 55 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 55 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 55 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 55 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 64 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0:
# 64 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 64 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 64 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 64 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 64 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 75 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0:
# 75 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_right
# 75 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 114 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_0:
# 114 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_up
# 114 "data//maps/MirrohInterior_1F/scripts.pory"
	face_right
	step_end

# 122 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_End_Movement_1:
# 122 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 122 "data//maps/MirrohInterior_1F/scripts.pory"
	face_right
	step_end

# 175 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_Trainer_D_Movement_0:
# 175 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_down
# 175 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 183 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_Trainer_D_Movement_1:
# 183 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 183 "data//maps/MirrohInterior_1F/scripts.pory"
	face_down
	step_end

# 184 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_Trainer_D_Movement_2:
# 184 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 184 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 184 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 184 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 184 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 184 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 184 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
	step_end

MirrohInterior_1F_EventScript_Nurse_Text_0:
# 31 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Have you found Chansey yet?\n"
	.string "We're all really worried!$"

MirrohInterior_1F_EventScript_Chansey_Text_0:
# 37 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Chansey looks stressed! It must be\n"
	.string "worried about its friend.$"

MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0:
# 79 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Hey! Are you a trainer? I need\n"
	.string "your help!$"

MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0:
# 84 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: I was taking these Chanseys up\n"
	.string "to Winterlily Hollow to help the Nurse\l"
	.string "Joy there, but there was a cave-in and\l"
	.string "one of the Chanseys got lost! We can't\l"
	.string "go through these caves alone - the\l"
	.string "Pokémon are too fierce. Please find\l"
	.string "Chansey for us!$"

MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_0:
# 97 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Chansey: seyy!!!\p"
	.string "Chansey looks so relieved - it's about\n"
	.string "to cry!\p"
	.string "It must have been really scared alone\n"
	.string "here.\p"
	.string "...\p"
	.string "Chansey stretches out a hand...$"

MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_1:
# 99 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Thank you Chansey! You don't need to\n"
	.string "worry any more. It's time to take you\l"
	.string "back to Nurse Joy.$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_0:
# 112 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Chansey!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_1:
# 116 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Oh my! Chansey! Are you alright?$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_2:
# 119 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "CHANSEY: seyyy!!!$"

MirrohInterior_1F_EventScript_NurseQuest_End_Text_3:
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Thank you trainer! You saved\n"
	.string "Chansey!$"

MirrohInterior_1F_Trainer_A_Text_0:
# 151 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Ho ho! Didn't expect to see a fellow\n"
	.string "traveler up here in this frozen\l"
	.string "mountain!$"

MirrohInterior_1F_Trainer_A_Text_1:
# 151 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Keep traveling, traveler!$"

MirrohInterior_1F_Trainer_A_Text_2:
# 152 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I love delving deep into the mountains\n"
	.string "of Cormoria!$"

MirrohInterior_1F_Trainer_B_Text_0:
# 158 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! That item's mine!$"

MirrohInterior_1F_Trainer_B_Text_1:
# 158 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine, you can have it...$"

MirrohInterior_1F_Trainer_B_Text_2:
# 159 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Travelers often leave rare items inside\n"
	.string "caves and mountains. That's where the\l"
	.string "money is, baby!$"

MirrohInterior_1F_Trainer_C_Text_0:
# 165 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I may switch to ICE type Pokémon after\n"
	.string "seeing the Pokémon here!$"

MirrohInterior_1F_Trainer_C_Text_1:
# 165 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I should just use ROCK types!$"

MirrohInterior_1F_Trainer_C_Text_2:
# 166 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "If you go deeper into the mountain,\n"
	.string "you'll find some rare ICE type Pokemon!$"

MirrohInterior_1F_Trainer_D_Text_0:
# 173 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Hehehe - that Chansey in the corner is\n"
	.string "mine! I just need to figure out how to\l"
	.string "clear these rocks out of the way...$"

MirrohInterior_1F_Trainer_D_Text_1:
# 178 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Who're you? Mind your own business, kid.\p"
	.string "...\p"
	.string "You're going to return Chansey to Nurse\n"
	.string "Joy by the entrance?\p"
	.string "Hah! Fat chance. Ever heard about\n"
	.string "finders keepers? Well I'll teach you\l"
	.string "since nobody else did!$"

MirrohInterior_1F_Trainer_D_Text_2:
# 180 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! My new Chansey!$"

MirrohInterior_1F_Trainer_D_Text_3:
# 181 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine! Give that Chansey back to Nurse\n"
	.string "Joy! I'm outta here!$"

MirrohInterior_1F_Trainer_E_Text_0:
# 195 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I can't get through to Winterlily Hollow\n"
	.string "from this side. It's so frustrating!$"

MirrohInterior_1F_Trainer_E_Text_1:
# 195 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "You're also frustrating!$"

MirrohInterior_1F_Trainer_E_Text_2:
# 196 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I mean why even build a tunnel then?$"

MirrohInterior_1F_NPC_A_Text_0:
# 218 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I'm trekking to Winterlily Hollow! But my\n"
	.string "GRASS type Pokémon can't deal with all\l"
	.string "the ICE type Pokémon around here...$"

MirrohInterior_1F_NPC_B_Text_0:
# 224 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "The way to Winterlily Hollow is past the\n"
	.string "ledge above. But how do I cross the\l"
	.string "ledge?$"

MirrohInterior_1F_NPC_C_Text_0:
# 229 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Some dangerous looking people passed\n"
	.string "through here earlier with loads of\l"
	.string "heavy machinery. All that commotion\l"
	.string "caused a bunch of rocks to cave in!$"

MirrohInterior_1F_NPC_D_Text_0:
# 235 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Past this is the trek upto the mountain\n"
	.string "peak. The weather is harsh!$"

MirrohInterior_1F_Pineco_Text_0:
# 245 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Pineco looks cold!$"
