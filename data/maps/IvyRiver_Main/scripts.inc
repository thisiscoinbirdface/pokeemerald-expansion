# 1 "data//maps/IvyRiver_Main/scripts.pory"

# 2 "data//maps/IvyRiver_Main/scripts.pory"

# 3 "data//maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_BRO, 5
# 4 "data//maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_ZA, 6
# 5 "data//maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_F1, 7
# 6 "data//maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_F2, 8
# 7 "data//maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_F3, 9
# 8 "data//maps/IvyRiver_Main/scripts.pory"
    .set LOCALID_SHIP, 11

IvyRiver_Main_MapScripts::
	.byte 0


IvyRiver_Trainer_A::
# 22 "data//maps/IvyRiver_Main/scripts.pory"
	trainerbattle_single TRAINER_IVY_RIVER_A, IvyRiver_Trainer_A_Text_0, IvyRiver_Trainer_A_Text_1
# 28 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Trainer_A_Text_2
# 29 "data//maps/IvyRiver_Main/scripts.pory"
	release
	end


IvyRiver_Trainer_B::
# 35 "data//maps/IvyRiver_Main/scripts.pory"
	trainerbattle_single TRAINER_IVY_RIVER_B, IvyRiver_Trainer_B_Text_0, IvyRiver_Trainer_B_Text_1
# 41 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Trainer_B_Text_2
# 42 "data//maps/IvyRiver_Main/scripts.pory"
	release
	end


IvyRiver_Trainer_C::
# 48 "data//maps/IvyRiver_Main/scripts.pory"
	trainerbattle_single TRAINER_IVY_RIVER_C, IvyRiver_Trainer_C_Text_0, IvyRiver_Trainer_C_Text_1
# 54 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Trainer_C_Text_2
# 55 "data//maps/IvyRiver_Main/scripts.pory"
	release
	end


IvyRiver_Trainer_D::
# 60 "data//maps/IvyRiver_Main/scripts.pory"
	trainerbattle_single TRAINER_IVY_RIVER_D, IvyRiver_Trainer_D_Text_0, IvyRiver_Trainer_D_Text_1
# 66 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Trainer_D_Text_2
# 67 "data//maps/IvyRiver_Main/scripts.pory"
	release
	end


IvyRiver_Trainer_D_Pinsir::
# 71 "data//maps/IvyRiver_Main/scripts.pory"
	playmoncry SPECIES_PINSIR, CRY_MODE_NORMAL
# 72 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_Trainer_D_Pinsir_Text_0, MSGBOX_NPC
	end


IvyRiver_NPC1::
# 78 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_NPC1_Text_0, MSGBOX_NPC
	end


IvyRiver_NPC2::
# 82 "data//maps/IvyRiver_Main/scripts.pory"
	msgbox IvyRiver_NPC2_Text_0, MSGBOX_NPC
	end


IvyRiver_Trainer_A_Text_0:
# 24 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Are you collecting rare Pokémon too?$"

IvyRiver_Trainer_A_Text_1:
# 25 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Wow, your Pokémon are rare!$"

IvyRiver_Trainer_A_Text_2:
# 28 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Because {COLOR BLUE}Ivy River{COLOR DARK_GRAY} is untouched by\n"
	.string "people, rare Pokémon can thrive.$"

IvyRiver_Trainer_B_Text_0:
# 37 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Swimming in this river is only for the\n"
	.string "toughest swimmers like me.\p"
	.string "I don't even need the HM Flip Turn!$"

IvyRiver_Trainer_B_Text_1:
# 38 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I bet I could beat you if you weren't\n"
	.string "surfing on your Pokémon!$"

IvyRiver_Trainer_B_Text_2:
# 41 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Swimming is the best full-body\n"
	.string "exercise!$"

IvyRiver_Trainer_C_Text_0:
# 50 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Deep in the river lurks an unknown\n"
	.string "malaise...keep your eyes wide open or\l"
	.string "it'll eat your mind!$"

IvyRiver_Trainer_C_Text_1:
# 51 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Your mind can't be eaten!$"

IvyRiver_Trainer_C_Text_2:
# 54 "data//maps/IvyRiver_Main/scripts.pory"
	.string "To be honest with you, there's no\n"
	.string "malaise. There are strong currents, and\l"
	.string "that's about it.$"

IvyRiver_Trainer_D_Text_0:
# 62 "data//maps/IvyRiver_Main/scripts.pory"
	.string "You're the trainer who beat me back in\n"
	.string "{COLOR RED}Vilethorn Woods{COLOR DARK_GRAY}!\p"
	.string "I wanted to become the first BUG type\n"
	.string "Gym Leader but guess what - I've\l"
	.string "changed my dream. Now I'm going to be\l"
	.string "the first BUG type Pokémon Champion!$"

IvyRiver_Trainer_D_Text_1:
# 63 "data//maps/IvyRiver_Main/scripts.pory"
	.string "How could I lose to you twice?$"

IvyRiver_Trainer_D_Text_2:
# 66 "data//maps/IvyRiver_Main/scripts.pory"
	.string "I lost to you today, but I'll beat you at\n"
	.string "the Pokémon Championship!$"

IvyRiver_Trainer_D_Pinsir_Text_0:
# 72 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Pinsir looks grumpy it lost.$"

IvyRiver_NPC1_Text_0:
# 78 "data//maps/IvyRiver_Main/scripts.pory"
	.string "You can't navigate the strong currents\n"
	.string "here without HM Flip Turn.\p"
	.string "Oh, you don't have it?\p"
	.string "Too bad.$"

IvyRiver_NPC2_Text_0:
# 82 "data//maps/IvyRiver_Main/scripts.pory"
	.string "Most people you'll meet here are either\n"
	.string "collecting rare Pokémon...or lost!\p"
	.string "Like me...$"
