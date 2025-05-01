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
	opendoor 23, 26
# 34 "data//maps/GastreeCity/scripts.pory"
	waitdooranim
# 37 "data//maps/GastreeCity/scripts.pory"
	setobjectxyperm LOCALID_KOHLA, 23, 26
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
	closedoor 23, 26
# 47 "data//maps/GastreeCity/scripts.pory"
	waitdooranim
# 49 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 52 "data//maps/GastreeCity/scripts.pory"
	speakername GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 53 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 54 "data//maps/GastreeCity/scripts.pory"
	speakername GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 55 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 58 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Text_1
# 59 "data//maps/GastreeCity/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
# 62 "data//maps/GastreeCity/scripts.pory"
	speakername GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 63 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 64 "data//maps/GastreeCity/scripts.pory"
	release
# 66 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_2
# 67 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 70 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 71 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 73 "data//maps/GastreeCity/scripts.pory"
	fadedefaultbgm
# 74 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return

GastreeCity_EventScript_KohlaBattle_Trigger_2:
	end


GastreeCity_NPC1::
# 91 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC1_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC3::
# 96 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC3_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC4::
# 101 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC4_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC5::
# 107 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC5_Text_0, MSGBOX_NPC
	end


GastreeCity_Mankey::
# 112 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_NORMAL
# 113 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Mankey_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC6::
# 119 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC6_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC7::
# 125 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC7_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC8::
# 131 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0, MSGBOX_NPC
# 132 "data//maps/GastreeCity/scripts.pory"
	applymovement 5, GastreeCity_NPC8_Movement_0
# 133 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 134 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 135 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1, MSGBOX_NPC
	end


GastreeCity_NPC_Keckleon::
# 140 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_NORMAL
# 141 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC9::
# 146 "data//maps/GastreeCity/scripts.pory"
	lockall
# 147 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 148 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 149 "data//maps/GastreeCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_NPC9_Text_1, GastreeCity_NPC9_Text_2, GastreeCity_NPC9_Text_3, GastreeCity_NPC9_Text_4
# 150 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_5
# 151 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScript_SkittyQuestStart::
# 168 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 169 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 170 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 172 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 173 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 174 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 177 "data//maps/GastreeCity/scripts.pory"
	lockall
# 178 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 179 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 180 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 181 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 182 "data//maps/GastreeCity/scripts.pory"
	release
# 183 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 184 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 185 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 186 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 187 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 188 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 189 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 190 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 191 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 192 "data//maps/GastreeCity/scripts.pory"
	release
# 193 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_3
# 194 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 195 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 196 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_4
# 197 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 198 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 199 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 200 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 201 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 202 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_5
# 203 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 204 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 205 "data//maps/GastreeCity/scripts.pory"
	release
# 206 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 207 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 208 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_6
# 209 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 214 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 215 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 218 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 219 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 222 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 223 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 229 "data//maps/GastreeCity/scripts.pory"
	lockall
# 230 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 232 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 235 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 248 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 251 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 233 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0, MSGBOX_NPC
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 236 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 237 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 238 "data//maps/GastreeCity/scripts.pory"
	release
# 239 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 240 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 241 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 242 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_CUT
# 243 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 244 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 245 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
# 246 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_NPC_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 256 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 257 "data//maps/GastreeCity/scripts.pory"
	release
# 258 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 259 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 260 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 261 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 262 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 263 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 267 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 268 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 271 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 272 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 275 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 276 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 281 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 282 "data//maps/GastreeCity/scripts.pory"
	release
# 283 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 284 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 285 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 286 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 287 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 288 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 291 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 292 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 295 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 296 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 299 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 300 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 306 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 307 "data//maps/GastreeCity/scripts.pory"
	release
# 308 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 309 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 310 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 311 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 312 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 313 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 316 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 317 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 320 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 321 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 324 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 327 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 329 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 334 "data//maps/GastreeCity/scripts.pory"
	lockall
# 335 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 336 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 337 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 338 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 344 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 345 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Poltchageist_Text_0, MSGBOX_NPC
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

# 66 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_2:
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 66 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 132 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 132 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 184 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 184 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 184 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 184 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 184 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 184 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 184 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 184 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 184 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 186 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 186 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 189 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 189 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 189 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 189 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 193 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_3:
# 193 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 196 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_4:
# 196 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 202 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_5:
# 202 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 202 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 202 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 202 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 208 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_6:
# 208 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 208 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 208 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 208 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 260 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 260 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 260 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 260 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 260 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 260 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 260 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 260 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 260 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 260 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 260 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 260 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 260 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 260 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 285 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 285 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 285 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 310 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 310 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 310 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger_Text_0:
# 52 "data//maps/GastreeCity/scripts.pory"
	.string "Kohla$"

GastreeCity_EventScript_KohlaBattle_Trigger_Text_1:
# 58 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_NPC1_Text_0:
# 91 "data//maps/GastreeCity/scripts.pory"
	.string "You came all the way from Carabrue\n"
	.string "Town? Woah! Then I bet you don't know -\l"
	.string "you have to be careful on Route 4!\l"
	.string "There's a dangerous Dewpider that\l"
	.string "attacks people.$"

GastreeCity_NPC3_Text_0:
# 96 "data//maps/GastreeCity/scripts.pory"
	.string "My dad drags me here every weekend and\n"
	.string "its sooo boring. I can't wait to grow up\l"
	.string "and leave the house!$"

GastreeCity_NPC4_Text_0:
# 101 "data//maps/GastreeCity/scripts.pory"
	.string "I come here every weekend with my\n"
	.string "daughter for some quality family time.\l"
	.string "Oh, how I'll miss her when she grows up!$"

GastreeCity_NPC5_Text_0:
# 107 "data//maps/GastreeCity/scripts.pory"
	.string "Inger, this city's Gym Leader, uses ROCK\n"
	.string "types. I should have an advantage with\l"
	.string "my FIGHTING-type Pokémon right?\p"
	.string "So then why am I getting cold feet?$"

GastreeCity_Mankey_Text_0:
# 113 "data//maps/GastreeCity/scripts.pory"
	.string "Mankey is getting angry at his trainer's\n"
	.string "cold feet.$"

GastreeCity_NPC6_Text_0:
# 119 "data//maps/GastreeCity/scripts.pory"
	.string "Gastree City is famous not just for\n"
	.string "being a connecting Route to Mt. Ceram\l"
	.string "Base Camp, but also for its scenic\l"
	.string "viewpoints and its teahouse!$"

GastreeCity_NPC7_Text_0:
# 125 "data//maps/GastreeCity/scripts.pory"
	.string "When I get my first Pokémon, I want it\n"
	.string "to be Poltchageist!$"

GastreeCity_NPC8_Text_0:
# 131 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my Kecleon some new\n"
	.string "moves so that we can go and explore\l"
	.string "Route 4 together! C'mon Kecleon! C'mon!!$"

GastreeCity_NPC8_Text_1:
# 135 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!!\p"
	.string "Kecleon is as fired up as its trainer is!$"

GastreeCity_NPC_Keckleon_Text_0:
# 141 "data//maps/GastreeCity/scripts.pory"
	.string "Keeee!!\p"
	.string "Kecleon is trying hard to match its\n"
	.string "trainers energy. Go Kecleon!$"

GastreeCity_NPC9_Text_0:
# 148 "data//maps/GastreeCity/scripts.pory"
	.string "Yo, trainer! Come here. What's the most\n"
	.string "useful move a Pokémon can learn?$"

GastreeCity_NPC9_Text_1:
# 149 "data//maps/GastreeCity/scripts.pory"
	.string "Eruption$"

GastreeCity_NPC9_Text_2:
# 149 "data//maps/GastreeCity/scripts.pory"
	.string "Quiver Dance$"

GastreeCity_NPC9_Text_3:
# 149 "data//maps/GastreeCity/scripts.pory"
	.string "Expanding Force$"

GastreeCity_NPC9_Text_4:
# 149 "data//maps/GastreeCity/scripts.pory"
	.string "Geomancy$"

GastreeCity_NPC9_Text_5:
# 150 "data//maps/GastreeCity/scripts.pory"
	.string "Nope - trick question! It's Splash!\p"
	.string "...\p"
	.string "No, seriously. Most people think it's\n"
	.string "useless, but if you have HM Splash, your\l"
	.string "Pokémon can hop onto rocks in the\l"
	.string "water like the one here. But you need at\l"
	.string "least one Gym Badge to use HMs.$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 181 "data//maps/GastreeCity/scripts.pory"
	.string "No! Skitty!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 191 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 204 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my Skitty back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her!$"

GastreeCity_NPC2_Text_0:
# 233 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away because she got\n"
	.string "bored...maybe I should catch a Purrloin\l"
	.string "or Meowth for her to play with.$"

GastreeCity_NPC2_Text_1:
# 237 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my Skitty is back!$"

GastreeCity_NPC2_Text_2:
# 240 "data//maps/GastreeCity/scripts.pory"
	.string "Skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 241 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 243 "data//maps/GastreeCity/scripts.pory"
	.string "I'm not a trainer so I don't need it. All\n"
	.string "I need is my Skitty!\p"
	.string "You don't need to teach it to any of\n"
	.string "your Pokémon, but you need at least one\l"
	.string "Gym Badge to use it.\p"
	.string "Now come here Skitty!$"

GastreeCity_NPC2_Text_5:
# 248 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my Skitty yet? She\n"
	.string "might be stuck in a tree - please look\l"
	.string "for her pink tail!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 256 "data//maps/GastreeCity/scripts.pory"
	.string "There's something in the tree...\p"
	.string "It's Skitty!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 263 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 288 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away again. It's too\n"
	.string "slippery!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 306 "data//maps/GastreeCity/scripts.pory"
	.string "It's Skitty! Okay, this time you'd\n"
	.string "better come here, Skitty!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 313 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. Looks like Skitty ran\n"
	.string "back to its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 337 "data//maps/GastreeCity/scripts.pory"
	.string "Skee~~$"

GastreeCity_Poltchageist_Text_0:
# 345 "data//maps/GastreeCity/scripts.pory"
	.string "Poltchageist is picking Revival Herbs\n"
	.string "for the teahouse!$"

GastreeCity_KohlaIntro1::
# 77 "data//maps/GastreeCity/scripts.pory"
	.string "Well well, look who thought it was\n"
	.string "fashionable to be late! I'm way ahead of\l"
	.string "you, chum! I've already beaten Inger\l"
	.string "and got the Hard Badge.$"

GastreeCity_KohlaIntro2::
# 80 "data//maps/GastreeCity/scripts.pory"
	.string "I don't mind dishing out a second\n"
	.string "serving either. This is payback for\l"
	.string "one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_KohlaPostBattle::
# 83 "data//maps/GastreeCity/scripts.pory"
	.string "You may have won, but I'll get the\n"
	.string "dreamstone first! I heard that some\l"
	.string "group called Team Somber is also after\l"
	.string "the dreamstone. I'm going to head north\l"
	.string "towards the Ceram Base Camp. Don't come\l"
	.string "after me - I don't need your help.\p"
	.string "Over and out, chum!$"
