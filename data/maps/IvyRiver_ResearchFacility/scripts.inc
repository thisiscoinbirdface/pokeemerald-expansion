# 1 "data//maps/IvyRiver_ResearchFacility/scripts.pory"

# 2 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_MAIN, 4
# 3 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q1, 5
# 4 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q2, 6
# 5 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q3, 7
# 6 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_Q4, 8
# 7 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
    .set LOCALID_EV, 1

IvyRiver_ResearchFacility_MapScripts::
	.byte 0


IvyRiver_Ranger_FirstQuest::
# 25 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq IvyRiver_Ranger_FirstQuest_2
# 67 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end

IvyRiver_Ranger_FirstQuest_2:
# 28 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	lockall
# 29 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	faceplayer
# 30 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_0
# 31 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 32 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 33 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_MAIN, IvyRiver_Ranger_FirstQuest_Movement_0
# 34 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 35 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 36 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_1
# 37 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 38 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	removeitem ITEM_RANGER_PACKAGE
# 39 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_2
# 40 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 41 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 42 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	applymovement LOCALID_MAIN, IvyRiver_Ranger_FirstQuest_Movement_1
# 43 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmovement 0
# 44 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 45 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_3
# 46 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 47 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 16
# 48 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	msgbox IvyRiver_Ranger_FirstQuest_Text_4
# 49 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	release
# 50 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	delay 8
# 53 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	message IvyRiver_Ranger_FirstQuest_Text_5
# 54 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	waitmessage
# 55 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 59 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 4
# 60 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_RANGER, SUB_QUEST_1
# 62 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	releaseall
	end


# 33 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_FirstQuest_Movement_0:
# 33 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_question_mark
	step_end

# 42 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
IvyRiver_Ranger_FirstQuest_Movement_1:
# 42 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	emote_exclamation_mark
	step_end

IvyRiver_Ranger_FirstQuest_Text_0:
# 30 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hmm? A Recruit? Welcome to the Ivy\n"
	.string "River Ranger Institute! We're a tad\l"
	.string "remote - to say the least - but we've\l"
	.string "made this place our home...and yours\l"
	.string "too!\p"
	.string "...$"

IvyRiver_Ranger_FirstQuest_Text_1:
# 36 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Hmm? Ravine has a package for me?$"

IvyRiver_Ranger_FirstQuest_Text_2:
# 39 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER} gave the Ranger scientist\n"
	.string "the Ranger Package$"

IvyRiver_Ranger_FirstQuest_Text_3:
# 45 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Ahh, yes, yes. The supplies have\n"
	.string "arrived! Excellent!\p"
	.string "Exciting stuff indeed.\p"
	.string "You see, {PLAYER}, the Ivy River\n"
	.string "Ranger Institute studies Pokémon\l"
	.string "evolutions. To maintain a robust\l"
	.string "Pokémon ecosystem, we need to know as\l"
	.string "much as we can about how Pokémon\l"
	.string "evolve, when they evolve, and what\l"
	.string "changes that might cause in its\l"
	.string "surroundings.$"

IvyRiver_Ranger_FirstQuest_Text_4:
# 48 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "Director Ravine sent us a collection of\n"
	.string "items that induce evolution in certain\l"
	.string "Pokémon. We've been waiting for this for\l"
	.string "a long time!\p"
	.string "Thank you, {PLAYER}\p"
	.string "And am I correct in assuming that this\n"
	.string "is your first mission?\p"
	.string "...\p"
	.string "In that case, I officially declare that\n"
	.string "you've cleared your first mission and I\l"
	.string "now promote you to the rank of\l"
	.string "Candidate!$"

IvyRiver_Ranger_FirstQuest_Text_5:
# 53 "data//maps/IvyRiver_ResearchFacility/scripts.pory"
	.string "{PLAYER} was promoted from Recruit\n"
	.string "to Candidate!$"
