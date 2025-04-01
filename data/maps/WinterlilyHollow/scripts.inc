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
	msgbox WinterlilyHollow_NPC3_Text_0
WinterlilyHollow_NPC3_1:
# 59 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC3_2:
# 55 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0
	goto WinterlilyHollow_NPC3_1


WinterlilyHollow_MimeJr_1::
# 64 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 65 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 66 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 68 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_0
# 70 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_SOOTHE_BELL
# 71 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_2
# 94 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_1_1:
# 97 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_1_2:
# 73 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_1, MSGBOX_YESNO
# 74 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_5
# 91 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_1_1

WinterlilyHollow_MimeJr_1_5:
# 75 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_SOOTHE_BELL
# 77 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_2
# 78 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 79 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 80 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 10, WinterlilyHollow_MimeJr_1_Movement_0
# 81 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 82 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_3
# 85 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 10
# 86 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_1
# 87 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_2
	goto WinterlilyHollow_MimeJr_1_1


WinterlilyHollow_MimeJr_2::
# 102 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 103 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 104 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 106 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_0
# 108 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_POKE_DOLL
# 109 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_2
# 130 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_2_1:
# 133 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_2_2:
# 111 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_1, MSGBOX_YESNO
# 112 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_5
# 127 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_2_1

WinterlilyHollow_MimeJr_2_5:
# 113 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_POKE_DOLL
# 115 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_2
# 116 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 117 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 118 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 6, WinterlilyHollow_MimeJr_1_Movement_0
# 119 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 120 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_3
# 122 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 6
# 123 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_2
# 124 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_3
	goto WinterlilyHollow_MimeJr_2_1


WinterlilyHollow_MimeJr_3::
# 138 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 139 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 140 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 142 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_0
# 143 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 144 "data//maps/WinterlilyHollow/scripts.pory"
	delay 30
# 145 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_1
# 147 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_LUXURY_BALL
# 148 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_2
# 168 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_7
WinterlilyHollow_MimeJr_3_1:
# 171 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_3_2:
# 150 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_2, MSGBOX_YESNO
# 151 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_5
# 164 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 165 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_6
	goto WinterlilyHollow_MimeJr_3_1

WinterlilyHollow_MimeJr_3_5:
# 152 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_LUXURY_BALL
# 154 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_3
# 155 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 1
# 156 "data//maps/WinterlilyHollow/scripts.pory"
	givemon SPECIES_MIME_JR, 25
# 157 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_4
# 158 "data//maps/WinterlilyHollow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 159 "data//maps/WinterlilyHollow/scripts.pory"
	waitfanfare
# 160 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_3
# 161 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HOLLOW_MIMEJR
# 162 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_5
	goto WinterlilyHollow_MimeJr_3_1


WinterlilyHollow_Froslass::
# 177 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 178 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 179 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_FROSLASS, CRY_MODE_NORMAL
# 180 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Froslass_Text_0
# 181 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_Sneasler::
# 185 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 186 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 187 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 188 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_0
# 189 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_NPC_Miner::
# 209 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 210 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 211 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_0, MSGBOX_YESNO
# 213 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_2
# 222 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_2
WinterlilyHollow_NPC_Miner_1:
# 224 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 3, WinterlilyHollow_NPC_Miner_Movement_0
# 225 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 227 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_Miner_2:
# 214 "data//maps/WinterlilyHollow/scripts.pory"
	checkmoney 500
# 216 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_5
# 219 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_1
	goto WinterlilyHollow_NPC_Miner_1

WinterlilyHollow_NPC_Miner_5:
# 217 "data//maps/WinterlilyHollow/scripts.pory"
	special StartMining
	goto WinterlilyHollow_NPC_Miner_1


# 22 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Red_Movement_0:
# 22 "data//maps/WinterlilyHollow/scripts.pory"
	face_down
	step_end

# 80 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_MimeJr_1_Movement_0:
# 80 "data//maps/WinterlilyHollow/scripts.pory"
	fly_up
	step_end

# 224 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Miner_Movement_0:
# 224 "data//maps/WinterlilyHollow/scripts.pory"
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
	.string "it was too weak! How terrible! It's here\l"
	.string "somewhere in the town.$"

WinterlilyHollow_MimeJr_1_Text_0:
# 68 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "MIME JR is bawling!\p"
	.string "Can it be soothed somehow?$"

WinterlilyHollow_MimeJr_1_Text_1:
# 73 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give MIME JR a SOOTHE BELL?$"

WinterlilyHollow_MimeJr_1_Text_2:
# 77 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR takes the SOOTHE BELL and\n"
	.string "shakes it...it chimes softly.\p"
	.string "MIME JR smiles at you.$"

WinterlilyHollow_MimeJr_1_Text_3:
# 82 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go?$"

WinterlilyHollow_MimeJr_2_Text_0:
# 106 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "MIME JR looks sad...maybe it wants a doll\l"
	.string "to play with?$"

WinterlilyHollow_MimeJr_2_Text_1:
# 111 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give MIME JR a POKESHI DOLL?$"

WinterlilyHollow_MimeJr_2_Text_2:
# 115 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR takes the POKESHI DOLL and\n"
	.string "plays with it...\p"
	.string "MIME JR smiles at you.$"

WinterlilyHollow_MimeJr_2_Text_3:
# 120 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go now?$"

WinterlilyHollow_MimeJr_3_Text_0:
# 142 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR is no longer crying! It's looking\n"
	.string "at its own reflection in the water\l"
	.string "instead...maybe it's pondering its\l"
	.string "future. Understandable, given that its\l"
	.string "last Trainer treated it so badly.$"

WinterlilyHollow_MimeJr_3_Text_1:
# 145 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR looks at you.\p"
	.string "...\p"
	.string "It walks upto you...$"

WinterlilyHollow_MimeJr_3_Text_2:
# 150 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Catch MIME JR in a LUXURY BALL?$"

WinterlilyHollow_MimeJr_3_Text_3:
# 154 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR doesn't wait for you to catch it\n"
	.string "- it leaps into the LUXURY BALL on its\l"
	.string "own!.$"

WinterlilyHollow_MimeJr_3_Text_4:
# 157 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR joined {PLAYER}'s party!$"

WinterlilyHollow_MimeJr_3_Text_5:
# 162 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Welcome to the team, MIME JR! You'll be\n"
	.string "happy withh all your new friends!$"

WinterlilyHollow_MimeJr_3_Text_6:
# 165 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR looks hurt. It goes back to\n"
	.string "staring at its reflection$"

WinterlilyHollow_MimeJr_3_Text_7:
# 168 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Maybe it needs a comforting POKEBALL\n"
	.string "to be in.$"

WinterlilyHollow_Froslass_Text_0:
# 180 "data//maps/WinterlilyHollow/scripts.pory"
	.string "FROSLASS is circling the statue...which\n"
	.string "looks like a FROSLASS statue! Is there\l"
	.string "a connection?$"

WinterlilyHollow_Sneasler_Text_0:
# 188 "data//maps/WinterlilyHollow/scripts.pory"
	.string "SNEASLER seems to be trying to dig into\n"
	.string "the wall with limited success. Don't give\l"
	.string "up, SNEASLER!$"

WinterlilyHollow_NPC_Miner_Text_0:
# 211 "data//maps/WinterlilyHollow/scripts.pory"
	.string "See all these crystals on the walls? I'm\n"
	.string "trying to dig it up. Wanna try? You can\l"
	.string "borrow my spare pickaxe, but it'll cost\l"
	.string "you 500.$"

WinterlilyHollow_NPC_Miner_Text_1:
# 219 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't have enough money.$"

WinterlilyHollow_NPC_Miner_Text_2:
# 222 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You can dig up some great stuff, you\n"
	.string "know?$"
