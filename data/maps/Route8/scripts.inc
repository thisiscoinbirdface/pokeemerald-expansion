Route8_MapScripts::
	.byte 0


Route8_Trainer_A::
# 7 "data//maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_ROUTE8_A, Route8_Trainer_A_Text_0, Route8_Trainer_A_Text_1
# 8 "data//maps/Route8/scripts.pory"
	msgbox Route8_Trainer_A_Text_2
# 9 "data//maps/Route8/scripts.pory"
	releaseall
	end


Route8_Trainer_B::
# 14 "data//maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_ROUTE8_B, Route8_Trainer_B_Text_0, Route8_Trainer_B_Text_1
# 15 "data//maps/Route8/scripts.pory"
	msgbox Route8_Trainer_B_Text_2
# 16 "data//maps/Route8/scripts.pory"
	releaseall
	end


Route8_Trainer_C::
# 21 "data//maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_ROUTE8_C, Route8_Trainer_C_Text_0, Route8_Trainer_C_Text_1
# 22 "data//maps/Route8/scripts.pory"
	msgbox Route8_Trainer_C_Text_2
# 23 "data//maps/Route8/scripts.pory"
	releaseall
	end


Route8_Trainer_D::
# 28 "data//maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_ROUTE8_D, Route8_Trainer_D_Text_0, Route8_Trainer_D_Text_1
# 29 "data//maps/Route8/scripts.pory"
	msgbox Route8_Trainer_D_Text_2
# 30 "data//maps/Route8/scripts.pory"
	releaseall
	end


Route8_Trainer_E::
# 35 "data//maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_ROUTE8_E, Route8_Trainer_E_Text_0, Route8_Trainer_E_Text_0
# 36 "data//maps/Route8/scripts.pory"
	msgbox Route8_Trainer_E_Text_0
# 37 "data//maps/Route8/scripts.pory"
	releaseall
	end


Route8_NPC1::
# 46 "data//maps/Route8/scripts.pory"
	msgbox Route8_NPC1_Text_0, MSGBOX_NPC
	end


Route8_NPC2::
# 50 "data//maps/Route8/scripts.pory"
	msgbox Route8_NPC2_Text_0, MSGBOX_NPC
	end


Route8_NPC3::
# 54 "data//maps/Route8/scripts.pory"
	msgbox Route8_NPC3_Text_0, MSGBOX_NPC
	end


Route8_Trainer_A_Text_0:
# 7 "data//maps/Route8/scripts.pory"
	.string "Swimming here is much better than\n"
	.string "swimming in Ivy River!$"

Route8_Trainer_A_Text_1:
# 7 "data//maps/Route8/scripts.pory"
	.string "You're as bad as Ivy River!$"

Route8_Trainer_A_Text_2:
# 8 "data//maps/Route8/scripts.pory"
	.string "I can't handle the currents of Ivy\n"
	.string "River. I prefer a relaxed swim.$"

Route8_Trainer_B_Text_0:
# 14 "data//maps/Route8/scripts.pory"
	.string "Open waters and pleasant sunlight!\n"
	.string "Who could ask for more?$"

Route8_Trainer_B_Text_1:
# 14 "data//maps/Route8/scripts.pory"
	.string "I didn't ask for this!$"

Route8_Trainer_B_Text_2:
# 15 "data//maps/Route8/scripts.pory"
	.string "We aren't allowed to go out to sea from\n"
	.string "Rivetshore City. This is the best we can\l"
	.string "do.$"

Route8_Trainer_C_Text_0:
# 21 "data//maps/Route8/scripts.pory"
	.string "Get out of the way! If I break my gaze,\n"
	.string "I won't get that TM!$"

Route8_Trainer_C_Text_1:
# 21 "data//maps/Route8/scripts.pory"
	.string "I won't get the TM!$"

Route8_Trainer_C_Text_2:
# 22 "data//maps/Route8/scripts.pory"
	.string "Instead of getting into a staring\n"
	.string "contest, I should have been more\l"
	.string "reasonable.$"

Route8_Trainer_D_Text_0:
# 28 "data//maps/Route8/scripts.pory"
	.string "We're in a staring contest for the TM -\n"
	.string "you're disturbing us!$"

Route8_Trainer_D_Text_1:
# 28 "data//maps/Route8/scripts.pory"
	.string "Fine! The TM is yours then!$"

Route8_Trainer_D_Text_2:
# 29 "data//maps/Route8/scripts.pory"
	.string "I should have stared harder!$"

Route8_Trainer_E_Text_0:
# 35 "data//maps/Route8/scripts.pory"
	.string "$"

Route8_NPC1_Text_0:
# 46 "data//maps/Route8/scripts.pory"
	.string "Leader Raazi in Rivetshore uses the\n"
	.string "strongest items for his Pokémon!\p"
	.string "I'm here to find some for mine too.$"

Route8_NPC2_Text_0:
# 50 "data//maps/Route8/scripts.pory"
	.string "I need deliver a contract to Rivetshore\n"
	.string "Construction.\p"
	.string "Why won't this stupid rock get out of my\n"
	.string "way?$"

Route8_NPC3_Text_0:
# 54 "data//maps/Route8/scripts.pory"
	.string "Rivetshore City is just past this cave.\n"
	.string "They built a barrier to prevent flooding\l"
	.string "so you have to take the underpass.$"
