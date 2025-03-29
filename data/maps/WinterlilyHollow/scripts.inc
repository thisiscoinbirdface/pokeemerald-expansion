WinterlilyHollow_MapScripts::
	.byte 0


WinterlilyHollow_NPC1::
# 20 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 21 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 22 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0
# 23 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_NPC2::
# 27 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 28 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 29 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0
# 30 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_NPC3::
# 34 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 35 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 36 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0
# 37 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_Cetoddle::
# 42 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 43 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 44 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_CETODDLE, CRY_MODE_NORMAL
# 45 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0
# 46 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_Froslass::
# 50 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 51 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 52 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_FROSLASS, CRY_MODE_NORMAL
# 53 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0
# 54 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_Sneasler::
# 58 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 59 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 60 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 61 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0
# 62 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_NPC_Miner::
# 82 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 83 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 84 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_0, MSGBOX_YESNO
# 86 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_2
# 95 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_2
WinterlilyHollow_NPC_Miner_1:
# 97 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 3, WinterlilyHollow_NPC_Miner_Movement_0
# 98 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 100 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_Miner_2:
# 87 "data//maps/WinterlilyHollow/scripts.pory"
	checkmoney 500
# 89 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_5
# 92 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_1
	goto WinterlilyHollow_NPC_Miner_1

WinterlilyHollow_NPC_Miner_5:
# 90 "data//maps/WinterlilyHollow/scripts.pory"
	special StartMining
	goto WinterlilyHollow_NPC_Miner_1


# 97 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Miner_Movement_0:
# 97 "data//maps/WinterlilyHollow/scripts.pory"
	face_right
	step_end

WinterlilyHollow_NPC1_Text_0:
# 22 "data//maps/WinterlilyHollow/scripts.pory"
	.string "$"

WinterlilyHollow_NPC_Miner_Text_0:
# 84 "data//maps/WinterlilyHollow/scripts.pory"
	.string "See all these crystals on the walls? I'm\n"
	.string "trying to dig it up. Wanna try? You can\l"
	.string "borrow my spare pickaxe, but it'll cost\l"
	.string "you 500.$"

WinterlilyHollow_NPC_Miner_Text_1:
# 92 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't have enough money.$"

WinterlilyHollow_NPC_Miner_Text_2:
# 95 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You can dig up some great stuff, you\n"
	.string "know?$"
