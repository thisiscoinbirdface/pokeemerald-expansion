# 1 "data//maps/GastreeCity/scripts.pory"

# 2 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_KOHLA, 7
# 3 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTYOG, 12
# 4 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTY1, 16
# 5 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTY2, 17
# 6 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTY3, 18

GastreeCity_MapScripts::
# 10 "data//maps/GastreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GastreeCity_OnTransition
# 12 "data//maps/GastreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GastreeCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GastreeCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data//maps/GastreeCity/scripts.pory"
	map_script_2 VAR_GASTREE_SKITTY_QUEST, 0, GastreeCity_EventScript_SkittyQuestStart
	.2byte 0


GastreeCity_OnTransition::
	return


GastreeCity_EventScript_KohlaBattle_Trigger::
# 24 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_KOHLA_BATTLE, GastreeCity_EventScript_KohlaBattle_Trigger_2
# 27 "data//maps/GastreeCity/scripts.pory"
	lockall
# 28 "data//maps/GastreeCity/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 29 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 33 "data//maps/GastreeCity/scripts.pory"
	opendoor 25, 28
# 34 "data//maps/GastreeCity/scripts.pory"
	waitdooranim
# 37 "data//maps/GastreeCity/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 25, 28
# 38 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_KOHLA
# 39 "data//maps/GastreeCity/scripts.pory"
	delay 8
# 41 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0
# 42 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 43 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1
# 44 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 46 "data//maps/GastreeCity/scripts.pory"
	closedoor 25, 28
# 47 "data//maps/GastreeCity/scripts.pory"
	waitdooranim
# 49 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 52 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 53 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 56 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 57 "data//maps/GastreeCity/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 60 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 61 "data//maps/GastreeCity/scripts.pory"
	release
# 63 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_2
# 64 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 67 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 68 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 70 "data//maps/GastreeCity/scripts.pory"
	fadedefaultbgm
# 71 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger_2:
	end


GastreeCity_NPC1::
# 88 "data//maps/GastreeCity/scripts.pory"
	lockall
# 89 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 90 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC1_Text_0
# 91 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC3::
# 95 "data//maps/GastreeCity/scripts.pory"
	lockall
# 96 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 97 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC3_Text_0
# 98 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC4::
# 102 "data//maps/GastreeCity/scripts.pory"
	lockall
# 103 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 104 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC4_Text_0
# 105 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC5::
# 110 "data//maps/GastreeCity/scripts.pory"
	lockall
# 111 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 112 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC5_Text_0
# 113 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_Mankey::
# 117 "data//maps/GastreeCity/scripts.pory"
	lockall
# 118 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_NORMAL
# 119 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Mankey_Text_0
# 120 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC6::
# 126 "data//maps/GastreeCity/scripts.pory"
	lockall
# 127 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 128 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC6_Text_0
# 129 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC7::
# 134 "data//maps/GastreeCity/scripts.pory"
	lockall
# 135 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 136 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC7_Text_0
# 137 "data//maps/GastreeCity/scripts.pory"
	applymovement 11, GastreeCity_NPC7_Movement_0
# 138 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 139 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC8::
# 144 "data//maps/GastreeCity/scripts.pory"
	lockall
# 145 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 146 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0
# 147 "data//maps/GastreeCity/scripts.pory"
	release
# 148 "data//maps/GastreeCity/scripts.pory"
	applymovement 5, GastreeCity_NPC8_Movement_0
# 149 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 150 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1
# 151 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC_Keckleon::
# 154 "data//maps/GastreeCity/scripts.pory"
	lockall
# 155 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 156 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0
# 157 "data//maps/GastreeCity/scripts.pory"
	release
	end


GastreeCity_NPC9::
# 163 "data//maps/GastreeCity/scripts.pory"
	lockall
# 164 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 165 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 166 "data//maps/GastreeCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_NPC9_Text_1, GastreeCity_NPC9_Text_2, GastreeCity_NPC9_Text_3, GastreeCity_NPC9_Text_4
# 167 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_5
# 168 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScript_SkittyQuestStart::
# 185 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 186 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 187 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 189 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 190 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 191 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 194 "data//maps/GastreeCity/scripts.pory"
	lockall
# 195 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 196 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 197 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 198 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 199 "data//maps/GastreeCity/scripts.pory"
	release
# 200 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 201 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 202 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 203 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 204 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 205 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 206 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 207 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 208 "data//maps/GastreeCity/scripts.pory"
	release
# 209 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_3
# 210 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 211 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 212 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_4
# 213 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 214 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 215 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 216 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 217 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 218 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_5
# 219 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 220 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 221 "data//maps/GastreeCity/scripts.pory"
	release
# 222 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 223 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 224 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_6
# 225 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 230 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 231 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 234 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 235 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 238 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 239 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 245 "data//maps/GastreeCity/scripts.pory"
	lockall
# 246 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 248 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 251 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 263 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 266 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 249 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 252 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 253 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 254 "data//maps/GastreeCity/scripts.pory"
	release
# 255 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 256 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 257 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 258 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_CUT
# 259 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 260 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 261 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 271 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 272 "data//maps/GastreeCity/scripts.pory"
	release
# 273 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 274 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 275 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 276 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 277 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 281 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 282 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 285 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 286 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 289 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 290 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 295 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 296 "data//maps/GastreeCity/scripts.pory"
	release
# 297 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 298 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 299 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 300 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 301 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 304 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 305 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 308 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 309 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 312 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 313 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 319 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 320 "data//maps/GastreeCity/scripts.pory"
	release
# 321 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 322 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 323 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 324 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 325 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 328 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 329 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 332 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 333 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 336 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 339 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 341 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 346 "data//maps/GastreeCity/scripts.pory"
	lockall
# 347 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 348 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 349 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 350 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 356 "data//maps/GastreeCity/scripts.pory"
	lockall
# 357 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 358 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 359 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Poltchageist_Text_0
# 360 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


# 41 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0:
# 41 "data//maps/GastreeCity/scripts.pory"
	walk_down
# 41 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 43 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1:
# 43 "data//maps/GastreeCity/scripts.pory"
	walk_down
	step_end

# 63 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_2:
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 63 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 137 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC7_Movement_0:
# 137 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 148 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 148 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 200 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 200 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 200 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 200 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 200 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 200 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 200 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 200 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 202 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 202 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 205 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 205 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 205 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 205 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 209 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_3:
# 209 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 212 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_4:
# 212 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 218 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_5:
# 218 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 218 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 218 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 218 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 224 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_6:
# 224 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 224 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 224 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 224 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 274 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 274 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 274 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 274 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 274 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 274 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 274 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 274 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 274 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 274 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 274 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 274 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 274 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 274 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 298 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 298 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 298 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 322 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 322 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 322 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger_Text_0:
# 56 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_NPC1_Text_0:
# 90 "data//maps/GastreeCity/scripts.pory"
	.string "You came all the way from Carabrue\n"
	.string "Town? Woah! Then I bet you don't know -\l"
	.string "be careful on Route 4! There's a\l"
	.string "dangerouns Dewpider that attacks\l"
	.string "people.$"

GastreeCity_NPC3_Text_0:
# 97 "data//maps/GastreeCity/scripts.pory"
	.string "My dad drags me here every weekend and\n"
	.string "its sooo boring. I can't wait to grow up\l"
	.string "and leave the house!$"

GastreeCity_NPC4_Text_0:
# 104 "data//maps/GastreeCity/scripts.pory"
	.string "I come here every weekend with my\n"
	.string "daughter for some quality family time.\l"
	.string "Oh, how I'll miss her when she grows up!$"

GastreeCity_NPC5_Text_0:
# 112 "data//maps/GastreeCity/scripts.pory"
	.string "INGER, this city's Gym Leader, uses ROCK\n"
	.string "types. I should have an advantage with\l"
	.string "my FIGHTING-type {PKMN} right? So then\l"
	.string "why am I getting cold feet?$"

GastreeCity_Mankey_Text_0:
# 119 "data//maps/GastreeCity/scripts.pory"
	.string "Mankey is getting angry at his trainer's\n"
	.string "cold feet.$"

GastreeCity_NPC6_Text_0:
# 128 "data//maps/GastreeCity/scripts.pory"
	.string "Gastree City is famous not just for\n"
	.string "being a connecting Route to Mt. Ceram\l"
	.string "Base Camp, but also for its scenic\l"
	.string "viewpoints and its teahouse!$"

GastreeCity_NPC7_Text_0:
# 136 "data//maps/GastreeCity/scripts.pory"
	.string "I want to have tea too! When I get my\n"
	.string "first {PKMN}, I want it to be Poltchageist.$"

GastreeCity_NPC8_Text_0:
# 146 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my KECLEON some new\n"
	.string "moves so that we can go and explore\l"
	.string "Route 4 together! C'mon KECLEON!\l"
	.string "C'mon!!$"

GastreeCity_NPC8_Text_1:
# 150 "data//maps/GastreeCity/scripts.pory"
	.string "KECLEON: keeee!!!\p"
	.string "KECLEON is as fired up as its trainer is!$"

GastreeCity_NPC_Keckleon_Text_0:
# 156 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!\p"
	.string "KECLEON is trying hard to match its\n"
	.string "trainers energy. Go KECLEON!$"

GastreeCity_NPC9_Text_0:
# 165 "data//maps/GastreeCity/scripts.pory"
	.string "Yo, trainer! Come here. What's the most\n"
	.string "useful move a {PKMN} can learn?$"

GastreeCity_NPC9_Text_1:
# 166 "data//maps/GastreeCity/scripts.pory"
	.string "ERUPTION$"

GastreeCity_NPC9_Text_2:
# 166 "data//maps/GastreeCity/scripts.pory"
	.string "QUIVER DANCE$"

GastreeCity_NPC9_Text_3:
# 166 "data//maps/GastreeCity/scripts.pory"
	.string "EXPANDING FORCE$"

GastreeCity_NPC9_Text_4:
# 166 "data//maps/GastreeCity/scripts.pory"
	.string "EARTHQUAKE$"

GastreeCity_NPC9_Text_5:
# 167 "data//maps/GastreeCity/scripts.pory"
	.string "Nope - trick question! It's SPLASH!\p"
	.string "...\p"
	.string "No, seriously. Most people think it's\n"
	.string "useless, but if you have HM SPLASH, your\l"
	.string "{PKMN} can hop onto rocks in the water like\l"
	.string "the one here. But you need at least one\l"
	.string "Gym Badge to be able to use HMs.$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 198 "data//maps/GastreeCity/scripts.pory"
	.string "No! SKITTY!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 207 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 220 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my SKITTY back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her!$"

GastreeCity_NPC2_Text_0:
# 249 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away because she got\n"
	.string "bored...maybe I should catch a Purrloin\l"
	.string "or Meowth for her to play with.$"

GastreeCity_NPC2_Text_1:
# 253 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my Skitty is back!$"

GastreeCity_NPC2_Text_2:
# 256 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 257 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 259 "data//maps/GastreeCity/scripts.pory"
	.string "You do need to have at least one GYM\n"
	.string "BADGE to use it. Now come here Skitty!$"

GastreeCity_NPC2_Text_5:
# 263 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my SKITTY yet?$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 271 "data//maps/GastreeCity/scripts.pory"
	.string "It's the Skitty! Come here Skitty...$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 277 "data//maps/GastreeCity/scripts.pory"
	.string "The Skitty ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 301 "data//maps/GastreeCity/scripts.pory"
	.string "The Skitty ran away again! Argh!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 319 "data//maps/GastreeCity/scripts.pory"
	.string "It's the Skitty! Okay, this time you'd\n"
	.string "better come here, Skitty!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 325 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. The Skitty ran back to\n"
	.string "its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 349 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skee~~$"

GastreeCity_Poltchageist_Text_0:
# 359 "data//maps/GastreeCity/scripts.pory"
	.string "POLTCHAGEIST is hard at work for the\n"
	.string "teahouse!$"

GastreeCity_KohlaIntro1::
# 74 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: Well well, look who thought it\n"
	.string "was fashionable to be late! I'm way\l"
	.string "ahead of you, chum! I've already beaten\l"
	.string "INGER and got the GYM BADGE.$"

GastreeCity_KohlaIntro2::
# 77 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: I don't mind dishing out a\n"
	.string "second serving either. This is payback\l"
	.string "for one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_KohlaPostBattle::
# 80 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: You may have won, but I'll get\n"
	.string "the dreamstone first! I heard that\l"
	.string "some group called Team Somber is also\l"
	.string "after the dreamstone. I'm going to head\l"
	.string "north towards the Ceram Base Camp.\l"
	.string "Don't come after me - I don't need your\l"
	.string "help. Over and out, chum!$"
