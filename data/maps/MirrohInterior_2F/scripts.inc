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
# 32 "data//maps/MirrohInterior_2F/scripts.pory"
	release
# 33 "data//maps/MirrohInterior_2F/scripts.pory"
	delay 8
# 34 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_CavePainting_WalkingWake_Text_1
# 35 "data//maps/MirrohInterior_2F/scripts.pory"
	playse SE_CLICK
# 36 "data//maps/MirrohInterior_2F/scripts.pory"
	delay 8
# 37 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_CavePainting_WalkingWake_Text_2
# 38 "data//maps/MirrohInterior_2F/scripts.pory"
	release
# 39 "data//maps/MirrohInterior_2F/scripts.pory"
	delay 8
# 40 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_CavePainting_WalkingWake_Text_3
# 42 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_SkiierA::
# 53 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_SkiierA_Text_0
# 54 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_TriathleteA::
# 58 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_TriathleteA_Text_0
# 59 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Voltorb::
# 63 "data//maps/MirrohInterior_2F/scripts.pory"
	playmoncry SPECIES_VOLTORB, CRY_MODE_NORMAL
# 64 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Voltorb_Text_0
# 65 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Sandshrew::
# 69 "data//maps/MirrohInterior_2F/scripts.pory"
	playmoncry SPECIES_SANDSHREW, CRY_MODE_NORMAL
# 70 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Sandshrew_Text_0
# 71 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_SkiierB::
# 77 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_SkiierB_Text_0
# 78 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_TriathleteB::
# 82 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_TriathleteB_Text_0
# 83 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Lycanroc::
# 87 "data//maps/MirrohInterior_2F/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 88 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Lycanroc_Text_0
# 89 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Snover::
# 93 "data//maps/MirrohInterior_2F/scripts.pory"
	playmoncry SPECIES_SNOVER, CRY_MODE_NORMAL
# 94 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Snover_Text_0
# 95 "data//maps/MirrohInterior_2F/scripts.pory"
	release
	end


MirrohInterior_2F_Trainer_A::
# 109 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_A, MirrohInterior_2F_Trainer_A_Text_0, MirrohInterior_2F_Trainer_A_Text_1
# 110 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_A_Text_2
# 111 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_B::
# 115 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_B, MirrohInterior_2F_Trainer_B_Text_0, MirrohInterior_2F_Trainer_B_Text_1
# 116 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_B_Text_2
# 117 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_C::
# 121 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_C, MirrohInterior_2F_Trainer_C_Text_0, MirrohInterior_2F_Trainer_C_Text_1
# 122 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_C_Text_2
# 123 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_D::
# 127 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_D, MirrohInterior_2F_Trainer_D_Text_0, MirrohInterior_2F_Trainer_D_Text_1
# 128 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_D_Text_2
# 129 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_E::
# 137 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_E, MirrohInterior_2F_Trainer_E_Text_0, MirrohInterior_2F_Trainer_E_Text_1
# 138 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_E_Text_2
# 139 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_F::
# 143 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_F, MirrohInterior_2F_Trainer_F_Text_0, MirrohInterior_2F_Trainer_F_Text_1
# 144 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_F_Text_2
# 145 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_G::
# 150 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_G, MirrohInterior_2F_Trainer_G_Text_0, MirrohInterior_2F_Trainer_G_Text_1
# 151 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_G_Text_2
# 152 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_NPC_A::
# 172 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_A_Text_0, MSGBOX_NPC
	end


MirrohInterior_2F_NPC_B::
# 177 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_B_Text_0, MSGBOX_NPC
	end


MirrohInterior_2F_NPC_C::
# 182 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_C_Text_0, MSGBOX_NPC
	end


MirrohInterior_2F_NPC_D::
# 187 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_D_Text_0, MSGBOX_NPC
	end


MirrohInterior_2F_CavePainting_WalkingWake_Text_0:
# 31 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "It's an ancient cave painting...$"

MirrohInterior_2F_CavePainting_WalkingWake_Text_1:
# 34 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Scanning the ancient statue\n"
	.string "with the Archaeolens...$"

MirrohInterior_2F_CavePainting_WalkingWake_Text_2:
# 37 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Done!$"

MirrohInterior_2F_CavePainting_WalkingWake_Text_3:
# 40 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "It's a never before seen Pokémon! It\n"
	.string "looks reptilian, but also has feathers.\p"
	.string "Terrifying!$"

MirrohInterior_2F_SkiierA_Text_0:
# 53 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "How dare you! Skiing is the best\n"
	.string "endurance sport!$"

MirrohInterior_2F_TriathleteA_Text_0:
# 58 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Are you crazy? Running is the best\n"
	.string "endurance sport!$"

MirrohInterior_2F_Voltorb_Text_0:
# 64 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Voltorb is fighting to prove that\n"
	.string "running is better!$"

MirrohInterior_2F_Sandshrew_Text_0:
# 70 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Sandshrew refuses to believe anything\n"
	.string "but skiing is the best!$"

MirrohInterior_2F_SkiierB_Text_0:
# 77 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Why don't you runners get it?\n"
	.string "Skiing is just superior!$"

MirrohInterior_2F_TriathleteB_Text_0:
# 82 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "The snow has addled your brains!\n"
	.string "Clear it out with a good run!$"

MirrohInterior_2F_Lycanroc_Text_0:
# 88 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Lycanroc is fighting...but only\n"
	.string "half-heartedly.\p"
	.string "Perhaps it wants to try skiing once?$"

MirrohInterior_2F_Snover_Text_0:
# 94 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Snover won't back down...but isn't\n"
	.string "showing much energy.\p"
	.string "Maybe it's looking to try new things?$"

MirrohInterior_2F_Trainer_A_Text_0:
# 109 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Deep in the depths of Mt. Mirroh, I\n"
	.string "sense psychic energy!$"

MirrohInterior_2F_Trainer_A_Text_1:
# 109 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Nope, there's no psychic energy!$"

MirrohInterior_2F_Trainer_A_Text_2:
# 110 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I suppose there's psychic energy\n"
	.string "everywhere. It's like happiness - a\l"
	.string "state of mind.$"

MirrohInterior_2F_Trainer_B_Text_0:
# 115 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Why are you here? Are you trying to\n"
	.string "steal my Pokémon like those Team\l"
	.string "Somber grunts?$"

MirrohInterior_2F_Trainer_B_Text_1:
# 115 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I guess you're not!$"

MirrohInterior_2F_Trainer_B_Text_2:
# 116 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "When I was on the upper floor, some\n"
	.string "Team Somber grunts tried to take my\l"
	.string "Pokémon. But I beat one of them and ran\l"
	.string "away from the other!$"

MirrohInterior_2F_Trainer_C_Text_0:
# 121 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "So what if it does? Running needs more\n"
	.string "endurance than skiing!\p"
	.string "Hey, trainer!\n"
	.string "You decide which one is better!$"

MirrohInterior_2F_Trainer_C_Text_1:
# 121 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Even my endurance didn't help!$"

MirrohInterior_2F_Trainer_C_Text_2:
# 122 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I don't know why we argue when the\n"
	.string "bottom line is that all sports are fun.$"

MirrohInterior_2F_Trainer_D_Text_0:
# 127 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Why don't runners get it? Skiing takes\n"
	.string "more technique than running!$"

MirrohInterior_2F_Trainer_D_Text_1:
# 127 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Even my technique didn't help!$"

MirrohInterior_2F_Trainer_D_Text_2:
# 128 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "To be frank, if I didn't have access to a\n"
	.string "ski slope, I'd be running myself.$"

MirrohInterior_2F_Trainer_E_Text_0:
# 137 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Didn't I battle you before in Route 3?\n"
	.string "You beat me and my sister!$"

MirrohInterior_2F_Trainer_E_Text_1:
# 137 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "You win again!$"

MirrohInterior_2F_Trainer_E_Text_2:
# 138 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm going to collect all 8 gym badges!\n"
	.string "But I only have 5 so far.$"

MirrohInterior_2F_Trainer_F_Text_0:
# 143 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Check out my new friends!$"

MirrohInterior_2F_Trainer_F_Text_1:
# 143 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Don't hurt them!$"

MirrohInterior_2F_Trainer_F_Text_2:
# 144 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm a huge Pokefan! They're my best\n"
	.string "friends! But I have human friends too.$"

MirrohInterior_2F_Trainer_G_Text_0:
# 150 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I can't wait to get out of this cave and\n"
	.string "collect my 6th gym badge at Winterlily\l"
	.string "Hollow. Yep, that's right! I'm not your\l"
	.string "average trainer - I'm on my way to\l"
	.string "become the Pokémon Champion!$"

MirrohInterior_2F_Trainer_G_Text_1:
# 150 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I've still got a long way to go!$"

MirrohInterior_2F_Trainer_G_Text_2:
# 151 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Four more badges to go...whew, this gym\n"
	.string "challenge is exhausting!$"

MirrohInterior_2F_NPC_A_Text_0:
# 172 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "On the way to Winterlily Hollow? I live\n"
	.string "there. It's a little further ahead, to\l"
	.string "the right and up, past the icy floor.$"

MirrohInterior_2F_NPC_B_Text_0:
# 177 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "My husband is an avid history buff.\n"
	.string "He's down there right now, examining\l"
	.string "some old cave paintings.$"

MirrohInterior_2F_NPC_C_Text_0:
# 182 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "What a fearsome Pokémon! One must be\n"
	.string "grateful it's not alive today.$"

MirrohInterior_2F_NPC_D_Text_0:
# 187 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "This cave is so exhausting! I can't wait\n"
	.string "to be on the other side.$"
