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
# 30 "data//maps/GastreeGym/scripts.pory"
	call Common_EventScript_SaveGameBeforeBattle
# 32 "data//maps/GastreeGym/scripts.pory"
	fadenewbgm MUS_RG_GYM
# 34 "data//maps/GastreeGym/scripts.pory"
	lockall
# 35 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 36 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_2
# 37 "data//maps/GastreeGym/scripts.pory"
	release
# 38 "data//maps/GastreeGym/scripts.pory"
	applymovement 9, GastreeGym_LeaderBattle_Movement_0
# 39 "data//maps/GastreeGym/scripts.pory"
	waitmovement 0
# 40 "data//maps/GastreeGym/scripts.pory"
	delay 24
# 42 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 43 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_3, MSGBOX_NPC
# 44 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 45 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Text_Intro
# 46 "data//maps/GastreeGym/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREEGYM_LEADER, GastreeGym_Text_Defeated
# 47 "data//maps/GastreeGym/scripts.pory"
	goto GastreeGym_EventScript_Victory
# 48 "data//maps/GastreeGym/scripts.pory"
	release
GastreeGym_LeaderBattle_1:
	end

GastreeGym_LeaderBattle_2:
# 24 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_0, MSGBOX_NPC
	goto GastreeGym_LeaderBattle_1


GastreeGym_EventScript_Victory::
# 56 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 58 "data//maps/GastreeGym/scripts.pory"
	message GastreeGym_EventScript_Victory_Text_0
# 60 "data//maps/GastreeGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 63 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 64 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_1
# 65 "data//maps/GastreeGym/scripts.pory"
	release
# 66 "data//maps/GastreeGym/scripts.pory"
	delay 16
# 68 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 69 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_2
# 70 "data//maps/GastreeGym/scripts.pory"
	speakername NULL
# 71 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 72 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 73 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_3
# 74 "data//maps/GastreeGym/scripts.pory"
	release
# 75 "data//maps/GastreeGym/scripts.pory"
	delay 16
# 77 "data//maps/GastreeGym/scripts.pory"
	speakername GastreeGym_LeaderBattle_Text_1
# 78 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_4
# 79 "data//maps/GastreeGym/scripts.pory"
	releaseall
	return


GastreeGym_Red::
# 98 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeGym_Red_2
# 110 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_GASTREEGYM_SPENSER_WATER, GastreeGym_Red_8
# 113 "data//maps/GastreeGym/scripts.pory"
	lockall
# 114 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 115 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_3
# 116 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 117 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_4
# 118 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_GASTREEGYM_SPENSER_WATER
# 119 "data//maps/GastreeGym/scripts.pory"
	clearflag FLAG_HIDE_ROUTE3_UNDERPASS_GYM
# 120 "data//maps/GastreeGym/scripts.pory"
	releaseall
GastreeGym_Red_1:
	end

GastreeGym_Red_2:
# 99 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_GASTREEGYM_SPENSER_REWARD, GastreeGym_Red_5
# 103 "data//maps/GastreeGym/scripts.pory"
	lockall
# 104 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 106 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_1
# 107 "data//maps/GastreeGym/scripts.pory"
	goto GastreeGym_Red_Reward
	goto GastreeGym_Red_1

GastreeGym_Red_5:
# 100 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_0, MSGBOX_NPC
	end

GastreeGym_Red_8:
# 111 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_2, MSGBOX_NPC
	goto GastreeGym_Red_1


GastreeGym_Red_Reward::
# 127 "data//maps/GastreeGym/scripts.pory"
	message GastreeGym_Red_Reward_Text_0
# 128 "data//maps/GastreeGym/scripts.pory"
	waitmessage
# 129 "data//maps/GastreeGym/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, GastreeGym_Red_Reward_Text_1, GastreeGym_Red_Reward_Text_2
# 130 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeGym_Red_Reward_2
GastreeGym_Red_Reward_1:
# 131 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GastreeGym_Red_Reward_5
GastreeGym_Red_Reward_4:
# 132 "data//maps/GastreeGym/scripts.pory"
	goto GastreeGym_Red_Reward_Give
	return

GastreeGym_Red_Reward_2:
# 130 "data//maps/GastreeGym/scripts.pory"
	setvar VAR_0x8006, ITEM_ROCK_GEM
	goto GastreeGym_Red_Reward_1

GastreeGym_Red_Reward_5:
# 131 "data//maps/GastreeGym/scripts.pory"
	setvar VAR_0x8006, ITEM_HARD_STONE
	goto GastreeGym_Red_Reward_4


GastreeGym_Red_Reward_Give::
# 136 "data//maps/GastreeGym/scripts.pory"
	showitemdescription
# 137 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Reward_Give_Text_0, MSGBOX_YESNO
# 138 "data//maps/GastreeGym/scripts.pory"
	hideitemdescription
# 139 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GastreeGym_Red_Reward_Give_1
# 144 "data//maps/GastreeGym/scripts.pory"
	goto GastreeGym_Red_Reward
	return

GastreeGym_Red_Reward_Give_1:
# 140 "data//maps/GastreeGym/scripts.pory"
	giveitem VAR_0x8006
# 141 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_GASTREEGYM_SPENSER_REWARD
# 142 "data//maps/GastreeGym/scripts.pory"
	goto GastreeGym_Red_Reward_End
	return


GastreeGym_Red_Reward_End::
# 149 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Reward_End_Text_0, MSGBOX_NPC
	end


GastreeGym_WeatheredRock::
# 172 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_WeatheredRock_Text_0, MSGBOX_SIGN
	end


# 38 "data//maps/GastreeGym/scripts.pory"
GastreeGym_LeaderBattle_Movement_0:
# 38 "data//maps/GastreeGym/scripts.pory"
	jump_in_place_down
# 38 "data//maps/GastreeGym/scripts.pory"
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
	.string "Hey, did the old man send you here?\n"
	.string "The King is training - get out!$"

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
# 35 "data//maps/GastreeGym/scripts.pory"
	.string "Inger$"

GastreeGym_LeaderBattle_Text_2:
# 36 "data//maps/GastreeGym/scripts.pory"
	.string "C'mon! C'mon!!\p"
	.string "...\p"
	.string "C'moooooooo--$"

GastreeGym_LeaderBattle_Text_3:
# 43 "data//maps/GastreeGym/scripts.pory"
	.string "Who're you?\p"
	.string "A trainer?\p"
	.string "You're coming to me at the wrong time,\n"
	.string "buddy, because I just lost to some\l"
	.string "child your age and I'm furious!\p"
	.string "...$"

GastreeGym_EventScript_Victory_Text_0:
# 58 "data//maps/GastreeGym/scripts.pory"
	.string "{PLAYER} received the Hard Badge\n"
	.string "from Inger.$"

GastreeGym_EventScript_Victory_Text_1:
# 64 "data//maps/GastreeGym/scripts.pory"
	.string "The Hard Badge allows you to use HM\n"
	.string "Splash outside of battle. Hop and skip\l"
	.string "across all the water bodies of Cormoria!$"

GastreeGym_EventScript_Victory_Text_2:
# 69 "data//maps/GastreeGym/scripts.pory"
	.string "I also want to give you this.$"

GastreeGym_EventScript_Victory_Text_3:
# 73 "data//maps/GastreeGym/scripts.pory"
	.string "This is an incredibly rare stone that\n"
	.string "reacts in the prescence of an ancient\l"
	.string "statue. Any Pokémon you give it to can\l"
	.string "maximise one of its innate stats!\p"
	.string "Go to an ancient statue to try it.\n"
	.string "There's one in Gastree City!$"

GastreeGym_EventScript_Victory_Text_4:
# 78 "data//maps/GastreeGym/scripts.pory"
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
# 100 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

GastreeGym_Red_Text_1:
# 106 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! Inger\n"
	.string "told me about your battle.\l"
	.string "In recognition of your skills, I'd like\l"
	.string "to give you something.$"

GastreeGym_Red_Text_2:
# 111 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the Gastree gym!\n"
	.string "Unfortunately the leader, Inger, has\l"
	.string "gone off to do some emergency training\l"
	.string "in the underpass to Fennilahl Town.\p"
	.string "The previous trainer beat him and Inger\n"
	.string "just can't stand losing! You'll have to\l"
	.string "go into the underpass and find him\l"
	.string "there.$"

GastreeGym_Red_Text_3:
# 115 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the Gastree gym!\n"
	.string "Unfortunately the leader, Inger, has\l"
	.string "gone off to do some emergency training\l"
	.string "in the underpass to Fennilahl Town.\p"
	.string "The previous trainer beat him and Inger\n"
	.string "just can't stand losing! You'll have to\l"
	.string "go into the underpass and find him\l"
	.string "there. Take this with you.$"

GastreeGym_Red_Text_4:
# 117 "data//maps/GastreeGym/scripts.pory"
	.string "Inger loves ROCK type Pokémon, so avoid\n"
	.string "using FLYING and BUG type Pokémon.\p"
	.string "Now go get 'em, champ-in-the-making!$"

GastreeGym_Red_Reward_Text_0:
# 127 "data//maps/GastreeGym/scripts.pory"
	.string "Which of these do you fancy?$"

GastreeGym_Red_Reward_Text_1:
# 129 "data//maps/GastreeGym/scripts.pory"
	.string "Rock Gem$"

GastreeGym_Red_Reward_Text_2:
# 129 "data//maps/GastreeGym/scripts.pory"
	.string "Hard Stone$"

GastreeGym_Red_Reward_Give_Text_0:
# 137 "data//maps/GastreeGym/scripts.pory"
	.string "Are you sure?$"

GastreeGym_Red_Reward_End_Text_0:
# 149 "data//maps/GastreeGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

GastreeGym_WeatheredRock_Text_0:
# 172 "data//maps/GastreeGym/scripts.pory"
	.string "This rock looks like it's been weathered\n"
	.string "down by constant force.$"

GastreeGym_Text_Intro::
# 82 "data//maps/GastreeGym/scripts.pory"
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
# 86 "data//maps/GastreeGym/scripts.pory"
	.string "No way! Two defeats in a day?$"
