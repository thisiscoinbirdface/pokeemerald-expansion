# 1 "data//maps/WinterlilyHollow/scripts.pory"

# 2 "data//maps/WinterlilyHollow/scripts.pory"
    .set LOCALID_VINIEL, 10

WinterlilyHollow_MapScripts::
# 6 "data//maps/WinterlilyHollow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WinterlilyHollow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WinterlilyHollow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data//maps/WinterlilyHollow/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, WinterlilyHollow_OnFrame
	.2byte 0


WinterlilyHollow_OnFrame::
# 12 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_KORAIDON, WinterlilyHollow_OnFrame_2
WinterlilyHollow_OnFrame_1:
	end

WinterlilyHollow_OnFrame_2:
# 13 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_WINTERFLAG_WINTERLILY_VINIEL_CUTSCENE, WinterlilyHollow_OnFrame_4
# 16 "data//maps/WinterlilyHollow/scripts.pory"
	setobjectxyperm LOCALID_VINIEL, 38, 19
# 17 "data//maps/WinterlilyHollow/scripts.pory"
	setobjectxy LOCALID_VINIEL, 38, 19
# 18 "data//maps/WinterlilyHollow/scripts.pory"
	addobject LOCALID_VINIEL
	goto WinterlilyHollow_OnFrame_1

WinterlilyHollow_OnFrame_4:
	end


WinterlilyHollow_NPC_Red::
# 38 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 39 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 40 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Red_Text_0
# 41 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
# 42 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 4, WinterlilyHollow_NPC_Red_Movement_0
	end


WinterlilyHollow_NPC1::
# 48 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 49 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 51 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC1_2
# 54 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_1
WinterlilyHollow_NPC1_1:
# 57 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC1_2:
# 52 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0
	goto WinterlilyHollow_NPC1_1


WinterlilyHollow_NPC2::
# 61 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 62 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 63 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC2_2
# 66 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_1
WinterlilyHollow_NPC2_1:
# 68 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC2_2:
# 64 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_0
	goto WinterlilyHollow_NPC2_1


WinterlilyHollow_NPC3::
# 72 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 73 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 74 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC3_2
# 77 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0
WinterlilyHollow_NPC3_1:
# 79 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC3_2:
# 75 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0
	goto WinterlilyHollow_NPC3_1


WinterlilyHollow_MimeJr_1::
# 84 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 85 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 86 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 88 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_0
# 90 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_SOOTHE_BELL
# 91 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_2
# 114 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_1_1:
# 117 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_1_2:
# 93 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_1, MSGBOX_YESNO
# 94 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_5
# 111 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_1_1

WinterlilyHollow_MimeJr_1_5:
# 95 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_SOOTHE_BELL
# 97 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_2
# 98 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 99 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 100 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 10, WinterlilyHollow_MimeJr_1_Movement_0
# 101 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 102 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_3
# 105 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 10
# 106 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_1
# 107 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_2
	goto WinterlilyHollow_MimeJr_1_1


WinterlilyHollow_MimeJr_2::
# 122 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 123 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 124 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 126 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_0
# 128 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_POKE_DOLL
# 129 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_2
# 150 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_2_1:
# 153 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_2_2:
# 131 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_1, MSGBOX_YESNO
# 132 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_5
# 147 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_2_1

WinterlilyHollow_MimeJr_2_5:
# 133 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_POKE_DOLL
# 135 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_2
# 136 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 137 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 138 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 6, WinterlilyHollow_MimeJr_1_Movement_0
# 139 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 140 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_3
# 142 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 6
# 143 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_2
# 144 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_3
	goto WinterlilyHollow_MimeJr_2_1


WinterlilyHollow_MimeJr_3::
# 158 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 159 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 160 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 162 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_0
# 163 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 164 "data//maps/WinterlilyHollow/scripts.pory"
	delay 30
# 165 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_1
# 167 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_LUXURY_BALL
# 168 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_2
# 188 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_7
WinterlilyHollow_MimeJr_3_1:
# 191 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_3_2:
# 170 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_2, MSGBOX_YESNO
# 171 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_5
# 184 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 185 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_6
	goto WinterlilyHollow_MimeJr_3_1

WinterlilyHollow_MimeJr_3_5:
# 172 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_LUXURY_BALL
# 174 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_3
# 175 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 1
# 176 "data//maps/WinterlilyHollow/scripts.pory"
	givemon SPECIES_MIME_JR, 25
# 177 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_4
# 178 "data//maps/WinterlilyHollow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 179 "data//maps/WinterlilyHollow/scripts.pory"
	waitfanfare
# 180 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_3
# 181 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HOLLOW_MIMEJR
# 182 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_5
	goto WinterlilyHollow_MimeJr_3_1


WinterlilyHollow_Froslass::
# 197 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 198 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 199 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_FROSLASS, CRY_MODE_NORMAL
# 200 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Froslass_Text_0
# 201 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_Sneasler::
# 205 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 206 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 207 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 208 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_0
# 209 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_NPC_Miner::
# 229 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 230 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 231 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_0, MSGBOX_YESNO
# 233 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_2
# 242 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_2
WinterlilyHollow_NPC_Miner_1:
# 244 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 3, WinterlilyHollow_NPC_Miner_Movement_0
# 245 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 247 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_Miner_2:
# 234 "data//maps/WinterlilyHollow/scripts.pory"
	checkmoney 500
# 236 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_5
# 239 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_1
	goto WinterlilyHollow_NPC_Miner_1

WinterlilyHollow_NPC_Miner_5:
# 237 "data//maps/WinterlilyHollow/scripts.pory"
	special StartMining
	goto WinterlilyHollow_NPC_Miner_1


# 42 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Red_Movement_0:
# 42 "data//maps/WinterlilyHollow/scripts.pory"
	face_down
	step_end

# 100 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_MimeJr_1_Movement_0:
# 100 "data//maps/WinterlilyHollow/scripts.pory"
	fly_up
	step_end

# 244 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Miner_Movement_0:
# 244 "data//maps/WinterlilyHollow/scripts.pory"
	face_right
	step_end

WinterlilyHollow_NPC_Red_Text_0:
# 40 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Hello again, trainer! The gym is closed\n"
	.string "right now since the leader's gone up the\l"
	.string "mountain trying to fight some bad\l"
	.string "types that showed up.$"

WinterlilyHollow_NPC1_Text_0:
# 52 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Is VINIEL going to be able to handle all\n"
	.string "those Team Somber grunts alone? I wish\l"
	.string "we could help but he's far stronger\l"
	.string "than any of us. We'd only get in the way!$"

WinterlilyHollow_NPC1_Text_1:
# 54 "data//maps/WinterlilyHollow/scripts.pory"
	.string "WINTERLILY HOLLOW is so remote that we\n"
	.string "don't even get electricity! VINIEL's {PKMN}\l"
	.string "powers this town.$"

WinterlilyHollow_NPC2_Text_0:
# 64 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mom told me to stay inside the town\n"
	.string "because some bad guys showed up, so I'm\l"
	.string "playing here.$"

WinterlilyHollow_NPC2_Text_1:
# 66 "data//maps/WinterlilyHollow/scripts.pory"
	.string "$"

WinterlilyHollow_NPC3_Text_0:
# 75 "data//maps/WinterlilyHollow/scripts.pory"
	.string "A Team Somber grunt tried to mess with\n"
	.string "me, so I taught the young fool a lesson!\l"
	.string "After that, he threw away his {PKMN} saying\l"
	.string "it was too weak! How terrible! It's here\l"
	.string "somewhere in the town.$"

WinterlilyHollow_MimeJr_1_Text_0:
# 88 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "MIME JR is bawling!\p"
	.string "Can it be soothed somehow?$"

WinterlilyHollow_MimeJr_1_Text_1:
# 93 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give MIME JR a SOOTHE BELL?$"

WinterlilyHollow_MimeJr_1_Text_2:
# 97 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR takes the SOOTHE BELL and\n"
	.string "shakes it...it chimes softly.\p"
	.string "MIME JR smiles at you.$"

WinterlilyHollow_MimeJr_1_Text_3:
# 102 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go?$"

WinterlilyHollow_MimeJr_2_Text_0:
# 126 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "MIME JR looks sad...maybe it wants a doll\l"
	.string "to play with?$"

WinterlilyHollow_MimeJr_2_Text_1:
# 131 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give MIME JR a POKESHI DOLL?$"

WinterlilyHollow_MimeJr_2_Text_2:
# 135 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR takes the POKESHI DOLL and\n"
	.string "plays with it...\p"
	.string "MIME JR smiles at you.$"

WinterlilyHollow_MimeJr_2_Text_3:
# 140 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go now?$"

WinterlilyHollow_MimeJr_3_Text_0:
# 162 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR is no longer crying! It's looking\n"
	.string "at its own reflection in the water\l"
	.string "instead...maybe it's pondering its\l"
	.string "future. Understandable, given that its\l"
	.string "last Trainer treated it so badly.$"

WinterlilyHollow_MimeJr_3_Text_1:
# 165 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR looks at you.\p"
	.string "...\p"
	.string "It walks upto you...$"

WinterlilyHollow_MimeJr_3_Text_2:
# 170 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Catch MIME JR in a LUXURY BALL?$"

WinterlilyHollow_MimeJr_3_Text_3:
# 174 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR doesn't wait for you to catch it\n"
	.string "- it leaps into the LUXURY BALL on its\l"
	.string "own!.$"

WinterlilyHollow_MimeJr_3_Text_4:
# 177 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR joined {PLAYER}'s party!$"

WinterlilyHollow_MimeJr_3_Text_5:
# 182 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Welcome to the team, MIME JR! You'll be\n"
	.string "happy withh all your new friends!$"

WinterlilyHollow_MimeJr_3_Text_6:
# 185 "data//maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR looks hurt. It goes back to\n"
	.string "staring at its reflection$"

WinterlilyHollow_MimeJr_3_Text_7:
# 188 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Maybe it needs a comforting POKEBALL\n"
	.string "to be in.$"

WinterlilyHollow_Froslass_Text_0:
# 200 "data//maps/WinterlilyHollow/scripts.pory"
	.string "FROSLASS is circling the statue...which\n"
	.string "looks like a FROSLASS statue! Is there\l"
	.string "a connection?$"

WinterlilyHollow_Sneasler_Text_0:
# 208 "data//maps/WinterlilyHollow/scripts.pory"
	.string "SNEASLER seems to be trying to dig into\n"
	.string "the wall with limited success. Don't give\l"
	.string "up, SNEASLER!$"

WinterlilyHollow_NPC_Miner_Text_0:
# 231 "data//maps/WinterlilyHollow/scripts.pory"
	.string "See all these crystals on the walls? I'm\n"
	.string "trying to dig it up. Wanna try? You can\l"
	.string "borrow my spare pickaxe, but it'll cost\l"
	.string "you 500.$"

WinterlilyHollow_NPC_Miner_Text_1:
# 239 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't have enough money.$"

WinterlilyHollow_NPC_Miner_Text_2:
# 242 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You can dig up some great stuff, you\n"
	.string "know?$"
