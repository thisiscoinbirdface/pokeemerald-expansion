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
	speakername GastreeGym_LeaderBattle_Text_1
# 32 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_2
# 33 "data//maps/GastreeGym/scripts.pory"
	release
# 34 "data//maps/GastreeGym/scripts.pory"
	applymovement 9, GastreeGym_LeaderBattle_Movement_0
# 35 "data//maps/GastreeGym/scripts.pory"
	waitmovement 0
# 36 "data//maps/GastreeGym/scripts.pory"
	delay 24
# 38 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 39 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_3, MSGBOX_NPC
# 41 "data//maps/GastreeGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_LEADER, GastreeGym_Text_Intro, GastreeGym_Text_Defeated, GastreeGym_EventScript_Victory, NO_MUSIC
# 42 "data//maps/GastreeGym/scripts.pory"
	release
GastreeGym_LeaderBattle_1:
	end

GastreeGym_LeaderBattle_2:
# 24 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_0, MSGBOX_NPC
	goto GastreeGym_LeaderBattle_1


GastreeGym_EventScript_Victory::
# 50 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 52 "data//maps/GastreeGym/scripts.pory"
	message GastreeGym_EventScript_Victory_Text_0
# 54 "data//maps/GastreeGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 57 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 58 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_1
# 59 "data//maps/GastreeGym/scripts.pory"
	release
# 60 "data//maps/GastreeGym/scripts.pory"
	delay 16
# 62 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 63 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_2
# 64 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 65 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 66 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_3
# 67 "data//maps/GastreeGym/scripts.pory"
	release
# 68 "data//maps/GastreeGym/scripts.pory"
	delay 16
# 70 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 71 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_4
# 72 "data//maps/GastreeGym/scripts.pory"
	releaseall
	return


GastreeGym_Red::
# 91 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeGym_Red_2
# 115 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_GASTREEGYM_SPENSER_WATER, GastreeGym_Red_8
# 118 "data//maps/GastreeGym/scripts.pory"
	lockall
# 119 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 120 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_6
# 121 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 122 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_7
# 123 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_GASTREEGYM_SPENSER_WATER
# 124 "data//maps/GastreeGym/scripts.pory"
	clearflag FLAG_HIDE_ROUTE3_UNDERPASS_GYM
# 125 "data//maps/GastreeGym/scripts.pory"
	releaseall
GastreeGym_Red_1:
	end

GastreeGym_Red_2:
# 92 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_GASTREEGYM_SPENSER_REWARD, GastreeGym_Red_5
# 95 "data//maps/GastreeGym/scripts.pory"
	lockall
# 96 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 97 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_1
# 98 "data//maps/GastreeGym/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, GastreeGym_Red_Text_2, GastreeGym_Red_Text_3
# 100 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeGym_Red_12
# 103 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GastreeGym_Red_15
GastreeGym_Red_11:
# 111 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_GASTREEGYM_SPENSER_REWARD
# 112 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_4, MSGBOX_NPC
	goto GastreeGym_Red_1

GastreeGym_Red_5:
# 93 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_0, MSGBOX_NPC
	goto GastreeGym_Red_1

GastreeGym_Red_8:
# 116 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_5, MSGBOX_NPC
	goto GastreeGym_Red_1

GastreeGym_Red_12:
# 101 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_ROCK_GEM
	goto GastreeGym_Red_11

GastreeGym_Red_15:
# 104 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_HARD_STONE
	goto GastreeGym_Red_11


GastreeGym_WeatheredRock::
# 133 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_WeatheredRock_Text_0, MSGBOX_SIGN
	end


# 34 "data//maps/GastreeGym/scripts.pory"
GastreeGym_LeaderBattle_Movement_0:
# 34 "data//maps/GastreeGym/scripts.pory"
	jump_in_place_down
# 34 "data//maps/GastreeGym/scripts.pory"
	emote_exclamation_mark
	step_end

GastreeGym_TrainerBattle_Skip_Text_0:
# 6 "data//maps/GastreeGym/scripts.pory"
	.string "Hold up - nobody's allowed to disturb\n"
	.string "the Kinger while he's training!\p"
	.string "Who's the Kinger?\p"
	.string "Inger the King, of course!$"

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
	.string "I hate losing! Argh! But that was a good\n"
	.string "battle, {PLAYER}. Go get Professor\l"
	.string "Tenebris back for us all!$"

GastreeGym_LeaderBattle_Text_1:
# 31 "data//maps/GastreeGym/scripts.pory"
	.string "Inger$"

GastreeGym_LeaderBattle_Text_2:
# 32 "data//maps/GastreeGym/scripts.pory"
	.string "C'mon! C'mon!!\p"
	.string "...\p"
	.string "C'moooooooo--$"

GastreeGym_LeaderBattle_Text_3:
# 39 "data//maps/GastreeGym/scripts.pory"
	.string "Who're you? A trainer? You're coming to\n"
	.string "me at the wrong time, buddy, because I\l"
	.string "just lost to some child your age and I'm\l"
	.string "furious!\p"
	.string "...$"

GastreeGym_EventScript_Victory_Text_0:
# 52 "data//maps/GastreeGym/scripts.pory"
	.string "{PLAYER} received the Hard Badge\n"
	.string "from Inger.$"

GastreeGym_EventScript_Victory_Text_1:
# 58 "data//maps/GastreeGym/scripts.pory"
	.string "The Hard Badge allows you to use HM\n"
	.string "Splash outside of battle. Hop and skip\l"
	.string "across all the water bodies of Cormoria!$"

GastreeGym_EventScript_Victory_Text_2:
# 63 "data//maps/GastreeGym/scripts.pory"
	.string "I also want to give you this.$"

GastreeGym_EventScript_Victory_Text_3:
# 66 "data//maps/GastreeGym/scripts.pory"
	.string "This is an incredibly rare stone that\n"
	.string "reacts in the prescence of an ancient\l"
	.string "statue. Any Pokémon you give it to can\l"
	.string "maximise one of its innate stats!\p"
	.string "Go to an ancient statue to try it.\n"
	.string "There's one in Gastree City!$"

GastreeGym_EventScript_Victory_Text_4:
# 71 "data//maps/GastreeGym/scripts.pory"
	.string "Where are you headed next?\p"
	.string "...\p"
	.string "So you're investigating Professor\n"
	.string "Tenebris' disappearance? Good luck!\l"
	.string "She's the one who taught my Minior the\l"
	.string "move Rollout.\p"
	.string "...\p"
	.string "...but I can't say I've heard anything\n"
	.string "about these dreamstones.\p"
	.string "So next is Mt. Ceram? You'll have to go\n"
	.string "north from here through Route 4. If its\l"
	.string "for the Professor, I would've loved to\l"
	.string "join you, but I've got a gym to run.\p"
	.string "All the best, {PLAYER}! Give these\n"
	.string "Team Somber people a kick and a slap on\l"
	.string "behalf of the Kinger!$"

GastreeGym_Red_Text_0:
# 93 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

GastreeGym_Red_Text_1:
# 97 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! Inger\n"
	.string "told me about your battle. In\l"
	.string "recognition of your skills, I'd like to\l"
	.string "give you something. Which of these do\l"
	.string "you fancy?$"

GastreeGym_Red_Text_2:
# 98 "data//maps/GastreeGym/scripts.pory"
	.string "ROCK GEM$"

GastreeGym_Red_Text_3:
# 98 "data//maps/GastreeGym/scripts.pory"
	.string "HARD STONE$"

GastreeGym_Red_Text_4:
# 112 "data//maps/GastreeGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

GastreeGym_Red_Text_5:
# 116 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the Gastree gym!\n"
	.string "Unfortunately the leader, Inger, has\l"
	.string "gone off to do some emergency training\l"
	.string "in the underpass to Fennilahl Town.\p"
	.string "The previous trainer beat him and Inger\n"
	.string "just can't stand losing! You'll have to\l"
	.string "go into the underpass and find him\l"
	.string "there.$"

GastreeGym_Red_Text_6:
# 120 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the Gastree gym!\n"
	.string "Unfortunately the leader, Inger, has\l"
	.string "gone off to do some emergency training\l"
	.string "in the underpass to Fennilahl Town.\p"
	.string "The previous trainer beat him and Inger\n"
	.string "just can't stand losing! You'll have to\l"
	.string "go into the underpass and find him\l"
	.string "there. Take this with you.$"

GastreeGym_Red_Text_7:
# 122 "data//maps/GastreeGym/scripts.pory"
	.string "Inger loves ROCK type Pokémon, so avoid\n"
	.string "using FLYING and BUG type Pokémon.\p"
	.string "Now go get 'em, champ-in-the-making!$"

GastreeGym_WeatheredRock_Text_0:
# 133 "data//maps/GastreeGym/scripts.pory"
	.string "This rock looks like it's been weathered\n"
	.string "down by constant force.$"

GastreeGym_Text_Intro::
# 75 "data//maps/GastreeGym/scripts.pory"
	.string "...you look a little green. It is nerves?\n"
	.string "First gym battle?\p"
	.string "...\p"
	.string "I know that feeling, and any other day,\n"
	.string "I might've gone easy on you...\p"
	.string "...but not today!\p"
	.string "I'm Inger, master of ROCK-types and the\n"
	.string "unshakable strength of the earth.\p"
	.string "My ROCK-type Pokémon have seen\n"
	.string "countless battles, and they never\l"
	.string "crumble under pressure. If you think\l"
	.string "you can break through, show me the\l"
	.string "strength that you bring with you!$"

GastreeGym_Text_Defeated::
# 79 "data//maps/GastreeGym/scripts.pory"
	.string "Two defeats in a day? What's happening\n"
	.string "to me!$"
