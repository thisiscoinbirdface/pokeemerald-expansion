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
	special SaveGame
# 27 "data//maps/GastreeGym/scripts.pory"
	waitstate
# 28 "data//maps/GastreeGym/scripts.pory"
	release
# 30 "data//maps/GastreeGym/scripts.pory"
	lockall
# 31 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_1
# 32 "data//maps/GastreeGym/scripts.pory"
	release
# 33 "data//maps/GastreeGym/scripts.pory"
	applymovement 9, GastreeGym_LeaderBattle_Movement_0
# 34 "data//maps/GastreeGym/scripts.pory"
	waitmovement 0
# 35 "data//maps/GastreeGym/scripts.pory"
	delay 24
# 37 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_2, MSGBOX_NPC
# 39 "data//maps/GastreeGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_LEADER, GastreeGym_Text_Intro, GastreeGym_Text_Defeated, GastreeGym_EventScript_Victory, NO_MUSIC
# 40 "data//maps/GastreeGym/scripts.pory"
	release
GastreeGym_LeaderBattle_1:
	end

GastreeGym_LeaderBattle_2:
# 24 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_0, MSGBOX_NPC
	goto GastreeGym_LeaderBattle_1


GastreeGym_EventScript_Victory::
# 49 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_0
# 50 "data//maps/GastreeGym/scripts.pory"
	release
# 51 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 54 "data//maps/GastreeGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 57 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_1
# 58 "data//maps/GastreeGym/scripts.pory"
	release
# 59 "data//maps/GastreeGym/scripts.pory"
	delay 16
# 61 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_2
# 62 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_RARE_SHARD, 3
# 63 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_3
# 64 "data//maps/GastreeGym/scripts.pory"
	release
# 65 "data//maps/GastreeGym/scripts.pory"
	delay 16
# 67 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_4
# 68 "data//maps/GastreeGym/scripts.pory"
	releaseall
	return


GastreeGym_Red::
# 87 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeGym_Red_2
# 111 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_GASTREEGYM_SPENSER_WATER, GastreeGym_Red_8
# 114 "data//maps/GastreeGym/scripts.pory"
	lockall
# 115 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 116 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_6
# 117 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 118 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_7
# 119 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_GASTREEGYM_SPENSER_WATER
# 120 "data//maps/GastreeGym/scripts.pory"
	clearflag FLAG_HIDE_ROUTE3_UNDERPASS_GYM
# 121 "data//maps/GastreeGym/scripts.pory"
	releaseall
GastreeGym_Red_1:
	end

GastreeGym_Red_2:
# 88 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_GASTREEGYM_SPENSER_REWARD, GastreeGym_Red_5
# 91 "data//maps/GastreeGym/scripts.pory"
	lockall
# 92 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 93 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_1
# 94 "data//maps/GastreeGym/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, GastreeGym_Red_Text_2, GastreeGym_Red_Text_3
# 96 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeGym_Red_12
# 99 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GastreeGym_Red_15
GastreeGym_Red_11:
# 107 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_GASTREEGYM_SPENSER_REWARD
# 108 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_4, MSGBOX_NPC
	goto GastreeGym_Red_1

GastreeGym_Red_5:
# 89 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_0, MSGBOX_NPC
	goto GastreeGym_Red_1

GastreeGym_Red_8:
# 112 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_5, MSGBOX_NPC
	goto GastreeGym_Red_1

GastreeGym_Red_12:
# 97 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_ROCK_GEM
	goto GastreeGym_Red_11

GastreeGym_Red_15:
# 100 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_HARD_STONE
	goto GastreeGym_Red_11


GastreeGym_WeatheredRock::
# 129 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_WeatheredRock_Text_0, MSGBOX_SIGN
	end


# 33 "data//maps/GastreeGym/scripts.pory"
GastreeGym_LeaderBattle_Movement_0:
# 33 "data//maps/GastreeGym/scripts.pory"
	jump_in_place_down
# 33 "data//maps/GastreeGym/scripts.pory"
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
# 31 "data//maps/GastreeGym/scripts.pory"
	.string "Inger: C'mon! C'mon!!\p"
	.string "...\p"
	.string "Inger: C'moooooooo--$"

GastreeGym_LeaderBattle_Text_2:
# 37 "data//maps/GastreeGym/scripts.pory"
	.string "Inger: Who're you? A trainer? You're\n"
	.string "coming to me at the wrong time, buddy,\l"
	.string "because I just lost to some child your\l"
	.string "age and I'm furious!\p"
	.string "...$"

GastreeGym_EventScript_Victory_Text_0:
# 49 "data//maps/GastreeGym/scripts.pory"
	.string "{PLAYER} received the Hard Badge\n"
	.string "from Inger.$"

GastreeGym_EventScript_Victory_Text_1:
# 57 "data//maps/GastreeGym/scripts.pory"
	.string "The Hard Badge allows you to use HM\n"
	.string "SPLASH outside of battle. Hop and skip\l"
	.string "across all the water bodies of Cormoria!$"

GastreeGym_EventScript_Victory_Text_2:
# 61 "data//maps/GastreeGym/scripts.pory"
	.string "INGER: I also want to give you these.$"

GastreeGym_EventScript_Victory_Text_3:
# 63 "data//maps/GastreeGym/scripts.pory"
	.string "INGER: These are incredibly rare stones\n"
	.string "that react in the prescence of an\l"
	.string "ancient statue. Nobody knows where\l"
	.string "they're from, but they're a key secret\l"
	.string "to any strong trainer's success! Go to\l"
	.string "any ancient statue to try it out.\l"
	.string "There's one in Gastree City!$"

GastreeGym_EventScript_Victory_Text_4:
# 67 "data//maps/GastreeGym/scripts.pory"
	.string "INGER: So where are you headed next?\p"
	.string "...\p"
	.string "INGER: So you're investigating\n"
	.string "Professor Tenebris' disappearance?\l"
	.string "Good luck! She's the one who taught my\l"
	.string "Minior the move Rollout.\p"
	.string "...\p"
	.string "INGER:...but I can't say I've heard\n"
	.string "anything about these dreamstones.\p"
	.string "INGER: So next is Mt. Ceram? You'll have\n"
	.string "to go north from here through Route 4.\l"
	.string "If its for the Professor, I would've\l"
	.string "loved to join you, but I've got a gym to\l"
	.string "run.\p"
	.string "INGER: All the best, {PLAYER}! Give\n"
	.string "these Team Somber people a whooping\l"
	.string "for me!$"

GastreeGym_Red_Text_0:
# 89 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

GastreeGym_Red_Text_1:
# 93 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! Inger\n"
	.string "told me about your battle. In\l"
	.string "recognition of your skills, I'd like to\l"
	.string "give you something. Which of these do\l"
	.string "you fancy?$"

GastreeGym_Red_Text_2:
# 94 "data//maps/GastreeGym/scripts.pory"
	.string "ROCK GEM$"

GastreeGym_Red_Text_3:
# 94 "data//maps/GastreeGym/scripts.pory"
	.string "HARD STONE$"

GastreeGym_Red_Text_4:
# 108 "data//maps/GastreeGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

GastreeGym_Red_Text_5:
# 112 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the Gastree gym!\n"
	.string "Unfortunately the leader, Inger, has\l"
	.string "gone off to do some emergency training\l"
	.string "in the underpass to Fennilahl Town. The\l"
	.string "previous trainer beat him and Inger\l"
	.string "just can't stand losing! You'll have to\l"
	.string "go into the underpass and find him\l"
	.string "there.$"

GastreeGym_Red_Text_6:
# 116 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the Gastree gym!\n"
	.string "Unfortunately the leader, Inger, has\l"
	.string "gone off to do some emergency training\l"
	.string "in the underpass to Fennilahl Town. The\l"
	.string "previous trainer beat him and Inger\l"
	.string "just can't stand losing! You'll have to\l"
	.string "go into the underpass and find him\l"
	.string "there. Take this with you.$"

GastreeGym_Red_Text_7:
# 118 "data//maps/GastreeGym/scripts.pory"
	.string "Inger loves ROCK type Pokémon, so avoid\n"
	.string "using FIRE, FLYING and BUG type\l"
	.string "Pokémon. Now go get 'em,\l"
	.string "champ-in-the-making!$"

GastreeGym_WeatheredRock_Text_0:
# 129 "data//maps/GastreeGym/scripts.pory"
	.string "This rock looks like it's been weathered\n"
	.string "down by constant force.$"

GastreeGym_Text_Intro::
# 71 "data//maps/GastreeGym/scripts.pory"
	.string "INGER: ...you look a little green. It is\n"
	.string "nerves? First gym battle?\p"
	.string "...\p"
	.string "INGER: I know that feeling, and any\n"
	.string "other day, I might've gone easy on you...\p"
	.string "...but not today!\p"
	.string "INGER: I'm Inger, master of ROCK-types\n"
	.string "and the unshakable strength of the\l"
	.string "earth. My ROCK-type Pokémon have seen\l"
	.string "countless battles, and they never\l"
	.string "crumble under pressure. If you think\l"
	.string "you can break through, show me the\l"
	.string "strength that you bring with you!$"

GastreeGym_Text_Defeated::
# 75 "data//maps/GastreeGym/scripts.pory"
	.string "Two defeats in a day? What's happening\n"
	.string "to me!$"
