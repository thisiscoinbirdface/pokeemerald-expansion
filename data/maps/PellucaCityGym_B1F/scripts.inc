PellucaCityGym_B1F_MapScripts::
	.byte 0


PellucaGym_Trainer_A::
# 6 "data//maps/PellucaCityGym_B1F/scripts.pory"
	trainerbattle_single TRAINER_MATTHEW, PellucaGym_Trainer_A_Text_0, PellucaGym_Trainer_A_Text_1
# 7 "data//maps/PellucaCityGym_B1F/scripts.pory"
	msgbox PellucaGym_Trainer_A_Text_2, MSGBOX_NPC
	end


PellucaGym_Trainer_A_Text_0:
# 6 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Different Pokémon inhabit different\n"
	.string "areas. I caught mine right here!$"

PellucaGym_Trainer_A_Text_1:
# 6 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "Oh no!$"

PellucaGym_Trainer_A_Text_2:
# 7 "data//maps/PellucaCityGym_B1F/scripts.pory"
	.string "No matter where they're from, all\n"
	.string "Pokémon need love and care.$"
