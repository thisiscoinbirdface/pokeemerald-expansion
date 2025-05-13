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
# 80 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_1, MSGBOX_NPC
WinterlilyHollow_NPC1_1:
	end

WinterlilyHollow_NPC1_2:
# 78 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC1_1


WinterlilyHollow_NPC2::
# 85 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC2_2
# 88 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_1, MSGBOX_NPC
WinterlilyHollow_NPC2_1:
	end

WinterlilyHollow_NPC2_2:
# 86 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC2_1


WinterlilyHollow_NPC3::
# 93 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC3_2
# 96 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0, MSGBOX_NPC
WinterlilyHollow_NPC3_1:
	end

WinterlilyHollow_NPC3_2:
# 94 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC3_1


WinterlilyHollow_NPC4::
# 101 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC4_2
# 104 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC4_Text_0, MSGBOX_NPC
WinterlilyHollow_NPC4_1:
	end

WinterlilyHollow_NPC4_2:
# 102 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC4_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC4_1


WinterlilyHollow_MimeJr_1::
# 110 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 111 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 112 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 114 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_0
# 116 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_SOOTHE_BELL
# 117 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_2
# 140 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_1_1:
# 143 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_1_2:
# 119 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_1, MSGBOX_YESNO
# 120 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_5
# 137 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_1_1

WinterlilyHollow_MimeJr_1_5:
# 121 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_SOOTHE_BELL
# 123 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_2
# 124 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 125 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 126 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_MIME1, WinterlilyHollow_MimeJr_1_Movement_0
# 127 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 128 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_3
# 131 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject LOCALID_MIME1
# 132 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_1
# 133 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_2
	goto WinterlilyHollow_MimeJr_1_1


WinterlilyHollow_MimeJr_2::
# 148 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 149 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 150 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 152 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_0
# 154 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_POKE_DOLL
# 155 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_2
# 176 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_2_1:
# 179 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_2_2:
# 157 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_1, MSGBOX_YESNO
# 158 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_5
# 173 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_2_1

WinterlilyHollow_MimeJr_2_5:
# 159 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_POKE_DOLL
# 161 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_2
# 162 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 163 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 164 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_MIME2, WinterlilyHollow_MimeJr_1_Movement_0
# 165 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 166 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_3
# 168 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject LOCALID_MIME2
# 169 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_2
# 170 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_3
	goto WinterlilyHollow_MimeJr_2_1


WinterlilyHollow_MimeJr_3::
# 184 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 185 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 186 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 188 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_0
# 189 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 190 "data//maps/WinterlilyHollow/scripts.pory"
	delay 30
# 191 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_1
# 193 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_LUXURY_BALL
# 194 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_2
# 214 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 215 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_7
WinterlilyHollow_MimeJr_3_1:
# 218 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_3_2:
# 196 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_2, MSGBOX_YESNO
# 197 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_5
# 210 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 211 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_6
	goto WinterlilyHollow_MimeJr_3_1

WinterlilyHollow_MimeJr_3_5:
# 198 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_LUXURY_BALL
# 200 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_3
# 201 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 1
# 202 "data//maps/WinterlilyHollow/scripts.pory"
	givemon SPECIES_MIME_JR, 25
# 203 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_4
# 204 "data//maps/WinterlilyHollow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 205 "data//maps/WinterlilyHollow/scripts.pory"
	waitfanfare
# 206 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_3
# 207 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HOLLOW_MIMEJR
# 208 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_5
	goto WinterlilyHollow_MimeJr_3_1


WinterlilyHollow_Froslass::
# 224 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNOVER, CRY_MODE_NORMAL
# 225 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Froslass_Text_0, MSGBOX_NPC
	end


WinterlilyHollow_Sneasler::
# 229 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 230 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_0, MSGBOX_YESNO
# 232 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_Sneasler_2
WinterlilyHollow_Sneasler_1:
# 235 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_Sneasler_2:
# 233 "data//maps/WinterlilyHollow/scripts.pory"
	warp MAP_MIRROH_INTERIOR_B1F, 16, 68
	goto WinterlilyHollow_Sneasler_1


MirrohInterior_Sneasler::
# 240 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 241 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_0, MSGBOX_YESNO
# 243 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohInterior_Sneasler_2
MirrohInterior_Sneasler_1:
# 246 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

MirrohInterior_Sneasler_2:
# 244 "data//maps/WinterlilyHollow/scripts.pory"
	warp MAP_WINTERLILY_HOLLOW, 38, 16
	goto MirrohInterior_Sneasler_1


WinterlilyHollow_NPC_SurfMan::
# 268 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_0, MSGBOX_NPC
# 269 "data//maps/WinterlilyHollow/scripts.pory"
	end
# 272 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 273 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 275 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_WINTERLILY_HOLLOW_SURF, WinterlilyHollow_NPC_SurfMan_2
WinterlilyHollow_NPC_SurfMan_1:
# 279 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_2, MSGBOX_YESNO
# 281 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfMan_5
# 286 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 287 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfMan_8
# 292 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_5, MSGBOX_SIGN
# 293 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_6
# 294 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM03
# 295 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_7
# 297 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_WINTERLILY_HOLLOW_SURF
	return

WinterlilyHollow_NPC_SurfMan_2:
# 276 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_1
	goto WinterlilyHollow_NPC_SurfMan_1

WinterlilyHollow_NPC_SurfMan_5:
# 282 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_3, MSGBOX_NPC
	end

WinterlilyHollow_NPC_SurfMan_8:
# 288 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_4, MSGBOX_NPC
	end


WinterlilyHollow_NPC_SurfManAlt::
# 301 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 302 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 303 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfManAlt_Text_0, MSGBOX_YESNO
# 304 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_2
WinterlilyHollow_NPC_SurfManAlt_1:
# 308 "data//maps/WinterlilyHollow/scripts.pory"
	special ChoosePartyMon
# 309 "data//maps/WinterlilyHollow/scripts.pory"
	waitstate
# 310 "data//maps/WinterlilyHollow/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 311 "data//maps/WinterlilyHollow/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 312 "data//maps/WinterlilyHollow/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 314 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, SPECIES_GLIMMET
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_5
WinterlilyHollow_NPC_SurfManAlt_4:
# 317 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, SPECIES_GLIMMORA
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_8
WinterlilyHollow_NPC_SurfManAlt_7:
# 321 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_SurfManAlt_2:
# 305 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfManAlt_Text_1
	goto WinterlilyHollow_NPC_SurfManAlt_1

WinterlilyHollow_NPC_SurfManAlt_5:
# 315 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM05
	goto WinterlilyHollow_NPC_SurfManAlt_4

WinterlilyHollow_NPC_SurfManAlt_8:
# 318 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM05
	goto WinterlilyHollow_NPC_SurfManAlt_7


WinterlilyHollow_NPC_Miner::
# 338 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 339 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 340 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_0, MSGBOX_YESNO
# 342 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_2
# 351 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_2
WinterlilyHollow_NPC_Miner_1:
# 353 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 3, WinterlilyHollow_NPC_Miner_Movement_0
# 354 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 356 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_Miner_2:
# 343 "data//maps/WinterlilyHollow/scripts.pory"
	checkmoney 500
# 345 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_5
# 348 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_1
	goto WinterlilyHollow_NPC_Miner_1

WinterlilyHollow_NPC_Miner_5:
# 346 "data//maps/WinterlilyHollow/scripts.pory"
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

# 126 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_MimeJr_1_Movement_0:
# 126 "data//maps/WinterlilyHollow/scripts.pory"
	fly_up
	step_end

# 353 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Miner_Movement_0:
# 353 "data//maps/WinterlilyHollow/scripts.pory"
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
	.string "Is Viniel going to be able to handle all\n"
	.string "those Team Somber grunts alone? I wish\l"
	.string "we could help but he's far stronger\l"
	.string "than any of us. We'd only get in the way!$"

WinterlilyHollow_NPC1_Text_1:
# 80 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Winterlily Hollow is so remote that we\n"
	.string "don't even get electricity! Viniel's\l"
	.string "Pokémon powers this town.$"

WinterlilyHollow_NPC2_Text_0:
# 86 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mom told me to stay inside the town\n"
	.string "because some bad guys showed up, so I'm\l"
	.string "playing here.$"

WinterlilyHollow_NPC2_Text_1:
# 88 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mom told me never to go into Ivy River!\n"
	.string "She says kids my age go missing there.\l"
	.string "So of course I'm gonna go!\p"
	.string "...\p"
	.string "But only when Mom's not looking.$"

WinterlilyHollow_NPC3_Text_0:
# 94 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Did you come from Ivy River or Mt.\n"
	.string "Mirroh? Of course you didn't come from\l"
	.string "Ivy River - nobody goes there.$"

WinterlilyHollow_NPC4_Text_0:
# 102 "data//maps/WinterlilyHollow/scripts.pory"
	.string "A Team Somber grunt accosted me, so I\n"
	.string "taught the young fool a lesson! After\l"
	.string "that, he threw away his Pokémon saying\l"
	.string "it was too weak!$"

WinterlilyHollow_MimeJr_1_Text_0:
# 114 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "Mime Jr. is bawling!\p"
	.string "Can it be soothed somehow?$"

WinterlilyHollow_MimeJr_1_Text_1:
# 119 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give Mime Jr. a Soothe Bell?$"

WinterlilyHollow_MimeJr_1_Text_2:
# 123 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. takes the Soothe Bell and\n"
	.string "shakes it...it chimes softly.\p"
	.string "Mime Jr. smiles at you.$"

WinterlilyHollow_MimeJr_1_Text_3:
# 128 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go?$"

WinterlilyHollow_MimeJr_2_Text_0:
# 152 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "Mime Jr. looks sad...maybe it wants a doll\l"
	.string "to play with?$"

WinterlilyHollow_MimeJr_2_Text_1:
# 157 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give Mime Jr. a Pokeshi Doll?$"

WinterlilyHollow_MimeJr_2_Text_2:
# 161 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. takes the Pokeshi Doll and\n"
	.string "plays with it...\p"
	.string "Mime Jr. smiles at you.$"

WinterlilyHollow_MimeJr_2_Text_3:
# 166 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go now?$"

WinterlilyHollow_MimeJr_3_Text_0:
# 188 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. is no longer crying! It's looking\n"
	.string "at its own reflection in the water\l"
	.string "instead...maybe it's pondering its\l"
	.string "future. Understandable, given that its\l"
	.string "last Trainer treated it so badly.$"

WinterlilyHollow_MimeJr_3_Text_1:
# 191 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. looks at you.\p"
	.string "...\p"
	.string "Does Mime Jr. want to join the party?$"

WinterlilyHollow_MimeJr_3_Text_2:
# 196 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Catch Mime Jr. in a Luxury Ball?$"

WinterlilyHollow_MimeJr_3_Text_3:
# 200 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. doesn't wait for you to catch it\n"
	.string "- it leaps into the Luxury Ball on its\l"
	.string "own!.$"

WinterlilyHollow_MimeJr_3_Text_4:
# 203 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. joined {PLAYER}'s party!$"

WinterlilyHollow_MimeJr_3_Text_5:
# 208 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Welcome to the team, Mime Jr.! You'll be\n"
	.string "happy withh all your new friends!$"

WinterlilyHollow_MimeJr_3_Text_6:
# 211 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. looks hurt. It goes back to\n"
	.string "staring at its reflection$"

WinterlilyHollow_MimeJr_3_Text_7:
# 215 "data//maps/WinterlilyHollow/scripts.pory"
	.string "...Mime Jr. goes back to staring at the\n"
	.string "water. Maybe it needs a comforting Poké\l"
	.string "Ball to be in.$"

WinterlilyHollow_Froslass_Text_0:
# 225 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Snover is getting dizzy...what is it\n"
	.string "circling for?$"

WinterlilyHollow_Sneasler_Text_0:
# 230 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sneasler is digging into the wall...\n"
	.string "There's a hole!\p"
	.string "Follow Sneasler into the hole?$"

WinterlilyHollow_NPC_SurfMan_Text_0:
# 268 "data//maps/WinterlilyHollow/scripts.pory"
	.string "If you surf through Lily Pond, you'll\n"
	.string "reach the Ivy River. Head down it and\l"
	.string "you'll reach Pelluca City!$"

WinterlilyHollow_NPC_SurfMan_Text_1:
# 276 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ivy River takes you straight down to\n"
	.string "Pelluca City. Far better than trekking\l"
	.string "down Mt. Mirroh!$"

WinterlilyHollow_NPC_SurfMan_Text_2:
# 279 "data//maps/WinterlilyHollow/scripts.pory"
	.string "I surfed up here through the Ivy River.\n"
	.string "Since I'm settling here, I don't need\l"
	.string "the HM any more. What I need instead is\l"
	.string "a Heart Scale to decorate my room. I'd\l"
	.string "be happy to trade my HM with anyone who\l"
	.string "can give me a Heart Scale. Have you got\l"
	.string "one?$"

WinterlilyHollow_NPC_SurfMan_Text_3:
# 282 "data//maps/WinterlilyHollow/scripts.pory"
	.string "My search continues!$"

WinterlilyHollow_NPC_SurfMan_Text_4:
# 288 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Hey, you don't have any Heart Scales!$"

WinterlilyHollow_NPC_SurfMan_Text_5:
# 292 "data//maps/WinterlilyHollow/scripts.pory"
	.string "{PLAYER} gave the man a Heart Scale$"

WinterlilyHollow_NPC_SurfMan_Text_6:
# 293 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Thank you! This is just what I wanted.\n"
	.string "As promised, here you go.$"

WinterlilyHollow_NPC_SurfMan_Text_7:
# 295 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't need to teach your Pokémon\n"
	.string "the move. Any compatible Pokémon can\l"
	.string "use it on any water body!$"

WinterlilyHollow_NPC_SurfManAlt_Text_0:
# 303 "data//maps/WinterlilyHollow/scripts.pory"
	.string "When I was younger, I once encountered\n"
	.string "a strange Pokémon in the Mirroh\l"
	.string "Caverns. It was shaped like a blue plant\l"
	.string "and scattered poisonous spikes\l"
	.string "everywhere! I'd like to see that\l"
	.string "Pokémon again. Do you have such a\l"
	.string "Pokémon?$"

WinterlilyHollow_NPC_SurfManAlt_Text_1:
# 305 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ah. My search continues then.$"

WinterlilyHollow_NPC_Miner_Text_0:
# 340 "data//maps/WinterlilyHollow/scripts.pory"
	.string "See all these crystals on the walls? I'm\n"
	.string "trying to dig it up. Wanna try? You can\l"
	.string "borrow my spare pickaxe, but it'll cost\l"
	.string "you 500.$"

WinterlilyHollow_NPC_Miner_Text_1:
# 348 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't have enough money.$"

WinterlilyHollow_NPC_Miner_Text_2:
# 351 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You can dig up some great stuff, you\n"
	.string "know?$"
