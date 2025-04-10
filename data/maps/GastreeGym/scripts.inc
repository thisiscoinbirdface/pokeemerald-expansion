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
# 25 "data//maps/GastreeGym/scripts.pory"
	lockall
# 26 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 28 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeGym_LeaderBattle_2
# 31 "data//maps/GastreeGym/scripts.pory"
	call Common_EventScript_SaveGame
# 32 "data//maps/GastreeGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_LEADER, GastreeGym_Text_Intro, GastreeGym_Text_Defeated, GastreeGym_EventScript_Victory, NO_MUSIC
# 33 "data//maps/GastreeGym/scripts.pory"
	release
GastreeGym_LeaderBattle_1:
# 36 "data//maps/GastreeGym/scripts.pory"
	releaseall
	return

GastreeGym_LeaderBattle_2:
# 29 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_0
	goto GastreeGym_LeaderBattle_1


GastreeGym_EventScript_Victory::
# 42 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_0
# 43 "data//maps/GastreeGym/scripts.pory"
	release
# 44 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 47 "data//maps/GastreeGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 50 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_1
# 53 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_2
# 54 "data//maps/GastreeGym/scripts.pory"
	releaseall
	return


GastreeGym_Red::
# 73 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeGym_Red_2
# 93 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_GASTREEGYM_SPENSER_WATER, GastreeGym_Red_8
# 96 "data//maps/GastreeGym/scripts.pory"
	lockall
# 97 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 98 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_6
# 99 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_FRESH_WATER
# 100 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_7
# 101 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_GASTREEGYM_SPENSER_WATER
# 102 "data//maps/GastreeGym/scripts.pory"
	releaseall
GastreeGym_Red_1:
	end

GastreeGym_Red_2:
# 74 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_GASTREEGYM_SPENSER_REWARD, GastreeGym_Red_5
# 77 "data//maps/GastreeGym/scripts.pory"
	lockall
# 78 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 79 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_1
# 80 "data//maps/GastreeGym/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, GastreeGym_Red_Text_2, GastreeGym_Red_Text_3
# 82 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GastreeGym_Red_12
GastreeGym_Red_11:
# 85 "data//maps/GastreeGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GastreeGym_Red_15
GastreeGym_Red_14:
# 89 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_GASTREEGYM_SPENSER_REWARD
# 90 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_4, MSGBOX_NPC
	goto GastreeGym_Red_1

GastreeGym_Red_5:
# 75 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_0, MSGBOX_NPC
	goto GastreeGym_Red_1

GastreeGym_Red_8:
# 94 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_5, MSGBOX_NPC
	goto GastreeGym_Red_1

GastreeGym_Red_12:
# 83 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_ROCK_GEM
	goto GastreeGym_Red_11

GastreeGym_Red_15:
# 86 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_HARD_STONE
	goto GastreeGym_Red_14


GastreeGym_TrainerBattle_Skip_Text_0:
# 6 "data//maps/GastreeGym/scripts.pory"
	.string "Hey hey, who're you?$"

GastreeGym_TrainerBattle_Skip_Text_1:
# 6 "data//maps/GastreeGym/scripts.pory"
	.string "I guess you are someone after all.$"

GastreeGym_TrainerBattle_Skip_Text_2:
# 7 "data//maps/GastreeGym/scripts.pory"
	.string "To reach Leader INGER, you'll have to\n"
	.string "find the secret walls!$"

GastreeGym_TrainerBattle_Jaco_Text_0:
# 15 "data//maps/GastreeGym/scripts.pory"
	.string "Hah! So you found the fake wall.$"

GastreeGym_TrainerBattle_Jaco_Text_1:
# 15 "data//maps/GastreeGym/scripts.pory"
	.string "Ouch, that hurt!$"

GastreeGym_TrainerBattle_Jaco_Text_2:
# 16 "data//maps/GastreeGym/scripts.pory"
	.string "You're not half bad after all.$"

GastreeGym_LeaderBattle_Text_0:
# 29 "data//maps/GastreeGym/scripts.pory"
	.string "That was a great battle, {PLAYER}! I\n"
	.string "can't wait to see what you'll do next.$"

GastreeGym_EventScript_Victory_Text_0:
# 42 "data//maps/GastreeGym/scripts.pory"
	.string "{PLAYER} received the Hard Badge\n"
	.string "from Inger.$"

GastreeGym_EventScript_Victory_Text_1:
# 50 "data//maps/GastreeGym/scripts.pory"
	.string "The Hard Badge allows you to use HM\n"
	.string "SPLASH outside of battle. Hop and skip\l"
	.string "across all the water bodies of Cormoria!$"

GastreeGym_EventScript_Victory_Text_2:
# 53 "data//maps/GastreeGym/scripts.pory"
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
# 75 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

GastreeGym_Red_Text_1:
# 79 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! That\n"
	.string "was an impressive battle. In\l"
	.string "recognition of your skills, I'd like to\l"
	.string "give you something. Which of these do\l"
	.string "you fancy?$"

GastreeGym_Red_Text_2:
# 80 "data//maps/GastreeGym/scripts.pory"
	.string "ROCK GEM$"

GastreeGym_Red_Text_3:
# 80 "data//maps/GastreeGym/scripts.pory"
	.string "HARD STONE$"

GastreeGym_Red_Text_4:
# 90 "data//maps/GastreeGym/scripts.pory"
	.string "Now get on out there and find the next\n"
	.string "gym - I'll see you there!$"

GastreeGym_Red_Text_5:
# 94 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the Gastree Gym! Inger\n"
	.string "specialises in the steadfast ROCK type,\l"
	.string "so avoid using FIRE, FLYING and BUG\l"
	.string "type Pokemon. Now go get 'em,\l"
	.string "champ-in-the-making!$"

GastreeGym_Red_Text_6:
# 98 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the - oh my, you don't look\n"
	.string "so good. First gym? I understand. But\l"
	.string "perk up, child! If it was easy, it\l"
	.string "wouldn't be worth anything. First, have\l"
	.string "some water.$"

GastreeGym_Red_Text_7:
# 100 "data//maps/GastreeGym/scripts.pory"
	.string "Against Inger, avoid using FIRE, FLYING\n"
	.string "and BUG type Pokemon. Now go get 'em,\l"
	.string "champ-in-the-making!$"

GastreeGym_Text_Intro::
# 57 "data//maps/GastreeGym/scripts.pory"
	.string "Inger: ...you look a little green. It is\n"
	.string "nerves? First gym battle?\p"
	.string "...\p"
	.string "Inger: In that case, you picked the\n"
	.string "wrong gym!\p"
	.string "Inger: I'm Inger, master of Rock-types\n"
	.string "and the unshakable strength of the\l"
	.string "earth. My ROCK type Pokemon have seen\l"
	.string "countless battles, and they never\l"
	.string "crumble under pressure. If you think\l"
	.string "you can break through, show me the\l"
	.string "strength that you bring with you!$"

GastreeGym_Text_Defeated::
# 61 "data//maps/GastreeGym/scripts.pory"
	.string "Solid foundations. An instinct for\n"
	.string "battle. And the makings of a strong\l"
	.string "team. I humbly accept my defeat.$"
