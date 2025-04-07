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
	call Common_EventScript_SaveGame
# 25 "data//maps/GastreeGym/scripts.pory"
	lockall
# 26 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 28 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeGym_LeaderBattle_2
# 31 "data//maps/GastreeGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_LEADER, GastreeGym_Text_Intro, GastreeGym_Text_Defeated, GastreeGym_EventScript_Victory, NO_MUSIC
# 32 "data//maps/GastreeGym/scripts.pory"
	release
GastreeGym_LeaderBattle_1:
# 35 "data//maps/GastreeGym/scripts.pory"
	releaseall
	return

GastreeGym_LeaderBattle_2:
# 29 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_0
	goto GastreeGym_LeaderBattle_1


GastreeGym_EventScript_Victory::
# 41 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_0
# 42 "data//maps/GastreeGym/scripts.pory"
	release
# 43 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 46 "data//maps/GastreeGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 49 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_1
# 52 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_2
# 53 "data//maps/GastreeGym/scripts.pory"
	releaseall
	return


GastreeGym_Red::
# 72 "data//maps/GastreeGym/scripts.pory"
	lockall
# 73 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 75 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeGym_Red_2
# 78 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_1
GastreeGym_Red_1:
# 80 "data//maps/GastreeGym/scripts.pory"
	releaseall
	end

GastreeGym_Red_2:
# 76 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_Red_Text_0
	goto GastreeGym_Red_1


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
# 41 "data//maps/GastreeGym/scripts.pory"
	.string "{PLAYER} received the GYM Badge from\n"
	.string "INGER.$"

GastreeGym_EventScript_Victory_Text_1:
# 49 "data//maps/GastreeGym/scripts.pory"
	.string "The BADGE allows you to use HM SPLASH\n"
	.string "outside of battle. Hop and skip across\l"
	.string "all the water bodies of Cormoria!$"

GastreeGym_EventScript_Victory_Text_2:
# 52 "data//maps/GastreeGym/scripts.pory"
	.string "So where are you headed next?\p"
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
	.string "All the best, {PLAYER}!$"

GastreeGym_Red_Text_0:
# 76 "data//maps/GastreeGym/scripts.pory"
	.string "Well done champ-in-the-making! Now get\n"
	.string "on out there and find the next gym -\l"
	.string "I'll see you there!$"

GastreeGym_Red_Text_1:
# 78 "data//maps/GastreeGym/scripts.pory"
	.string "Welcome to the - oh my, you don't look\n"
	.string "so good. First gym? I understand. But\l"
	.string "perk up, child! If it was easy, it\l"
	.string "wouldn't be worth anything.\p"
	.string "Against INGER, avoid using FIRE, FLYING\n"
	.string "and BUG type Pokemon. Now go get 'em,\l"
	.string "champ-in-the-making!$"

GastreeGym_Text_Intro::
# 56 "data//maps/GastreeGym/scripts.pory"
	.string "INGER: ...you look a little green. It is\n"
	.string "nerves? First gym battle?\p"
	.string "...\p"
	.string "In that case, you picked the wrong gym!\p"
	.string "I'm INGER, master of Rock-types and\n"
	.string "the unshakable strength of the earth.\l"
	.string "My ROCK type Pokemon have seen\l"
	.string "countless battles, and they never\l"
	.string "crumble under pressure. If you think\l"
	.string "you can break through, show me the\l"
	.string "strength that you bring with you!$"

GastreeGym_Text_Defeated::
# 60 "data//maps/GastreeGym/scripts.pory"
	.string "Solid foundations. An instinct for\n"
	.string "battle. And the makings of a strong\l"
	.string "team. I humbly accept my defeat.$"
