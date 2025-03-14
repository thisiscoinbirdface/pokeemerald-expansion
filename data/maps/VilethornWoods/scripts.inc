VilethornWoods_MapScripts::
	.byte 0


VilethornWoods_Trainer_A::
# 11 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_A, VilethornWoods_Trainer_A_Text_0, VilethornWoods_Trainer_A_Text_1
# 12 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_A_Text_2
# 13 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_Trainer_B::
# 17 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_B, VilethornWoods_Trainer_B_Text_0, VilethornWoods_Trainer_B_Text_1
# 18 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_B_Text_2
# 19 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_Trainer_C::
# 23 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_C, VilethornWoods_Trainer_C_Text_0, VilethornWoods_Trainer_C_Text_1
# 24 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_C_Text_2
# 25 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_Trainer_D::
# 29 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_D, VilethornWoods_Trainer_D_Text_0, VilethornWoods_Trainer_D_Text_1
# 30 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_D_Text_2
# 31 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_Trainer_E::
# 35 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_E, VilethornWoods_Trainer_E_Text_0, VilethornWoods_Trainer_E_Text_1
# 36 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_E_Text_2
# 37 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_Trainer_F1::
# 41 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 42 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 43 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 44 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 45 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_Trainer_F2::
# 49 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 50 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 51 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 52 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F2_Text_0
# 53 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_Trainer_G::
# 57 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_G, VilethornWoods_Trainer_G_Text_0, VilethornWoods_Trainer_G_Text_1
# 58 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_G_Text_2
# 59 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_Trainer_H::
# 63 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_H, VilethornWoods_Trainer_H_Text_0, VilethornWoods_Trainer_H_Text_1
# 64 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_H_Text_2
# 65 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_Trainer_A_Text_0:
# 11 "data//maps/VilethornWoods/scripts.pory"
	.string "BUG type {PKMN} are my natural enemies!\n"
	.string "That's why I'm training here.$"

VilethornWoods_Trainer_A_Text_1:
# 11 "data//maps/VilethornWoods/scripts.pory"
	.string "I like BUG types more than you!$"

VilethornWoods_Trainer_A_Text_2:
# 12 "data//maps/VilethornWoods/scripts.pory"
	.string "I like training but I don't want to go to\n"
	.string "deep into this forest...$"

VilethornWoods_Trainer_B_Text_0:
# 17 "data//maps/VilethornWoods/scripts.pory"
	.string "Aha! A trainer to serve as a stepping\n"
	.string "stone for me!$"

VilethornWoods_Trainer_B_Text_1:
# 17 "data//maps/VilethornWoods/scripts.pory"
	.string "I got stepped on instead!$"

VilethornWoods_Trainer_B_Text_2:
# 18 "data//maps/VilethornWoods/scripts.pory"
	.string "I think I need more {PKMN}. Three isn't\n"
	.string "enough.$"

VilethornWoods_Trainer_C_Text_0:
# 23 "data//maps/VilethornWoods/scripts.pory"
	.string "I only use one {PKMN}, but it's enough! Bet\n"
	.string "you've never seen this one around here!$"

VilethornWoods_Trainer_C_Text_1:
# 23 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe I should catch more...$"

VilethornWoods_Trainer_C_Text_2:
# 24 "data//maps/VilethornWoods/scripts.pory"
	.string "My SCYTHER and I came from the south.$"

VilethornWoods_Trainer_D_Text_0:
# 29 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a {PKMN} Breeder. Like all breeders, we\n"
	.string "specialise in certain {PKMN} forms. I'm a\l"
	.string "horse breeding expert!$"

VilethornWoods_Trainer_D_Text_1:
# 29 "data//maps/VilethornWoods/scripts.pory"
	.string "Well fought!$"

VilethornWoods_Trainer_D_Text_2:
# 30 "data//maps/VilethornWoods/scripts.pory"
	.string "I need to raise my horses to become\n"
	.string "stronger. Maybe some VITAMINS would\l"
	.string "help...$"

VilethornWoods_Trainer_E_Text_0:
# 35 "data//maps/VilethornWoods/scripts.pory"
	.string "Eek! These woods creep me out!$"

VilethornWoods_Trainer_E_Text_1:
# 35 "data//maps/VilethornWoods/scripts.pory"
	.string "You creep me out too!$"

VilethornWoods_Trainer_E_Text_2:
# 36 "data//maps/VilethornWoods/scripts.pory"
	.string "I've been stuck here for hours. I need\n"
	.string "to get out of here...$"

VilethornWoods_Trainer_F1_Text_0:
# 43 "data//maps/VilethornWoods/scripts.pory"
	.string "We bonded over our love for battling! Do\n"
	.string "you want to battle?$"

VilethornWoods_Trainer_F1_Text_1:
# 43 "data//maps/VilethornWoods/scripts.pory"
	.string "We lost!$"

VilethornWoods_Trainer_F1_Text_2:
# 44 "data//maps/VilethornWoods/scripts.pory"
	.string "I met her at a {PKMN} Breeder festival.\n"
	.string "There was a battle competition and we\l"
	.string "were the two finalists!$"

VilethornWoods_Trainer_F2_Text_0:
# 52 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe one day you'll find your true love\n"
	.string "during a battle too!$"

VilethornWoods_Trainer_G_Text_0:
# 57 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm one of the best bug catchers\n"
	.string "around. I want to become a Gym Leader\l"
	.string "one day!$"

VilethornWoods_Trainer_G_Text_1:
# 57 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you a Gym Leader or something?$"

VilethornWoods_Trainer_G_Text_2:
# 58 "data//maps/VilethornWoods/scripts.pory"
	.string "As a Gym Leader to-be, my team needs to\n"
	.string "be able to handle a variety of threats.$"

VilethornWoods_Trainer_H_Text_0:
# 63 "data//maps/VilethornWoods/scripts.pory"
	.string "I wonder what's inside this\n"
	.string "house...maybe there's some loot!$"

VilethornWoods_Trainer_H_Text_1:
# 63 "data//maps/VilethornWoods/scripts.pory"
	.string "No loot for me!$"

VilethornWoods_Trainer_H_Text_2:
# 64 "data//maps/VilethornWoods/scripts.pory"
	.string "Fine, I'll just stand here and look while\n"
	.string "you loot everything...$"
