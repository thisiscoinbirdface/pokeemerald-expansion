# 1 "data//maps/MirrohInterior_1F/scripts.pory"

# 2 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_NURSE, 1

MirrohInterior_1F_MapScripts::
	.byte 0


MirrohInterior_1F_EventScript_Nurse::
# 23 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 24 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 25 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Nurse_Text_0
# 26 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 27 "data//maps/MirrohInterior_1F/scripts.pory"
	call Common_EventScript_NurseJoyOnRoute
# 28 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger0::
# 38 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 40 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0
# 43 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 44 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger1::
# 47 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 51 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0
# 52 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 53 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger2::
# 56 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 58 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 60 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0
# 61 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 62 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Exclamation::
# 71 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 72 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 73 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 75 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0
# 76 "data//maps/MirrohInterior_1F/scripts.pory"
	release
	return


MirrohInterior_1F_EventScript_NurseQuest_Main::
# 81 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0
# 82 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 84 "data//maps/MirrohInterior_1F/scripts.pory"
	startquest QUEST_MIRROH_NURSE_CHANSEY
# 85 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_NURSE_QUEST_START
# 86 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_Trainer_A::
# 109 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_A, MirrohInterior_1F_Trainer_A_Text_0, MirrohInterior_1F_Trainer_A_Text_1
# 110 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_A_Text_2
# 111 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_B::
# 116 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_B, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_1
# 117 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_2
# 118 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_C::
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_C, MirrohInterior_1F_Trainer_C_Text_0, MirrohInterior_1F_Trainer_C_Text_1
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_C_Text_2
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_D::
# 130 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_E, MirrohInterior_1F_Trainer_D_Text_0, MirrohInterior_1F_Trainer_D_Text_1
# 131 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_2
# 132 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_E::
# 137 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_E_Text_0, MirrohInterior_1F_Trainer_E_Text_1
# 138 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_E_Text_2
# 139 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_NPC_A::
# 160 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 161 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 162 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_A_Text_0
# 163 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_B::
# 168 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 169 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 170 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_B_Text_0
# 171 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_C::
# 176 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 177 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 178 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_C_Text_0
# 179 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


# 42 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0:
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 42 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 51 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0:
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
MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0:
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

# 71 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0:
# 71 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_right
# 71 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

MirrohInterior_1F_EventScript_Nurse_Text_0:
# 25 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "It's so cold here...CHANSEY and I got\n"
	.string "the worst route!$"

MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0:
# 75 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Hey! You there! Are you a\n"
	.string "trainer? I need your help!$"

MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0:
# 81 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: I was taking these Chansey and\n"
	.string "I up to Winterlily Hollow to help the\l"
	.string "nurse there, but there was a cave-in\l"
	.string "and one of the Chanseys got lost! We\l"
	.string "can't go through these caves alone -\l"
	.string "the Pokémon are too fierce! Please find\l"
	.string "Chansey for us!$"

MirrohInterior_1F_Trainer_A_Text_0:
# 109 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Ho ho! Didn't expect to see a fellow\n"
	.string "traveler up here in this frozen\l"
	.string "mountain!$"

MirrohInterior_1F_Trainer_A_Text_1:
# 109 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Keep traveling, traveler!$"

MirrohInterior_1F_Trainer_A_Text_2:
# 110 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I love delving deep into the mountains\n"
	.string "of Cormoria!$"

MirrohInterior_1F_Trainer_B_Text_0:
# 116 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! That item's mine!$"

MirrohInterior_1F_Trainer_B_Text_1:
# 116 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine, you can have it...$"

MirrohInterior_1F_Trainer_B_Text_2:
# 117 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Travelers often leave rare items inside\n"
	.string "caves and mountains. That's where the\l"
	.string "money is, baby!$"

MirrohInterior_1F_Trainer_C_Text_0:
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I may switch to ICE type Pokémon after\n"
	.string "seeing the Pokémon here!$"

MirrohInterior_1F_Trainer_C_Text_1:
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I should just use ROCK types!$"

MirrohInterior_1F_Trainer_C_Text_2:
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "If you go deeper into the mountain,\n"
	.string "you'll find some rare ICE type Pokemon!$"

MirrohInterior_1F_Trainer_D_Text_0:
# 130 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I took a wrong turn and got lost. This is\n"
	.string "a dead end!$"

MirrohInterior_1F_Trainer_D_Text_1:
# 130 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "You're not lost!$"

MirrohInterior_1F_Trainer_D_Text_2:
# 131 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "How do I get out of here?$"

MirrohInterior_1F_Trainer_E_Text_0:
# 137 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I can't get through to Winterlily Hollow\n"
	.string "from this side. It's so frustrating!$"

MirrohInterior_1F_Trainer_E_Text_1:
# 137 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "You're also frustrating!$"

MirrohInterior_1F_Trainer_E_Text_2:
# 138 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I mean why even build a tunnel then?$"

MirrohInterior_1F_NPC_A_Text_0:
# 162 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I'm trekking to Winterlily Hollow! But my\n"
	.string "GRASS type Pokémon can't deal with all\l"
	.string "the ICE type Pokémon around here...$"

MirrohInterior_1F_NPC_B_Text_0:
# 170 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "The way to Winterlily Hollow is past the\n"
	.string "ledge above. But how do I cross the\l"
	.string "ledge?$"

MirrohInterior_1F_NPC_C_Text_0:
# 178 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Past this is the trek upto Mt. Mirroh\n"
	.string "PEAK. The weather is harsh!$"
