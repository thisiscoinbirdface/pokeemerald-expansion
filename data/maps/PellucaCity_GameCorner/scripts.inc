PellucaCity_GameCorner_MapScripts::
	.byte 0


PellucaCity_GameCorner_NPC1::
# 9 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_NPC2::
# 13 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_NPC2_Doublade::
# 17 "data//maps/PellucaCity_GameCorner/scripts.pory"
	playmoncry SPECIES_DOUBLADE, CRY_MODE_NORMAL
# 18 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC2_Doublade_Text_0
	end


PellucaCity_GameCorner_NPC3::
# 23 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_NPC4::
# 27 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_NPC5::
# 31 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC5_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_NPC6::
# 35 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC6_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_NPC7::
# 39 "data//maps/PellucaCity_GameCorner/scripts.pory"
	lockall
# 40 "data//maps/PellucaCity_GameCorner/scripts.pory"
	applymovement 8, PellucaCity_GameCorner_NPC7_Movement_0
# 41 "data//maps/PellucaCity_GameCorner/scripts.pory"
	waitmovement 0
# 42 "data//maps/PellucaCity_GameCorner/scripts.pory"
	delay 16
# 43 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC7_Text_0
# 44 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end


PellucaCity_GameCorner_NPC8::
# 48 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_GameCorner_Tutor::
# 54 "data//maps/PellucaCity_GameCorner/scripts.pory"
	lockall
# 55 "data//maps/PellucaCity_GameCorner/scripts.pory"
	faceplayer
# 57 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto_if_set FLAG_PELLUCA_GC_TUTOR_BATTLE, PellucaCity_GameCorner_Tutor_2
PellucaCity_GameCorner_Tutor_1:
# 62 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Text_1
# 64 "data//maps/PellucaCity_GameCorner/scripts.pory"
	trainerbattle_no_intro TRAINER_PELLUCA_GAMBLER, PellucaCity_GameCorner_Tutor_Text_2
# 66 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setflag FLAG_PELLUCA_GC_TUTOR_BATTLE
# 67 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Text_3
# 68 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Tutor_Teach
# 70 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Tutor_2:
# 58 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Text_0
# 59 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_Tutor_Teach
	goto PellucaCity_GameCorner_Tutor_1


PellucaCity_GameCorner_Tutor_Teach::
# 76 "data//maps/PellucaCity_GameCorner/scripts.pory"
	message PellucaCity_GameCorner_Tutor_Teach_Text_0
# 77 "data//maps/PellucaCity_GameCorner/scripts.pory"
	waitmessage
# 78 "data//maps/PellucaCity_GameCorner/scripts.pory"
	dynmultichoice 0, 0, TRUE, 5, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_GameCorner_Tutor_Teach_Text_1, PellucaCity_GameCorner_Tutor_Teach_Text_2, PellucaCity_GameCorner_Tutor_Teach_Text_3, PellucaCity_GameCorner_Tutor_Teach_Text_4
# 81 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PellucaCity_GameCorner_Tutor_Teach_2
PellucaCity_GameCorner_Tutor_Teach_1:
# 85 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_GameCorner_Tutor_Teach_5
PellucaCity_GameCorner_Tutor_Teach_4:
# 89 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq PellucaCity_GameCorner_Tutor_Teach_8
PellucaCity_GameCorner_Tutor_Teach_7:
# 93 "data//maps/PellucaCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq PellucaCity_GameCorner_Tutor_Teach_11
PellucaCity_GameCorner_Tutor_Teach_10:
# 97 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Teach_Text_5, MSGBOX_NPC
# 98 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end

PellucaCity_GameCorner_Tutor_Teach_2:
# 82 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8005, MOVE_BULLET_SEED
# 83 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_TeachMove
	goto PellucaCity_GameCorner_Tutor_Teach_1

PellucaCity_GameCorner_Tutor_Teach_5:
# 86 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8005, MOVE_ICICLE_SPEAR
# 87 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_TeachMove
	goto PellucaCity_GameCorner_Tutor_Teach_4

PellucaCity_GameCorner_Tutor_Teach_8:
# 90 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_BLAST
# 91 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_TeachMove
	goto PellucaCity_GameCorner_Tutor_Teach_7

PellucaCity_GameCorner_Tutor_Teach_11:
# 94 "data//maps/PellucaCity_GameCorner/scripts.pory"
	setvar VAR_0x8005, MOVE_SCALE_SHOT
# 95 "data//maps/PellucaCity_GameCorner/scripts.pory"
	goto PellucaCity_GameCorner_TeachMove
	goto PellucaCity_GameCorner_Tutor_Teach_10


PellucaCity_GameCorner_TeachMove::
# 103 "data//maps/PellucaCity_GameCorner/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 104 "data//maps/PellucaCity_GameCorner/scripts.pory"
	msgbox PellucaCity_GameCorner_Tutor_Teach_Text_5, MSGBOX_NPC
# 105 "data//maps/PellucaCity_GameCorner/scripts.pory"
	releaseall
	end


# 40 "data//maps/PellucaCity_GameCorner/scripts.pory"
PellucaCity_GameCorner_NPC7_Movement_0:
# 40 "data//maps/PellucaCity_GameCorner/scripts.pory"
	emote_exclamation_mark
# 40 "data//maps/PellucaCity_GameCorner/scripts.pory"
	jump_in_place_right
	step_end

PellucaCity_GameCorner_NPC1_Text_0:
# 9 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "I don't have a Coin Case so I can't play.\n"
	.string "They sell them up at the Mirroh Base\l"
	.string "Camp if you want one.$"

PellucaCity_GameCorner_NPC2_Text_0:
# 13 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Don't disturb me! I need to win big, buy\n"
	.string "a Dusk Stone and evolve my Doublade!$"

PellucaCity_GameCorner_NPC2_Doublade_Text_0:
# 18 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Doublade seems more worried about its\n"
	.string "trainer than evolving...$"

PellucaCity_GameCorner_NPC3_Text_0:
# 23 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Another loss! I hate this!$"

PellucaCity_GameCorner_NPC4_Text_0:
# 27 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "I'm taking a break. I just lose control\n"
	.string "playing Voltorb Flip!$"

PellucaCity_GameCorner_NPC5_Text_0:
# 31 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Hehe, this'll be my lucky day!$"

PellucaCity_GameCorner_NPC6_Text_0:
# 35 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Why am I looking at the wall? I can't\n"
	.string "bear to see my wife toss all our money\l"
	.string "down the drain!$"

PellucaCity_GameCorner_NPC7_Text_0:
# 43 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Stupid machine! Give me my coins back!$"

PellucaCity_GameCorner_NPC8_Text_0:
# 48 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "The house always wins...unless you're\n"
	.string "me! I just hit it big!$"

PellucaCity_GameCorner_Tutor_Text_0:
# 58 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "So you've realised the power of luck,\n"
	.string "have you?$"

PellucaCity_GameCorner_Tutor_Text_1:
# 62 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "I'm an Ace Trainer! And a gambler! So I\n"
	.string "guess you'd call me an Ace Gambler!\l"
	.string "Haha! In battle, I don't strategise or\l"
	.string "use force. Why bother when you can luck\l"
	.string "your way through?\p"
	.string "...\p"
	.string "What? Don't think it works?\n"
	.string "I can show you in battle!$"

PellucaCity_GameCorner_Tutor_Text_2:
# 64 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "I got unlucky...or did you get lucky?$"

PellucaCity_GameCorner_Tutor_Text_3:
# 67 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Incredible! So strong...and you're using\n"
	.string "such unlucky moves. Let me teach your\l"
	.string "Pokemon how to be luckier.$"

PellucaCity_GameCorner_Tutor_Teach_Text_0:
# 76 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Which move should I teach?$"

PellucaCity_GameCorner_Tutor_Teach_Text_1:
# 79 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Bullet Seed$"

PellucaCity_GameCorner_Tutor_Teach_Text_2:
# 79 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Icicle Spear$"

PellucaCity_GameCorner_Tutor_Teach_Text_3:
# 79 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Rock Blast$"

PellucaCity_GameCorner_Tutor_Teach_Text_4:
# 79 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Scale Shot$"

PellucaCity_GameCorner_Tutor_Teach_Text_5:
# 97 "data//maps/PellucaCity_GameCorner/scripts.pory"
	.string "Grab yourself a Loaded Dice for extra\n"
	.string "power!$"
