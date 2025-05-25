# 1 "data//maps/WinterlilyHollow/scripts.pory"

# 2 "data//maps/WinterlilyHollow/scripts.pory"
    .set LOCALID_VINIEL, 10
# 3 "data//maps/WinterlilyHollow/scripts.pory"
    .set LOCALID_MIME1, 9
# 4 "data//maps/WinterlilyHollow/scripts.pory"
    .set LOCALID_MIME2, 5

WinterlilyHollow_MapScripts::
# 8 "data//maps/WinterlilyHollow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WinterlilyHollow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WinterlilyHollow_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data//maps/WinterlilyHollow/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, WinterlilyHollow_OnFrame
	.2byte 0


WinterlilyHollow_OnFrame::
# 14 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_KORAIDON, WinterlilyHollow_OnFrame_1
	end

WinterlilyHollow_OnFrame_1:
# 15 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_WINTERLILY_VINIEL_CUTSCENE, WinterlilyHollow_OnFrame_4
# 18 "data//maps/WinterlilyHollow/scripts.pory"
	setobjectxyperm LOCALID_VINIEL, 38, 19
# 19 "data//maps/WinterlilyHollow/scripts.pory"
	setobjectxy LOCALID_VINIEL, 38, 19
# 20 "data//maps/WinterlilyHollow/scripts.pory"
	addobject LOCALID_VINIEL
# 23 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_0
# 24 "data//maps/WinterlilyHollow/scripts.pory"
	delay 24
# 25 "data//maps/WinterlilyHollow/scripts.pory"
	speakername WinterlilyHollow_OnFrame_Text_0
# 26 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_1
# 27 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 28 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_1
# 29 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 30 "data//maps/WinterlilyHollow/scripts.pory"
	speakername WinterlilyHollow_OnFrame_Text_0
# 31 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_2
# 32 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 33 "data//maps/WinterlilyHollow/scripts.pory"
	delay 24
# 34 "data//maps/WinterlilyHollow/scripts.pory"
	speakername WinterlilyHollow_OnFrame_Text_0
# 35 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_3
# 36 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 37 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_2
# 38 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 39 "data//maps/WinterlilyHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 40 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject LOCALID_VINIEL
# 41 "data//maps/WinterlilyHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 43 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_WINTERLILY_VINIEL_CUTSCENE
# 44 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	return

WinterlilyHollow_OnFrame_4:
	end


WinterlilyHollow_NPC_Red::
# 67 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 68 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 69 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Red_Text_0
# 70 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
# 71 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 4, WinterlilyHollow_NPC_Red_Movement_0
	end


WinterlilyHollow_NPC1::
# 77 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC1_2
# 81 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_1, MSGBOX_NPC
WinterlilyHollow_NPC1_1:
	end

WinterlilyHollow_NPC1_2:
# 78 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC1_1


WinterlilyHollow_NPC2::
# 86 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC2_2
# 89 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_1, MSGBOX_NPC
WinterlilyHollow_NPC2_1:
	end

WinterlilyHollow_NPC2_2:
# 87 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC2_1


WinterlilyHollow_NPC3::
# 94 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC3_2
# 97 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0, MSGBOX_NPC
WinterlilyHollow_NPC3_1:
	end

WinterlilyHollow_NPC3_2:
# 95 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC3_1


WinterlilyHollow_NPC4::
# 102 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC4_2
# 105 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC4_Text_0, MSGBOX_NPC
WinterlilyHollow_NPC4_1:
	end

WinterlilyHollow_NPC4_2:
# 103 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC4_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC4_1


WinterlilyHollow_MimeJr_1::
# 111 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 112 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 113 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 115 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_0
# 117 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_SOOTHE_BELL
# 118 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_2
# 141 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_1_1:
# 144 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_1_2:
# 120 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_1, MSGBOX_YESNO
# 121 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_5
# 138 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_1_1

WinterlilyHollow_MimeJr_1_5:
# 122 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_SOOTHE_BELL
# 124 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_2
# 125 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 126 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 127 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_MIME1, WinterlilyHollow_MimeJr_1_Movement_0
# 128 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 129 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_3
# 132 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject LOCALID_MIME1
# 133 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_1
# 134 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_2
	goto WinterlilyHollow_MimeJr_1_1


WinterlilyHollow_MimeJr_2::
# 149 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 150 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 151 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 153 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_0
# 155 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_POKE_DOLL
# 156 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_2
# 177 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_2_1:
# 180 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_2_2:
# 158 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_1, MSGBOX_YESNO
# 159 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_5
# 174 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_2_1

WinterlilyHollow_MimeJr_2_5:
# 160 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_POKE_DOLL
# 162 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_2
# 163 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 164 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 165 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_MIME2, WinterlilyHollow_MimeJr_1_Movement_0
# 166 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 167 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_3
# 169 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject LOCALID_MIME2
# 170 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_2
# 171 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_3
	goto WinterlilyHollow_MimeJr_2_1


WinterlilyHollow_MimeJr_3::
# 185 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 186 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 187 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 189 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_0
# 190 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 191 "data//maps/WinterlilyHollow/scripts.pory"
	delay 30
# 192 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_1
# 194 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_LUXURY_BALL
# 195 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_2
# 215 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 216 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_7
WinterlilyHollow_MimeJr_3_1:
# 219 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_3_2:
# 197 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_2, MSGBOX_YESNO
# 198 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_5
# 211 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 212 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_6
	goto WinterlilyHollow_MimeJr_3_1

WinterlilyHollow_MimeJr_3_5:
# 199 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_LUXURY_BALL
# 201 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_3
# 202 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 1
# 203 "data//maps/WinterlilyHollow/scripts.pory"
	givemon SPECIES_MIME_JR, 25
# 204 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_4
# 205 "data//maps/WinterlilyHollow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data//maps/WinterlilyHollow/scripts.pory"
	waitfanfare
# 207 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_3
# 208 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HOLLOW_MIMEJR
# 209 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_5
	goto WinterlilyHollow_MimeJr_3_1


WinterlilyHollow_Froslass::
# 225 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNOVER, CRY_MODE_NORMAL
# 226 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Froslass_Text_0, MSGBOX_NPC
	end


WinterlilyHollow_Sneasler::
# 230 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 231 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_0, MSGBOX_YESNO
# 233 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_Sneasler_2
WinterlilyHollow_Sneasler_1:
# 236 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_Sneasler_2:
# 234 "data//maps/WinterlilyHollow/scripts.pory"
	warp MAP_MIRROH_INTERIOR_B1F, 16, 68
	goto WinterlilyHollow_Sneasler_1


MirrohInterior_Sneasler::
# 241 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 242 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_0, MSGBOX_YESNO
# 244 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohInterior_Sneasler_2
MirrohInterior_Sneasler_1:
# 247 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

MirrohInterior_Sneasler_2:
# 245 "data//maps/WinterlilyHollow/scripts.pory"
	warp MAP_WINTERLILY_HOLLOW, 38, 16
	goto MirrohInterior_Sneasler_1


WinterlilyHollow_NPC_SurfMan::
# 269 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_0, MSGBOX_NPC
# 270 "data//maps/WinterlilyHollow/scripts.pory"
	end
# 273 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 274 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 276 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_WINTERLILY_HOLLOW_SURF, WinterlilyHollow_NPC_SurfMan_2
WinterlilyHollow_NPC_SurfMan_1:
# 280 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_2, MSGBOX_YESNO
# 282 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfMan_5
# 287 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 288 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfMan_8
# 293 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_5, MSGBOX_SIGN
# 294 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_6
# 295 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM03
# 296 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_7
# 298 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_WINTERLILY_HOLLOW_SURF
	return

WinterlilyHollow_NPC_SurfMan_2:
# 277 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_1
	goto WinterlilyHollow_NPC_SurfMan_1

WinterlilyHollow_NPC_SurfMan_5:
# 283 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_3, MSGBOX_NPC
	end

WinterlilyHollow_NPC_SurfMan_8:
# 289 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_4, MSGBOX_NPC
	end


WinterlilyHollow_NPC_SurfManAlt::
# 302 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 303 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 304 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfManAlt_Text_0, MSGBOX_YESNO
# 305 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_2
WinterlilyHollow_NPC_SurfManAlt_1:
# 309 "data//maps/WinterlilyHollow/scripts.pory"
	special ChoosePartyMon
# 310 "data//maps/WinterlilyHollow/scripts.pory"
	waitstate
# 311 "data//maps/WinterlilyHollow/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 312 "data//maps/WinterlilyHollow/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 313 "data//maps/WinterlilyHollow/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 315 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, SPECIES_GLIMMET
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_5
WinterlilyHollow_NPC_SurfManAlt_4:
# 318 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, SPECIES_GLIMMORA
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_8
WinterlilyHollow_NPC_SurfManAlt_7:
# 322 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_SurfManAlt_2:
# 306 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfManAlt_Text_1
	goto WinterlilyHollow_NPC_SurfManAlt_1

WinterlilyHollow_NPC_SurfManAlt_5:
# 316 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM05
	goto WinterlilyHollow_NPC_SurfManAlt_4

WinterlilyHollow_NPC_SurfManAlt_8:
# 319 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM05
	goto WinterlilyHollow_NPC_SurfManAlt_7


WinterlilyHollow_NPC_Miner::
# 339 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 340 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 341 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_0, MSGBOX_YESNO
# 343 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_2
# 352 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_2
WinterlilyHollow_NPC_Miner_1:
# 354 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 3, WinterlilyHollow_NPC_Miner_Movement_0
# 355 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 357 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_Miner_2:
# 344 "data//maps/WinterlilyHollow/scripts.pory"
	checkmoney 500
# 346 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_5
# 349 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_1
	goto WinterlilyHollow_NPC_Miner_1

WinterlilyHollow_NPC_Miner_5:
# 347 "data//maps/WinterlilyHollow/scripts.pory"
	special StartMining
	goto WinterlilyHollow_NPC_Miner_1


# 23 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_0:
# 23 "data//maps/WinterlilyHollow/scripts.pory"
	walk_down
# 23 "data//maps/WinterlilyHollow/scripts.pory"
	emote_exclamation_mark
	step_end

# 28 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_1:
# 28 "data//maps/WinterlilyHollow/scripts.pory"
	walk_down
# 28 "data//maps/WinterlilyHollow/scripts.pory"
	walk_down
	step_end

# 37 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_2:
# 37 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 37 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 37 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 37 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 37 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
	step_end

# 71 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Red_Movement_0:
# 71 "data//maps/WinterlilyHollow/scripts.pory"
	face_down
	step_end

# 127 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_MimeJr_1_Movement_0:
# 127 "data//maps/WinterlilyHollow/scripts.pory"
	fly_up
	step_end

# 354 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Miner_Movement_0:
# 354 "data//maps/WinterlilyHollow/scripts.pory"
	face_right
	step_end

WinterlilyHollow_OnFrame_Text_0:
# 25 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Viniel$"

WinterlilyHollow_OnFrame_Text_1:
# 26 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ah, it's you! The enemy of my enemy!$"

WinterlilyHollow_OnFrame_Text_2:
# 31 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ampharos and I took all those grunts\n"
	.string "down! Hahaha! But when I went to the\l"
	.string "peak, everyone had gone!\p"
	.string "...\p"
	.string "...\p"
	.string "So that's what's been going on. Poor\n"
	.string "Professor Tenebris. I'd heard about her\l"
	.string "disappearance on the news.\p"
	.string "News comes late here, since we're so\n"
	.string "remote.\p"
	.string "Professor Tenebris and I fought each\n"
	.string "other together several times when we\l"
	.string "were younger! I never lost though.\l"
	.string "Hahaha!$"

WinterlilyHollow_OnFrame_Text_3:
# 35 "data//maps/WinterlilyHollow/scripts.pory"
	.string "So what are you going to do next?\p"
	.string "...\p"
	.string "Oh, you're off the case? I understand.\n"
	.string "You're too young to keep up with a big\l"
	.string "criminal organisation like Team Somber.\l"
	.string "It's time for the grown-ups to take\l"
	.string "over.\p"
	.string "What's wrong, young champ? You look\n"
	.string "paralysed. Don't let the shock wear you\l"
	.string "down.\p"
	.string "I see you have five gym badges. Why not\n"
	.string "try to aim for all eight? Starting with\l"
	.string "me, of course. Hahaha!\p"
	.string "...\p"
	.string "You know, it's alright to fail. From what\n"
	.string "you told me, you've done great so far.\l"
	.string "Now let the detectives handle the rest.\p"
	.string "I hope I'll see you at my gym later!$"

WinterlilyHollow_NPC_Red_Text_0:
# 69 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Hello again, trainer! The gym is closed\n"
	.string "right now since the leader's gone up the\l"
	.string "mountain trying to fight some bad\l"
	.string "types that showed up.$"

WinterlilyHollow_NPC1_Text_0:
# 78 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Winterlily Hollow is so remote that we\n"
	.string "don't even get electricity!\p"
	.string "Viniel's Pokémon powers this town.$"

WinterlilyHollow_NPC1_Text_1:
# 81 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Viniel is handling all those Team Somber\n"
	.string "grunts alone?\p"
	.string "He's so strong and cool!$"

WinterlilyHollow_NPC2_Text_0:
# 87 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mom told me never to go into Ivy River!\n"
	.string "She says kids my age go missing there.\l"
	.string "So of course I'm gonna go!\p"
	.string "...\p"
	.string "But only when Mom's not looking.$"

WinterlilyHollow_NPC2_Text_1:
# 89 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mom told me to stay inside the town\n"
	.string "because some bad guys showed up, so I'm\l"
	.string "playing here.$"

WinterlilyHollow_NPC3_Text_0:
# 95 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Did you come from Ivy River or Mt.\n"
	.string "Mirroh? Of course you didn't come from\l"
	.string "Ivy River - nobody goes there.$"

WinterlilyHollow_NPC4_Text_0:
# 103 "data//maps/WinterlilyHollow/scripts.pory"
	.string "A Team Somber grunt accosted me, so I\n"
	.string "taught the young fool a lesson! After\l"
	.string "that, he threw away his Pokémon saying\l"
	.string "it was too weak!$"

WinterlilyHollow_MimeJr_1_Text_0:
# 115 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "Mime Jr. is bawling!\p"
	.string "Can it be soothed somehow?$"

WinterlilyHollow_MimeJr_1_Text_1:
# 120 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give Mime Jr. a Soothe Bell?$"

WinterlilyHollow_MimeJr_1_Text_2:
# 124 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. takes the Soothe Bell and\n"
	.string "shakes it...it chimes softly.\p"
	.string "Mime Jr. smiles at you.$"

WinterlilyHollow_MimeJr_1_Text_3:
# 129 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go?$"

WinterlilyHollow_MimeJr_2_Text_0:
# 153 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "Mime Jr. looks sad...maybe it wants a doll\l"
	.string "to play with?$"

WinterlilyHollow_MimeJr_2_Text_1:
# 158 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give Mime Jr. a Pokeshi Doll?$"

WinterlilyHollow_MimeJr_2_Text_2:
# 162 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. takes the Pokeshi Doll and\n"
	.string "plays with it...\p"
	.string "Mime Jr. smiles at you.$"

WinterlilyHollow_MimeJr_2_Text_3:
# 167 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go now?$"

WinterlilyHollow_MimeJr_3_Text_0:
# 189 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. is no longer crying! It's looking\n"
	.string "at its own reflection in the water\l"
	.string "instead...maybe it's pondering its\l"
	.string "future. Understandable, given that its\l"
	.string "last Trainer treated it so badly.$"

WinterlilyHollow_MimeJr_3_Text_1:
# 192 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. looks at you.\p"
	.string "...\p"
	.string "Does Mime Jr. want to join the party?$"

WinterlilyHollow_MimeJr_3_Text_2:
# 197 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Catch Mime Jr. in a Luxury Ball?$"

WinterlilyHollow_MimeJr_3_Text_3:
# 201 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. doesn't wait for you to catch it\n"
	.string "- it leaps into the Luxury Ball on its\l"
	.string "own!.$"

WinterlilyHollow_MimeJr_3_Text_4:
# 204 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. joined {PLAYER}'s party!$"

WinterlilyHollow_MimeJr_3_Text_5:
# 209 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Welcome to the team, Mime Jr.! You'll be\n"
	.string "happy withh all your new friends!$"

WinterlilyHollow_MimeJr_3_Text_6:
# 212 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. looks hurt. It goes back to\n"
	.string "staring at its reflection$"

WinterlilyHollow_MimeJr_3_Text_7:
# 216 "data//maps/WinterlilyHollow/scripts.pory"
	.string "...Mime Jr. goes back to staring at the\n"
	.string "water. Maybe it needs a comforting Poké\l"
	.string "Ball to be in.$"

WinterlilyHollow_Froslass_Text_0:
# 226 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Snover is getting dizzy...what is it\n"
	.string "circling for?$"

WinterlilyHollow_Sneasler_Text_0:
# 231 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sneasler is digging into the wall...\n"
	.string "There's a hole!\p"
	.string "Follow Sneasler into the hole?$"

WinterlilyHollow_NPC_SurfMan_Text_0:
# 269 "data//maps/WinterlilyHollow/scripts.pory"
	.string "If you surf through Lily Pond, you'll\n"
	.string "reach the Ivy River. Head down it and\l"
	.string "you'll reach Pelluca City!$"

WinterlilyHollow_NPC_SurfMan_Text_1:
# 277 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ivy River takes you straight down to\n"
	.string "Pelluca City. Far better than trekking\l"
	.string "down Mt. Mirroh!$"

WinterlilyHollow_NPC_SurfMan_Text_2:
# 280 "data//maps/WinterlilyHollow/scripts.pory"
	.string "I surfed up here through the Ivy River.\n"
	.string "Since I'm settling here, I don't need\l"
	.string "the HM any more. What I need instead is\l"
	.string "a Heart Scale to decorate my room. I'd\l"
	.string "be happy to trade my HM with anyone who\l"
	.string "can give me a Heart Scale. Have you got\l"
	.string "one?$"

WinterlilyHollow_NPC_SurfMan_Text_3:
# 283 "data//maps/WinterlilyHollow/scripts.pory"
	.string "My search continues!$"

WinterlilyHollow_NPC_SurfMan_Text_4:
# 289 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Hey, you don't have any Heart Scales!$"

WinterlilyHollow_NPC_SurfMan_Text_5:
# 293 "data//maps/WinterlilyHollow/scripts.pory"
	.string "{PLAYER} gave the man a Heart Scale$"

WinterlilyHollow_NPC_SurfMan_Text_6:
# 294 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Thank you! This is just what I wanted.\n"
	.string "As promised, here you go.$"

WinterlilyHollow_NPC_SurfMan_Text_7:
# 296 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't need to teach your Pokémon\n"
	.string "the move. Any compatible Pokémon can\l"
	.string "use it on any water body!$"

WinterlilyHollow_NPC_SurfManAlt_Text_0:
# 304 "data//maps/WinterlilyHollow/scripts.pory"
	.string "When I was younger, I once encountered\n"
	.string "a strange Pokémon in the Mirroh\l"
	.string "Caverns. It was shaped like a blue plant\l"
	.string "and scattered poisonous spikes\l"
	.string "everywhere! I'd like to see that\l"
	.string "Pokémon again. Do you have such a\l"
	.string "Pokémon?$"

WinterlilyHollow_NPC_SurfManAlt_Text_1:
# 306 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ah. My search continues then.$"

WinterlilyHollow_NPC_Miner_Text_0:
# 341 "data//maps/WinterlilyHollow/scripts.pory"
	.string "See all these crystals on the walls? I'm\n"
	.string "trying to dig it up. Wanna try? You can\l"
	.string "borrow my spare pickaxe, but it'll cost\l"
	.string "you 500.$"

WinterlilyHollow_NPC_Miner_Text_1:
# 349 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't have enough money.$"

WinterlilyHollow_NPC_Miner_Text_2:
# 352 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You can dig up some great stuff, you\n"
	.string "know?$"
