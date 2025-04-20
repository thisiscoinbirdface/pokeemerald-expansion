# 1 "data//maps/MirrohInterior_1F/scripts.pory"

# 2 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_NURSE, 1
# 3 "data//maps/MirrohInterior_1F/scripts.pory"
    .set LOCALID_ROBBER, 2

MirrohInterior_1F_MapScripts::
	.byte 0


MirrohInterior_1F_EventScript_Nurse::
# 24 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Nurse_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_EventScript_Chansey::
# 29 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 30 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_Chansey_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger0::
# 35 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2
# 36 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 37 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0
# 40 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 41 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger0_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger1::
# 44 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2
# 45 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 46 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0
# 49 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 50 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger1_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Trigger2::
# 53 "data//maps/MirrohInterior_1F/scripts.pory"
	goto_if_set FLAG_MIRROH_NURSE_QUEST_START, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2
# 54 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 55 "data//maps/MirrohInterior_1F/scripts.pory"
	call MirrohInterior_1F_EventScript_NurseQuest_Exclamation
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0
# 58 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 59 "data//maps/MirrohInterior_1F/scripts.pory"
	goto MirrohInterior_1F_EventScript_NurseQuest_Main
	return

MirrohInterior_1F_EventScript_NurseQuest_Trigger2_2:
	end


MirrohInterior_1F_EventScript_NurseQuest_Exclamation::
# 68 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_NURSE, MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0
# 69 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 70 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 72 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0
# 73 "data//maps/MirrohInterior_1F/scripts.pory"
	release
	return


MirrohInterior_1F_EventScript_NurseQuest_Main::
# 77 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0
# 78 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 80 "data//maps/MirrohInterior_1F/scripts.pory"
	startquest QUEST_MIRROH_NURSE_CHANSEY
# 81 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_NURSE_QUEST_START
# 82 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_EventScript_NurseQuest_MissingChansey::
# 86 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 87 "data//maps/MirrohInterior_1F/scripts.pory"
	faceplayer
# 88 "data//maps/MirrohInterior_1F/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 89 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_0
# 90 "data//maps/MirrohInterior_1F/scripts.pory"
	special HealPlayerParty
# 91 "data//maps/MirrohInterior_1F/scripts.pory"
	waitstate
# 92 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_1
# 93 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 94 "data//maps/MirrohInterior_1F/scripts.pory"
	clearflag FLAG_HIDE_MIRROH_LAST_CHANSEY
# 95 "data//maps/MirrohInterior_1F/scripts.pory"
	warp MAP_MIRROH_INTERIOR_1F, 42, 46
	return


MirrohInterior_1F_Trainer_A::
# 116 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_A, MirrohInterior_1F_Trainer_A_Text_0, MirrohInterior_1F_Trainer_A_Text_1
# 117 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_A_Text_2
# 118 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_B::
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_B, MirrohInterior_1F_Trainer_B_Text_0, MirrohInterior_1F_Trainer_B_Text_1
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_B_Text_2
# 125 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_C::
# 130 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_C, MirrohInterior_1F_Trainer_C_Text_0, MirrohInterior_1F_Trainer_C_Text_1
# 131 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_C_Text_2
# 132 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_Trainer_D::
# 137 "data//maps/MirrohInterior_1F/scripts.pory"
	lockall
# 138 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_0
# 139 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 140 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_ROBBER, MirrohInterior_1F_Trainer_D_Movement_0
# 141 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 142 "data//maps/MirrohInterior_1F/scripts.pory"
	delay 20
# 143 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_1
# 145 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_D_Text_2
# 146 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_D_Text_3
# 147 "data//maps/MirrohInterior_1F/scripts.pory"
	release
# 148 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohInterior_1F_Trainer_D_Movement_1
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	applymovement LOCALID_ROBBER, MirrohInterior_1F_Trainer_D_Movement_2
# 150 "data//maps/MirrohInterior_1F/scripts.pory"
	waitmovement 0
# 151 "data//maps/MirrohInterior_1F/scripts.pory"
	removeobject LOCALID_ROBBER
# 153 "data//maps/MirrohInterior_1F/scripts.pory"
	setflag FLAG_MIRROH_ROBBER
# 154 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_Trainer_E::
# 160 "data//maps/MirrohInterior_1F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT_D, MirrohInterior_1F_Trainer_E_Text_0, MirrohInterior_1F_Trainer_E_Text_1
# 161 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Trainer_E_Text_2
# 162 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	return


MirrohInterior_1F_NPC_A::
# 183 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_A_Text_0, MSGBOX_NPC
# 184 "data//maps/MirrohInterior_1F/scripts.pory"
	releaseall
	end


MirrohInterior_1F_NPC_B::
# 189 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_B_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_C::
# 194 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_C_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_D::
# 200 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_NPC_E::
# 206 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_1F_Pineco::
# 210 "data//maps/MirrohInterior_1F/scripts.pory"
	msgbox MirrohInterior_1F_Pineco_Text_0, MSGBOX_NPC
	end


# 39 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger0_Movement_0:
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 39 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 48 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger1_Movement_0:
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 48 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 57 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Trigger2_Movement_0:
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 57 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
	step_end

# 68 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Movement_0:
# 68 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_right
# 68 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 140 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_Trainer_D_Movement_0:
# 140 "data//maps/MirrohInterior_1F/scripts.pory"
	jump_in_place_down
# 140 "data//maps/MirrohInterior_1F/scripts.pory"
	emote_exclamation_mark
	step_end

# 148 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_Trainer_D_Movement_1:
# 148 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_left
# 148 "data//maps/MirrohInterior_1F/scripts.pory"
	face_down
	step_end

# 149 "data//maps/MirrohInterior_1F/scripts.pory"
MirrohInterior_1F_Trainer_D_Movement_2:
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
# 149 "data//maps/MirrohInterior_1F/scripts.pory"
	walk_down
	step_end

MirrohInterior_1F_EventScript_Nurse_Text_0:
# 24 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Have you found Chansey yet?\n"
	.string "We're all really worried!$"

MirrohInterior_1F_EventScript_Chansey_Text_0:
# 30 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Chansey looks stressed! It must be\n"
	.string "worried about its friend.$"

MirrohInterior_1F_EventScript_NurseQuest_Exclamation_Text_0:
# 72 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: Hey! Are you a trainer? I need\n"
	.string "your help!$"

MirrohInterior_1F_EventScript_NurseQuest_Main_Text_0:
# 77 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "NURSE: I was taking these Chanseys up\n"
	.string "to Winterlily Hollow to help the Nurse\l"
	.string "Joy there, but there was a cave-in and\l"
	.string "one of the Chanseys got lost! We can't\l"
	.string "go through these caves alone - the\l"
	.string "Pokémon are too fierce. Please find\l"
	.string "Chansey for us!$"

MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_0:
# 89 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Chansey: seyy!!!\p"
	.string "Chansey looks so relieved - it's about\n"
	.string "to cry!\p"
	.string "It must have been really scared alone\n"
	.string "here.\p"
	.string "...\p"
	.string "Chansey stretches out a hand...$"

MirrohInterior_1F_EventScript_NurseQuest_MissingChansey_Text_1:
# 92 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Thank you Chansey! You don't need to\n"
	.string "worry any more. It's time to take you\l"
	.string "back to Nurse Joy.$"

MirrohInterior_1F_Trainer_A_Text_0:
# 116 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Ho ho! Didn't expect to see a fellow\n"
	.string "traveler up here in this frozen\l"
	.string "mountain!$"

MirrohInterior_1F_Trainer_A_Text_1:
# 116 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Keep traveling, traveler!$"

MirrohInterior_1F_Trainer_A_Text_2:
# 117 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I love delving deep into the mountains\n"
	.string "of Cormoria!$"

MirrohInterior_1F_Trainer_B_Text_0:
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! That item's mine!$"

MirrohInterior_1F_Trainer_B_Text_1:
# 123 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine, you can have it...$"

MirrohInterior_1F_Trainer_B_Text_2:
# 124 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Travelers often leave rare items inside\n"
	.string "caves and mountains. That's where the\l"
	.string "money is, baby!$"

MirrohInterior_1F_Trainer_C_Text_0:
# 130 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I may switch to ICE type Pokémon after\n"
	.string "seeing the Pokémon here!$"

MirrohInterior_1F_Trainer_C_Text_1:
# 130 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I should just use ROCK types!$"

MirrohInterior_1F_Trainer_C_Text_2:
# 131 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "If you go deeper into the mountain,\n"
	.string "you'll find some rare ICE type Pokemon!$"

MirrohInterior_1F_Trainer_D_Text_0:
# 138 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Hehehe - that Chansey in the corner is\n"
	.string "mine! I just need to figure out how to\l"
	.string "clear these rocks out of the way...$"

MirrohInterior_1F_Trainer_D_Text_1:
# 143 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Who're you? Mind your own business, kid.\p"
	.string "...\p"
	.string "You're going to return Chansey to Nurse\n"
	.string "Joy by the entrance?\p"
	.string "Hah! Fat chance. Ever heard about\n"
	.string "finders keepers? Well I'll teach you\l"
	.string "since nobody else did!$"

MirrohInterior_1F_Trainer_D_Text_2:
# 145 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "No! My new Chansey!$"

MirrohInterior_1F_Trainer_D_Text_3:
# 146 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Fine! Give that Chansey back to Nurse\n"
	.string "Joy! I'm outta here!$"

MirrohInterior_1F_Trainer_E_Text_0:
# 160 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I can't get through to Winterlily Hollow\n"
	.string "from this side. It's so frustrating!$"

MirrohInterior_1F_Trainer_E_Text_1:
# 160 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "You're also frustrating!$"

MirrohInterior_1F_Trainer_E_Text_2:
# 161 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I mean why even build a tunnel then?$"

MirrohInterior_1F_NPC_A_Text_0:
# 183 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "I'm trekking to Winterlily Hollow! But my\n"
	.string "GRASS type Pokémon can't deal with all\l"
	.string "the ICE type Pokémon around here...$"

MirrohInterior_1F_NPC_B_Text_0:
# 189 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "The way to Winterlily Hollow is past the\n"
	.string "ledge above. But how do I cross the\l"
	.string "ledge?$"

MirrohInterior_1F_NPC_C_Text_0:
# 194 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Some dangerous looking people passed\n"
	.string "through here earlier with loads of\l"
	.string "heavy machinery. All that commotion\l"
	.string "caused a bunch of rocks to cave in!$"

MirrohInterior_1F_NPC_D_Text_0:
# 200 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Past this is the trek upto the mountain\n"
	.string "peak. The weather is harsh!$"

MirrohInterior_1F_Pineco_Text_0:
# 210 "data//maps/MirrohInterior_1F/scripts.pory"
	.string "Pineco looks cold!$"
