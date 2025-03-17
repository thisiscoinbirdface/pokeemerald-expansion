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
	call SilversunCity_SomberHQ_EventScript_Main
	return

SilversunCity_SomberHQ_EventScript_Main_Trigger0_2:
	end


SilversunCity_SomberHQ_EventScript_Main_Trigger1::
# 24 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	goto_if_set FLAG_SILVERSUN_SOMBERHQ_MAIN, SilversunCity_SomberHQ_EventScript_Main_Trigger1_2
# 25 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	lockall
# 26 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_SomberHQ_EventScript_Main_Trigger1_Movement_0
# 27 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	call SilversunCity_SomberHQ_EventScript_Main
	return

SilversunCity_SomberHQ_EventScript_Main_Trigger1_2:
	end


SilversunCity_SomberHQ_EventScript_Main::
# 34 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_0
# 35 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 36 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_1
# 37 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 38 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_2
# 39 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 40 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_3
# 41 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 42 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_4
# 43 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 44 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_5
# 45 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_6
# 47 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 52 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_7
# 53 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_8
# 56 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 57 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_9
# 58 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 59 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_10
# 60 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 61 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	msgbox SilversunCity_SomberHQ_EventScript_Main_Text_11
# 62 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	release
# 72 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	trainerbattle_no_intro TRAINER_SOMBERHQ_MELEA, SilversunCity_SomberHQ_EventScript_Main_Text_12
	return


# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Trigger0_Movement_0:
# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 20 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
	step_end

# 26 "data//maps/SilversunCity_SomberHQ/scripts.pory"
SilversunCity_SomberHQ_EventScript_Main_Trigger1_Movement_0:
# 26 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_up
# 26 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
# 26 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	walk_right
	step_end

SilversunCity_SomberHQ_EventScript_Main_Text_0:
# 34 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: It's no use Professor! We already\n"
	.string "know where you hid the dreamstone. It's\l"
	.string "on MT CERAM.\p"
	.string "Hahaha! What a pathetic attempt at\n"
	.string "hiding the dreamstone from us.$"

SilversunCity_SomberHQ_EventScript_Main_Text_1:
# 36 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: Fine! Go get the dreamstone\n"
	.string "you rascal! You'll just repeat what\l"
	.string "happened at MT CERAM. Without the\l"
	.string "Dreamalyser, the dreamstone will\l"
	.string "transport you back to the past. It's\l"
	.string "uncontrollable! And I will NEVER reveal\l"
	.string "the Dreamalyser blueprints to the likes\l"
	.string "of you!$"

SilversunCity_SomberHQ_EventScript_Main_Text_2:
# 38 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Oh Professor...tsk tsk. You\n"
	.string "underestimate us. You see, a while ago,\l"
	.string "we obtained the blueprints from your\l"
	.string "lab.$"

SilversunCity_SomberHQ_EventScript_Main_Text_3:
# 40 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: But how?!$"

SilversunCity_SomberHQ_EventScript_Main_Text_4:
# 42 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Not to worry. Nobody at the lab was\n"
	.string "harmed. Your lab and Team Somber share\l"
	.string "a symbiotic relationship after all.$"

SilversunCity_SomberHQ_EventScript_Main_Text_5:
# 44 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: Symbiotes? You thugs are\n"
	.string "parasites!$"

SilversunCity_SomberHQ_EventScript_Main_Text_6:
# 46 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Enough of this chatter. We have a\n"
	.string "guest.$"

SilversunCity_SomberHQ_EventScript_Main_Text_7:
# 52 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Come here child. Let me see your\n"
	.string "face.$"

SilversunCity_SomberHQ_EventScript_Main_Text_8:
# 54 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: I said COME!!$"

SilversunCity_SomberHQ_EventScript_Main_Text_9:
# 57 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: So you're the one who defeated\n"
	.string "MOXIE at MT CERAM. So young...you\l"
	.string "must've gotten really lucky.$"

SilversunCity_SomberHQ_EventScript_Main_Text_10:
# 59 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "???: Meet your Professor. He's been of\n"
	.string "invaluable help to us...albeit\l"
	.string "unwillingly.$"

SilversunCity_SomberHQ_EventScript_Main_Text_11:
# 61 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "TENEBRIS: {PLAYER}. I recall signing\n"
	.string "your acceptance letter. I-I wish we had\l"
	.string "met under better circumstances...$"

SilversunCity_SomberHQ_EventScript_Main_Text_12:
# 72 "data//maps/SilversunCity_SomberHQ/scripts.pory"
	.string "You stupid child!$"
