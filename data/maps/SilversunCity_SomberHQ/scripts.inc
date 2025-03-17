# 1 "data//maps/SilversunCity_SomberHQ/scripts.pory"

# 2 "data//maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_PROF, 1
# 3 "data//maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_MELEA, 2
# 4 "data//maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_GAB, 3
# 5 "data//maps/SilversunCity_SomberHQ/scripts.pory"
    .set LOCALID_GRUNT, 4

SilversunCity_SomberHQ_MapScripts::
	.byte 0


SilversunCity_SomberHQ_EventScript_Main_Trigger0::
# 18 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_SomberHQ_EventScript_Main_Trigger0_2
# 19 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 21 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 22 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	call SilversunCity_SomberHQ_EventScript_Main
	return

SilversunCity_SomberHQ_EventScript_Main_Trigger0_2:
	end


SilversunCity_SomberHQ_EventScript_Main_Trigger1::
# 25 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_SomberHQ_EventScript_Main_Trigger1_2
# 26 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger1_Movement_0
# 28 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 29 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	call SilversunCity_SomberHQ_EventScript_Main
	return

SilversunCity_SomberHQ_EventScript_Main_Trigger1_2:
	end


SilversunCity_SomberHQ_EventScript_Main::
# 36 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 37 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 38 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 39 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_0
# 40 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 41 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 42 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 43 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 44 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_1
# 45 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 47 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 48 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 49 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_2
# 50 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 55 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_2
# 56 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 57 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 61 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_0
# 62 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 63 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 64 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_3
# 65 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 66 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 68 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8004, 3
# 69 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8005, 3
# 70 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8006, 8
# 71 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	setvar VAR_0x8007, 5
# 72 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	special ShakeCamera
# 73 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_4
# 74 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 75 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 78 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0
# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_PROF, SilversunCity_SomberHQ_EventScript_Main_Movement_3
# 80 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 82 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 83 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 84 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 24
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_5
# 88 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 92 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_5
# 93 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 94 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 95 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_4
# 96 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 97 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 98 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_6
# 99 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 100 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 30
# 101 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_6
# 102 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 103 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GRUNT, SilversunCity_SomberHQ_EventScript_Main_Movement_7
# 104 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 105 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_7
# 106 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 107 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_8
# 108 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_9
# 110 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 111 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_8
# 112 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 113 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_MELEA, SilversunCity_SomberHQ_EventScript_Main_Movement_9
# 114 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 115 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 116 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_9
# 117 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 118 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_1
# 119 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 120 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	delay 16
# 121 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_10
# 122 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement LOCALID_GAB, SilversunCity_SomberHQ_EventScript_Main_Movement_10
# 124 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	waitmovement 0
# 131 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_no_intro TRAINER_SOMBERHQ_MELEA, SilversunCity_SomberHQ_EventScript_Main_Text_11
	return


# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0:
# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
	step_end

# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Trigger1_Movement_0:
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
	step_end

# 36 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_0:
# 36 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_left
	step_end

# 41 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_1:
# 41 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_2:
# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_3:
# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 79 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_4:
# 81 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_down
	step_end

# 82 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_5:
# 82 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_up
	step_end

# 98 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_6:
# 98 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 103 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_7:
# 103 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	jump_in_place_up
	step_end

# 107 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_8:
# 107 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_left
# 107 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 107 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_left
	step_end

# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_9:
# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	face_right
# 109 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	emote_exclamation_mark
	step_end

# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Movement_10:
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_down
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
# 123 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_faster_left
	step_end

SilversunCity_SomberHQ_EventScript_Main_Text_0:
# 39 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: It's no use Professor! We already\n"
	.string "know where you hid the dreamstone. It's\l"
	.string "on MT CERAM.\p"
	.string "Hahaha! What a pathetic attempt at\n"
	.string "hiding the dreamstone from us.$"

SilversunCity_SomberHQ_EventScript_Main_Text_1:
# 44 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: Fine! Go get the dreamstone,\n"
	.string "you rascal! You'll repeat what happened\l"
	.string "at MT CERAM. Without the Dreamalyser,\l"
	.string "the dreamstone will transport you to\l"
	.string "the past. It's uncontrollable! And I will\l"
	.string "NEVER reveal the Dreamalyser\l"
	.string "blueprints to the likes of you!\p"
	.string "???: Oh Professor...you underestimate\n"
	.string "us. You see, a while ago, we obtained the\l"
	.string "blueprints from your lab.$"

SilversunCity_SomberHQ_EventScript_Main_Text_2:
# 49 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: But how?!\p"
	.string "???: Not to worry. Nobody at the lab was\n"
	.string "harmed. Your lab and Team Somber share\l"
	.string "a symbiotic relationship after all.\p"
	.string "TENEBRIS: Symbiotes? You thugs are\n"
	.string "just parasites!\p"
	.string "???: Enough of this chatter. We have a\n"
	.string "guest.$"

SilversunCity_SomberHQ_EventScript_Main_Text_3:
# 64 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Come here child. Let me see your\n"
	.string "face.$"

SilversunCity_SomberHQ_EventScript_Main_Text_4:
# 73 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: I said COME!!$"

SilversunCity_SomberHQ_EventScript_Main_Text_5:
# 87 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: So you're the one who defeated\n"
	.string "MOXIE at MT CERAM. So young...you\l"
	.string "must've gotten really lucky.\p"
	.string "???: Meet your Professor. He's been of\n"
	.string "invaluable help to us...albeit\l"
	.string "unwillingly.\p"
	.string "TENEBRIS: {PLAYER}. I recall signing\n"
	.string "your acceptance letter. I-I wish we had\l"
	.string "met under better circumstances.$"

SilversunCity_SomberHQ_EventScript_Main_Text_6:
# 101 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: How did you get inside our\n"
	.string "headquarters, I wonder...$"

SilversunCity_SomberHQ_EventScript_Main_Text_7:
# 105 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GRUNT: Boss! Boss! GABRIELLE was on\n"
	.string "guard duty.\p"
	.string "???: So it was you, GABRIELLE?\n"
	.string "Hmm...what a blunder. MOXIE was right.\l"
	.string "You really are useless.$"

SilversunCity_SomberHQ_EventScript_Main_Text_8:
# 111 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE: Miss MELEA, I-I'm sorry. I\n"
	.string "owed him and I didn't-$"

SilversunCity_SomberHQ_EventScript_Main_Text_9:
# 116 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "MELEA: You mean that it was\n"
	.string "INTENTIONAL!? And don't use my name in\l"
	.string "public, you moron!\p"
	.string "GABRIELLE: Y-yes, I'm so sorry. I just -\p"
	.string "MELEA: You just NOTHING! You BETRAYED\n"
	.string "us! Out! OUT! You're no longer a part of\l"
	.string "Team Somber! And I'm going to have a hit\l"
	.string "squad chase you till the ends of the\l"
	.string "Earth!$"

SilversunCity_SomberHQ_EventScript_Main_Text_10:
# 121 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "GABRIELLE: No boss, please! What about\n"
	.string "my promise?\p"
	.string "MELEA: Should've thought of that\n"
	.string "before betraying us then! To hell with\l"
	.string "your promise! Now GET OUT!\p"
	.string "GABRIELLE:...$"

SilversunCity_SomberHQ_EventScript_Main_Text_11:
# 131 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stupid child!$"
