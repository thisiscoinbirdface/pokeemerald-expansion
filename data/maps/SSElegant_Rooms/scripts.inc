SSElegant_Rooms_MapScripts::
	.byte 0


SSElegant_Rooms_Gabrielle::
# 14 "data//maps/SSElegant_Rooms/scripts.pory"
	msgbox SSElegant_Rooms_Gabrielle_Text_0, MSGBOX_NPC
	end


SSElegant_Rooms_Zoroark::
# 18 "data//maps/SSElegant_Rooms/scripts.pory"
	playmoncry SPECIES_ZOROARK_HISUI, CRY_MODE_NORMAL
# 19 "data//maps/SSElegant_Rooms/scripts.pory"
	msgbox SSElegant_Rooms_Zoroark_Text_0, MSGBOX_NPC
	end


SSElegant_Rooms_Breech::
# 25 "data//maps/SSElegant_Rooms/scripts.pory"
	msgbox SSElegant_Rooms_Breech_Text_0, MSGBOX_NPC
	end


SSElegant_Rooms_Clefable::
# 30 "data//maps/SSElegant_Rooms/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 31 "data//maps/SSElegant_Rooms/scripts.pory"
	msgbox SSElegant_Rooms_Clefable_Text_0, MSGBOX_NPC
	end


SSElegant_Rooms_NPC1::
# 37 "data//maps/SSElegant_Rooms/scripts.pory"
	msgbox SSElegant_Rooms_NPC1_Text_0, MSGBOX_NPC
	end


SSElegant_Rooms_NPC2::
# 41 "data//maps/SSElegant_Rooms/scripts.pory"
	msgbox SSElegant_Rooms_NPC2_Text_0, MSGBOX_NPC
	end


SSElegant_Rooms_Weezing::
# 45 "data//maps/SSElegant_Rooms/scripts.pory"
	playmoncry SPECIES_DRAGALGE, CRY_MODE_NORMAL
# 46 "data//maps/SSElegant_Rooms/scripts.pory"
	msgbox SSElegant_Rooms_Weezing_Text_0, MSGBOX_NPC
	end


SSElegant_Rooms_NPC3::
# 52 "data//maps/SSElegant_Rooms/scripts.pory"
	msgbox SSElegant_Rooms_NPC3_Text_0, MSGBOX_NPC
	end


SSElegant_Rooms_Smeargle::
# 56 "data//maps/SSElegant_Rooms/scripts.pory"
	playmoncry SPECIES_SMEARGLE, CRY_MODE_NORMAL
# 57 "data//maps/SSElegant_Rooms/scripts.pory"
	msgbox SSElegant_Rooms_Smeargle_Text_0, MSGBOX_NPC
	end


SSElegant_Rooms_Gloria_Locked::
# 62 "data//maps/SSElegant_Rooms/scripts.pory"
	goto_if_set FLAG_RAAZI_BEATEN, SSElegant_Rooms_Gloria_Locked_2
# 68 "data//maps/SSElegant_Rooms/scripts.pory"
	msgbox_delay SSElegant_Rooms_Gloria_Locked_Text_1, SSElegant_Rooms_Gloria_Locked_Text_2
	end

SSElegant_Rooms_Gloria_Locked_2:
# 63 "data//maps/SSElegant_Rooms/scripts.pory"
	msgbox SSElegant_Rooms_Gloria_Locked_Text_0
# 64 "data//maps/SSElegant_Rooms/scripts.pory"
	releaseall
	end


SSElegant_Rooms_Trainer_A::
# 74 "data//maps/SSElegant_Rooms/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_A, SSElegant_Rooms_Trainer_A_Text_0, SSElegant_Rooms_Trainer_A_Text_1
# 75 "data//maps/SSElegant_Rooms/scripts.pory"
	msgbox SSElegant_Rooms_Trainer_A_Text_2
# 76 "data//maps/SSElegant_Rooms/scripts.pory"
	releaseall
	end


SSElegant_Rooms_Gabrielle_Text_0:
# 14 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "{PLAYER}, you managed to get on!\n"
	.string "Did you get a ticket?\p"
	.string "...\p"
	.string "You stowed away in a storage\n"
	.string "container? Whoa...$"

SSElegant_Rooms_Zoroark_Text_0:
# 19 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "Zoroark is licking its fur.\p"
	.string "...\p"
	.string "Just a thought - can it impersonate\n"
	.string "humans?$"

SSElegant_Rooms_Breech_Text_0:
# 25 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "Hey {PLAYER}! Fancy seeing you here.\n"
	.string "This is a welcome change for us - after\l"
	.string "so much mountaineering, Clefable and I\l"
	.string "are really enjoying the sea breeze!$"

SSElegant_Rooms_Clefable_Text_0:
# 31 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "Clefable is happy!$"

SSElegant_Rooms_NPC1_Text_0:
# 37 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "Our daughter is taking part in the\n"
	.string "Cormoria Pokémon Championship.\p"
	.string "We're on our way to {COLOR RED}Victory Cape{COLOR DARK_GRAY} to\n"
	.string "support her!$"

SSElegant_Rooms_NPC2_Text_0:
# 41 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "When I was younger, I tried to enter the\n"
	.string "Pokémon Championship...but I could only\l"
	.string "get four badges.$"

SSElegant_Rooms_Weezing_Text_0:
# 46 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "Dragalge looks content.$"

SSElegant_Rooms_NPC3_Text_0:
# 52 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "I thought I'd find inspiration for a\n"
	.string "masterpiece that could compete with\l"
	.string "Arsalan...but I've just been seasick the\l"
	.string "whole cruise!$"

SSElegant_Rooms_Smeargle_Text_0:
# 57 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "Smeargle looks seasick too...$"

SSElegant_Rooms_Gloria_Locked_Text_0:
# 63 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "It's locked.$"

SSElegant_Rooms_Gloria_Locked_Text_1:
# 68 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "Gloria$"

SSElegant_Rooms_Gloria_Locked_Text_2:
# 68 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "Please don't disturb me!$"

SSElegant_Rooms_Trainer_A_Text_0:
# 74 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "Hey! You're not getting that TM for\n"
	.string "free!$"

SSElegant_Rooms_Trainer_A_Text_1:
# 74 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "Alright, you can have the TM!$"

SSElegant_Rooms_Trainer_A_Text_2:
# 75 "data//maps/SSElegant_Rooms/scripts.pory"
	.string "Earthquake is a really strong TM!$"
