# 1 "data//maps/MirrohInterior_1F/scripts.pory"

# 2 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_NURSE, 1

MirrohInterior_1F_MapScripts::
	.byte 0


MirrohInterior_1F_EventScript_Nurse::
# 23 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Nurse_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_EventScript_Chansey::
# 28 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 29 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Chansey_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger0::
# 37 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2
# 38 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 43 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger1::
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2
# 47 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 52 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger2::
# 55 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2
# 56 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 59 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0
# 60 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 61 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Exclamation::
# 70 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 71 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 72 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 74 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0
# 75 "data//maps/MirrohInterior_1F/scripts.pory"
	release
	return


MirrohInterior_1F_EventScript_NurseQuest_Main::
# 80 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0
# 81 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 83 "data//maps/MirrohInterior_1F/scripts.pory"
	startquest QUEST_MIRROH_NURSE_CHANSEY
# 84 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_NURSE_QUEST_START
# 85 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_Trainer_A::
# 108 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_A, MirrohInterior_1F_Trainer_A_Text_0, MirrohInterior_1F_Trainer_A_Text_1
# 109 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_A_Text_2
# 110 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_B::
# 115 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_B, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_1
# 116 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_2
# 117 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_C::
# 122 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_C, MirrohInterior_1F_Trainer_C_Text_0, MirrohInterior_1F_Trainer_C_Text_1
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_C_Text_2
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_D::
# 129 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_E, MirrohInterior_1F_Trainer_D_Text_0, MirrohInterior_1F_Trainer_D_Text_1
# 130 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_2
# 131 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_E::
# 136 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_E_Text_0, MirrohInterior_1F_Trainer_E_Text_1
# 137 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_E_Text_2
# 138 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_NPC_A::
# 159 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 160 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 161 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_A_Text_0
# 162 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_B::
# 167 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 168 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 169 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_B_Text_0
# 170 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_C::
# 175 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 176 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 177 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_C_Text_0
# 178 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


# 41 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0:
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 50 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0:
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
MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0:
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

# 70 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0:
# 70 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_right
# 70 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

MirrohInterior_1F_EventScript_Nurse_Text_0:
# 23 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Have you found Chansey yet?\n"
	.string "We're all really worried!$"

MirrohInterior_1F_EventScript_Chansey_Text_0:
# 29 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Chansey looks stressed! It must be\n"
	.string "worried about its friend.$"

MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0:
# 74 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Hey! You there! Are you a\n"
	.string "trainer? I need your help!$"

MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0:
# 80 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: I was taking these Chanseys up\n"
	.string "to Winterlily Hollow to help the nurse\l"
	.string "there, but there was a cave-in and one\l"
	.string "of the Chanseys got lost! We can't go\l"
	.string "through these caves alone - the\l"
	.string "Pokémon are too fierce. Please find\l"
	.string "Chansey for us!$"

MirrohInterior_1F_Trainer_A_Text_0:
# 108 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Ho ho! Didn't expect to see a fellow\n"
	.string "traveler up here in this frozen\l"
	.string "mountain!$"

MirrohInterior_1F_Trainer_A_Text_1:
# 108 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Keep traveling, traveler!$"

MirrohInterior_1F_Trainer_A_Text_2:
# 109 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I love delving deep into the mountains\n"
	.string "of Cormoria!$"

MirrohInterior_1F_Trainer_B_Text_0:
# 115 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! That item's mine!$"

MirrohInterior_1F_Trainer_B_Text_1:
# 115 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine, you can have it...$"

MirrohInterior_1F_Trainer_B_Text_2:
# 116 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Travelers often leave rare items inside\n"
	.string "caves and mountains. That's where the\l"
	.string "money is, baby!$"

MirrohInterior_1F_Trainer_C_Text_0:
# 122 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I may switch to ICE type Pokémon after\n"
	.string "seeing the Pokémon here!$"

MirrohInterior_1F_Trainer_C_Text_1:
# 122 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I should just use ROCK types!$"

MirrohInterior_1F_Trainer_C_Text_2:
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "If you go deeper into the mountain,\n"
	.string "you'll find some rare ICE type Pokemon!$"

MirrohInterior_1F_Trainer_D_Text_0:
# 129 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I took a wrong turn and got lost. This is\n"
	.string "a dead end!$"

MirrohInterior_1F_Trainer_D_Text_1:
# 129 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "You're not lost!$"

MirrohInterior_1F_Trainer_D_Text_2:
# 130 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "How do I get out of here?$"

MirrohInterior_1F_Trainer_E_Text_0:
# 136 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I can't get through to Winterlily Hollow\n"
	.string "from this side. It's so frustrating!$"

MirrohInterior_1F_Trainer_E_Text_1:
# 136 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "You're also frustrating!$"

MirrohInterior_1F_Trainer_E_Text_2:
# 137 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I mean why even build a tunnel then?$"

MirrohInterior_1F_NPC_A_Text_0:
# 161 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I'm trekking to Winterlily Hollow! But my\n"
	.string "GRASS type Pokémon can't deal with all\l"
	.string "the ICE type Pokémon around here...$"

MirrohInterior_1F_NPC_B_Text_0:
# 169 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "The way to Winterlily Hollow is past the\n"
	.string "ledge above. But how do I cross the\l"
	.string "ledge?$"

MirrohInterior_1F_NPC_C_Text_0:
# 177 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Past this is the trek upto Mt. Mirroh\n"
	.string "PEAK. The weather is harsh!$"
