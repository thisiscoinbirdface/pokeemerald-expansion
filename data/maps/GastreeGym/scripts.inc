GastreeGym_MapScripts::
	.byte 0


GastreeGym_TrainerBattle_Skip::
# 6 "data//maps/GastreeGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_SKIP, GastreeGym_TrainerBattle_Skip_Text_0, GastreeGym_TrainerBattle_Skip_Text_1
# 7 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_TrainerBattle_Skip_Text_2
# 8 "data//maps/GastreeGym/scripts.pory"
	release
	end


GastreeGym_TrainerBattle_Jaco::
# 15 "data//maps/GastreeGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_JACO, GastreeGym_TrainerBattle_Jaco_Text_0, GastreeGym_TrainerBattle_Jaco_Text_1
# 16 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_TrainerBattle_Jaco_Text_2
# 17 "data//maps/GastreeGym/scripts.pory"
	release
	end


GastreeGym_LeaderBattle::
# 23 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeGym_LeaderBattle_2
# 26 "data//maps/GastreeGym/scripts.pory"
	call Common_EventScript_SaveGame
# 28 "data//maps/GastreeGym/scripts.pory"
	lockall
# 29 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_1
# 30 "data//maps/GastreeGym/scripts.pory"
	release
# 31 "data//maps/GastreeGym/scripts.pory"
	applymovement 9, GastreeGym_LeaderBattle_Movement_0
# 32 "data//maps/GastreeGym/scripts.pory"
	waitmovement 0
# 33 "data//maps/GastreeGym/scripts.pory"
	delay 24
# 35 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_2, MSGBOX_NPC
# 37 "data//maps/GastreeGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_LEADER, GastreeGym_Text_Intro, GastreeGym_Text_Defeated, GastreeGym_EventScript_Victory, NO_MUSIC
# 38 "data//maps/GastreeGym/scripts.pory"
	release
GastreeGym_LeaderBattle_1:
	end

GastreeGym_LeaderBattle_2:
# 24 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_0, MSGBOX_NPC
	goto GastreeGym_LeaderBattle_1


GastreeGym_EventScript_Victory::
# 47 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_0
# 48 "data//maps/GastreeGym/scripts.pory"
	release
# 49 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 52 "data//maps/GastreeGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 55 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_1
# 58 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_2
# 59 "data//maps/GastreeGym/scripts.pory"
	releaseall
	return


GastreeGym_Red::
# 78 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeGym_Red_2
# 102 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_GASTREEGYM_SPENSER_WATER, GastreeGym_Red_8
# 105 "data//maps/GastreeGym/scripts.pory"
	lockall
# 106 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 107 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_6
# 108 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 109 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_7
# 110 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_GASTREEGYM_SPENSER_WATER
# 111 "data//maps/GastreeGym/scripts.pory"
	clearflag FLAG_HIDE_ROUTE3_UNDERPASS_GYM
# 112 "data//maps/GastreeGym/scripts.pory"
	releaseall
GastreeGym_Red_1:
	end

GastreeGym_Red_2:
# 79 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_GASTREEGYM_SPENSER_REWARD, GastreeGym_Red_5
# 82 "data//maps/GastreeGym/scripts.pory"
	lockall
# 83 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 84 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_1
# 85 "data//maps/GastreeGym/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, GastreeGym_Red_Text_2, GastreeGym_Red_Text_3
# 87 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeGym_Red_12
# 90 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GastreeGym_Red_15
GastreeGym_Red_11:
# 98 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_GASTREEGYM_SPENSER_REWARD
# 99 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_4, MSGBOX_NPC
	goto GastreeGym_Red_1

GastreeGym_Red_5:
# 80 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_0, MSGBOX_NPC
	goto GastreeGym_Red_1

GastreeGym_Red_8:
# 103 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_5, MSGBOX_NPC
	goto GastreeGym_Red_1

GastreeGym_Red_12:
# 88 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_ROCK_GEM
	goto GastreeGym_Red_11

GastreeGym_Red_15:
# 91 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_HARD_STONE
	goto GastreeGym_Red_11


GastreeGym_WeatheredRock::
# 120 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_WeatheredRock_Text_0, MSGBOX_SIGN
	end


# 31 "data//maps/GastreeGym/scripts.pory"
GastreeGym_LeaderBattle_Movement_0:
# 31 "data//maps/GastreeGym/scripts.pory"
	jump_in_place_down
# 31 "data//maps/GastreeGym/scripts.pory"
	emote_exclamation_mark
	step_end

GastreeGym_TrainerBattle_Skip_Text_0:
# 6 "data//maps/GastreeGym/scripts.pory"
	.string "Hold up - nobody's allowed to disturb\n"
	.string "the Kinger while he's training!$"

GastreeGym_TrainerBattle_Skip_Text_1:
# 6 "data//maps/GastreeGym/scripts.pory"
	.string "Okay, go disturb the Kinger!$"

GastreeGym_TrainerBattle_Skip_Text_2:
# 7 "data//maps/GastreeGym/scripts.pory"
	.string "Kinger is what everyone should aspire\n"
	.string "to be like!$"

GastreeGym_TrainerBattle_Jaco_Text_0:
# 15 "data//maps/GastreeGym/scripts.pory"
	.string "Hey, did the old man send you here? This\n"
	.string "is the King's training time - get out!$"

GastreeGym_TrainerBattle_Jaco_Text_1:
# 15 "data//maps/GastreeGym/scripts.pory"
	.string "Fine, don't get out!$"

GastreeGym_TrainerBattle_Jaco_Text_2:
# 16 "data//maps/GastreeGym/scripts.pory"
	.string "Inger the King hates losing and trains\n"
	.string "really hard. That's why I've always got\l"
	.string "his back...well, except for losing to you.$"

GastreeGym_LeaderBattle_Text_0:
# 24 "data//maps/GastreeGym/scripts.pory"
	.string "Inger: I hate losing! Argh! But that was\n"
	.string "a good battle, {PLAYER}. Go get\l"
	.string "Professor Tenebris back for us all!$"

GastreeGym_LeaderBattle_Text_1:
# 29 "data//maps/GastreeGym/scripts.pory"
	.string "Inger: C'mon! C'mon!!\p"
	.string "...\p"
	.string "Inger: C'moooooooo--$"

GastreeGym_LeaderBattle_Text_2:
# 35 "data//maps/GastreeGym/scripts.pory"
	.string "Inger: Who're you? A trainer? You're me\n"
	.string "at the wrong time, buddy, because I\l"
	.string "just lost to some child your age and I'm\l"
	.string "furious!\p"
	.string "...$"

GastreeGym_EventScript_Victory_Text_0:
# 47 "data//maps/GastreeGym/scripts.pory"
	.string "{PLAYER} received the Hard Badge\n"
	.string "from Inger.$"

GastreeGym_EventScript_Victory_Text_1:
# 55 "data//maps/GastreeGym/scripts.pory"
	.string "The Hard Badge allows you to use HM\n"
	.string "SPLASH outside of battle. Hop and skip\l"
	.string "across all the water bodies of Cormoria!$"

GastreeGym_EventScript_Victory_Text_2:
# 58 "data//maps/GastreeGym/scripts.pory"
	.string "Inger: So where are you headed next?\p"
	.string "...\n"
	.string "Inger: So you're investigating\l"
	.string "Professor Tenebris' disappearance?\l"
	.string "Good luck! She's the one who taught my\l"
	.string "Minior the move Rollout.\p"
	.string "...\p"
	.string "Inger:...but I can't say I've heard\n"
	.string "anything about these dreamstones.\p"
	.string "Inger: So next is Mt. Ceram? You'll have\n"
	.string "to go north from here through Route 4.\l"
	.string "If its for the Professor, I would've\l"
	.string "loved to join you, but I've got a gym to\l"
	.string "run.\p"
	.string "All the best, {PLAYER}! Give these\n"
	.string "Team Somber people a whooping for me!$"

GastreeGym_Red_Text_0:
# 80 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

GastreeGym_Red_Text_1:
# 84 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! Inger\n"
	.string "told me about your battle. In\l"
	.string "recognition of your skills, I'd like to\l"
	.string "give you something. Which of these do\l"
	.string "you fancy?$"

GastreeGym_Red_Text_2:
# 85 "data//maps/GastreeGym/scripts.pory"
	.string "ROCK GEM$"

GastreeGym_Red_Text_3:
# 85 "data//maps/GastreeGym/scripts.pory"
	.string "HARD STONE$"

GastreeGym_Red_Text_4:
# 99 "data//maps/GastreeGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

GastreeGym_Red_Text_5:
# 103 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the Gastree gym!\n"
	.string "Unfortunately the leader, Inger, has\l"
	.string "gone off to do some emergency training\l"
	.string "in the underpass to Fennilahl Town. The\l"
	.string "previous trainer beat him and Inger\l"
	.string "just can't stand losing! You'll have to\l"
	.string "go into the underpass and find him\l"
	.string "there.$"

GastreeGym_Red_Text_6:
# 107 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the Gastree gym!\n"
	.string "Unfortunately the leader, Inger, has\l"
	.string "gone off to do some emergency training\l"
	.string "in the underpass to Fennilahl Town. The\l"
	.string "previous trainer beat him and Inger\l"
	.string "just can't stand losing! You'll have to\l"
	.string "go into the underpass and find him\l"
	.string "there. Take this with you.$"

GastreeGym_Red_Text_7:
# 109 "data//maps/GastreeGym/scripts.pory"
	.string "Inger loves ROCK type Pokemon, so avoid\n"
	.string "using FIRE, FLYING and BUG type\l"
	.string "Pokemon. Now go get 'em,\l"
	.string "champ-in-the-making!$"

GastreeGym_WeatheredRock_Text_0:
# 120 "data//maps/GastreeGym/scripts.pory"
	.string "This rock looks like it's been weathered\n"
	.string "down by constant force.$"

GastreeGym_Text_Intro::
# 62 "data//maps/GastreeGym/scripts.pory"
	.string "Inger: ...you look a little green. It is\n"
	.string "nerves? First gym battle?\p"
	.string "...\p"
	.string "Inger: I know that feeling, and any\n"
	.string "other day, I might've gone easy on you...\p"
	.string "...but not today!\p"
	.string "Inger: I'm Inger, master of Rock-types\n"
	.string "and the unshakable strength of the\l"
	.string "earth. My ROCK type Pokemon have seen\l"
	.string "countless battles, and they never\l"
	.string "crumble under pressure. If you think\l"
	.string "you can break through, show me the\l"
	.string "strength that you bring with you!$"

GastreeGym_Text_Defeated::
# 66 "data//maps/GastreeGym/scripts.pory"
	.string "Two defeats in a day? What's happening\n"
	.string "to me!$"
