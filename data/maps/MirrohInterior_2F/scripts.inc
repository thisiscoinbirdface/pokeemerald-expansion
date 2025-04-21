MirrohInterior_2F_MapScripts::
	.byte 0


MirrohInterior_2F_CavePainting_WalkingWake::
# 20 "data//maps/MirrohInterior_2F/scripts.pory"
	lockall
# 23 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_CavePainting_WalkingWake_Text_0
# 25 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_SkiierA::
# 36 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_SkiierA_Text_0
# 37 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_TriathleteA::
# 41 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_TriathleteA_Text_0
# 42 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Voltorb::
# 46 "data//maps/MirrohInterior_2F/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_NORMAL
# 47 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Voltorb_Text_0
# 48 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Sandshrew::
# 52 "data//maps/MirrohInterior_2F/scripts.pory"
	playmoncry SPECIES_SANDSHREW, CRY_MODE_NORMAL
# 53 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Sandshrew_Text_0
# 54 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_SkiierB::
# 60 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_SkiierB_Text_0
# 61 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_TriathleteB::
# 65 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_TriathleteB_Text_0
# 66 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Lycanroc::
# 70 "data//maps/MirrohInterior_2F/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 71 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Lycanroc_Text_0
# 72 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Snover::
# 76 "data//maps/MirrohInterior_2F/scripts.pory"
	playmoncry SPECIES_SNOVER, CRY_MODE_NORMAL
# 77 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Snover_Text_0
# 78 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Trainer_A::
# 92 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_A, MirrohInterior_2F_Trainer_A_Text_0, MirrohInterior_2F_Trainer_A_Text_1
# 93 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_A_Text_2
# 94 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_B::
# 98 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_B, MirrohInterior_2F_Trainer_B_Text_0, MirrohInterior_2F_Trainer_B_Text_1
# 99 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_B_Text_2
# 100 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_C::
# 104 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_C, MirrohInterior_2F_Trainer_C_Text_0, MirrohInterior_2F_Trainer_C_Text_1
# 105 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_C_Text_2
# 106 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_D::
# 110 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_D, MirrohInterior_2F_Trainer_D_Text_0, MirrohInterior_2F_Trainer_D_Text_1
# 111 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_D_Text_2
# 112 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_E::
# 120 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_E, MirrohInterior_2F_Trainer_E_Text_0, MirrohInterior_2F_Trainer_E_Text_1
# 121 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_E_Text_2
# 122 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_F::
# 126 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_F, MirrohInterior_2F_Trainer_F_Text_0, MirrohInterior_2F_Trainer_F_Text_1
# 127 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_F_Text_2
# 128 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_G::
# 133 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_G, MirrohInterior_2F_Trainer_G_Text_0, MirrohInterior_2F_Trainer_G_Text_1
# 134 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_G_Text_2
# 135 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_NPC_A::
# 155 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_A_Text_0, MSGBOX_NPC
	end


MirrohInterior_2F_NPC_B::
# 160 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_B_Text_0, MSGBOX_NPC
	end


MirrohInterior_2F_NPC_C::
# 165 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_C_Text_0, MSGBOX_NPC
	end


MirrohInterior_2F_NPC_D::
# 170 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_2F_CavePainting_WalkingWake_Text_0:
# 23 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "It's an ancient cave painting...a never\n"
	.string "before seen Pokemon! It looks somewhat\l"
	.string "reptilian, but also has feathers.\l"
	.string "Terrifying!$"

MirrohInterior_2F_SkiierA_Text_0:
# 36 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "How dare you! Skiing is the best\n"
	.string "endurance sport!$"

MirrohInterior_2F_TriathleteA_Text_0:
# 41 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Are you crazy? Running is the best\n"
	.string "endurance sport!$"

MirrohInterior_2F_Voltorb_Text_0:
# 47 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Voltorb is fighting to prove that\n"
	.string "running is better!$"

MirrohInterior_2F_Sandshrew_Text_0:
# 53 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Sandshrew refuses to believe anything\n"
	.string "but skiing is the best!$"

MirrohInterior_2F_SkiierB_Text_0:
# 60 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Why don't you runners get it? Skiing is\n"
	.string "just superior!$"

MirrohInterior_2F_TriathleteB_Text_0:
# 65 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "The snow has addled your brains! Clear\n"
	.string "it out with a good run!$"

MirrohInterior_2F_Lycanroc_Text_0:
# 71 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Lycanroc is fighting...but\n"
	.string "half-heartedly. Perhaps it wants to try\l"
	.string "skiing once?$"

MirrohInterior_2F_Snover_Text_0:
# 77 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Snover won't back down...but isn't\n"
	.string "showing much energy. Maybe it's looking\l"
	.string "to try new things?$"

MirrohInterior_2F_Trainer_A_Text_0:
# 92 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Deep in the depths of Mt. Mirroh, I\n"
	.string "sense psychic energy!$"

MirrohInterior_2F_Trainer_A_Text_1:
# 92 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Nope, there's no psychic energy!$"

MirrohInterior_2F_Trainer_A_Text_2:
# 93 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I suppose there's psychic energy\n"
	.string "everywhere. It's like happiness - a\l"
	.string "state of mind.$"

MirrohInterior_2F_Trainer_B_Text_0:
# 98 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Why are you here? Are you trying to\n"
	.string "steal my Pokémon like those Team\l"
	.string "Somber grunts?$"

MirrohInterior_2F_Trainer_B_Text_1:
# 98 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I guess you're not!$"

MirrohInterior_2F_Trainer_B_Text_2:
# 99 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "When I was on the upper floor, some\n"
	.string "Team Somber grunts tried to take my\l"
	.string "Pokemon. But I beat one of them and ran\l"
	.string "away from the other!$"

MirrohInterior_2F_Trainer_C_Text_0:
# 104 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "No it's not! Running needs more\n"
	.string "endurance than skiing! Hey, trainer!\l"
	.string "You be the one to decide which one is\l"
	.string "better!$"

MirrohInterior_2F_Trainer_C_Text_1:
# 104 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Even my endurance didn't help!$"

MirrohInterior_2F_Trainer_C_Text_2:
# 105 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I don't know why we argue when the\n"
	.string "bottom line is that all sports are fun.$"

MirrohInterior_2F_Trainer_D_Text_0:
# 110 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Why don't these runners understand?\n"
	.string "Skiing takes more technique than\l"
	.string "running!$"

MirrohInterior_2F_Trainer_D_Text_1:
# 110 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Even my technique didn't help!$"

MirrohInterior_2F_Trainer_D_Text_2:
# 111 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "To be frank with you, if I didn't have\n"
	.string "access to a ski slope, I'd be running\l"
	.string "myself.$"

MirrohInterior_2F_Trainer_E_Text_0:
# 120 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Hey, didn't I battle you before in Route\n"
	.string "3? You're the one that beat me and my\l"
	.string "sister!$"

MirrohInterior_2F_Trainer_E_Text_1:
# 120 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "You beat me then too!$"

MirrohInterior_2F_Trainer_E_Text_2:
# 121 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm going to collect all 8 gym badges!\n"
	.string "But I only have 4 so far.$"

MirrohInterior_2F_Trainer_F_Text_0:
# 126 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Check out my new friends!$"

MirrohInterior_2F_Trainer_F_Text_1:
# 126 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Don't hurt them!$"

MirrohInterior_2F_Trainer_F_Text_2:
# 127 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm a huge Pokefan! They're my best\n"
	.string "friends! But I have human friends too.$"

MirrohInterior_2F_Trainer_G_Text_0:
# 133 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I can't wait to get out of this cave and\n"
	.string "collect my 5th gym badge at Winterlily\l"
	.string "Hollow. Yep, that's right! I'm not your\l"
	.string "average trainer - I'm on my way to\l"
	.string "become the Pokémon Champion!$"

MirrohInterior_2F_Trainer_G_Text_1:
# 133 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I've still got a long way to go!$"

MirrohInterior_2F_Trainer_G_Text_2:
# 134 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Four more badges to go...whew, this gym\n"
	.string "challenge is exhausting!$"

MirrohInterior_2F_NPC_A_Text_0:
# 155 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "On the way to Winterlily Hollow? I live\n"
	.string "there. It's a little further ahead, to\l"
	.string "the right and up, past the icy floor.$"

MirrohInterior_2F_NPC_B_Text_0:
# 160 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "My husband is an avid history buff. He's\n"
	.string "down there examining some old cave\l"
	.string "paintings.$"

MirrohInterior_2F_NPC_C_Text_0:
# 165 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "What a fearsome Pokémon! One must be\n"
	.string "grateful it's not alive in this day and\l"
	.string "age.$"

MirrohInterior_2F_NPC_D_Text_0:
# 170 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "This cave is so exhausting! I can't wait\n"
	.string "to be on the other side.$"
