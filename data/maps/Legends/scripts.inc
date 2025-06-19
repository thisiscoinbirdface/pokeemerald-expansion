Legends_MapScripts::
# 2 "data//maps/Legends/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Legends_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Legends_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/Legends/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, Legends_SetWarp
	.2byte 0


Legends_SetWarp::
# 8 "data//maps/Legends/scripts.pory"
	setvar VAR_TEMP_0, 1
# 9 "data//maps/Legends/scripts.pory"
	setdynamicwarp MAP_CARABRUE_TOWN, 13, 9
	return


Legends_Sentry::
# 13 "data//maps/Legends/scripts.pory"
	trainerbattle_single TRAINER_PLAYER_SENTRY, Legends_Sentry_Text_0, Legends_Sentry_Text_1
# 14 "data//maps/Legends/scripts.pory"
	msgbox Legends_Sentry_Text_1, MSGBOX_NPC
	end


Legends_Eden::
# 18 "data//maps/Legends/scripts.pory"
	trainerbattle_single TRAINER_PLAYER_EDEN, Legends_Eden_Text_0, Legends_Eden_Text_1
# 19 "data//maps/Legends/scripts.pory"
	msgbox Legends_Eden_Text_2, MSGBOX_NPC
	end


Legends_Gozliak::
# 23 "data//maps/Legends/scripts.pory"
	trainerbattle_single TRAINER_PLAYER_GOZLIAK, Legends_Gozliak_Text_0, Legends_Gozliak_Text_1
# 24 "data//maps/Legends/scripts.pory"
	msgbox Legends_Gozliak_Text_2, MSGBOX_NPC
	end


Legends_Sherry::
# 28 "data//maps/Legends/scripts.pory"
	trainerbattle_single TRAINER_PLAYER_SHERRY, Legends_Sherry_Text_0, Legends_Sherry_Text_1
# 29 "data//maps/Legends/scripts.pory"
	msgbox Legends_Sherry_Text_1, MSGBOX_NPC
	end


Legends_Mike::
# 33 "data//maps/Legends/scripts.pory"
	trainerbattle_single TRAINER_PLAYER_MIKE, Legends_Mike_Text_0, Legends_Mike_Text_1
# 34 "data//maps/Legends/scripts.pory"
	msgbox Legends_Mike_Text_1, MSGBOX_NPC
	end


Legends_Sentry_Text_0:
# 13 "data//maps/Legends/scripts.pory"
	.string "I am the first player to complete\n"
	.string "Pokémon Dreamstone Mysteries.\p"
	.string "Come, {PLAYER}.\p"
	.string "Stand before me.\p"
	.string "Duel me for my throne.\p"
	.string "And if you think you deserve it,\n"
	.string "earn the right to my crown!$"

Legends_Sentry_Text_1:
# 13 "data//maps/Legends/scripts.pory"
	.string "My legacy is in good hands.$"

Legends_Eden_Text_0:
# 18 "data//maps/Legends/scripts.pory"
	.string "I am the second player to complete\n"
	.string "Pokémon Dreamstone Mysteries.\p"
	.string "After me lies your last challenge.\n"
	.string "But will you ever reach it?$"

Legends_Eden_Text_1:
# 18 "data//maps/Legends/scripts.pory"
	.string "I expected nothing else$"

Legends_Eden_Text_2:
# 19 "data//maps/Legends/scripts.pory"
	.string "I expected nothing less.$"

Legends_Gozliak_Text_0:
# 23 "data//maps/Legends/scripts.pory"
	.string "I am the third player to complete\n"
	.string "Pokémon Dreamstone Mysteries.\p"
	.string "I have Pokémon that you could only\n"
	.string "dream of catching!$"

Legends_Gozliak_Text_1:
# 23 "data//maps/Legends/scripts.pory"
	.string "$"

Legends_Gozliak_Text_2:
# 24 "data//maps/Legends/scripts.pory"
	.string "You have an impressive team.$"

Legends_Sherry_Text_0:
# 28 "data//maps/Legends/scripts.pory"
	.string "I am the fourth player to complete\n"
	.string "Pokémon Dreamstone Mysteries.\p"
	.string "Can you match upto my power?$"

Legends_Sherry_Text_1:
# 28 "data//maps/Legends/scripts.pory"
	.string "You're one of us.$"

Legends_Mike_Text_0:
# 33 "data//maps/Legends/scripts.pory"
	.string "I am the fifth player to complete\n"
	.string "Pokémon Dreamstone Mysteries.\p"
	.string "You may have won the Championship, but\n"
	.string "you're up against a true Champion now!$"

Legends_Mike_Text_1:
# 33 "data//maps/Legends/scripts.pory"
	.string "Well done, young Champion.$"
