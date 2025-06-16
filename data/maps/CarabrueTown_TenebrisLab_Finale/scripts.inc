# 1 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"

# 2 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
    .set LOCALID_DET1, 6
# 3 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
    .set LOCALID_DET2, 5
# 4 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
    .set LOCALID_TENE, 4

CarabrueTown_TenebrisLab_Finale_MapScripts::
# 9 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CarabrueTown_TenebrisLab_Finale_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CarabrueTown_TenebrisLab_Finale_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, CarabrueTown_TenebrisLab_PostFinale
	.2byte 0


CarabrueTown_TenebrisLab_PostFinale::
# 16 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	setrespawn HEAL_LOCATION_CARABRUE_TOWN
# 19 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	special HealPlayerParty
# 21 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	lockall
# 22 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_PostFinale_Movement_0
# 24 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET1, CarabrueTown_TenebrisLab_PostFinale_Movement_1
# 25 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 26 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 27 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_1
# 30 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_2
# 31 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 32 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 33 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_3
# 35 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET1, CarabrueTown_TenebrisLab_PostFinale_Movement_3
# 36 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET2, CarabrueTown_TenebrisLab_PostFinale_Movement_3
# 37 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 38 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 39 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_4
# 43 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_4
# 44 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 45 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 46 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_5
# 48 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET1, CarabrueTown_TenebrisLab_PostFinale_Movement_1
# 49 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 50 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 51 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_6
# 53 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 54 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_7
# 56 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_8
# 58 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_4
# 59 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 60 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 61 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_9
# 63 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET1, CarabrueTown_TenebrisLab_PostFinale_Movement_1
# 64 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 65 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 66 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_10
# 68 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET1, CarabrueTown_TenebrisLab_PostFinale_Movement_5
# 69 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET2, CarabrueTown_TenebrisLab_PostFinale_Movement_5
# 70 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_5
# 71 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 72 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 32
# 73 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_11
# 75 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_6
# 76 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 77 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 78 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_12
# 80 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_DET1, CarabrueTown_TenebrisLab_PostFinale_Movement_5
# 81 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 82 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 83 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_13
# 85 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_6
# 86 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 87 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 88 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_14
# 90 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CarabrueTown_TenebrisLab_PostFinale_Movement_2
# 91 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 92 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 94 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_15
# 95 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	applymovement LOCALID_TENE, CarabrueTown_TenebrisLab_PostFinale_Movement_6
# 96 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	waitmovement 0
# 97 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 98 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_16
# 99 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	giveitem ITEM_HM07
# 100 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_2, CarabrueTown_TenebrisLab_PostFinale_Text_17
# 102 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	delay 16
# 103 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, CarabrueTown_TenebrisLab_PostFinale_Text_18
# 106 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	setflag FLAG_POST_FINALE_CUTSCENE
# 107 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	setflag FLAG_HIDE_ROUTE1_NORMAL
# 108 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	clearflag FLAG_HIDE_ROUTE1_STRONG
# 109 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	clearflag FLAG_HIDE_TENEBRIS_TENEBRIS
# 110 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	completequest QUEST_STOP_TEAM_SOMBER
# 112 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	releaseall
	end


TenebrisLab_Finale_Detective::
# 117 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	speakername CarabrueTown_TenebrisLab_PostFinale_Text_0
# 118 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox TenebrisLab_Finale_Detective_Text_0, MSGBOX_NPC
	end


TenebrisLab_Finale_Tenebris::
# 122 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox_delay CarabrueTown_TenebrisLab_PostFinale_Text_0, TenebrisLab_Finale_Tenebris_Text_0
	end


TenebrisLab_Finale_Scientist_A::
# 130 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox TenebrisLab_Finale_Scientist_A_Text_0, MSGBOX_NPC
	end


TenebrisLab_Finale_Scientist_B::
# 134 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox TenebrisLab_Finale_Scientist_B_Text_0, MSGBOX_NPC
	end


TenebrisLab_Finale_Scientist_C::
# 138 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox TenebrisLab_Finale_Scientist_C_Text_0, MSGBOX_NPC
	end


TenebrisLab_Finale_Gardevoir::
# 142 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	playmoncry SPECIES_GARDEVOIR, CRY_MODE_NORMAL
# 143 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	msgbox TenebrisLab_Finale_Gardevoir_Text_0, MSGBOX_NPC
	return


# 22 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_0:
# 22 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	face_up
	step_end

# 24 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_1:
# 24 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	jump_in_place_right
	step_end

# 30 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_2:
# 30 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	emote_question_mark
	step_end

# 35 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_3:
# 35 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	emote_exclamation_mark
# 35 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	jump_in_place_right
	step_end

# 43 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_4:
# 43 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	jump_in_place_left
	step_end

# 68 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_5:
# 68 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	face_down
	step_end

# 75 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
CarabrueTown_TenebrisLab_PostFinale_Movement_6:
# 75 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	jump_in_place_down
	step_end

CarabrueTown_TenebrisLab_PostFinale_Text_0:
# 27 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Detective$"

CarabrueTown_TenebrisLab_PostFinale_Text_1:
# 27 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "...and now Rue won't be allowed to plot\n"
	.string "any schemes for a long, long time.$"

CarabrueTown_TenebrisLab_PostFinale_Text_2:
# 33 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Tenebris$"

CarabrueTown_TenebrisLab_PostFinale_Text_3:
# 33 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "All's well that ends well, then?$"

CarabrueTown_TenebrisLab_PostFinale_Text_4:
# 39 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Yes. Case closed!$"

CarabrueTown_TenebrisLab_PostFinale_Text_5:
# 46 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "I'm ever so grateful for your help,\n"
	.string "detectives.\p"
	.string "Without your leadership on this case,\n"
	.string "who knows how long I would have been\l"
	.string "trapped in Ancient Cormoria?$"

CarabrueTown_TenebrisLab_PostFinale_Text_6:
# 51 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "We're only doing our duty, Professor.\p"
	.string "We also have people to thank...\p"
	.string "Kohla of course, although he's not here\n"
	.string "now, was instrumental in chasing Team\l"
	.string "Somber across Cormoria. He's got the\l"
	.string "makings of a truly detective!\p"
	.string "The Gym Leaders are the ones who\n"
	.string "actually took Team Somber apart.\p"
	.string "Those two admins - Moxie and Melea -\n"
	.string "got away, but Inger and Ariana are with\l"
	.string "Gloria in Silversun City right now,\l"
	.string "clearing out their headquarters and\l"
	.string "retrieving all the Ancient Pokémon.$"

CarabrueTown_TenebrisLab_PostFinale_Text_7:
# 54 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Once you return them to me, I'll send\n"
	.string "them back to the past along with the\l"
	.string "Ancient Terror.$"

CarabrueTown_TenebrisLab_PostFinale_Text_8:
# 56 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Definitely.$"

CarabrueTown_TenebrisLab_PostFinale_Text_9:
# 61 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "So it was a team effort then?$"

CarabrueTown_TenebrisLab_PostFinale_Text_10:
# 66 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Absolutely.\p"
	.string "There was no solving this case without\n"
	.string "Kohla and the Gym Leaders...\p"
	.string "...$"

CarabrueTown_TenebrisLab_PostFinale_Text_11:
# 73 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "...and you, {PLAYER}.$"

CarabrueTown_TenebrisLab_PostFinale_Text_12:
# 78 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "{PLAYER}, you were just incredible.\n"
	.string "You stood up against a huge\l"
	.string "organisation like Team Somber and\l"
	.string "fought them off time and again!$"

CarabrueTown_TenebrisLab_PostFinale_Text_13:
# 83 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Even after you were taken off the case,\n"
	.string "you did what was right, {PLAYER}.\p"
	.string "We're in your debt.$"

CarabrueTown_TenebrisLab_PostFinale_Text_14:
# 88 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "I couldn't be prouder of my newest\n"
	.string "research associate.\p"
	.string "Now that all of this is finished,\n"
	.string "I'll finally get to know you better.\p"
	.string "...but before you rejoin the lab,\n"
	.string "there is one last thing to do.$"

CarabrueTown_TenebrisLab_PostFinale_Text_15:
# 94 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "The detectives told me that you\n"
	.string "defeated Leader Raazi.\p"
	.string "You know what that means, right?\p"
	.string "...$"

CarabrueTown_TenebrisLab_PostFinale_Text_16:
# 98 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "You've qualified for this year's\n"
	.string "Pokémon Championship!\p"
	.string "The Championship is held every four\n"
	.string "years, down at Victory Cape.\p"
	.string "You can get there by surfing from Route\n"
	.string "2, but you'll need this.$"

CarabrueTown_TenebrisLab_PostFinale_Text_17:
# 100 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Don't worry - we can start your\n"
	.string "research work when you're back.\p"
	.string "{PLAYER}, of all the trainers I've\n"
	.string "known, few have the caliber and drive\l"
	.string "that you do.\p"
	.string "I know you'll do well at the tournament!$"

CarabrueTown_TenebrisLab_PostFinale_Text_18:
# 103 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "...\p"
	.string "Well?\p"
	.string "What are you waiting for?\p"
	.string "Head to Route 2 and make your way to\n"
	.string "Victory Cape - ASAP!$"

TenebrisLab_Finale_Detective_Text_0:
# 118 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "What's taking you so long? I bet Kohla's\n"
	.string "already reached Victory Cape.\p"
	.string "How many slow starts do you need to\n"
	.string "learn your lesson?$"

TenebrisLab_Finale_Tenebris_Text_0:
# 122 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "I believe in you, {PLAYER}!$"

TenebrisLab_Finale_Scientist_A_Text_0:
# 130 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "I can't believe Rue was behind this\n"
	.string "whole mess! I wish I'd caught on sooner!$"

TenebrisLab_Finale_Scientist_B_Text_0:
# 134 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "The detectives told us the entire\n"
	.string "story. You're incredible, {PLAYER}!$"

TenebrisLab_Finale_Scientist_C_Text_0:
# 138 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Go on, {PLAYER}! Bring the\n"
	.string "championship trophy to Carabrue Town!$"

TenebrisLab_Finale_Gardevoir_Text_0:
# 143 "data//maps/CarabrueTown_TenebrisLab_Finale/scripts.pory"
	.string "Gardevoir regards you intently...\p"
	.string "Did it smile?$"
