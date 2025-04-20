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


MirrohInterior_2F_Trainer_A::
# 42 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_A, MirrohInterior_2F_Trainer_A_Text_0, MirrohInterior_2F_Trainer_A_Text_1
# 43 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_A_Text_2
# 44 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_B::
# 48 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_B, MirrohInterior_2F_Trainer_B_Text_0, MirrohInterior_2F_Trainer_B_Text_1
# 49 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_B_Text_2
# 50 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_C::
# 54 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_C, MirrohInterior_2F_Trainer_C_Text_0, MirrohInterior_2F_Trainer_C_Text_1
# 55 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_C_Text_2
# 56 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_D::
# 60 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_D, MirrohInterior_2F_Trainer_D_Text_0, MirrohInterior_2F_Trainer_D_Text_1
# 61 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_D_Text_2
# 62 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_E::
# 66 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_E, MirrohInterior_2F_Trainer_E_Text_0, MirrohInterior_2F_Trainer_E_Text_1
# 67 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_E_Text_2
# 68 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_F::
# 72 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_F, MirrohInterior_2F_Trainer_F_Text_0, MirrohInterior_2F_Trainer_F_Text_1
# 73 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_F_Text_2
# 74 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_G::
# 78 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_G, MirrohInterior_2F_Trainer_G_Text_0, MirrohInterior_2F_Trainer_G_Text_1
# 79 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_G_Text_2
# 80 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_NPC_A::
# 100 "data//maps/MirrohInterior_2F/scripts.pory"
	lockall
# 101 "data//maps/MirrohInterior_2F/scripts.pory"
	faceplayer
# 102 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_A_Text_0
# 103 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_NPC_B::
# 108 "data//maps/MirrohInterior_2F/scripts.pory"
	lockall
# 109 "data//maps/MirrohInterior_2F/scripts.pory"
	faceplayer
# 110 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_A_Text_0
# 111 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_NPC_C::
# 115 "data//maps/MirrohInterior_2F/scripts.pory"
	lockall
# 116 "data//maps/MirrohInterior_2F/scripts.pory"
	faceplayer
# 117 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_A_Text_0
# 118 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_CavePainting_WalkingWake_Text_0:
# 23 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "It's an ancient cave painting...a never\n"
	.string "before seen Pokemon! It looks somewhat\l"
	.string "reptilian, but also has feathers.\l"
	.string "Terrifying!$"

MirrohInterior_2F_Trainer_A_Text_0:
# 42 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Deep in the depths of Mt. Mirroh, I\n"
	.string "sense psychic energy!$"

MirrohInterior_2F_Trainer_A_Text_1:
# 42 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Nope, there's no psychic energy!$"

MirrohInterior_2F_Trainer_A_Text_2:
# 43 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I suppose there's psychic energy\n"
	.string "everywhere. It's like happiness - a\l"
	.string "state of mind.$"

MirrohInterior_2F_Trainer_B_Text_0:
# 48 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I came here searching for ancient\n"
	.string "ruins! Don't interrupt me!$"

MirrohInterior_2F_Trainer_B_Text_1:
# 48 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Ok you can interrupt me!$"

MirrohInterior_2F_Trainer_B_Text_2:
# 49 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Maybe there are ancient ruins at the\n"
	.string "peak of Mt. Mirroh...$"

MirrohInterior_2F_Trainer_C_Text_0:
# 54 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Hey, didn't I battle you before in Route\n"
	.string "3?$"

MirrohInterior_2F_Trainer_C_Text_1:
# 54 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "You beat me then too!$"

MirrohInterior_2F_Trainer_C_Text_2:
# 55 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm going to collect all 8 gym badges!\n"
	.string "But I only have 4 so far.$"

MirrohInterior_2F_Trainer_D_Text_0:
# 60 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Check out my new friends!$"

MirrohInterior_2F_Trainer_D_Text_1:
# 60 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Don't hurt them!$"

MirrohInterior_2F_Trainer_D_Text_2:
# 61 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm a huge Pokefan! They're my best\n"
	.string "friends! But I have human friends too.$"

MirrohInterior_2F_Trainer_E_Text_0:
# 66 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Why are you here? Are you trying to\n"
	.string "steal my Pokémon like those Team\l"
	.string "Somber grunts?$"

MirrohInterior_2F_Trainer_E_Text_1:
# 66 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I guess you're not!$"

MirrohInterior_2F_Trainer_E_Text_2:
# 67 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "When I was on the upper floor, some\n"
	.string "Team Somber grunts tried to take my\l"
	.string "Pokemon. But I beat one of them and ran\l"
	.string "away from the other!$"

MirrohInterior_2F_Trainer_F_Text_0:
# 72 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "This is the best place for endurance\n"
	.string "training. Let's train!$"

MirrohInterior_2F_Trainer_F_Text_1:
# 72 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "You have endurance!$"

MirrohInterior_2F_Trainer_F_Text_2:
# 73 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm training for a relay race back home.\n"
	.string "Gotta stay in shape!$"

MirrohInterior_2F_Trainer_G_Text_0:
# 78 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I can't wait to get out of this cave.\n"
	.string "But I don't mind one last battle before\l"
	.string "leaving!$"

MirrohInterior_2F_Trainer_G_Text_1:
# 78 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Now I really want to leave!$"

MirrohInterior_2F_Trainer_G_Text_2:
# 79 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "This cave is so confusing!$"

MirrohInterior_2F_NPC_A_Text_0:
# 102 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "$"
