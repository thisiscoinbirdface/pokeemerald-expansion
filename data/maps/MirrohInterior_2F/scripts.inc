MirrohInterior_2F_MapScripts::
# 2 "data//maps/MirrohInterior_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MirrohInterior_2F_SetHoleWarp
	.byte 0


MirrohInterior_2F_SetHoleWarp::
# 6 "data//maps/MirrohInterior_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 7 "data//maps/MirrohInterior_2F/scripts.pory"
	setholewarp MAP_MIRROH_INTERIOR_B1F
	end


MirrohInterior_2F_CavePainting_WalkingWake::
# 28 "data//maps/MirrohInterior_2F/scripts.pory"
	lockall
# 31 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_CavePainting_WalkingWake_Text_0
# 33 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_SkiierA::
# 44 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_SkiierA_Text_0
# 45 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_TriathleteA::
# 49 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_TriathleteA_Text_0
# 50 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Voltorb::
# 54 "data//maps/MirrohInterior_2F/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_NORMAL
# 55 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Voltorb_Text_0
# 56 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Sandshrew::
# 60 "data//maps/MirrohInterior_2F/scripts.pory"
	playmoncry SPECIES_SANDSHREW, CRY_MODE_NORMAL
# 61 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Sandshrew_Text_0
# 62 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_SkiierB::
# 68 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_SkiierB_Text_0
# 69 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_TriathleteB::
# 73 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_TriathleteB_Text_0
# 74 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Lycanroc::
# 78 "data//maps/MirrohInterior_2F/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 79 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Lycanroc_Text_0
# 80 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Snover::
# 84 "data//maps/MirrohInterior_2F/scripts.pory"
	playmoncry SPECIES_SNOVER, CRY_MODE_NORMAL
# 85 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Snover_Text_0
# 86 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Trainer_A::
# 100 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_A, MirrohInterior_2F_Trainer_A_Text_0, MirrohInterior_2F_Trainer_A_Text_1
# 101 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_A_Text_2
# 102 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_B::
# 106 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_B, MirrohInterior_2F_Trainer_B_Text_0, MirrohInterior_2F_Trainer_B_Text_1
# 107 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_B_Text_2
# 108 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_C::
# 112 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_C, MirrohInterior_2F_Trainer_C_Text_0, MirrohInterior_2F_Trainer_C_Text_1
# 113 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_C_Text_2
# 114 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_D::
# 118 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_D, MirrohInterior_2F_Trainer_D_Text_0, MirrohInterior_2F_Trainer_D_Text_1
# 119 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_D_Text_2
# 120 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_E::
# 128 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_E, MirrohInterior_2F_Trainer_E_Text_0, MirrohInterior_2F_Trainer_E_Text_1
# 129 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_E_Text_2
# 130 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_F::
# 134 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_F, MirrohInterior_2F_Trainer_F_Text_0, MirrohInterior_2F_Trainer_F_Text_1
# 135 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_F_Text_2
# 136 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_G::
# 141 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_G, MirrohInterior_2F_Trainer_G_Text_0, MirrohInterior_2F_Trainer_G_Text_1
# 142 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_G_Text_2
# 143 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_NPC_A::
# 163 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_A_Text_0, MSGBOX_NPC
	end


MirrohInterior_2F_NPC_B::
# 168 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_B_Text_0, MSGBOX_NPC
	end


MirrohInterior_2F_NPC_C::
# 173 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_C_Text_0, MSGBOX_NPC
	end


MirrohInterior_2F_NPC_D::
# 178 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_2F_CavePainting_WalkingWake_Text_0:
# 31 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "It's an ancient cave painting...a never\n"
	.string "before seen Pokémon! It looks somewhat\l"
	.string "reptilian, but also has feathers.\l"
	.string "Terrifying!$"

MirrohInterior_2F_SkiierA_Text_0:
# 44 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "How dare you! Skiing is the best\n"
	.string "endurance sport!$"

MirrohInterior_2F_TriathleteA_Text_0:
# 49 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Are you crazy? Running is the best\n"
	.string "endurance sport!$"

MirrohInterior_2F_Voltorb_Text_0:
# 55 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Voltorb is fighting to prove that\n"
	.string "running is better!$"

MirrohInterior_2F_Sandshrew_Text_0:
# 61 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Sandshrew refuses to believe anything\n"
	.string "but skiing is the best!$"

MirrohInterior_2F_SkiierB_Text_0:
# 68 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Why don't you runners get it? Skiing is\n"
	.string "just superior!$"

MirrohInterior_2F_TriathleteB_Text_0:
# 73 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "The snow has addled your brains! Clear\n"
	.string "it out with a good run!$"

MirrohInterior_2F_Lycanroc_Text_0:
# 79 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Lycanroc is fighting...but\n"
	.string "half-heartedly. Perhaps it wants to try\l"
	.string "skiing once?$"

MirrohInterior_2F_Snover_Text_0:
# 85 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Snover won't back down...but isn't\n"
	.string "showing much energy. Maybe it's looking\l"
	.string "to try new things?$"

MirrohInterior_2F_Trainer_A_Text_0:
# 100 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Deep in the depths of Mt. Mirroh, I\n"
	.string "sense psychic energy!$"

MirrohInterior_2F_Trainer_A_Text_1:
# 100 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Nope, there's no psychic energy!$"

MirrohInterior_2F_Trainer_A_Text_2:
# 101 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I suppose there's psychic energy\n"
	.string "everywhere. It's like happiness - a\l"
	.string "state of mind.$"

MirrohInterior_2F_Trainer_B_Text_0:
# 106 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Why are you here? Are you trying to\n"
	.string "steal my Pokémon like those Team\l"
	.string "Somber grunts?$"

MirrohInterior_2F_Trainer_B_Text_1:
# 106 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I guess you're not!$"

MirrohInterior_2F_Trainer_B_Text_2:
# 107 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "When I was on the upper floor, some\n"
	.string "Team Somber grunts tried to take my\l"
	.string "Pokémon. But I beat one of them and ran\l"
	.string "away from the other!$"

MirrohInterior_2F_Trainer_C_Text_0:
# 112 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "No it's not! Running needs more\n"
	.string "endurance than skiing! Hey, trainer!\l"
	.string "You be the one to decide which one is\l"
	.string "better!$"

MirrohInterior_2F_Trainer_C_Text_1:
# 112 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Even my endurance didn't help!$"

MirrohInterior_2F_Trainer_C_Text_2:
# 113 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I don't know why we argue when the\n"
	.string "bottom line is that all sports are fun.$"

MirrohInterior_2F_Trainer_D_Text_0:
# 118 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Why don't these runners understand?\n"
	.string "Skiing takes more technique than\l"
	.string "running!$"

MirrohInterior_2F_Trainer_D_Text_1:
# 118 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Even my technique didn't help!$"

MirrohInterior_2F_Trainer_D_Text_2:
# 119 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "To be frank with you, if I didn't have\n"
	.string "access to a ski slope, I'd be running\l"
	.string "myself.$"

MirrohInterior_2F_Trainer_E_Text_0:
# 128 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Didn't I battle you before in Route 3?\n"
	.string "You're the one that beat me and my\l"
	.string "sister!$"

MirrohInterior_2F_Trainer_E_Text_1:
# 128 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "You beat me then too!$"

MirrohInterior_2F_Trainer_E_Text_2:
# 129 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm going to collect all 8 gym badges!\n"
	.string "But I only have 4 so far.$"

MirrohInterior_2F_Trainer_F_Text_0:
# 134 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Check out my new friends!$"

MirrohInterior_2F_Trainer_F_Text_1:
# 134 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Don't hurt them!$"

MirrohInterior_2F_Trainer_F_Text_2:
# 135 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm a huge Pokefan! They're my best\n"
	.string "friends! But I have human friends too.$"

MirrohInterior_2F_Trainer_G_Text_0:
# 141 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I can't wait to get out of this cave and\n"
	.string "collect my 5th gym badge at Winterlily\l"
	.string "Hollow. Yep, that's right! I'm not your\l"
	.string "average trainer - I'm on my way to\l"
	.string "become the Pokémon Champion!$"

MirrohInterior_2F_Trainer_G_Text_1:
# 141 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I've still got a long way to go!$"

MirrohInterior_2F_Trainer_G_Text_2:
# 142 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Four more badges to go...whew, this gym\n"
	.string "challenge is exhausting!$"

MirrohInterior_2F_NPC_A_Text_0:
# 163 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "On the way to Winterlily Hollow? I live\n"
	.string "there. It's a little further ahead, to\l"
	.string "the right and up, past the icy floor.$"

MirrohInterior_2F_NPC_B_Text_0:
# 168 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "My husband is an avid history buff. He's\n"
	.string "down there examining some old cave\l"
	.string "paintings.$"

MirrohInterior_2F_NPC_C_Text_0:
# 173 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "What a fearsome Pokémon! One must be\n"
	.string "grateful it's not alive in this day and\l"
	.string "age.$"

MirrohInterior_2F_NPC_D_Text_0:
# 178 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "This cave is so exhausting! I can't wait\n"
	.string "to be on the other side.$"
