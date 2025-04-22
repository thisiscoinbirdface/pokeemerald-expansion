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
	goto_if_set FLAG_ANCIENT_MIRROH_KORAIDON, WinterlilyHollow_OnFrame_1
	end

WinterlilyHollow_OnFrame_1:
# 13 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_WINTERLILY_VINIEL_CUTSCENE, WinterlilyHollow_OnFrame_4
# 16 "data//maps/WinterlilyHollow/scripts.pory"
	setobjectxyperm LOCALID_VINIEL, 38, 19
# 17 "data//maps/WinterlilyHollow/scripts.pory"
	setobjectxy LOCALID_VINIEL, 38, 19
# 18 "data//maps/WinterlilyHollow/scripts.pory"
	addobject LOCALID_VINIEL
# 21 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_0
# 22 "data//maps/WinterlilyHollow/scripts.pory"
	delay 24
# 23 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_0
# 24 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 25 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_1
# 26 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 27 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_1
# 28 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 29 "data//maps/WinterlilyHollow/scripts.pory"
	delay 24
# 30 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_2
# 31 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 32 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_2
# 33 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 34 "data//maps/WinterlilyHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject LOCALID_VINIEL
# 36 "data//maps/WinterlilyHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 38 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_WINTERLILY_VINIEL_CUTSCENE
# 39 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	return

WinterlilyHollow_OnFrame_4:
	end


WinterlilyHollow_NPC_Red::
# 62 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 63 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 64 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Red_Text_0
# 65 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
# 66 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 4, WinterlilyHollow_NPC_Red_Movement_0
	end


WinterlilyHollow_NPC1::
# 72 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC1_2
# 75 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_1, MSGBOX_NPC
WinterlilyHollow_NPC1_1:
	end

WinterlilyHollow_NPC1_2:
# 73 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC1_1


WinterlilyHollow_NPC2::
# 80 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC2_2
# 83 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_1
WinterlilyHollow_NPC2_1:
	end

WinterlilyHollow_NPC2_2:
# 81 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC2_1


WinterlilyHollow_NPC3::
# 88 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC3_2
# 91 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0, MSGBOX_NPC
WinterlilyHollow_NPC3_1:
	end

WinterlilyHollow_NPC3_2:
# 89 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC3_1


WinterlilyHollow_NPC4::
# 96 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC4_2
# 99 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC4_Text_0, MSGBOX_NPC
WinterlilyHollow_NPC4_1:
	end

WinterlilyHollow_NPC4_2:
# 97 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC4_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC4_1


WinterlilyHollow_MimeJr_1::
# 105 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 106 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 107 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 109 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_0
# 111 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_SOOTHE_BELL
# 112 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_2
# 135 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_1_1:
# 138 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_1_2:
# 114 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_1, MSGBOX_YESNO
# 115 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_5
# 132 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_1_1

WinterlilyHollow_MimeJr_1_5:
# 116 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_SOOTHE_BELL
# 118 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_2
# 119 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 120 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 121 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 10, WinterlilyHollow_MimeJr_1_Movement_0
# 122 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 123 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_3
# 126 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 10
# 127 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_1
# 128 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_2
	goto WinterlilyHollow_MimeJr_1_1


WinterlilyHollow_MimeJr_2::
# 143 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 144 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 145 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 147 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_0
# 149 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_POKE_DOLL
# 150 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_2
# 171 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_2_1:
# 174 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_2_2:
# 152 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_1, MSGBOX_YESNO
# 153 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_5
# 168 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_2_1

WinterlilyHollow_MimeJr_2_5:
# 154 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_POKE_DOLL
# 156 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_2
# 157 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 158 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 159 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 6, WinterlilyHollow_MimeJr_1_Movement_0
# 160 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 161 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_3
# 163 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 6
# 164 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_2
# 165 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_3
	goto WinterlilyHollow_MimeJr_2_1


WinterlilyHollow_MimeJr_3::
# 179 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 180 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 181 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 183 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_0
# 184 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 185 "data//maps/WinterlilyHollow/scripts.pory"
	delay 30
# 186 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_1
# 188 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_LUXURY_BALL
# 189 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_2
# 209 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 210 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_7
WinterlilyHollow_MimeJr_3_1:
# 213 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_3_2:
# 191 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_2, MSGBOX_YESNO
# 192 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_5
# 205 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 206 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_6
	goto WinterlilyHollow_MimeJr_3_1

WinterlilyHollow_MimeJr_3_5:
# 193 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_LUXURY_BALL
# 195 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_3
# 196 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 1
# 197 "data//maps/WinterlilyHollow/scripts.pory"
	givemon SPECIES_MIME_JR, 25
# 198 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_4
# 199 "data//maps/WinterlilyHollow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 200 "data//maps/WinterlilyHollow/scripts.pory"
	waitfanfare
# 201 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_3
# 202 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HOLLOW_MIMEJR
# 203 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_5
	goto WinterlilyHollow_MimeJr_3_1


WinterlilyHollow_Froslass::
# 219 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 220 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 221 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_FROSLASS, CRY_MODE_NORMAL
# 222 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Froslass_Text_0
# 223 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_Sneasler::
# 227 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 228 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 229 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 230 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_0
# 231 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_NPC_SurfMan::
# 236 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 237 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 239 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_WINTERLILY_HOLLOW_SURF, WinterlilyHollow_NPC_SurfMan_2
WinterlilyHollow_NPC_SurfMan_1:
# 243 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_1, MSGBOX_YESNO
# 245 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfMan_5
# 250 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 251 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfMan_8
# 256 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_4, MSGBOX_SIGN
# 257 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_5
# 258 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM05
# 259 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_6
# 261 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_WINTERLILY_HOLLOW_SURF
	return

WinterlilyHollow_NPC_SurfMan_2:
# 240 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_0
	goto WinterlilyHollow_NPC_SurfMan_1

WinterlilyHollow_NPC_SurfMan_5:
# 246 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_2, MSGBOX_NPC
	end

WinterlilyHollow_NPC_SurfMan_8:
# 252 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_3, MSGBOX_NPC
	end


WinterlilyHollow_NPC_SurfManAlt::
# 265 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 266 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 267 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfManAlt_Text_0, MSGBOX_YESNO
# 268 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_2
WinterlilyHollow_NPC_SurfManAlt_1:
# 272 "data//maps/WinterlilyHollow/scripts.pory"
	special ChoosePartyMon
# 273 "data//maps/WinterlilyHollow/scripts.pory"
	waitstate
# 274 "data//maps/WinterlilyHollow/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 275 "data//maps/WinterlilyHollow/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 276 "data//maps/WinterlilyHollow/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 278 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, SPECIES_GLIMMET
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_5
WinterlilyHollow_NPC_SurfManAlt_4:
# 281 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, SPECIES_GLIMMORA
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_8
WinterlilyHollow_NPC_SurfManAlt_7:
# 285 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_SurfManAlt_2:
# 269 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfManAlt_Text_1
	goto WinterlilyHollow_NPC_SurfManAlt_1

WinterlilyHollow_NPC_SurfManAlt_5:
# 279 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM05
	goto WinterlilyHollow_NPC_SurfManAlt_4

WinterlilyHollow_NPC_SurfManAlt_8:
# 282 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM05
	goto WinterlilyHollow_NPC_SurfManAlt_7


WinterlilyHollow_NPC_Miner::
# 302 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 303 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 304 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_0, MSGBOX_YESNO
# 306 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_2
# 315 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_2
WinterlilyHollow_NPC_Miner_1:
# 317 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 3, WinterlilyHollow_NPC_Miner_Movement_0
# 318 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 320 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_Miner_2:
# 307 "data//maps/WinterlilyHollow/scripts.pory"
	checkmoney 500
# 309 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_5
# 312 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_1
	goto WinterlilyHollow_NPC_Miner_1

WinterlilyHollow_NPC_Miner_5:
# 310 "data//maps/WinterlilyHollow/scripts.pory"
	special StartMining
	goto WinterlilyHollow_NPC_Miner_1


# 21 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_0:
# 21 "data//maps/WinterlilyHollow/scripts.pory"
	walk_down
# 21 "data//maps/WinterlilyHollow/scripts.pory"
	emote_exclamation_mark
	step_end

# 25 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_1:
# 25 "data//maps/WinterlilyHollow/scripts.pory"
	walk_down
# 25 "data//maps/WinterlilyHollow/scripts.pory"
	walk_down
	step_end

# 32 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_2:
# 32 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 32 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 32 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 32 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 32 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
	step_end

# 66 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Red_Movement_0:
# 66 "data//maps/WinterlilyHollow/scripts.pory"
	face_down
	step_end

# 121 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_MimeJr_1_Movement_0:
# 121 "data//maps/WinterlilyHollow/scripts.pory"
	fly_up
	step_end

# 317 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Miner_Movement_0:
# 317 "data//maps/WinterlilyHollow/scripts.pory"
	face_right
	step_end

WinterlilyHollow_OnFrame_Text_0:
# 23 "data//maps/WinterlilyHollow/scripts.pory"
	.string "VINIEL: Ah, it's you! The enemy of my\n"
	.string "enemy!$"

WinterlilyHollow_OnFrame_Text_1:
# 27 "data//maps/WinterlilyHollow/scripts.pory"
	.string "VINIEL: Ampharos and I took all those\n"
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
# 30 "data//maps/WinterlilyHollow/scripts.pory"
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
# 64 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Hello again, trainer! The gym is closed\n"
	.string "right now since the leader's gone up the\l"
	.string "mountain trying to fight some bad\l"
	.string "types that showed up.$"

WinterlilyHollow_NPC1_Text_0:
# 73 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Is Viniel going to be able to handle all\n"
	.string "those Team Somber grunts alone? I wish\l"
	.string "we could help but he's far stronger\l"
	.string "than any of us. We'd only get in the way!$"

WinterlilyHollow_NPC1_Text_1:
# 75 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Winterlily Hollow is so remote that we\n"
	.string "don't even get electricity! Viniel's\l"
	.string "Pokémon powers this town.$"

WinterlilyHollow_NPC2_Text_0:
# 81 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mom told me to stay inside the town\n"
	.string "because some bad guys showed up, so I'm\l"
	.string "playing here.$"

WinterlilyHollow_NPC2_Text_1:
# 83 "data//maps/WinterlilyHollow/scripts.pory"
	.string "$"

WinterlilyHollow_NPC3_Text_0:
# 89 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Visitors are rare here. You must be\n"
	.string "brave - or lost.$"

WinterlilyHollow_NPC4_Text_0:
# 97 "data//maps/WinterlilyHollow/scripts.pory"
	.string "A Team Somber grunt accosted me, so I\n"
	.string "taught the young fool a lesson! After\l"
	.string "that, he threw away his Pokémon saying\l"
	.string "it was too weak!$"

WinterlilyHollow_MimeJr_1_Text_0:
# 109 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "Mime Jr. is bawling!\p"
	.string "Can it be soothed somehow?$"

WinterlilyHollow_MimeJr_1_Text_1:
# 114 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give Mime Jr. a Soothe Bell?$"

WinterlilyHollow_MimeJr_1_Text_2:
# 118 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. takes the Soothe Bell and\n"
	.string "shakes it...it chimes softly.\p"
	.string "Mime Jr. smiles at you.$"

WinterlilyHollow_MimeJr_1_Text_3:
# 123 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go?$"

WinterlilyHollow_MimeJr_2_Text_0:
# 147 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "Mime Jr. looks sad...maybe it wants a doll\l"
	.string "to play with?$"

WinterlilyHollow_MimeJr_2_Text_1:
# 152 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give Mime Jr. a Pokeshi Doll?$"

WinterlilyHollow_MimeJr_2_Text_2:
# 156 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. takes the Pokeshi Doll and\n"
	.string "plays with it...\p"
	.string "Mime Jr. smiles at you.$"

WinterlilyHollow_MimeJr_2_Text_3:
# 161 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go now?$"

WinterlilyHollow_MimeJr_3_Text_0:
# 183 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. is no longer crying! It's looking\n"
	.string "at its own reflection in the water\l"
	.string "instead...maybe it's pondering its\l"
	.string "future. Understandable, given that its\l"
	.string "last Trainer treated it so badly.$"

WinterlilyHollow_MimeJr_3_Text_1:
# 186 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. looks at you.\p"
	.string "...\p"
	.string "Does Mime Jr. want to join the party?$"

WinterlilyHollow_MimeJr_3_Text_2:
# 191 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Catch Mime Jr. in a Luxury Ball?$"

WinterlilyHollow_MimeJr_3_Text_3:
# 195 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. doesn't wait for you to catch it\n"
	.string "- it leaps into the Luxury Ball on its\l"
	.string "own!.$"

WinterlilyHollow_MimeJr_3_Text_4:
# 198 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. joined {PLAYER}'s party!$"

WinterlilyHollow_MimeJr_3_Text_5:
# 203 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Welcome to the team, Mime Jr.! You'll be\n"
	.string "happy withh all your new friends!$"

WinterlilyHollow_MimeJr_3_Text_6:
# 206 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. looks hurt. It goes back to\n"
	.string "staring at its reflection$"

WinterlilyHollow_MimeJr_3_Text_7:
# 210 "data//maps/WinterlilyHollow/scripts.pory"
	.string "...Mime Jr. goes back to staring at the\n"
	.string "water. Maybe it needs a comforting\l"
	.string "Pokeball to be in.$"

WinterlilyHollow_Froslass_Text_0:
# 222 "data//maps/WinterlilyHollow/scripts.pory"
	.string "What is Froslass circling for?$"

WinterlilyHollow_Sneasler_Text_0:
# 230 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sneasler seems to be trying to dig into\n"
	.string "the wall with limited success.\p"
	.string "Don't give up, Sneasler!$"

WinterlilyHollow_NPC_SurfMan_Text_0:
# 240 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ivy River takes you straight down to\n"
	.string "Pelluca City. Far better than trekking\l"
	.string "down Mt. Mirroh!$"

WinterlilyHollow_NPC_SurfMan_Text_1:
# 243 "data//maps/WinterlilyHollow/scripts.pory"
	.string "I surfed up here through the Ivy River.\n"
	.string "Since I'm settling here, I don't need\l"
	.string "the HM any more. What I need instead is\l"
	.string "a Heart Scale to decorate my room. I'd\l"
	.string "be happy to trade my HM with anyone who\l"
	.string "can give me a Heart Scale. Have you got\l"
	.string "one?$"

WinterlilyHollow_NPC_SurfMan_Text_2:
# 246 "data//maps/WinterlilyHollow/scripts.pory"
	.string "My search continues!$"

WinterlilyHollow_NPC_SurfMan_Text_3:
# 252 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Hey, you don't have any Heart Scales!$"

WinterlilyHollow_NPC_SurfMan_Text_4:
# 256 "data//maps/WinterlilyHollow/scripts.pory"
	.string "{PLAYER} gave the man a Heart Scale$"

WinterlilyHollow_NPC_SurfMan_Text_5:
# 257 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Thank you! This is just what I wanted.\n"
	.string "As promised, here you go.$"

WinterlilyHollow_NPC_SurfMan_Text_6:
# 259 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't need to teach your Pokemon\n"
	.string "the move. Any compatible Pokemon can\l"
	.string "use it on any water body!$"

WinterlilyHollow_NPC_SurfManAlt_Text_0:
# 267 "data//maps/WinterlilyHollow/scripts.pory"
	.string "When I was younger, I once encountered\n"
	.string "a strange Pokemon in the Mirroh\l"
	.string "Caverns. It was shaped like a blue plant\l"
	.string "and scattered poisonous spikes\l"
	.string "everywhere! I'd like to see that\l"
	.string "Pokemon again. Do you have such a\l"
	.string "Pokemon?$"

WinterlilyHollow_NPC_SurfManAlt_Text_1:
# 269 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ah. My search continues then.$"

WinterlilyHollow_NPC_Miner_Text_0:
# 304 "data//maps/WinterlilyHollow/scripts.pory"
	.string "See all these crystals on the walls? I'm\n"
	.string "trying to dig it up. Wanna try? You can\l"
	.string "borrow my spare pickaxe, but it'll cost\l"
	.string "you 500.$"

WinterlilyHollow_NPC_Miner_Text_1:
# 312 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't have enough money.$"

WinterlilyHollow_NPC_Miner_Text_2:
# 315 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You can dig up some great stuff, you\n"
	.string "know?$"
