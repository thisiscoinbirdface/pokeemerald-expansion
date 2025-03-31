MirrohInterior_2F_MapScripts::
	.byte 0


MirrohInterior_2F_CavePainting_WalkingWake::
# 8 "data//maps/MirrohInterior_2F/scripts.pory"
	lockall
# 9 "data//maps/MirrohInterior_2F/scripts.pory"
	showmonpic SPECIES_WALKING_WAKE, 10, 3
# 10 "data//maps/MirrohInterior_2F/scripts.pory"
	waitbuttonpress
# 11 "data//maps/MirrohInterior_2F/scripts.pory"
	hidemonpic
# 13 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_Trainer_A::
# 30 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_A, MirrohInterior_2F_Trainer_A_Text_0, MirrohInterior_2F_Trainer_A_Text_1
# 31 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_A_Text_2
# 32 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_B::
# 36 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_B, MirrohInterior_2F_Trainer_B_Text_0, MirrohInterior_2F_Trainer_B_Text_1
# 37 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_B_Text_2
# 38 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_C::
# 42 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_C, MirrohInterior_2F_Trainer_C_Text_0, MirrohInterior_2F_Trainer_C_Text_1
# 43 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_C_Text_2
# 44 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_D::
# 48 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_D, MirrohInterior_2F_Trainer_D_Text_0, MirrohInterior_2F_Trainer_D_Text_1
# 49 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_D_Text_2
# 50 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_E::
# 54 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_E, MirrohInterior_2F_Trainer_E_Text_0, MirrohInterior_2F_Trainer_E_Text_1
# 55 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_E_Text_2
# 56 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_F::
# 60 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_F, MirrohInterior_2F_Trainer_F_Text_0, MirrohInterior_2F_Trainer_F_Text_1
# 61 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_F_Text_2
# 62 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_G::
# 66 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_G, MirrohInterior_2F_Trainer_G_Text_0, MirrohInterior_2F_Trainer_G_Text_1
# 67 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_G_Text_2
# 68 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_NPC_A::
# 88 "data//maps/MirrohInterior_2F/scripts.pory"
	lockall
# 89 "data//maps/MirrohInterior_2F/scripts.pory"
	faceplayer
# 90 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_A_Text_0
# 91 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_NPC_B::
# 96 "data//maps/MirrohInterior_2F/scripts.pory"
	lockall
# 97 "data//maps/MirrohInterior_2F/scripts.pory"
	faceplayer
# 98 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_A_Text_0
# 99 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_NPC_C::
# 103 "data//maps/MirrohInterior_2F/scripts.pory"
	lockall
# 104 "data//maps/MirrohInterior_2F/scripts.pory"
	faceplayer
# 105 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_A_Text_0
# 106 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_Trainer_A_Text_0:
# 30 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Deep in the depths of Mt. Mirroh, I\n"
	.string "sense psychic energy!$"

MirrohInterior_2F_Trainer_A_Text_1:
# 30 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Nope, there's no psychic energy!$"

MirrohInterior_2F_Trainer_A_Text_2:
# 31 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I suppose there's psychic energy\n"
	.string "everywhere. It's like happiness - a\l"
	.string "state of mind.$"

MirrohInterior_2F_Trainer_B_Text_0:
# 36 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I came here searching for ancient\n"
	.string "ruins! Don't interrupt me!$"

MirrohInterior_2F_Trainer_B_Text_1:
# 36 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Ok you can interrupt me!$"

MirrohInterior_2F_Trainer_B_Text_2:
# 37 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Maybe there are ancient ruins at the\n"
	.string "peak of MT MIRROH...$"

MirrohInterior_2F_Trainer_C_Text_0:
# 42 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Hey, didn't I battle you before in Route\n"
	.string "3?$"

MirrohInterior_2F_Trainer_C_Text_1:
# 42 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "You beat me then too!$"

MirrohInterior_2F_Trainer_C_Text_2:
# 43 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm going to collect all 8 gym badges!\n"
	.string "But I only have 4 so far.$"

MirrohInterior_2F_Trainer_D_Text_0:
# 48 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Check out my new friends!$"

MirrohInterior_2F_Trainer_D_Text_1:
# 48 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Don't hurt them!$"

MirrohInterior_2F_Trainer_D_Text_2:
# 49 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm a huge Pokefan! They're my best\n"
	.string "friends! But I have human friends too.$"

MirrohInterior_2F_Trainer_E_Text_0:
# 54 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Why are you here? Are you trying to\n"
	.string "steal my {PKMN} like those Team Somber\l"
	.string "grunts?$"

MirrohInterior_2F_Trainer_E_Text_1:
# 54 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I guess you're not!$"

MirrohInterior_2F_Trainer_E_Text_2:
# 55 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "When I was on the upper floor, some\n"
	.string "Team Somber grunts tried to take my\l"
	.string "{PKMN}. But I beat one of them and ran away\l"
	.string "from the other!$"

MirrohInterior_2F_Trainer_F_Text_0:
# 60 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "This is the best place for endurance\n"
	.string "training. Let's train!$"

MirrohInterior_2F_Trainer_F_Text_1:
# 60 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "You have endurance!$"

MirrohInterior_2F_Trainer_F_Text_2:
# 61 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm training for a relay race back home.\n"
	.string "Gotta stay in shape!$"

MirrohInterior_2F_Trainer_G_Text_0:
# 66 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I can't wait to get out of this cave.\n"
	.string "But I don't mind one last battle before\l"
	.string "leaving!$"

MirrohInterior_2F_Trainer_G_Text_1:
# 66 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Now I really want to leave!$"

MirrohInterior_2F_Trainer_G_Text_2:
# 67 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "This cave is so confusing!$"

MirrohInterior_2F_NPC_A_Text_0:
# 90 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "$"
