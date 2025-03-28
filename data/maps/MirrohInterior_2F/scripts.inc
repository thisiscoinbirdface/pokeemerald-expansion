MirrohInterior_2F_MapScripts::
	.byte 0


MirrohInterior_2F_Trainer_A::
# 22 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_A, MirrohInterior_2F_Trainer_A_Text_0, MirrohInterior_2F_Trainer_A_Text_1
# 23 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_A_Text_2
# 24 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_B::
# 28 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_B, MirrohInterior_2F_Trainer_B_Text_0, MirrohInterior_2F_Trainer_B_Text_1
# 29 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_B_Text_2
# 30 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_C::
# 34 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_C, MirrohInterior_2F_Trainer_C_Text_0, MirrohInterior_2F_Trainer_C_Text_1
# 35 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_C_Text_2
# 36 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_D::
# 40 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_D, MirrohInterior_2F_Trainer_D_Text_0, MirrohInterior_2F_Trainer_D_Text_1
# 41 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_D_Text_2
# 42 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_E::
# 46 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_E, MirrohInterior_2F_Trainer_E_Text_0, MirrohInterior_2F_Trainer_E_Text_1
# 47 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_E_Text_2
# 48 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_F::
# 52 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_F, MirrohInterior_2F_Trainer_F_Text_0, MirrohInterior_2F_Trainer_F_Text_1
# 53 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_F_Text_2
# 54 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_Trainer_G::
# 58 "data//maps/MirrohInterior_2F/scripts.pory"
	trainerbattle_single TRAINER_MIRROHINT2_G, MirrohInterior_2F_Trainer_G_Text_0, MirrohInterior_2F_Trainer_G_Text_1
# 59 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_Trainer_G_Text_2
# 60 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	return


MirrohInterior_2F_NPC_A::
# 80 "data//maps/MirrohInterior_2F/scripts.pory"
	lockall
# 81 "data//maps/MirrohInterior_2F/scripts.pory"
	faceplayer
# 82 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_A_Text_0
# 83 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_NPC_B::
# 88 "data//maps/MirrohInterior_2F/scripts.pory"
	lockall
# 89 "data//maps/MirrohInterior_2F/scripts.pory"
	faceplayer
# 90 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_A_Text_0
# 91 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_NPC_C::
# 95 "data//maps/MirrohInterior_2F/scripts.pory"
	lockall
# 96 "data//maps/MirrohInterior_2F/scripts.pory"
	faceplayer
# 97 "data//maps/MirrohInterior_2F/scripts.pory"
	msgbox MirrohInterior_2F_NPC_A_Text_0
# 98 "data//maps/MirrohInterior_2F/scripts.pory"
	releaseall
	end


MirrohInterior_2F_Trainer_A_Text_0:
# 22 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Deep in the depths of Mt. Mirroh, I\n"
	.string "sense psychic energy!$"

MirrohInterior_2F_Trainer_A_Text_1:
# 22 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Nope, there's no psychic energy!$"

MirrohInterior_2F_Trainer_A_Text_2:
# 23 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I suppose there's psychic energy\n"
	.string "everywhere. It's like happiness - a\l"
	.string "state of mind.$"

MirrohInterior_2F_Trainer_B_Text_0:
# 28 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I came here searching for ancient\n"
	.string "ruins! Don't interrupt me!$"

MirrohInterior_2F_Trainer_B_Text_1:
# 28 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Ok you can interrupt me!$"

MirrohInterior_2F_Trainer_B_Text_2:
# 29 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Maybe there are ancient ruins at the\n"
	.string "peak of MT MIRROH...$"

MirrohInterior_2F_Trainer_C_Text_0:
# 34 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Hey, didn't I battle you before in Route\n"
	.string "3?$"

MirrohInterior_2F_Trainer_C_Text_1:
# 34 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "You beat me then too!$"

MirrohInterior_2F_Trainer_C_Text_2:
# 35 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm going to collect all 8 gym badges!\n"
	.string "But I only have 4 so far.$"

MirrohInterior_2F_Trainer_D_Text_0:
# 40 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Check out my new friends!$"

MirrohInterior_2F_Trainer_D_Text_1:
# 40 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Don't hurt them!$"

MirrohInterior_2F_Trainer_D_Text_2:
# 41 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm a huge Pokefan! They're my best\n"
	.string "friends! But I have human friends too.$"

MirrohInterior_2F_Trainer_E_Text_0:
# 46 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Why are you here? Are you trying to\n"
	.string "steal my {PKMN} like those Team Somber\l"
	.string "grunts?$"

MirrohInterior_2F_Trainer_E_Text_1:
# 46 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I guess you're not!$"

MirrohInterior_2F_Trainer_E_Text_2:
# 47 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "When I was on the upper floor, some\n"
	.string "Team Somber grunts tried to take my\l"
	.string "{PKMN}. But I beat one of them and ran away\l"
	.string "from the other!$"

MirrohInterior_2F_Trainer_F_Text_0:
# 52 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "This is the best place for endurance\n"
	.string "training. Let's train!$"

MirrohInterior_2F_Trainer_F_Text_1:
# 52 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "You have endurance!$"

MirrohInterior_2F_Trainer_F_Text_2:
# 53 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I'm training for a relay race back home.\n"
	.string "Gotta stay in shape!$"

MirrohInterior_2F_Trainer_G_Text_0:
# 58 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "I can't wait to get out of this cave.\n"
	.string "But I don't mind one last battle before\l"
	.string "leaving!$"

MirrohInterior_2F_Trainer_G_Text_1:
# 58 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "Now I really want to leave!$"

MirrohInterior_2F_Trainer_G_Text_2:
# 59 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "This cave is so confusing!$"

MirrohInterior_2F_NPC_A_Text_0:
# 82 "data//maps/MirrohInterior_2F/scripts.pory"
	.string "$"
