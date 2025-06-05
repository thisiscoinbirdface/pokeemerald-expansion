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
	fadenewbgm MUS_RG_GYM
# 32 "data//maps/GastreeGym/scripts.pory"
	lockall
# 33 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 34 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_2
# 35 "data//maps/GastreeGym/scripts.pory"
	release
# 36 "data//maps/GastreeGym/scripts.pory"
	applymovement 9, GastreeGym_LeaderBattle_Movement_0
# 37 "data//maps/GastreeGym/scripts.pory"
	waitmovement 0
# 38 "data//maps/GastreeGym/scripts.pory"
	delay 24
# 40 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 41 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_3, MSGBOX_NPC
# 42 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 43 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Text_Intro
# 44 "data//maps/GastreeGym/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREEGYM_LEADER, GastreeGym_Text_Defeated
# 45 "data//maps/GastreeGym/scripts.pory"
	goto GastreeGym_EventScript_Victory
# 46 "data//maps/GastreeGym/scripts.pory"
	release
GastreeGym_LeaderBattle_1:
	end

GastreeGym_LeaderBattle_2:
# 24 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_0, MSGBOX_NPC
	goto GastreeGym_LeaderBattle_1


GastreeGym_EventScript_Victory::
# 54 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 56 "data//maps/GastreeGym/scripts.pory"
	message GastreeGym_EventScript_Victory_Text_0
# 58 "data//maps/GastreeGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 61 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 62 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_1
# 63 "data//maps/GastreeGym/scripts.pory"
	release
# 64 "data//maps/GastreeGym/scripts.pory"
	delay 16
# 66 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 67 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_2
# 68 "data//maps/GastreeGym/scripts.pory"
	speakername NULL
# 69 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 70 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 71 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_3
# 72 "data//maps/GastreeGym/scripts.pory"
	release
# 73 "data//maps/GastreeGym/scripts.pory"
	delay 16
# 75 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 76 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_4
# 77 "data//maps/GastreeGym/scripts.pory"
	releaseall
	return


GastreeGym_Red::
# 96 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeGym_Red_2
# 108 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_GASTREEGYM_SPENSER_WATER, GastreeGym_Red_8
# 111 "data//maps/GastreeGym/scripts.pory"
	lockall
# 112 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 113 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_3
# 114 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 115 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_4
# 116 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_GASTREEGYM_SPENSER_WATER
# 117 "data//maps/GastreeGym/scripts.pory"
	clearflag FLAG_HIDE_ROUTE3_UNDERPASS_GYM
# 118 "data//maps/GastreeGym/scripts.pory"
	releaseall
GastreeGym_Red_1:
	end

GastreeGym_Red_2:
# 97 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_GASTREEGYM_SPENSER_REWARD, GastreeGym_Red_5
# 101 "data//maps/GastreeGym/scripts.pory"
	lockall
# 102 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 104 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_1
# 105 "data//maps/GastreeGym/scripts.pory"
	goto GastreeGym_Red_Reward
	goto GastreeGym_Red_1

GastreeGym_Red_5:
# 98 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_0, MSGBOX_NPC
	end

GastreeGym_Red_8:
# 109 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_2, MSGBOX_NPC
	goto GastreeGym_Red_1


GastreeGym_Red_Reward::
# 125 "data//maps/GastreeGym/scripts.pory"
	message GastreeGym_Red_Reward_Text_0
# 126 "data//maps/GastreeGym/scripts.pory"
	waitmessage
# 127 "data//maps/GastreeGym/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, GastreeGym_Red_Reward_Text_1, GastreeGym_Red_Reward_Text_2
# 128 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeGym_Red_Reward_2
GastreeGym_Red_Reward_1:
# 129 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GastreeGym_Red_Reward_5
GastreeGym_Red_Reward_4:
# 130 "data//maps/GastreeGym/scripts.pory"
	goto GastreeGym_Red_Reward_Give
	return

GastreeGym_Red_Reward_2:
# 128 "data//maps/GastreeGym/scripts.pory"
	setvar VAR_0x8006, ITEM_ROCK_GEM
	goto GastreeGym_Red_Reward_1

GastreeGym_Red_Reward_5:
# 129 "data//maps/GastreeGym/scripts.pory"
	setvar VAR_0x8006, ITEM_HARD_STONE
	goto GastreeGym_Red_Reward_4


GastreeGym_Red_Reward_Give::
# 134 "data//maps/GastreeGym/scripts.pory"
	showitemdescription
# 135 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Reward_Give_Text_0, MSGBOX_YESNO
# 136 "data//maps/GastreeGym/scripts.pory"
	hideitemdescription
# 137 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GastreeGym_Red_Reward_Give_1
# 142 "data//maps/GastreeGym/scripts.pory"
	goto GastreeGym_Red_Reward
	return

GastreeGym_Red_Reward_Give_1:
# 138 "data//maps/GastreeGym/scripts.pory"
	giveitem VAR_0x8006
# 139 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_GASTREEGYM_SPENSER_REWARD
# 140 "data//maps/GastreeGym/scripts.pory"
	goto GastreeGym_Red_Reward_End
	return


GastreeGym_Red_Reward_End::
# 147 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Reward_End_Text_0, MSGBOX_NPC
	end


GastreeGym_WeatheredRock::
# 170 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_WeatheredRock_Text_0, MSGBOX_SIGN
	end


# 36 "data//maps/GastreeGym/scripts.pory"
GastreeGym_LeaderBattle_Movement_0:
# 36 "data//maps/GastreeGym/scripts.pory"
	jump_in_place_down
# 36 "data//maps/GastreeGym/scripts.pory"
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
	.string "The Kinger is what everyone should\n"
	.string "aspire to be like!$"

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
# 33 "data//maps/GastreeGym/scripts.pory"
	.string "Inger$"

GastreeGym_LeaderBattle_Text_2:
# 34 "data//maps/GastreeGym/scripts.pory"
	.string "C'mon! C'mon!!\p"
	.string "...\p"
	.string "C'moooooooo--$"

GastreeGym_LeaderBattle_Text_3:
# 41 "data//maps/GastreeGym/scripts.pory"
	.string "Who're you? A trainer? You're coming to\n"
	.string "me at the wrong time, buddy, because I\l"
	.string "just lost to some child your age and I'm\l"
	.string "furious!\p"
	.string "...$"

GastreeGym_EventScript_Victory_Text_0:
# 56 "data//maps/GastreeGym/scripts.pory"
	.string "{PLAYER} received the Hard Badge\n"
	.string "from Inger.$"

GastreeGym_EventScript_Victory_Text_1:
# 62 "data//maps/GastreeGym/scripts.pory"
	.string "The Hard Badge allows you to use HM\n"
	.string "Splash outside of battle. Hop and skip\l"
	.string "across all the water bodies of Cormoria!$"

GastreeGym_EventScript_Victory_Text_2:
# 67 "data//maps/GastreeGym/scripts.pory"
	.string "I also want to give you this.$"

GastreeGym_EventScript_Victory_Text_3:
# 71 "data//maps/GastreeGym/scripts.pory"
	.string "This is an incredibly rare stone that\n"
	.string "reacts in the prescence of an ancient\l"
	.string "statue. Any Pokémon you give it to can\l"
	.string "maximise one of its innate stats!\p"
	.string "Go to an ancient statue to try it.\n"
	.string "There's one in Gastree City!$"

GastreeGym_EventScript_Victory_Text_4:
# 76 "data//maps/GastreeGym/scripts.pory"
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
	.string "north from here through Route 4.\p"
	.string "If its for the Professor, I would've\n"
	.string "loved to join, but I've got a gym to run.\p"
	.string "All the best, {PLAYER}! Teach Team\n"
	.string "Somber a lesson on behalf of the\l"
	.string "Kinger!$"

GastreeGym_Red_Text_0:
# 98 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

GastreeGym_Red_Text_1:
# 104 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! Inger\n"
	.string "told me about your battle. In\l"
	.string "recognition of your skills, I'd like to\l"
	.string "give you something.$"

GastreeGym_Red_Text_2:
# 109 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the Gastree gym!\n"
	.string "Unfortunately the leader, Inger, has\l"
	.string "gone off to do some emergency training\l"
	.string "in the underpass to Fennilahl Town.\p"
	.string "The previous trainer beat him and Inger\n"
	.string "just can't stand losing! You'll have to\l"
	.string "go into the underpass and find him\l"
	.string "there.$"

GastreeGym_Red_Text_3:
# 113 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the Gastree gym!\n"
	.string "Unfortunately the leader, Inger, has\l"
	.string "gone off to do some emergency training\l"
	.string "in the underpass to Fennilahl Town.\p"
	.string "The previous trainer beat him and Inger\n"
	.string "just can't stand losing! You'll have to\l"
	.string "go into the underpass and find him\l"
	.string "there. Take this with you.$"

GastreeGym_Red_Text_4:
# 115 "data//maps/GastreeGym/scripts.pory"
	.string "Inger loves ROCK type Pokémon, so avoid\n"
	.string "using FLYING and BUG type Pokémon.\p"
	.string "Now go get 'em, champ-in-the-making!$"

GastreeGym_Red_Reward_Text_0:
# 125 "data//maps/GastreeGym/scripts.pory"
	.string "Which of these do you fancy?$"

GastreeGym_Red_Reward_Text_1:
# 127 "data//maps/GastreeGym/scripts.pory"
	.string "Rock Gem$"

GastreeGym_Red_Reward_Text_2:
# 127 "data//maps/GastreeGym/scripts.pory"
	.string "Hard Stone$"

GastreeGym_Red_Reward_Give_Text_0:
# 135 "data//maps/GastreeGym/scripts.pory"
	.string "Are you sure?$"

GastreeGym_Red_Reward_End_Text_0:
# 147 "data//maps/GastreeGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

GastreeGym_WeatheredRock_Text_0:
# 170 "data//maps/GastreeGym/scripts.pory"
	.string "This rock looks like it's been weathered\n"
	.string "down by constant force.$"

GastreeGym_Text_Intro::
# 80 "data//maps/GastreeGym/scripts.pory"
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
# 84 "data//maps/GastreeGym/scripts.pory"
	.string "No way! Two defeats in a day?$"
