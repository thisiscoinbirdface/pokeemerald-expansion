# 1 "data//maps/WinterlilyHollow/scripts.pory"

# 2 "data//maps/WinterlilyHollow/scripts.pory"
    .set LOCALID_VINIEL, 10
# 3 "data//maps/WinterlilyHollow/scripts.pory"
    .set LOCALID_MIME1, 9
# 4 "data//maps/WinterlilyHollow/scripts.pory"
    .set LOCALID_MIME2, 5

WinterlilyHollow_MapScripts::
# 11 "data//maps/WinterlilyHollow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WinterlilyHollow_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data//maps/WinterlilyHollow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WinterlilyHollow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WinterlilyHollow_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_VISITED_WINTERLILY_HOLLOW
	return

WinterlilyHollow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data//maps/WinterlilyHollow/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, WinterlilyHollow_OnFrame
	.2byte 0


WinterlilyHollow_OnFrame::
# 17 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_KORAIDON, WinterlilyHollow_OnFrame_1
	end

WinterlilyHollow_OnFrame_1:
# 18 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_WINTERLILY_VINIEL_CUTSCENE, WinterlilyHollow_OnFrame_4
# 21 "data//maps/WinterlilyHollow/scripts.pory"
	setobjectxyperm LOCALID_VINIEL, 38, 19
# 22 "data//maps/WinterlilyHollow/scripts.pory"
	setobjectxy LOCALID_VINIEL, 38, 19
# 23 "data//maps/WinterlilyHollow/scripts.pory"
	addobject LOCALID_VINIEL
# 26 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_0
# 27 "data//maps/WinterlilyHollow/scripts.pory"
	delay 24
# 28 "data//maps/WinterlilyHollow/scripts.pory"
	speakername WinterlilyHollow_OnFrame_Text_0
# 29 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_1
# 30 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 31 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_1
# 32 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 33 "data//maps/WinterlilyHollow/scripts.pory"
	speakername WinterlilyHollow_OnFrame_Text_0
# 34 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_2
# 35 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 36 "data//maps/WinterlilyHollow/scripts.pory"
	delay 24
# 37 "data//maps/WinterlilyHollow/scripts.pory"
	speakername WinterlilyHollow_OnFrame_Text_0
# 38 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_3
# 39 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 40 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_2
# 41 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 42 "data//maps/WinterlilyHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 43 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject LOCALID_VINIEL
# 44 "data//maps/WinterlilyHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 46 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_WINTERLILY_VINIEL_CUTSCENE
# 47 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	return

WinterlilyHollow_OnFrame_4:
	end


WinterlilyHollow_NPC_Red::
# 70 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 71 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 72 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Red_Text_0
# 73 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
# 74 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 4, WinterlilyHollow_NPC_Red_Movement_0
	end


WinterlilyHollow_NPC1::
# 80 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC1_2
# 84 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_1, MSGBOX_NPC
WinterlilyHollow_NPC1_1:
	end

WinterlilyHollow_NPC1_2:
# 81 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC1_1


WinterlilyHollow_NPC2::
# 89 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC2_2
# 92 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_1, MSGBOX_NPC
WinterlilyHollow_NPC2_1:
	end

WinterlilyHollow_NPC2_2:
# 90 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC2_1


WinterlilyHollow_NPC3::
# 97 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC3_2
# 100 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0, MSGBOX_NPC
WinterlilyHollow_NPC3_1:
	end

WinterlilyHollow_NPC3_2:
# 98 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC3_1


WinterlilyHollow_NPC4::
# 105 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC4_2
# 108 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC4_Text_0, MSGBOX_NPC
WinterlilyHollow_NPC4_1:
	end

WinterlilyHollow_NPC4_2:
# 106 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC4_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC4_1


WinterlilyHollow_MimeJr_1::
# 114 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 115 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 116 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 118 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_0
# 120 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_SOOTHE_BELL
# 121 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_2
# 144 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_1_1:
# 147 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_1_2:
# 123 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_1, MSGBOX_YESNO
# 124 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_5
# 141 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_1_1

WinterlilyHollow_MimeJr_1_5:
# 125 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_SOOTHE_BELL
# 127 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_2
# 128 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 129 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 130 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_MIME1, WinterlilyHollow_MimeJr_1_Movement_0
# 131 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 132 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_3
# 135 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject LOCALID_MIME1
# 136 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_1
# 137 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_2
	goto WinterlilyHollow_MimeJr_1_1


WinterlilyHollow_MimeJr_2::
# 152 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 153 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 154 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 156 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_0
# 158 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_POKE_DOLL
# 159 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_2
# 180 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_2_1:
# 183 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_2_2:
# 161 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_1, MSGBOX_YESNO
# 162 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_5
# 177 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_2_1

WinterlilyHollow_MimeJr_2_5:
# 163 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_POKE_DOLL
# 165 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_2
# 166 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 167 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 168 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_MIME2, WinterlilyHollow_MimeJr_1_Movement_0
# 169 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 170 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_3
# 172 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject LOCALID_MIME2
# 173 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_2
# 174 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_3
	goto WinterlilyHollow_MimeJr_2_1


WinterlilyHollow_MimeJr_3::
# 188 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 189 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 190 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 192 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_0
# 193 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 194 "data//maps/WinterlilyHollow/scripts.pory"
	delay 30
# 195 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_1
# 197 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_LUXURY_BALL
# 198 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_2
# 218 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 219 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_7
WinterlilyHollow_MimeJr_3_1:
# 222 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_3_2:
# 200 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_2, MSGBOX_YESNO
# 201 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_5
# 214 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 215 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_6
	goto WinterlilyHollow_MimeJr_3_1

WinterlilyHollow_MimeJr_3_5:
# 202 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_LUXURY_BALL
# 204 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_3
# 205 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 1
# 206 "data//maps/WinterlilyHollow/scripts.pory"
	givemon SPECIES_MIME_JR, 25
# 207 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_4
# 208 "data//maps/WinterlilyHollow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 209 "data//maps/WinterlilyHollow/scripts.pory"
	waitfanfare
# 210 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_3
# 211 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HOLLOW_MIMEJR
# 212 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_5
	goto WinterlilyHollow_MimeJr_3_1


WinterlilyHollow_Froslass::
# 228 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNOVER, CRY_MODE_NORMAL
# 229 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Froslass_Text_0, MSGBOX_NPC
	end


WinterlilyHollow_Sneasler::
# 233 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 234 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_0, MSGBOX_YESNO
# 236 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_Sneasler_2
WinterlilyHollow_Sneasler_1:
# 239 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_Sneasler_2:
# 237 "data//maps/WinterlilyHollow/scripts.pory"
	warp MAP_MIRROH_INTERIOR_B1F, 16, 68
	goto WinterlilyHollow_Sneasler_1


MirrohInterior_Sneasler::
# 244 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 245 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_0, MSGBOX_YESNO
# 247 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohInterior_Sneasler_2
MirrohInterior_Sneasler_1:
# 250 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

MirrohInterior_Sneasler_2:
# 248 "data//maps/WinterlilyHollow/scripts.pory"
	warp MAP_WINTERLILY_HOLLOW, 38, 16
	goto MirrohInterior_Sneasler_1


WinterlilyHollow_NPC_SurfMan::
# 272 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_0, MSGBOX_NPC
# 273 "data//maps/WinterlilyHollow/scripts.pory"
	end
# 276 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 277 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 279 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_WINTERLILY_HOLLOW_SURF, WinterlilyHollow_NPC_SurfMan_2
WinterlilyHollow_NPC_SurfMan_1:
# 283 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_2, MSGBOX_YESNO
# 285 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfMan_5
# 290 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 291 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfMan_8
# 296 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_5, MSGBOX_SIGN
# 297 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_6
# 298 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM03
# 299 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_7
# 301 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_WINTERLILY_HOLLOW_SURF
	return

WinterlilyHollow_NPC_SurfMan_2:
# 280 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_1
	goto WinterlilyHollow_NPC_SurfMan_1

WinterlilyHollow_NPC_SurfMan_5:
# 286 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_3, MSGBOX_NPC
	end

WinterlilyHollow_NPC_SurfMan_8:
# 292 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_4, MSGBOX_NPC
	end


WinterlilyHollow_NPC_SurfManAlt::
# 305 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 306 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 307 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfManAlt_Text_0, MSGBOX_YESNO
# 308 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_2
WinterlilyHollow_NPC_SurfManAlt_1:
# 312 "data//maps/WinterlilyHollow/scripts.pory"
	special ChoosePartyMon
# 313 "data//maps/WinterlilyHollow/scripts.pory"
	waitstate
# 314 "data//maps/WinterlilyHollow/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 315 "data//maps/WinterlilyHollow/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 316 "data//maps/WinterlilyHollow/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 318 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, SPECIES_GLIMMET
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_5
WinterlilyHollow_NPC_SurfManAlt_4:
# 321 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, SPECIES_GLIMMORA
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_8
WinterlilyHollow_NPC_SurfManAlt_7:
# 325 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_SurfManAlt_2:
# 309 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfManAlt_Text_1
	goto WinterlilyHollow_NPC_SurfManAlt_1

WinterlilyHollow_NPC_SurfManAlt_5:
# 319 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM05
	goto WinterlilyHollow_NPC_SurfManAlt_4

WinterlilyHollow_NPC_SurfManAlt_8:
# 322 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM05
	goto WinterlilyHollow_NPC_SurfManAlt_7


WinterlilyHollow_NPC_Miner::
# 342 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 343 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 344 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_0, MSGBOX_YESNO
# 346 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_2
# 355 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_2
WinterlilyHollow_NPC_Miner_1:
# 357 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 3, WinterlilyHollow_NPC_Miner_Movement_0
# 358 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 360 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_Miner_2:
# 347 "data//maps/WinterlilyHollow/scripts.pory"
	checkmoney 500
# 349 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_5
# 352 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_1
	goto WinterlilyHollow_NPC_Miner_1

WinterlilyHollow_NPC_Miner_5:
# 350 "data//maps/WinterlilyHollow/scripts.pory"
	special StartMining
	goto WinterlilyHollow_NPC_Miner_1


# 26 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_0:
# 26 "data//maps/WinterlilyHollow/scripts.pory"
	walk_down
# 26 "data//maps/WinterlilyHollow/scripts.pory"
	emote_exclamation_mark
	step_end

# 31 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_1:
# 31 "data//maps/WinterlilyHollow/scripts.pory"
	walk_down
# 31 "data//maps/WinterlilyHollow/scripts.pory"
	walk_down
	step_end

# 40 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_2:
# 40 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 40 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 40 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 40 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 40 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
	step_end

# 74 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Red_Movement_0:
# 74 "data//maps/WinterlilyHollow/scripts.pory"
	face_down
	step_end

# 130 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_MimeJr_1_Movement_0:
# 130 "data//maps/WinterlilyHollow/scripts.pory"
	fly_up
	step_end

# 357 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Miner_Movement_0:
# 357 "data//maps/WinterlilyHollow/scripts.pory"
	face_right
	step_end

WinterlilyHollow_OnFrame_Text_0:
# 28 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Viniel$"

WinterlilyHollow_OnFrame_Text_1:
# 29 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Aha - it's you! The enemy of my enemy!$"

WinterlilyHollow_OnFrame_Text_2:
# 34 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Manectric and I took all those grunts\n"
	.string "down! Hahaha! But when I went to the\l"
	.string "peak, everyone had gone!\p"
	.string "...\p"
	.string "So that's what's been going on.\n"
	.string "Poor Professor Tenebris.\p"
	.string "I heard about her disappearance on\n"
	.string "the news just the other day.\p"
	.string "News comes late here, since we're in\n"
	.string "such a remote corner of Cormoria.\p"
	.string "Professor Tenebris and I fought each\n"
	.string "other together several times when we\l"
	.string "were younger! I never lost though.\p"
	.string "Hahaha!$"

WinterlilyHollow_OnFrame_Text_3:
# 38 "data//maps/WinterlilyHollow/scripts.pory"
	.string "So what are you going to do next?\p"
	.string "...\p"
	.string "Oh, you're off the case? I understand.\n"
	.string "You're too young to keep up with a big\l"
	.string "criminal organisation like Team Somber.\p"
	.string "It's time for the grown-ups to\n"
	.string "take over, {PLAYER}.\p"
	.string "What's wrong, young champ?\p"
	.string "You look paralysed.\n"
	.string "Don't let the shock wear you down!\p"
	.string "I see you have five gym badges.\n"
	.string "Why not try to aim for all eight?\p"
	.string "Starting with me, of course. Hahaha!\p"
	.string "...\p"
	.string "You know, it's alright to fail. From what\n"
	.string "you told me, you've done great so far.\l"
	.string "Now let the detectives handle the rest.\p"
	.string "I hope I'll see you at my gym later!$"

WinterlilyHollow_NPC_Red_Text_0:
# 72 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Hello again, trainer! The gym is closed\n"
	.string "right now since the leader's gone up the\l"
	.string "mountain trying to fight some bad\l"
	.string "types that showed up.$"

WinterlilyHollow_NPC1_Text_0:
# 81 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Winterlily Hollow is so remote that we\n"
	.string "don't even get electricity!\p"
	.string "Viniel's Pokémon powers this town.$"

WinterlilyHollow_NPC1_Text_1:
# 84 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Viniel is handling all those Team Somber\n"
	.string "grunts alone?\p"
	.string "He's so strong and cool!$"

WinterlilyHollow_NPC2_Text_0:
# 90 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mom told me never to go into Ivy River!\n"
	.string "She says kids my age go missing there.\l"
	.string "So of course I'm gonna go!\p"
	.string "...\p"
	.string "But only when Mom's not looking.$"

WinterlilyHollow_NPC2_Text_1:
# 92 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mom told me to stay inside the town\n"
	.string "because some bad guys showed up, so I'm\l"
	.string "playing here.$"

WinterlilyHollow_NPC3_Text_0:
# 98 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Did you come from Ivy River or Mt.\n"
	.string "Mirroh? Of course you didn't come from\l"
	.string "Ivy River - nobody goes there.$"

WinterlilyHollow_NPC4_Text_0:
# 106 "data//maps/WinterlilyHollow/scripts.pory"
	.string "A Team Somber grunt accosted me, so\n"
	.string "I taught the young fool a lesson!\p"
	.string "After that, he threw away his Pokémon\n"
	.string "saying it was too weak.$"

WinterlilyHollow_MimeJr_1_Text_0:
# 118 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\p"
	.string "Mime Jr. is bawling!\p"
	.string "Can it be soothed somehow?$"

WinterlilyHollow_MimeJr_1_Text_1:
# 123 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give Mime Jr. a Soothe Bell?$"

WinterlilyHollow_MimeJr_1_Text_2:
# 127 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. takes the Soothe Bell and\n"
	.string "shakes it...it chimes softly.\p"
	.string "Mime Jr. smiles at you.$"

WinterlilyHollow_MimeJr_1_Text_3:
# 132 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go?$"

WinterlilyHollow_MimeJr_2_Text_0:
# 156 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\p"
	.string "Mime Jr. looks sad...maybe it wants\n"
	.string "a doll to play with?$"

WinterlilyHollow_MimeJr_2_Text_1:
# 161 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give Mime Jr. a Pokeshi Doll?$"

WinterlilyHollow_MimeJr_2_Text_2:
# 165 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. takes the Pokeshi Doll and\n"
	.string "plays with it...\p"
	.string "Mime Jr. smiles at you.$"

WinterlilyHollow_MimeJr_2_Text_3:
# 170 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go now?$"

WinterlilyHollow_MimeJr_3_Text_0:
# 192 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. is no longer crying!\p"
	.string "It's looking at the water...\n"
	.string "what's it thinking about?$"

WinterlilyHollow_MimeJr_3_Text_1:
# 195 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. looks at you.\p"
	.string "...\p"
	.string "Does Mime Jr. want to join the party?$"

WinterlilyHollow_MimeJr_3_Text_2:
# 200 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Catch Mime Jr. in a Luxury Ball?$"

WinterlilyHollow_MimeJr_3_Text_3:
# 204 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. doesn't wait for you - it leaps\n"
	.string "into the Luxury Ball on its own!$"

WinterlilyHollow_MimeJr_3_Text_4:
# 207 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. joined {PLAYER}'s party!$"

WinterlilyHollow_MimeJr_3_Text_5:
# 212 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Welcome to the team, Mime Jr.!\n"
	.string "You'll be happy with your new friends!$"

WinterlilyHollow_MimeJr_3_Text_6:
# 215 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. looks hurt. It goes back to\n"
	.string "staring at its reflection.$"

WinterlilyHollow_MimeJr_3_Text_7:
# 219 "data//maps/WinterlilyHollow/scripts.pory"
	.string "...Mime Jr. backs away. Maybe it needs a\n"
	.string "comforting Poké Ball to be in.$"

WinterlilyHollow_Froslass_Text_0:
# 229 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Snover is getting dizzy...what is it\n"
	.string "circling for?$"

WinterlilyHollow_Sneasler_Text_0:
# 234 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sneasler is digging into the wall...\n"
	.string "There's a hole!\p"
	.string "Follow Sneasler into the hole?$"

WinterlilyHollow_NPC_SurfMan_Text_0:
# 272 "data//maps/WinterlilyHollow/scripts.pory"
	.string "If you surf through Lily Pond,\n"
	.string "you'll reach the Ivy River.\p"
	.string "Head down the river and you'll\n"
	.string "eventually reach Pelluca City!$"

WinterlilyHollow_NPC_SurfMan_Text_1:
# 280 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ivy River takes you straight down to\n"
	.string "Pelluca City. Far better than trekking\l"
	.string "down Mt. Mirroh!$"

WinterlilyHollow_NPC_SurfMan_Text_2:
# 283 "data//maps/WinterlilyHollow/scripts.pory"
	.string "I surfed up here through the Ivy River.\n"
	.string "Since I'm settling here, I don't need\l"
	.string "the HM any more. What I need instead is\l"
	.string "a Heart Scale to decorate my room. I'd\l"
	.string "be happy to trade my HM with anyone who\l"
	.string "can give me a Heart Scale. Have you got\l"
	.string "one?$"

WinterlilyHollow_NPC_SurfMan_Text_3:
# 286 "data//maps/WinterlilyHollow/scripts.pory"
	.string "My search continues!$"

WinterlilyHollow_NPC_SurfMan_Text_4:
# 292 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Hey, you don't have any Heart Scales!$"

WinterlilyHollow_NPC_SurfMan_Text_5:
# 296 "data//maps/WinterlilyHollow/scripts.pory"
	.string "{PLAYER} gave the man a Heart Scale$"

WinterlilyHollow_NPC_SurfMan_Text_6:
# 297 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Thank you! This is just what I wanted.\n"
	.string "As promised, here you go.$"

WinterlilyHollow_NPC_SurfMan_Text_7:
# 299 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't need to teach your Pokémon\n"
	.string "the move. Any compatible Pokémon can\l"
	.string "use it on any water body!$"

WinterlilyHollow_NPC_SurfManAlt_Text_0:
# 307 "data//maps/WinterlilyHollow/scripts.pory"
	.string "When I was younger, I once encountered\n"
	.string "a strange Pokémon in the Mirroh\l"
	.string "Caverns. It was shaped like a blue plant\l"
	.string "and scattered poisonous spikes\l"
	.string "everywhere! I'd like to see that\l"
	.string "Pokémon again. Do you have such a\l"
	.string "Pokémon?$"

WinterlilyHollow_NPC_SurfManAlt_Text_1:
# 309 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ah. My search continues then.$"

WinterlilyHollow_NPC_Miner_Text_0:
# 344 "data//maps/WinterlilyHollow/scripts.pory"
	.string "See all these crystals on the walls?\n"
	.string "I'm trying to dig it up.\p"
	.string "Wanna try?\p"
	.string "You can borrow my spare pickaxe,\n"
	.string "but it'll cost you 500.$"

WinterlilyHollow_NPC_Miner_Text_1:
# 352 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't have enough money.$"

WinterlilyHollow_NPC_Miner_Text_2:
# 355 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Too bad, You can dig up some great\n"
	.string "stuff, you know?$"
