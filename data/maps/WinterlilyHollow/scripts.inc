WinterlilyHollow_MapScripts::
	.byte 0


WinterlilyHollow_NPC_Red::
# 18 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 19 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 20 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Red_Text_0
# 21 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
# 22 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 4, WinterlilyHollow_NPC_Red_Movement_0
	end


WinterlilyHollow_NPC1::
# 28 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 29 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 31 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC1_2
# 34 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_1
WinterlilyHollow_NPC1_1:
# 37 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC1_2:
# 32 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0
	goto WinterlilyHollow_NPC1_1


WinterlilyHollow_NPC2::
# 41 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 42 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 43 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC2_2
# 46 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_1
WinterlilyHollow_NPC2_1:
# 48 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC2_2:
# 44 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_0
	goto WinterlilyHollow_NPC2_1


WinterlilyHollow_NPC3::
# 52 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 53 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 54 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC3_2
# 57 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_1
WinterlilyHollow_NPC3_1:
# 59 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC3_2:
# 55 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0
	goto WinterlilyHollow_NPC3_1


WinterlilyHollow_MimeJr::
# 64 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 65 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 66 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 67 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_Text_0
# 68 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_Froslass::
# 72 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 73 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 74 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_FROSLASS, CRY_MODE_NORMAL
# 75 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Froslass_Text_0
# 76 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_Sneasler::
# 80 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 81 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 82 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 83 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_0
# 84 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_NPC_Miner::
# 104 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 105 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 106 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_0, MSGBOX_YESNO
# 108 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_2
# 117 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_2
WinterlilyHollow_NPC_Miner_1:
# 119 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 3, WinterlilyHollow_NPC_Miner_Movement_0
# 120 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 122 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_Miner_2:
# 109 "data//maps/WinterlilyHollow/scripts.pory"
	checkmoney 500
# 111 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_5
# 114 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_1
	goto WinterlilyHollow_NPC_Miner_1

WinterlilyHollow_NPC_Miner_5:
# 112 "data//maps/WinterlilyHollow/scripts.pory"
	special StartMining
	goto WinterlilyHollow_NPC_Miner_1


# 22 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Red_Movement_0:
# 22 "data//maps/WinterlilyHollow/scripts.pory"
	face_down
	step_end

# 119 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Miner_Movement_0:
# 119 "data//maps/WinterlilyHollow/scripts.pory"
	face_right
	step_end

WinterlilyHollow_NPC_Red_Text_0:
# 20 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Hello again, trainer! The gym is closed\n"
	.string "right now since the leader's gone up the\l"
	.string "mountain trying to fight some bad\l"
	.string "types that showed up.$"

WinterlilyHollow_NPC1_Text_0:
# 32 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Is VINIEL going to be able to handle all\n"
	.string "those Team Somber grunts alone? I wish\l"
	.string "we could help but he's far stronger\l"
	.string "than any of us. We'd only get in the way!$"

WinterlilyHollow_NPC1_Text_1:
# 34 "data//maps/WinterlilyHollow/scripts.pory"
	.string "WINTERLILY HOLLOW is so remote that we\n"
	.string "don't even get electricity! VINIEL's {PKMN}\l"
	.string "powers this town.$"

WinterlilyHollow_NPC2_Text_0:
# 44 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mom told me to stay inside the town\n"
	.string "because some bad guys showed up, so I'm\l"
	.string "playing here.$"

WinterlilyHollow_NPC2_Text_1:
# 46 "data//maps/WinterlilyHollow/scripts.pory"
	.string "$"

WinterlilyHollow_NPC3_Text_0:
# 55 "data//maps/WinterlilyHollow/scripts.pory"
	.string "A Team Somber grunt tried to mess with\n"
	.string "me, so I taught the young fool a lesson!\l"
	.string "After that, he threw away his {PKMN} saying\l"
	.string "it was too weak! How terrible! It's\l"
	.string "there behind the Pokemart now.$"

WinterlilyHollow_MimeJr_Text_0:
# 67 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR looks so terribly sad...can\n"
	.string "anything cheer it up?$"

WinterlilyHollow_Froslass_Text_0:
# 75 "data//maps/WinterlilyHollow/scripts.pory"
	.string "FROSLASS is circling the statue...which\n"
	.string "looks like FROSLASS statue! Is there a\l"
	.string "connection?$"

WinterlilyHollow_Sneasler_Text_0:
# 83 "data//maps/WinterlilyHollow/scripts.pory"
	.string "SNEASLER seems to be trying to dig into\n"
	.string "the wall with limited success. Don't give\l"
	.string "up, SNEASLER!$"

WinterlilyHollow_NPC_Miner_Text_0:
# 106 "data//maps/WinterlilyHollow/scripts.pory"
	.string "See all these crystals on the walls? I'm\n"
	.string "trying to dig it up. Wanna try? You can\l"
	.string "borrow my spare pickaxe, but it'll cost\l"
	.string "you 500.$"

WinterlilyHollow_NPC_Miner_Text_1:
# 114 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't have enough money.$"

WinterlilyHollow_NPC_Miner_Text_2:
# 117 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You can dig up some great stuff, you\n"
	.string "know?$"
