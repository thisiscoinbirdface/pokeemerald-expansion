# 1 "data//maps/GastreeCity/scripts.pory"

# 2 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_KOHLA, 7
# 3 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTYOG, 12
# 4 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTY1, 17
# 5 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTY2, 18
# 6 "data//maps/GastreeCity/scripts.pory"
    .set LOCALID_SKITTY3, 19

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
	faceplayer
# 32 "data//maps/GastreeCity/scripts.pory"
	opendoor 25, 26
# 33 "data//maps/GastreeCity/scripts.pory"
	waitdooranim
# 36 "data//maps/GastreeCity/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 25, 26
# 37 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_KOHLA
# 38 "data//maps/GastreeCity/scripts.pory"
	delay 8
# 40 "data//maps/GastreeCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0
# 41 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 42 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1
# 43 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 45 "data//maps/GastreeCity/scripts.pory"
	closedoor 25, 26
# 46 "data//maps/GastreeCity/scripts.pory"
	waitdooranim
# 48 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 51 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 52 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 55 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 58 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 59 "data//maps/GastreeCity/scripts.pory"
	release
# 61 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_2
# 62 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 65 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 66 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 69 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger_2:
	end


GastreeCity_NPC1::
# 86 "data//maps/GastreeCity/scripts.pory"
	lockall
# 87 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 88 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC1_Text_0
# 89 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC3::
# 93 "data//maps/GastreeCity/scripts.pory"
	lockall
# 94 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 95 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC3_Text_0
# 96 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC4::
# 100 "data//maps/GastreeCity/scripts.pory"
	lockall
# 101 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 102 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC4_Text_0
# 103 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC5::
# 108 "data//maps/GastreeCity/scripts.pory"
	lockall
# 109 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 110 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC5_Text_0
# 111 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_Mankey::
# 115 "data//maps/GastreeCity/scripts.pory"
	lockall
# 116 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_NORMAL
# 117 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Mankey_Text_0
# 118 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC6::
# 124 "data//maps/GastreeCity/scripts.pory"
	lockall
# 125 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 126 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC6_Text_0
# 127 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC7::
# 132 "data//maps/GastreeCity/scripts.pory"
	lockall
# 133 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 134 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC7_Text_0
# 135 "data//maps/GastreeCity/scripts.pory"
	applymovement 11, GastreeCity_NPC7_Movement_0
# 136 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 137 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC8::
# 142 "data//maps/GastreeCity/scripts.pory"
	lockall
# 143 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 144 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0
# 145 "data//maps/GastreeCity/scripts.pory"
	release
# 146 "data//maps/GastreeCity/scripts.pory"
	applymovement 5, GastreeCity_NPC8_Movement_0
# 147 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 148 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1
# 149 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC_Keckleon::
# 152 "data//maps/GastreeCity/scripts.pory"
	lockall
# 153 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 154 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0
# 155 "data//maps/GastreeCity/scripts.pory"
	release
	end


GastreeCity_NPC9::
# 161 "data//maps/GastreeCity/scripts.pory"
	lockall
# 162 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 163 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 164 "data//maps/GastreeCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_NPC9_Text_1, GastreeCity_NPC9_Text_2, GastreeCity_NPC9_Text_3, GastreeCity_NPC9_Text_4
# 165 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_5
# 166 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScript_SkittyQuestStart::
# 183 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 184 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 185 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 187 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 188 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 189 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 192 "data//maps/GastreeCity/scripts.pory"
	lockall
# 193 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 194 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 195 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 196 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 197 "data//maps/GastreeCity/scripts.pory"
	release
# 198 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 199 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 200 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 201 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 202 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 203 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 204 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 205 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 206 "data//maps/GastreeCity/scripts.pory"
	release
# 207 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_3
# 208 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 209 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 210 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_4
# 211 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 212 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 213 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 214 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 215 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 216 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_5
# 217 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 218 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 219 "data//maps/GastreeCity/scripts.pory"
	release
# 220 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 221 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 222 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_6
# 223 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 228 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 229 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 232 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 233 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 236 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 237 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 243 "data//maps/GastreeCity/scripts.pory"
	lockall
# 244 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 246 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 249 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 261 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 264 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 247 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 250 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 251 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 252 "data//maps/GastreeCity/scripts.pory"
	release
# 253 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 254 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 255 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 256 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_CUT
# 257 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 258 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 259 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 269 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 270 "data//maps/GastreeCity/scripts.pory"
	release
# 271 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 272 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 273 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 274 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 275 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 279 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 280 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 283 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 284 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 287 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 288 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 293 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 294 "data//maps/GastreeCity/scripts.pory"
	release
# 295 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 296 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 297 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 298 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 299 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 302 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 303 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 306 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 307 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 310 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 311 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 317 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 318 "data//maps/GastreeCity/scripts.pory"
	release
# 319 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 320 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 321 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 322 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 323 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 326 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 327 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 330 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 331 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 334 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 337 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 339 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 344 "data//maps/GastreeCity/scripts.pory"
	lockall
# 345 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 346 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 347 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 348 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 354 "data//maps/GastreeCity/scripts.pory"
	lockall
# 355 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 356 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 357 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Poltchageist_Text_0
# 358 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


# 40 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0:
# 40 "data//maps/GastreeCity/scripts.pory"
	slide_down
	step_end

# 42 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_1:
# 42 "data//maps/GastreeCity/scripts.pory"
	walk_down
	step_end

# 61 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_2:
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 61 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 135 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC7_Movement_0:
# 135 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 146 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 146 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 198 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 198 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 198 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 198 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 198 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 198 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 198 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 198 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 200 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 200 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 203 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 203 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 203 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 203 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 207 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_3:
# 207 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 210 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_4:
# 210 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 216 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_5:
# 216 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 216 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 216 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 216 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 222 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_6:
# 222 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 222 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 222 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 222 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 272 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 272 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 272 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 272 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 272 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 272 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 272 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 272 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 272 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 272 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 272 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 272 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 272 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 272 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 296 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 296 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 296 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 320 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 320 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 320 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger_Text_0:
# 55 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_NPC1_Text_0:
# 88 "data//maps/GastreeCity/scripts.pory"
	.string "You came all the way from Carabrue\n"
	.string "Town? Woah! Then I bet you don't know -\l"
	.string "be careful on ROUTE 4! There's a\l"
	.string "dangerouns DEWPIDER that attacks\l"
	.string "people.$"

GastreeCity_NPC3_Text_0:
# 95 "data//maps/GastreeCity/scripts.pory"
	.string "My dad drags me here every weekend and\n"
	.string "its sooo boring. I can't wait to grow up\l"
	.string "and leave the house!$"

GastreeCity_NPC4_Text_0:
# 102 "data//maps/GastreeCity/scripts.pory"
	.string "I come here every weekend with my\n"
	.string "daughter for some quality family time.\l"
	.string "Oh, how I'll miss her when she grows up!$"

GastreeCity_NPC5_Text_0:
# 110 "data//maps/GastreeCity/scripts.pory"
	.string "INGER, this city's Gym Leader, uses ROCK\n"
	.string "types. I should have an advantage with\l"
	.string "my FIGHTING-type {PKMN} right? So then\l"
	.string "why am I getting cold feet?$"

GastreeCity_Mankey_Text_0:
# 117 "data//maps/GastreeCity/scripts.pory"
	.string "MANKEY is getting angry at his trainer's\n"
	.string "cold feet.$"

GastreeCity_NPC6_Text_0:
# 126 "data//maps/GastreeCity/scripts.pory"
	.string "Gastree City is famous not just for\n"
	.string "being a connecting Route to Mt. Ceram\l"
	.string "Base Camp, but also for its scenic\l"
	.string "viewpoints and its teahouse!$"

GastreeCity_NPC7_Text_0:
# 134 "data//maps/GastreeCity/scripts.pory"
	.string "I want to have tea too! When I get my\n"
	.string "first {PKMN}, I want it to be SINISTEA or\l"
	.string "POLTCHAGEIST.$"

GastreeCity_NPC8_Text_0:
# 144 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my KECLEON some new\n"
	.string "moves so that we can go and explore\l"
	.string "Route 4 together! C'mon KECLEON!\l"
	.string "C'mon!!$"

GastreeCity_NPC8_Text_1:
# 148 "data//maps/GastreeCity/scripts.pory"
	.string "KECLEON: keeee!!!\p"
	.string "KECLEON is as fired up as its trainer is!$"

GastreeCity_NPC_Keckleon_Text_0:
# 154 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!\p"
	.string "KECLEON is trying hard to match its\n"
	.string "trainers energy. Go KECLEON!$"

GastreeCity_NPC9_Text_0:
# 163 "data//maps/GastreeCity/scripts.pory"
	.string "Yo, trainer! Come here. What's the most\n"
	.string "useful move a {PKMN} can learn?$"

GastreeCity_NPC9_Text_1:
# 164 "data//maps/GastreeCity/scripts.pory"
	.string "ERUPTION$"

GastreeCity_NPC9_Text_2:
# 164 "data//maps/GastreeCity/scripts.pory"
	.string "QUIVER DANCE$"

GastreeCity_NPC9_Text_3:
# 164 "data//maps/GastreeCity/scripts.pory"
	.string "EXPANDING FORCE$"

GastreeCity_NPC9_Text_4:
# 164 "data//maps/GastreeCity/scripts.pory"
	.string "EARTHQUAKE$"

GastreeCity_NPC9_Text_5:
# 165 "data//maps/GastreeCity/scripts.pory"
	.string "Nope - trick question! It's SPLASH!\p"
	.string "...\p"
	.string "No, seriously. Most people think it's\n"
	.string "useless, but if you have HM SPLASH, your\l"
	.string "{PKMN} can hop onto rocks in the water like\l"
	.string "the one here. But you need at least one\l"
	.string "Gym Badge to be able to use HMs.$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 196 "data//maps/GastreeCity/scripts.pory"
	.string "No! SKITTY!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 205 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 218 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my SKITTY back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her!$"

GastreeCity_NPC2_Text_0:
# 247 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY ran away because she got\n"
	.string "bored...maybe I should catch a PURRLOIN\l"
	.string "or MEOWTH for her to play with.$"

GastreeCity_NPC2_Text_1:
# 251 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my SKITTY is back!$"

GastreeCity_NPC2_Text_2:
# 254 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 255 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 257 "data//maps/GastreeCity/scripts.pory"
	.string "I'm sorry! I know it's completely\n"
	.string "useless. I just don't have anything\l"
	.string "better on me.\p"
	.string "Oh, but you do need to have at least one\n"
	.string "GYM BADGE to use it...not that you ever\l"
	.string "would, I suppose.$"

GastreeCity_NPC2_Text_5:
# 261 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my SKITTY yet?$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 269 "data//maps/GastreeCity/scripts.pory"
	.string "It's the SKITTY! Come here SKITTY...$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 275 "data//maps/GastreeCity/scripts.pory"
	.string "The SKITTY ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 299 "data//maps/GastreeCity/scripts.pory"
	.string "The SKITTY ran away again! Argh!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 317 "data//maps/GastreeCity/scripts.pory"
	.string "It's the SKITTY! Okay, this time you'd\n"
	.string "better come here, SKITTY!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 323 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. The SKITTY ran back to\n"
	.string "its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 347 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skee~~$"

GastreeCity_Poltchageist_Text_0:
# 357 "data//maps/GastreeCity/scripts.pory"
	.string "POLTCHAGEIST is hard at work for the\n"
	.string "teahouse!$"

GastreeCity_KohlaIntro1::
# 72 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: Well well, look who thought it\n"
	.string "was fashionable to be late! I'm way\l"
	.string "ahead of you, chum! I've already beaten\l"
	.string "INGER and got the GYM BADGE.$"

GastreeCity_KohlaIntro2::
# 75 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: I don't mind dishing out a\n"
	.string "second serving either. This is payback\l"
	.string "for one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_KohlaPostBattle::
# 78 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: You may have won, but I'll get\n"
	.string "the dreamstone first! I heard that\l"
	.string "some group called Team Somber is also\l"
	.string "after the dreamstone. I'm going to head\l"
	.string "north towards the Ceram Base Camp.\l"
	.string "Don't come after me - I don't need your\l"
	.string "help. Over and out, chum!$"
