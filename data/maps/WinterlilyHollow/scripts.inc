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
	speakername WinterlilyHollow_OnFrame_Text_0
# 24 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_1
# 25 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 26 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_1
# 27 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 28 "data//maps/WinterlilyHollow/scripts.pory"
	speakername WinterlilyHollow_OnFrame_Text_0
# 29 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_2
# 30 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 31 "data//maps/WinterlilyHollow/scripts.pory"
	delay 24
# 32 "data//maps/WinterlilyHollow/scripts.pory"
	speakername WinterlilyHollow_OnFrame_Text_0
# 33 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_OnFrame_Text_3
# 34 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 35 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement LOCALID_VINIEL, WinterlilyHollow_OnFrame_Movement_2
# 36 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 37 "data//maps/WinterlilyHollow/scripts.pory"
	fadescreen FADE_TO_BLACK
# 38 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject LOCALID_VINIEL
# 39 "data//maps/WinterlilyHollow/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 41 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_WINTERLILY_VINIEL_CUTSCENE
# 42 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	return

WinterlilyHollow_OnFrame_4:
	end


WinterlilyHollow_NPC_Red::
# 65 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 66 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 67 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Red_Text_0
# 68 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
# 69 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 4, WinterlilyHollow_NPC_Red_Movement_0
	end


WinterlilyHollow_NPC1::
# 75 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC1_2
# 78 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_1, MSGBOX_NPC
WinterlilyHollow_NPC1_1:
	end

WinterlilyHollow_NPC1_2:
# 76 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC1_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC1_1


WinterlilyHollow_NPC2::
# 83 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC2_2
# 86 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_1
WinterlilyHollow_NPC2_1:
	end

WinterlilyHollow_NPC2_2:
# 84 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC2_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC2_1


WinterlilyHollow_NPC3::
# 91 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC3_2
# 94 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0, MSGBOX_NPC
WinterlilyHollow_NPC3_1:
	end

WinterlilyHollow_NPC3_2:
# 92 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC3_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC3_1


WinterlilyHollow_NPC4::
# 99 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_MIRROHPEAK_MOXIE_DEFEATED, WinterlilyHollow_NPC4_2
# 102 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC4_Text_0, MSGBOX_NPC
WinterlilyHollow_NPC4_1:
	end

WinterlilyHollow_NPC4_2:
# 100 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC4_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_NPC4_1


WinterlilyHollow_MimeJr_1::
# 108 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 109 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 110 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 112 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_0
# 114 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_SOOTHE_BELL
# 115 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_2
# 138 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_1_1:
# 141 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_1_2:
# 117 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_1, MSGBOX_YESNO
# 118 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_1_5
# 135 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_1_1

WinterlilyHollow_MimeJr_1_5:
# 119 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_SOOTHE_BELL
# 121 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_2
# 122 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 123 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 124 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 10, WinterlilyHollow_MimeJr_1_Movement_0
# 125 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 126 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_1_Text_3
# 129 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 10
# 130 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_1
# 131 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_2
	goto WinterlilyHollow_MimeJr_1_1


WinterlilyHollow_MimeJr_2::
# 146 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 147 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 148 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 150 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_0
# 152 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_POKE_DOLL
# 153 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_2
# 174 "data//maps/WinterlilyHollow/scripts.pory"
	release
WinterlilyHollow_MimeJr_2_1:
# 177 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_2_2:
# 155 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_1, MSGBOX_YESNO
# 156 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_2_5
# 171 "data//maps/WinterlilyHollow/scripts.pory"
	release
	goto WinterlilyHollow_MimeJr_2_1

WinterlilyHollow_MimeJr_2_5:
# 157 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_POKE_DOLL
# 159 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_2
# 160 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 161 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_HOLLOW_MIMEJR, 1
# 162 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 6, WinterlilyHollow_MimeJr_1_Movement_0
# 163 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 164 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_2_Text_3
# 166 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 6
# 167 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_2
# 168 "data//maps/WinterlilyHollow/scripts.pory"
	clearflag FLAG_HIDE_HOLLOW_MIMEJR_3
	goto WinterlilyHollow_MimeJr_2_1


WinterlilyHollow_MimeJr_3::
# 182 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 183 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 184 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_MIME_JR, CRY_MODE_NORMAL
# 186 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_0
# 187 "data//maps/WinterlilyHollow/scripts.pory"
	release
# 188 "data//maps/WinterlilyHollow/scripts.pory"
	delay 30
# 189 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_1
# 191 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_LUXURY_BALL
# 192 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_2
# 212 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 213 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_7
WinterlilyHollow_MimeJr_3_1:
# 216 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_MimeJr_3_2:
# 194 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_2, MSGBOX_YESNO
# 195 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_MimeJr_3_5
# 208 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 1, WinterlilyHollow_NPC_Red_Movement_0
# 209 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_6
	goto WinterlilyHollow_MimeJr_3_1

WinterlilyHollow_MimeJr_3_5:
# 196 "data//maps/WinterlilyHollow/scripts.pory"
	removeitem ITEM_LUXURY_BALL
# 198 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_3
# 199 "data//maps/WinterlilyHollow/scripts.pory"
	removeobject 1
# 200 "data//maps/WinterlilyHollow/scripts.pory"
	givemon SPECIES_MIME_JR, 25
# 201 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_4
# 202 "data//maps/WinterlilyHollow/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 203 "data//maps/WinterlilyHollow/scripts.pory"
	waitfanfare
# 204 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HIDE_HOLLOW_MIMEJR_3
# 205 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_HOLLOW_MIMEJR
# 206 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_MimeJr_3_Text_5
	goto WinterlilyHollow_MimeJr_3_1


WinterlilyHollow_Froslass::
# 222 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 223 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 224 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNOVER, CRY_MODE_NORMAL
# 225 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Froslass_Text_0
# 226 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end


WinterlilyHollow_Sneasler::
# 230 "data//maps/WinterlilyHollow/scripts.pory"
	playmoncry SPECIES_SNEASLER, CRY_MODE_NORMAL
# 231 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_WINTERLILY_SNEASLER, WinterlilyHollow_Sneasler_2
# 234 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_1
# 235 "data//maps/WinterlilyHollow/scripts.pory"
	goto WinterlilyHollow_Sneasler_Reward
WinterlilyHollow_Sneasler_1:
	end

WinterlilyHollow_Sneasler_2:
# 232 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Text_0, MSGBOX_NPC
	goto WinterlilyHollow_Sneasler_1


WinterlilyHollow_Sneasler_Reward::
# 241 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Reward_Text_0, MSGBOX_NPC
# 242 "data//maps/WinterlilyHollow/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, WinterlilyHollow_Sneasler_Reward_Text_1, WinterlilyHollow_Sneasler_Reward_Text_2
# 243 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_Sneasler_Reward_1
# 246 "data//maps/WinterlilyHollow/scripts.pory"
	goto WinterlilyHollow_Sneasler_Reward2
	return

WinterlilyHollow_Sneasler_Reward_1:
# 244 "data//maps/WinterlilyHollow/scripts.pory"
	goto WinterlilyHollow_Sneasler_Reward1
	return


WinterlilyHollow_Sneasler_Reward1::
# 251 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_0x8006, ITEM_FIRE_STONE
# 252 "data//maps/WinterlilyHollow/scripts.pory"
	showitemdescription
# 253 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Reward1_Text_0, MSGBOX_YESNO
# 254 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_Sneasler_Reward1_1
# 260 "data//maps/WinterlilyHollow/scripts.pory"
	hideitemdescription
# 261 "data//maps/WinterlilyHollow/scripts.pory"
	goto WinterlilyHollow_Sneasler_Reward
	return

WinterlilyHollow_Sneasler_Reward1_1:
# 255 "data//maps/WinterlilyHollow/scripts.pory"
	hideitemdescription
# 257 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 258 "data//maps/WinterlilyHollow/scripts.pory"
	goto WinterlilyHollow_Sneasler_Reward_End
	return


WinterlilyHollow_Sneasler_Reward2::
# 266 "data//maps/WinterlilyHollow/scripts.pory"
	setvar VAR_0x8006, ITEM_ICE_STONE
# 267 "data//maps/WinterlilyHollow/scripts.pory"
	showitemdescription
# 268 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Reward1_Text_0, MSGBOX_YESNO
# 269 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_Sneasler_Reward2_1
# 274 "data//maps/WinterlilyHollow/scripts.pory"
	hideitemdescription
# 275 "data//maps/WinterlilyHollow/scripts.pory"
	goto WinterlilyHollow_Sneasler_Reward
	return

WinterlilyHollow_Sneasler_Reward2_1:
# 270 "data//maps/WinterlilyHollow/scripts.pory"
	hideitemdescription
# 271 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_ICE_STONE
# 272 "data//maps/WinterlilyHollow/scripts.pory"
	goto WinterlilyHollow_Sneasler_Reward_End
	return


WinterlilyHollow_Sneasler_Reward_End::
# 280 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_WINTERLILY_SNEASLER
# 281 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_Sneasler_Reward_End_Text_0, MSGBOX_NPC
	end


WinterlilyHollow_NPC_SurfMan::
# 304 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 305 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 307 "data//maps/WinterlilyHollow/scripts.pory"
	goto_if_set FLAG_WINTERLILY_HOLLOW_SURF, WinterlilyHollow_NPC_SurfMan_2
WinterlilyHollow_NPC_SurfMan_1:
# 311 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_1, MSGBOX_YESNO
# 313 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfMan_5
# 318 "data//maps/WinterlilyHollow/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 319 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfMan_8
# 324 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_4, MSGBOX_SIGN
# 325 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_5
# 326 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM05
# 327 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_6
# 329 "data//maps/WinterlilyHollow/scripts.pory"
	setflag FLAG_WINTERLILY_HOLLOW_SURF
	return

WinterlilyHollow_NPC_SurfMan_2:
# 308 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_0
	goto WinterlilyHollow_NPC_SurfMan_1

WinterlilyHollow_NPC_SurfMan_5:
# 314 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_2, MSGBOX_NPC
	end

WinterlilyHollow_NPC_SurfMan_8:
# 320 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfMan_Text_3, MSGBOX_NPC
	end


WinterlilyHollow_NPC_SurfManAlt::
# 333 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 334 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 335 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfManAlt_Text_0, MSGBOX_YESNO
# 336 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_2
WinterlilyHollow_NPC_SurfManAlt_1:
# 340 "data//maps/WinterlilyHollow/scripts.pory"
	special ChoosePartyMon
# 341 "data//maps/WinterlilyHollow/scripts.pory"
	waitstate
# 342 "data//maps/WinterlilyHollow/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 343 "data//maps/WinterlilyHollow/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 344 "data//maps/WinterlilyHollow/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 346 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, SPECIES_GLIMMET
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_5
WinterlilyHollow_NPC_SurfManAlt_4:
# 349 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, SPECIES_GLIMMORA
	goto_if_eq WinterlilyHollow_NPC_SurfManAlt_8
WinterlilyHollow_NPC_SurfManAlt_7:
# 353 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_SurfManAlt_2:
# 337 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_SurfManAlt_Text_1
	goto WinterlilyHollow_NPC_SurfManAlt_1

WinterlilyHollow_NPC_SurfManAlt_5:
# 347 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM05
	goto WinterlilyHollow_NPC_SurfManAlt_4

WinterlilyHollow_NPC_SurfManAlt_8:
# 350 "data//maps/WinterlilyHollow/scripts.pory"
	giveitem ITEM_HM05
	goto WinterlilyHollow_NPC_SurfManAlt_7


WinterlilyHollow_NPC_Miner::
# 370 "data//maps/WinterlilyHollow/scripts.pory"
	lockall
# 371 "data//maps/WinterlilyHollow/scripts.pory"
	faceplayer
# 372 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_0, MSGBOX_YESNO
# 374 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_2
# 383 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_2
WinterlilyHollow_NPC_Miner_1:
# 385 "data//maps/WinterlilyHollow/scripts.pory"
	applymovement 3, WinterlilyHollow_NPC_Miner_Movement_0
# 386 "data//maps/WinterlilyHollow/scripts.pory"
	waitmovement 0
# 388 "data//maps/WinterlilyHollow/scripts.pory"
	releaseall
	end

WinterlilyHollow_NPC_Miner_2:
# 375 "data//maps/WinterlilyHollow/scripts.pory"
	checkmoney 500
# 377 "data//maps/WinterlilyHollow/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq WinterlilyHollow_NPC_Miner_5
# 380 "data//maps/WinterlilyHollow/scripts.pory"
	msgbox WinterlilyHollow_NPC_Miner_Text_1
	goto WinterlilyHollow_NPC_Miner_1

WinterlilyHollow_NPC_Miner_5:
# 378 "data//maps/WinterlilyHollow/scripts.pory"
	special StartMining
	goto WinterlilyHollow_NPC_Miner_1


# 21 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_0:
# 21 "data//maps/WinterlilyHollow/scripts.pory"
	walk_down
# 21 "data//maps/WinterlilyHollow/scripts.pory"
	emote_exclamation_mark
	step_end

# 26 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_1:
# 26 "data//maps/WinterlilyHollow/scripts.pory"
	walk_down
# 26 "data//maps/WinterlilyHollow/scripts.pory"
	walk_down
	step_end

# 35 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_OnFrame_Movement_2:
# 35 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 35 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 35 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 35 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
# 35 "data//maps/WinterlilyHollow/scripts.pory"
	walk_up
	step_end

# 69 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Red_Movement_0:
# 69 "data//maps/WinterlilyHollow/scripts.pory"
	face_down
	step_end

# 124 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_MimeJr_1_Movement_0:
# 124 "data//maps/WinterlilyHollow/scripts.pory"
	fly_up
	step_end

# 385 "data//maps/WinterlilyHollow/scripts.pory"
WinterlilyHollow_NPC_Miner_Movement_0:
# 385 "data//maps/WinterlilyHollow/scripts.pory"
	face_right
	step_end

WinterlilyHollow_OnFrame_Text_0:
# 23 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Viniel$"

WinterlilyHollow_OnFrame_Text_1:
# 24 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ah, it's you! The enemy of my enemy!$"

WinterlilyHollow_OnFrame_Text_2:
# 29 "data//maps/WinterlilyHollow/scripts.pory"
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
# 33 "data//maps/WinterlilyHollow/scripts.pory"
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
# 67 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Hello again, trainer! The gym is closed\n"
	.string "right now since the leader's gone up the\l"
	.string "mountain trying to fight some bad\l"
	.string "types that showed up.$"

WinterlilyHollow_NPC1_Text_0:
# 76 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Is Viniel going to be able to handle all\n"
	.string "those Team Somber grunts alone? I wish\l"
	.string "we could help but he's far stronger\l"
	.string "than any of us. We'd only get in the way!$"

WinterlilyHollow_NPC1_Text_1:
# 78 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Winterlily Hollow is so remote that we\n"
	.string "don't even get electricity! Viniel's\l"
	.string "Pokémon powers this town.$"

WinterlilyHollow_NPC2_Text_0:
# 84 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mom told me to stay inside the town\n"
	.string "because some bad guys showed up, so I'm\l"
	.string "playing here.$"

WinterlilyHollow_NPC2_Text_1:
# 86 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mom told me never to go into Ivy River!\n"
	.string "She says kids my age go missing there.\l"
	.string "So of course I'm gonna go!\p"
	.string "...\p"
	.string "But only when Mom's not looking.$"

WinterlilyHollow_NPC3_Text_0:
# 92 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Did you come from Ivy River or Mt\n"
	.string "Mirroh? Of course you didn't come from\l"
	.string "Ivy River - nobody goes there.$"

WinterlilyHollow_NPC4_Text_0:
# 100 "data//maps/WinterlilyHollow/scripts.pory"
	.string "A Team Somber grunt accosted me, so I\n"
	.string "taught the young fool a lesson! After\l"
	.string "that, he threw away his Pokémon saying\l"
	.string "it was too weak!$"

WinterlilyHollow_MimeJr_1_Text_0:
# 112 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "Mime Jr. is bawling!\p"
	.string "Can it be soothed somehow?$"

WinterlilyHollow_MimeJr_1_Text_1:
# 117 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give Mime Jr. a Soothe Bell?$"

WinterlilyHollow_MimeJr_1_Text_2:
# 121 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. takes the Soothe Bell and\n"
	.string "shakes it...it chimes softly.\p"
	.string "Mime Jr. smiles at you.$"

WinterlilyHollow_MimeJr_1_Text_3:
# 126 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go?$"

WinterlilyHollow_MimeJr_2_Text_0:
# 150 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sniff...sniff...\n"
	.string "Mime Jr. looks sad...maybe it wants a doll\l"
	.string "to play with?$"

WinterlilyHollow_MimeJr_2_Text_1:
# 155 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Give Mime Jr. a Pokeshi Doll?$"

WinterlilyHollow_MimeJr_2_Text_2:
# 159 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. takes the Pokeshi Doll and\n"
	.string "plays with it...\p"
	.string "Mime Jr. smiles at you.$"

WinterlilyHollow_MimeJr_2_Text_3:
# 164 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Wait, where'd it go now?$"

WinterlilyHollow_MimeJr_3_Text_0:
# 186 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. is no longer crying! It's looking\n"
	.string "at its own reflection in the water\l"
	.string "instead...maybe it's pondering its\l"
	.string "future. Understandable, given that its\l"
	.string "last Trainer treated it so badly.$"

WinterlilyHollow_MimeJr_3_Text_1:
# 189 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. looks at you.\p"
	.string "...\p"
	.string "Does Mime Jr. want to join the party?$"

WinterlilyHollow_MimeJr_3_Text_2:
# 194 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Catch Mime Jr. in a Luxury Ball?$"

WinterlilyHollow_MimeJr_3_Text_3:
# 198 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. doesn't wait for you to catch it\n"
	.string "- it leaps into the Luxury Ball on its\l"
	.string "own!.$"

WinterlilyHollow_MimeJr_3_Text_4:
# 201 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. joined {PLAYER}'s party!$"

WinterlilyHollow_MimeJr_3_Text_5:
# 206 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Welcome to the team, Mime Jr.! You'll be\n"
	.string "happy withh all your new friends!$"

WinterlilyHollow_MimeJr_3_Text_6:
# 209 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Mime Jr. looks hurt. It goes back to\n"
	.string "staring at its reflection$"

WinterlilyHollow_MimeJr_3_Text_7:
# 213 "data//maps/WinterlilyHollow/scripts.pory"
	.string "...Mime Jr. goes back to staring at the\n"
	.string "water. Maybe it needs a comforting\l"
	.string "Pokeball to be in.$"

WinterlilyHollow_Froslass_Text_0:
# 225 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Snover is getting dizzy...what is it\n"
	.string "circling for?$"

WinterlilyHollow_Sneasler_Text_0:
# 232 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sneasler seems to be trying to dig into\n"
	.string "the wall with limited success.\p"
	.string "Don't give up, Sneasler!$"

WinterlilyHollow_Sneasler_Text_1:
# 234 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sneasler seems to be trying to dig into\n"
	.string "the wall with limited success.\p"
	.string "Clink...\p"
	.string "Clink...\p"
	.string "Aha! Sneasler struck somthing in the\n"
	.string "wall!\p"
	.string "Two stones fell out of the wall.$"

WinterlilyHollow_Sneasler_Reward_Text_0:
# 241 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Sneasler wants you to have one!$"

WinterlilyHollow_Sneasler_Reward_Text_1:
# 242 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Fire Stone$"

WinterlilyHollow_Sneasler_Reward_Text_2:
# 242 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ice Stone$"

WinterlilyHollow_Sneasler_Reward1_Text_0:
# 253 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Are you sure?$"

WinterlilyHollow_Sneasler_Reward_End_Text_0:
# 281 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Thank you Sneasler!$"

WinterlilyHollow_NPC_SurfMan_Text_0:
# 308 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ivy River takes you straight down to\n"
	.string "Pelluca City. Far better than trekking\l"
	.string "down Mt. Mirroh!$"

WinterlilyHollow_NPC_SurfMan_Text_1:
# 311 "data//maps/WinterlilyHollow/scripts.pory"
	.string "I surfed up here through the Ivy River.\n"
	.string "Since I'm settling here, I don't need\l"
	.string "the HM any more. What I need instead is\l"
	.string "a Heart Scale to decorate my room. I'd\l"
	.string "be happy to trade my HM with anyone who\l"
	.string "can give me a Heart Scale. Have you got\l"
	.string "one?$"

WinterlilyHollow_NPC_SurfMan_Text_2:
# 314 "data//maps/WinterlilyHollow/scripts.pory"
	.string "My search continues!$"

WinterlilyHollow_NPC_SurfMan_Text_3:
# 320 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Hey, you don't have any Heart Scales!$"

WinterlilyHollow_NPC_SurfMan_Text_4:
# 324 "data//maps/WinterlilyHollow/scripts.pory"
	.string "{PLAYER} gave the man a Heart Scale$"

WinterlilyHollow_NPC_SurfMan_Text_5:
# 325 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Thank you! This is just what I wanted.\n"
	.string "As promised, here you go.$"

WinterlilyHollow_NPC_SurfMan_Text_6:
# 327 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't need to teach your Pokemon\n"
	.string "the move. Any compatible Pokemon can\l"
	.string "use it on any water body!$"

WinterlilyHollow_NPC_SurfManAlt_Text_0:
# 335 "data//maps/WinterlilyHollow/scripts.pory"
	.string "When I was younger, I once encountered\n"
	.string "a strange Pokemon in the Mirroh\l"
	.string "Caverns. It was shaped like a blue plant\l"
	.string "and scattered poisonous spikes\l"
	.string "everywhere! I'd like to see that\l"
	.string "Pokemon again. Do you have such a\l"
	.string "Pokemon?$"

WinterlilyHollow_NPC_SurfManAlt_Text_1:
# 337 "data//maps/WinterlilyHollow/scripts.pory"
	.string "Ah. My search continues then.$"

WinterlilyHollow_NPC_Miner_Text_0:
# 372 "data//maps/WinterlilyHollow/scripts.pory"
	.string "See all these crystals on the walls? I'm\n"
	.string "trying to dig it up. Wanna try? You can\l"
	.string "borrow my spare pickaxe, but it'll cost\l"
	.string "you 500.$"

WinterlilyHollow_NPC_Miner_Text_1:
# 380 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You don't have enough money.$"

WinterlilyHollow_NPC_Miner_Text_2:
# 383 "data//maps/WinterlilyHollow/scripts.pory"
	.string "You can dig up some great stuff, you\n"
	.string "know?$"
