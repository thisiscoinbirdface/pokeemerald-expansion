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
	msgbox GastreeCity_NPC8_Text_1, MSGBOX_NPC
	end


GastreeCity_NPC_Keckleon::
# 139 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC9::
# 144 "data//maps/GastreeCity/scripts.pory"
	lockall
# 145 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 146 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 147 "data//maps/GastreeCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_NPC9_Text_1, GastreeCity_NPC9_Text_2, GastreeCity_NPC9_Text_3, GastreeCity_NPC9_Text_4
# 148 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_5
# 149 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScript_SkittyQuestStart::
# 166 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 167 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 168 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 170 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 171 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 172 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 175 "data//maps/GastreeCity/scripts.pory"
	lockall
# 176 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 177 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 178 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 179 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 180 "data//maps/GastreeCity/scripts.pory"
	release
# 181 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 182 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 183 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 184 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 185 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 186 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 187 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 188 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 189 "data//maps/GastreeCity/scripts.pory"
	release
# 190 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_3
# 191 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 192 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 193 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_4
# 194 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 195 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 196 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 197 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 198 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 199 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_5
# 200 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 201 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 202 "data//maps/GastreeCity/scripts.pory"
	release
# 203 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 204 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 205 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_6
# 206 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 211 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 212 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 215 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 216 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 219 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 220 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 226 "data//maps/GastreeCity/scripts.pory"
	lockall
# 227 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 229 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 232 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 245 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 248 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 230 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0, MSGBOX_NPC
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 233 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 234 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 235 "data//maps/GastreeCity/scripts.pory"
	release
# 236 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 237 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 238 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 239 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_CUT
# 240 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 241 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 242 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
# 243 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_NPC_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 253 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 254 "data//maps/GastreeCity/scripts.pory"
	release
# 255 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 256 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 257 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 258 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 259 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 260 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 264 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 265 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 268 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 269 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 272 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 273 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 278 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 279 "data//maps/GastreeCity/scripts.pory"
	release
# 280 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 281 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 282 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 283 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 284 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 285 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 288 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 289 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 292 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 293 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 296 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 297 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 303 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 304 "data//maps/GastreeCity/scripts.pory"
	release
# 305 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 306 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 307 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 308 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 309 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 310 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 313 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 314 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 317 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 318 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 321 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 324 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 326 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 331 "data//maps/GastreeCity/scripts.pory"
	lockall
# 332 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 333 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 334 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 335 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 341 "data//maps/GastreeCity/scripts.pory"
	lockall
# 342 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 343 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 344 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Poltchageist_Text_0
# 345 "data//maps/GastreeCity/scripts.pory"
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

# 181 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 181 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 181 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 181 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 181 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 181 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 181 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 181 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 181 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 183 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 183 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 186 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 186 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 186 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 186 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 190 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_3:
# 190 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 193 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_4:
# 193 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 199 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_5:
# 199 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 199 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 199 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 199 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 205 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_6:
# 205 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 205 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 205 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 205 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 257 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 257 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 257 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 257 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 257 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 257 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 257 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 257 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 257 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 257 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 257 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 257 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 257 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 257 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 282 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 282 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 282 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 307 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 307 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 307 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 307 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 307 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 307 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 307 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 307 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 307 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 307 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 307 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 307 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 307 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 307 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 307 "data//maps/GastreeCity/scripts.pory"
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
	.string "be careful on Route 4! There's a\l"
	.string "dangerouns Dewpider that attacks\l"
	.string "people.$"

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
	.string "my FIGHTING-type Pokémon right? So\l"
	.string "then why am I getting cold feet?$"

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
	.string "I want to have tea too! When I get my\n"
	.string "first Pokémon, I want it to be\l"
	.string "Poltchageist.$"

GastreeCity_NPC8_Text_0:
# 131 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my Kecleon some new\n"
	.string "moves so that we can go and explore\l"
	.string "Route 4 together! C'mon Kecleon! C'mon!!$"

GastreeCity_NPC8_Text_1:
# 134 "data//maps/GastreeCity/scripts.pory"
	.string "KECLEON: keeee!!!\p"
	.string "Kecleon is as fired up as its trainer is!$"

GastreeCity_NPC_Keckleon_Text_0:
# 139 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!\p"
	.string "Kecleon is trying hard to match its\n"
	.string "trainers energy. Go Kecleon!$"

GastreeCity_NPC9_Text_0:
# 146 "data//maps/GastreeCity/scripts.pory"
	.string "Yo, trainer! Come here. What's the most\n"
	.string "useful move a Pokémon can learn?$"

GastreeCity_NPC9_Text_1:
# 147 "data//maps/GastreeCity/scripts.pory"
	.string "ERUPTION$"

GastreeCity_NPC9_Text_2:
# 147 "data//maps/GastreeCity/scripts.pory"
	.string "QUIVER DANCE$"

GastreeCity_NPC9_Text_3:
# 147 "data//maps/GastreeCity/scripts.pory"
	.string "EXPANDING FORCE$"

GastreeCity_NPC9_Text_4:
# 147 "data//maps/GastreeCity/scripts.pory"
	.string "EARTHQUAKE$"

GastreeCity_NPC9_Text_5:
# 148 "data//maps/GastreeCity/scripts.pory"
	.string "Nope - trick question! It's SPLASH!\p"
	.string "...\p"
	.string "No, seriously. Most people think it's\n"
	.string "useless, but if you have HM SPLASH, your\l"
	.string "Pokémon can hop onto rocks in the\l"
	.string "water like the one here. But you need at\l"
	.string "least one Gym Badge to be able to use\l"
	.string "HMs.$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 179 "data//maps/GastreeCity/scripts.pory"
	.string "No! Skitty!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 188 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 201 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my Skitty back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her!$"

GastreeCity_NPC2_Text_0:
# 230 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away because she got\n"
	.string "bored...maybe I should catch a Purrloin\l"
	.string "or Meowth for her to play with.$"

GastreeCity_NPC2_Text_1:
# 234 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my Skitty is back!$"

GastreeCity_NPC2_Text_2:
# 237 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 238 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 240 "data//maps/GastreeCity/scripts.pory"
	.string "You do need to have at least one GYM\n"
	.string "BADGE to use it. Now come here Skitty!$"

GastreeCity_NPC2_Text_5:
# 245 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my Skitty yet? She\n"
	.string "might be stuck in a tree - please look\l"
	.string "for her pink tail!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 253 "data//maps/GastreeCity/scripts.pory"
	.string "There's something in the tree...\p"
	.string "It's Skitty!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 260 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 285 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away again. It's too\n"
	.string "slippery!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 303 "data//maps/GastreeCity/scripts.pory"
	.string "It's Skitty! Okay, this time you'd\n"
	.string "better come here, Skitty!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 310 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. Looks like Skitty ran\n"
	.string "back to its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 334 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skee~~$"

GastreeCity_Poltchageist_Text_0:
# 344 "data//maps/GastreeCity/scripts.pory"
	.string "Poltchageist is picking herbs for the\n"
	.string "teahouse!$"

GastreeCity_KohlaIntro1::
# 77 "data//maps/GastreeCity/scripts.pory"
	.string "Well well, look who thought it was\n"
	.string "fashionable to be late! I'm way ahead of\l"
	.string "you, chum! I've already beaten Inger\l"
	.string "and got the GYM BADGE.$"

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
	.string "after me - I don't need your help. Over\l"
	.string "and out, chum!$"
