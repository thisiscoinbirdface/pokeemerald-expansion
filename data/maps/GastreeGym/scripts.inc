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
	lockall
# 24 "data//maps/GastreeGym/scripts.pory"
	faceplayer
# 26 "data//maps/GastreeGym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, GastreeGym_LeaderBattle_2
# 29 "data//maps/GastreeGym/scripts.pory"
	trainerbattle_single TRAINER_GASTREEGYM_LEADER, GastreeGym_Text_Intro, GastreeGym_Text_Defeated, GastreeGym_EventScript_Victory, NO_MUSIC
# 30 "data//maps/GastreeGym/scripts.pory"
	release
GastreeGym_LeaderBattle_1:
# 33 "data//maps/GastreeGym/scripts.pory"
	releaseall
	return

GastreeGym_LeaderBattle_2:
# 27 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_LeaderBattle_Text_0
	goto GastreeGym_LeaderBattle_1


GastreeGym_EventScript_Victory::
# 39 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_0
# 40 "data//maps/GastreeGym/scripts.pory"
	release
# 41 "data//maps/GastreeGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 44 "data//maps/GastreeGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 47 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_1
# 50 "data//maps/GastreeGym/scripts.pory"
	giveitem ITEM_TM_FOCUS_PUNCH
# 51 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_2
# 54 "data//maps/GastreeGym/scripts.pory"
	msgbox GastreeGym_EventScript_Victory_Text_3
# 55 "data//maps/GastreeGym/scripts.pory"
	releaseall
	return


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
# 27 "data//maps/GastreeGym/scripts.pory"
	.string "That was a great battle, {PLAYER}! I\n"
	.string "can't wait to see what you'll do next.$"

GastreeGym_EventScript_Victory_Text_0:
# 39 "data//maps/GastreeGym/scripts.pory"
	.string "{PLAYER} received the GYM Badge from\n"
	.string "INGER.$"

GastreeGym_EventScript_Victory_Text_1:
# 47 "data//maps/GastreeGym/scripts.pory"
	.string "The BADGE allows you to use HM CUT\n"
	.string "outside of battle. Cut down all your\l"
	.string "obstacles!$"

GastreeGym_EventScript_Victory_Text_2:
# 51 "data//maps/GastreeGym/scripts.pory"
	.string "$"

GastreeGym_EventScript_Victory_Text_3:
# 54 "data//maps/GastreeGym/scripts.pory"
	.string "So where are you headed next? To Mt.\n"
	.string "Ceram? You'll have to go north from here\l"
	.string "through Route 4. All the best,\l"
	.string "{PLAYER}!$"

GastreeGym_Text_Intro::
# 58 "data//maps/GastreeGym/scripts.pory"
	.string "INGER: Hello! My name is INGER and I am\n"
	.string "the GASTREE CITY GYM LEADER. So you\l"
	.string "want to challenge me? Let's get right\l"
	.string "into it!$"

GastreeGym_Text_Defeated::
# 62 "data//maps/GastreeGym/scripts.pory"
	.string "Solid foundations. An instinct for\n"
	.string "battle. And the makings of a strong\l"
	.string "team. I humbly accept my defeat.$"
