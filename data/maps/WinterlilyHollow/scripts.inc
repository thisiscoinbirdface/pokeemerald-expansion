# 1 "data/maps/WinterlilyHollow/scripts.pory"

# 2 "data/maps/WinterlilyHollow/scripts.pory"
    .set LOCALID_VINIEL, 10

WinterlilyHollow_MapScripts::
# 6 "data/maps/WinterlilyHollow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WinterlilyHollow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WinterlilyHollow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/WinterlilyHollow/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, WinterlilyHollow_OnFrame
	.2byte 0


WinterlilyHollow_OnFrame::
# 12 "data/maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_KORAIDON, WinterlilyHollow_OnFrame_1
	end

WinterlilyHollow_OnFrame_1:
# 13 "data/maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_WINTERLILY_VINIEL_CUTSCENE, WinterlilyHollow_OnFrame_4
# 17 "data/maps/WinterlilyHollow/scripts.pory"
	setobjectxyperm LOCALID_VINIEL, 38, 19
# 18 "data/maps/WinterlilyHollow/scripts.pory"
	setobjectxy LOCALID_VINIEL, 38, 19
# 19 "data/maps/WinterlilyHollow/scripts.pory"
	addobject LOCALID_VINIEL
# 23 "data/maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_0
# 24 "data/maps/WinterlilyHollow/scripts.pory"
	delay 24
# 25 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_0
# 26 "data/maps/WinterlilyHollow/scripts.pory"
	release
# 27 "data/maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_1
# 28 "data/maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 29 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_1
# 30 "data/maps/WinterlilyHollow/scripts.pory"
	release
# 31 "data/maps/WinterlilyHollow/scripts.pory"
	delay 24
# 32 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_2
# 33 "data/maps/WinterlilyHollow/scripts.pory"
	release
# 34 "data/maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_2
# 35 "data/maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 36 "data/maps/WinterlilyHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/WinterlilyHollow/scripts.pory"
	removeobject LOCALID_VINIEL
# 38 "data/maps/WinterlilyHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 40 "data/maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_WINTERLILY_VINIEL_CUTSCENE
# 41 "data/maps/WinterlilyHollow/scripts.pory"
	releaseall
	return

WinterlilyHollow_OnFrame_4:
	end


WinterlilyHollow_NPC_Red::
# 65 "data/maps/WinterlilyHollow/scripts.pory"
	lockall
# 66 "data/maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 67 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Red_Text_0
# 68 "data/maps/WinterlilyHollow/scripts.pory"
	releaseall
# 69 "data/maps/WinterlilyHollow/scripts.pory"
	applymovement 4, WinterlilyHollow_NPC_Red_Movement_0
	end


WinterlilyHollow_NPC1::
# 75 "data/maps/WinterlilyHollow/scripts.pory"
	lockall
# 76 "data/maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 78 "data/maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC1_2
# 81 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_1
WinterlilyHollow_NPC1_1:
# 84 "data/maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC1_2:
# 79 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0
	goto WinterlilyHollow_NPC1_1


WinterlilyHollow_NPC2::
# 88 "data/maps/WinterlilyHollow/scripts.pory"
	lockall
# 89 "data/maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 90 "data/maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC2_2
# 93 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_1
WinterlilyHollow_NPC2_1:
# 95 "data/maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC2_2:
# 91 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_0
	goto WinterlilyHollow_NPC2_1


WinterlilyHollow_NPC3::
# 99 "data/maps/WinterlilyHollow/scripts.pory"
	lockall
# 100 "data/maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 101 "data/maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC3_2
# 104 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0
WinterlilyHollow_NPC3_1:
# 106 "data/maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC3_2:
# 102 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0
	goto WinterlilyHollow_NPC3_1


WinterlilyHollow_MimeJr_1::
# 111 "data/maps/WinterlilyHollow/scripts.pory"
	lockall
# 112 "data/maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 113 "data/maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 115 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_0
# 117 "data/maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_SOOTHE_BELL
# 118 "data/maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_2
# 141 "data/maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_1_1:
# 144 "data/maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_1_2:
# 120 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_1, MSGBOX_YESNO
# 121 "data/maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_5
# 138 "data/maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_1_1

WinterlilyHollow_MimeJr_1_5:
# 122 "data/maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_SOOTHE_BELL
# 124 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_2
# 125 "data/maps/WinterlilyHollow/scripts.pory"
	release
# 126 "data/maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 127 "data/maps/WinterlilyHollow/scripts.pory"
	applymovement 10, WinterlilyHollow_MimeJr_1_Movement_0
# 128 "data/maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 129 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_3
# 132 "data/maps/WinterlilyHollow/scripts.pory"
	removeobject 10
# 133 "data/maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_1
# 134 "data/maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_2
	goto WinterlilyHollow_MimeJr_1_1


WinterlilyHollow_MimeJr_2::
# 149 "data/maps/WinterlilyHollow/scripts.pory"
	lockall
# 150 "data/maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 151 "data/maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 153 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_0
# 155 "data/maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_POKE_DOLL
# 156 "data/maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_2
# 177 "data/maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_2_1:
# 180 "data/maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_2_2:
# 158 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_1, MSGBOX_YESNO
# 159 "data/maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_5
# 174 "data/maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_2_1

WinterlilyHollow_MimeJr_2_5:
# 160 "data/maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_POKE_DOLL
# 162 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_2
# 163 "data/maps/WinterlilyHollow/scripts.pory"
	release
# 164 "data/maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 165 "data/maps/WinterlilyHollow/scripts.pory"
	applymovement 6, WinterlilyHollow_MimeJr_1_Movement_0
# 166 "data/maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 167 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_3
# 169 "data/maps/WinterlilyHollow/scripts.pory"
	removeobject 6
# 170 "data/maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_2
# 171 "data/maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_3
	goto WinterlilyHollow_MimeJr_2_1


WinterlilyHollow_MimeJr_3::
# 185 "data/maps/WinterlilyHollow/scripts.pory"
	lockall
# 186 "data/maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 187 "data/maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 189 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_0
# 190 "data/maps/WinterlilyHollow/scripts.pory"
	release
# 191 "data/maps/WinterlilyHollow/scripts.pory"
	delay 30
# 192 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_1
# 194 "data/maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_LUXURY_BALL
# 195 "data/maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_2
# 215 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_7
WinterlilyHollow_MimeJr_3_1:
# 218 "data/maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_3_2:
# 197 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_2, MSGBOX_YESNO
# 198 "data/maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_5
# 211 "data/maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 212 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_6
	goto WinterlilyHollow_MimeJr_3_1

WinterlilyHollow_MimeJr_3_5:
# 199 "data/maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_LUXURY_BALL
# 201 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_3
# 202 "data/maps/WinterlilyHollow/scripts.pory"
	removeobject 1
# 203 "data/maps/WinterlilyHollow/scripts.pory"
	givemon SPECIES_MIME_JR, 25
# 204 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_4
# 205 "data/maps/WinterlilyHollow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/WinterlilyHollow/scripts.pory"
	waitfanfare
# 207 "data/maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_3
# 208 "data/maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HOLLOW_MIMEJR
# 209 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_5
	goto WinterlilyHollow_MimeJr_3_1


WinterlilyHollow_Froslass::
# 224 "data/maps/WinterlilyHollow/scripts.pory"
	lockall
# 225 "data/maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 226 "data/maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_FROSLASS, CRY_MODE_NORMAL
# 227 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Froslass_Text_0
# 228 "data/maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_Sneasler::
# 232 "data/maps/WinterlilyHollow/scripts.pory"
	lockall
# 233 "data/maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 234 "data/maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 235 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_0
# 236 "data/maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_NPC_Miner::
# 256 "data/maps/WinterlilyHollow/scripts.pory"
	lockall
# 257 "data/maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 258 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_0, MSGBOX_YESNO
# 260 "data/maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_2
# 269 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_2
WinterlilyHollow_NPC_Miner_1:
# 271 "data/maps/WinterlilyHollow/scripts.pory"
	applymovement 3, WinterlilyHollow_NPC_Miner_Movement_0
# 272 "data/maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 274 "data/maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_Miner_2:
# 261 "data/maps/WinterlilyHollow/scripts.pory"
	checkmoney 500
# 263 "data/maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_5
# 266 "data/maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_1
	goto WinterlilyHollow_NPC_Miner_1

WinterlilyHollow_NPC_Miner_5:
# 264 "data/maps/WinterlilyHollow/scripts.pory"
	special StartMining
	goto WinterlilyHollow_NPC_Miner_1


# 23 "data/maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_0:
# 23 "data/maps/WinterlilyHollow/scripts.pory"
	walk_down
# 23 "data/maps/WinterlilyHollow/scripts.pory"
	emote_exclamation_mark
	step_end

# 27 "data/maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_1:
# 27 "data/maps/WinterlilyHollow/scripts.pory"
	walk_down
# 27 "data/maps/WinterlilyHollow/scripts.pory"
	walk_down
	step_end

# 34 "data/maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_2:
# 34 "data/maps/WinterlilyHollow/scripts.pory"
	walk_up
# 34 "data/maps/WinterlilyHollow/scripts.pory"
	walk_up
# 34 "data/maps/WinterlilyHollow/scripts.pory"
	walk_up
# 34 "data/maps/WinterlilyHollow/scripts.pory"
	walk_up
# 34 "data/maps/WinterlilyHollow/scripts.pory"
	walk_up
	step_end

# 69 "data/maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Red_Movement_0:
# 69 "data/maps/WinterlilyHollow/scripts.pory"
	face_down
	step_end

# 127 "data/maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_MimeJr_1_Movement_0:
# 127 "data/maps/WinterlilyHollow/scripts.pory"
	fly_up
	step_end

# 271 "data/maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Miner_Movement_0:
# 271 "data/maps/WinterlilyHollow/scripts.pory"
	face_right
	step_end

WinterlilyHollow_OnFrame_Text_0:
# 25 "data/maps/WinterlilyHollow/scripts.pory"
	.string "VINIEL: Ah, it's you! The enemy of my\n"
	.string "enemy!$"

WinterlilyHollow_OnFrame_Text_1:
# 29 "data/maps/WinterlilyHollow/scripts.pory"
	.string "VINIEL: AMPHAROS and I took all those\n"
	.string "grunts down! Hahaha! But when I went to\l"
	.string "the peak, everyone had gone!\p"
	.string "...\p"
	.string "...\p"
	.string "VINIEL: So that's what's been going on.\n"
	.string "Poor Professor Tenebris. I'd heard\l"
	.string "about her disappearance on the news.\p"
	.string "VINIEL: News comes late here, since\n"
	.string "we're so remote.\p"
	.string "VINIEL: Professor Tenebris and I\n"
	.string "fought each other together several\l"
	.string "times when we were younger! I never\l"
	.string "lost though. Hahaha!$"

WinterlilyHollow_OnFrame_Text_2:
# 32 "data/maps/WinterlilyHollow/scripts.pory"
	.string "VINIEL: So what are you going to do\n"
	.string "next?\p"
	.string "...\p"
	.string "VINIEL: Oh, you're off the case? I\n"
	.string "understand. You're too young to keep up\l"
	.string "with a big criminal organisation like\l"
	.string "Team Somber. It's time for the\l"
	.string "grown-ups to take over.\p"
	.string "VINIEL: What's wrong, young champ? You\n"
	.string "look paralysed. Don't let the shock wear\l"
	.string "you down.\p"
	.string "VINIEL: I see you have four gym badges.\n"
	.string "Why not try to aim for all eight?\l"
	.string "Starting with me, of course. Hahaha!\p"
	.string "...\p"
	.string "VINIEL: You know, it's alright to fail.\n"
	.string "From what you told me, you've done\l"
	.string "incredible work so far. Now let the\l"
	.string "detectives handle the rest. You're\l"
	.string "young and green - be young and green!\p"
	.string "VINIEL: I hope I'll see you at my gym\n"
	.string "later!$"

WinterlilyHollow_NPC_Red_Text_0:
# 67 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Hello again, trainer! The gym is closed\n"
	.string "right now since the leader's gone up the\l"
	.string "mountain trying to fight some bad\l"
	.string "types that showed up.$"

WinterlilyHollow_NPC1_Text_0:
# 79 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Is VINIEL going to be able to handle all\n"
	.string "those Team Somber grunts alone? I wish\l"
	.string "we could help but he's far stronger\l"
	.string "than any of us. We'd only get in the way!$"

WinterlilyHollow_NPC1_Text_1:
# 81 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Winterlily Hollow is so remote that we\n"
	.string "don't even get electricity! VINIEL's\l"
	.string "Pokémon powers this town.$"

WinterlilyHollow_NPC2_Text_0:
# 91 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Mom told me to stay inside the town\n"
	.string "because some bad guys showed up, so I'm\l"
	.string "playing here.$"

WinterlilyHollow_NPC2_Text_1:
# 93 "data/maps/WinterlilyHollow/scripts.pory"
	.string "$"

WinterlilyHollow_NPC3_Text_0:
# 102 "data/maps/WinterlilyHollow/scripts.pory"
	.string "A Team Somber grunt tried to mess with\n"
	.string "me, so I taught the young fool a lesson!\l"
	.string "After that, he threw away his Pokémon\l"
	.string "saying it was too weak! How terrible!\l"
	.string "It's here somewhere in the town.$"

WinterlilyHollow_MimeJr_1_Text_0:
# 115 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "MIME JR is bawling!\p"
	.string "Can it be soothed somehow?$"

WinterlilyHollow_MimeJr_1_Text_1:
# 120 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Give MIME JR a SOOTHE BELL?$"

WinterlilyHollow_MimeJr_1_Text_2:
# 124 "data/maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR takes the SOOTHE BELL and\n"
	.string "shakes it...it chimes softly.\p"
	.string "MIME JR smiles at you.$"

WinterlilyHollow_MimeJr_1_Text_3:
# 129 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go?$"

WinterlilyHollow_MimeJr_2_Text_0:
# 153 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "MIME JR looks sad...maybe it wants a doll\l"
	.string "to play with?$"

WinterlilyHollow_MimeJr_2_Text_1:
# 158 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Give MIME JR a POKESHI DOLL?$"

WinterlilyHollow_MimeJr_2_Text_2:
# 162 "data/maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR takes the POKESHI DOLL and\n"
	.string "plays with it...\p"
	.string "MIME JR smiles at you.$"

WinterlilyHollow_MimeJr_2_Text_3:
# 167 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go now?$"

WinterlilyHollow_MimeJr_3_Text_0:
# 189 "data/maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR is no longer crying! It's looking\n"
	.string "at its own reflection in the water\l"
	.string "instead...maybe it's pondering its\l"
	.string "future. Understandable, given that its\l"
	.string "last Trainer treated it so badly.$"

WinterlilyHollow_MimeJr_3_Text_1:
# 192 "data/maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR looks at you.\p"
	.string "...\p"
	.string "It walks upto you...$"

WinterlilyHollow_MimeJr_3_Text_2:
# 197 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Catch MIME JR in a LUXURY BALL?$"

WinterlilyHollow_MimeJr_3_Text_3:
# 201 "data/maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR doesn't wait for you to catch it\n"
	.string "- it leaps into the LUXURY BALL on its\l"
	.string "own!.$"

WinterlilyHollow_MimeJr_3_Text_4:
# 204 "data/maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR joined {PLAYER}'s party!$"

WinterlilyHollow_MimeJr_3_Text_5:
# 209 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Welcome to the team, MIME JR! You'll be\n"
	.string "happy withh all your new friends!$"

WinterlilyHollow_MimeJr_3_Text_6:
# 212 "data/maps/WinterlilyHollow/scripts.pory"
	.string "MIME JR looks hurt. It goes back to\n"
	.string "staring at its reflection$"

WinterlilyHollow_MimeJr_3_Text_7:
# 215 "data/maps/WinterlilyHollow/scripts.pory"
	.string "Maybe it needs a comforting POKEBALL\n"
	.string "to be in.$"

WinterlilyHollow_Froslass_Text_0:
# 227 "data/maps/WinterlilyHollow/scripts.pory"
	.string "FROSLASS is circling the statue...which\n"
	.string "looks like a FROSLASS statue! Is there\l"
	.string "a connection?$"

WinterlilyHollow_Sneasler_Text_0:
# 235 "data/maps/WinterlilyHollow/scripts.pory"
	.string "SNEASLER seems to be trying to dig into\n"
	.string "the wall with limited success.\p"
	.string "Don't give up, SNEASLER!$"

WinterlilyHollow_NPC_Miner_Text_0:
# 258 "data/maps/WinterlilyHollow/scripts.pory"
	.string "See all these crystals on the walls? I'm\n"
	.string "trying to dig it up. Wanna try? You can\l"
	.string "borrow my spare pickaxe, but it'll cost\l"
	.string "you 500.$"

WinterlilyHollow_NPC_Miner_Text_1:
# 266 "data/maps/WinterlilyHollow/scripts.pory"
	.string "You don't have enough money.$"

WinterlilyHollow_NPC_Miner_Text_2:
# 269 "data/maps/WinterlilyHollow/scripts.pory"
	.string "You can dig up some great stuff, you\n"
	.string "know?$"
