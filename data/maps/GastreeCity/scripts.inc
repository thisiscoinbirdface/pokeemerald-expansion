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
	msgbox GastreeCity_NPC1_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC3::
# 93 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC3_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC4::
# 98 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC4_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC5::
# 104 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC5_Text_0, MSGBOX_NPC
	end


GastreeCity_Mankey::
# 109 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_NORMAL
# 110 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Mankey_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC6::
# 116 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC6_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC7::
# 122 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC7_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC8::
# 128 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0, MSGBOX_NPC
# 129 "data//maps/GastreeCity/scripts.pory"
	applymovement 5, GastreeCity_NPC8_Movement_0
# 130 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 131 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1, MSGBOX_NPC
	end


GastreeCity_NPC_Keckleon::
# 136 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0, MSGBOX_NPC
	end


GastreeCity_NPC9::
# 141 "data//maps/GastreeCity/scripts.pory"
	lockall
# 142 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 143 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 144 "data//maps/GastreeCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_NPC9_Text_1, GastreeCity_NPC9_Text_2, GastreeCity_NPC9_Text_3, GastreeCity_NPC9_Text_4
# 145 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_5
# 146 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScript_SkittyQuestStart::
# 163 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 164 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 165 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 167 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 168 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 169 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 172 "data//maps/GastreeCity/scripts.pory"
	lockall
# 173 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 174 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 175 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 176 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 177 "data//maps/GastreeCity/scripts.pory"
	release
# 178 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 179 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 180 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 181 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 182 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 183 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 184 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 185 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 186 "data//maps/GastreeCity/scripts.pory"
	release
# 187 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_3
# 188 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 189 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 190 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_4
# 191 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 192 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 193 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 194 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 195 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 196 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_5
# 197 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 198 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 199 "data//maps/GastreeCity/scripts.pory"
	release
# 200 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 201 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 202 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_6
# 203 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 208 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 209 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 212 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 213 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 216 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 217 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 223 "data//maps/GastreeCity/scripts.pory"
	lockall
# 224 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 226 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 229 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 242 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 245 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 227 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0, MSGBOX_NPC
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 230 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 231 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 232 "data//maps/GastreeCity/scripts.pory"
	release
# 233 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 234 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 235 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 236 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_CUT
# 237 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 238 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 239 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
# 240 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_NPC_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 250 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 251 "data//maps/GastreeCity/scripts.pory"
	release
# 252 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 253 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 254 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 255 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 256 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 257 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 261 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 262 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 265 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 266 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 269 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 270 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 275 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 276 "data//maps/GastreeCity/scripts.pory"
	release
# 277 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 278 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 279 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 280 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 281 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 282 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 285 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 286 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 289 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 290 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 293 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 294 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 300 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 301 "data//maps/GastreeCity/scripts.pory"
	release
# 302 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 303 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 304 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 305 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 306 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 307 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 310 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 311 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 314 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 315 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 318 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 321 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 323 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 328 "data//maps/GastreeCity/scripts.pory"
	lockall
# 329 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 330 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 331 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 332 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 338 "data//maps/GastreeCity/scripts.pory"
	lockall
# 339 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 340 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 341 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Poltchageist_Text_0
# 342 "data//maps/GastreeCity/scripts.pory"
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

# 129 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 129 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 178 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 178 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 178 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 178 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 178 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 178 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 178 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 178 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 178 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 180 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 180 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 183 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 183 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 183 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 183 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 187 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_3:
# 187 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 190 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_4:
# 190 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 196 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_5:
# 196 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 196 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 196 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 196 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 202 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_6:
# 202 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 202 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 202 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 202 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 254 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 254 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 254 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 254 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 254 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 254 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 254 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 254 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 254 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 254 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 254 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 254 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 254 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 254 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 279 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 279 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 279 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 304 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 304 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 304 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger_Text_0:
# 56 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_NPC1_Text_0:
# 88 "data//maps/GastreeCity/scripts.pory"
	.string "You came all the way from Carabrue\n"
	.string "Town? Woah! Then I bet you don't know -\l"
	.string "be careful on Route 4! There's a\l"
	.string "dangerouns Dewpider that attacks\l"
	.string "people.$"

GastreeCity_NPC3_Text_0:
# 93 "data//maps/GastreeCity/scripts.pory"
	.string "My dad drags me here every weekend and\n"
	.string "its sooo boring. I can't wait to grow up\l"
	.string "and leave the house!$"

GastreeCity_NPC4_Text_0:
# 98 "data//maps/GastreeCity/scripts.pory"
	.string "I come here every weekend with my\n"
	.string "daughter for some quality family time.\l"
	.string "Oh, how I'll miss her when she grows up!$"

GastreeCity_NPC5_Text_0:
# 104 "data//maps/GastreeCity/scripts.pory"
	.string "Inger, this city's Gym Leader, uses ROCK\n"
	.string "types. I should have an advantage with\l"
	.string "my FIGHTING-type Pokémon right? So\l"
	.string "then why am I getting cold feet?$"

GastreeCity_Mankey_Text_0:
# 110 "data//maps/GastreeCity/scripts.pory"
	.string "Mankey is getting angry at his trainer's\n"
	.string "cold feet.$"

GastreeCity_NPC6_Text_0:
# 116 "data//maps/GastreeCity/scripts.pory"
	.string "Gastree City is famous not just for\n"
	.string "being a connecting Route to Mt. Ceram\l"
	.string "Base Camp, but also for its scenic\l"
	.string "viewpoints and its teahouse!$"

GastreeCity_NPC7_Text_0:
# 122 "data//maps/GastreeCity/scripts.pory"
	.string "I want to have tea too! When I get my\n"
	.string "first Pokémon, I want it to be\l"
	.string "Poltchageist.$"

GastreeCity_NPC8_Text_0:
# 128 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my KECLEON some new\n"
	.string "moves so that we can go and explore\l"
	.string "Route 4 together! C'mon KECLEON!\l"
	.string "C'mon!!$"

GastreeCity_NPC8_Text_1:
# 131 "data//maps/GastreeCity/scripts.pory"
	.string "KECLEON: keeee!!!\p"
	.string "KECLEON is as fired up as its trainer is!$"

GastreeCity_NPC_Keckleon_Text_0:
# 136 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!\p"
	.string "KECLEON is trying hard to match its\n"
	.string "trainers energy. Go KECLEON!$"

GastreeCity_NPC9_Text_0:
# 143 "data//maps/GastreeCity/scripts.pory"
	.string "Yo, trainer! Come here. What's the most\n"
	.string "useful move a Pokémon can learn?$"

GastreeCity_NPC9_Text_1:
# 144 "data//maps/GastreeCity/scripts.pory"
	.string "ERUPTION$"

GastreeCity_NPC9_Text_2:
# 144 "data//maps/GastreeCity/scripts.pory"
	.string "QUIVER DANCE$"

GastreeCity_NPC9_Text_3:
# 144 "data//maps/GastreeCity/scripts.pory"
	.string "EXPANDING FORCE$"

GastreeCity_NPC9_Text_4:
# 144 "data//maps/GastreeCity/scripts.pory"
	.string "EARTHQUAKE$"

GastreeCity_NPC9_Text_5:
# 145 "data//maps/GastreeCity/scripts.pory"
	.string "Nope - trick question! It's SPLASH!\p"
	.string "...\p"
	.string "No, seriously. Most people think it's\n"
	.string "useless, but if you have HM SPLASH, your\l"
	.string "Pokémon can hop onto rocks in the\l"
	.string "water like the one here. But you need at\l"
	.string "least one Gym Badge to be able to use\l"
	.string "HMs.$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 176 "data//maps/GastreeCity/scripts.pory"
	.string "No! Skitty!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 185 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 198 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my SKITTY back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her!$"

GastreeCity_NPC2_Text_0:
# 227 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away because she got\n"
	.string "bored...maybe I should catch a Purrloin\l"
	.string "or Meowth for her to play with.$"

GastreeCity_NPC2_Text_1:
# 231 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my Skitty is back!$"

GastreeCity_NPC2_Text_2:
# 234 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 235 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 237 "data//maps/GastreeCity/scripts.pory"
	.string "You do need to have at least one GYM\n"
	.string "BADGE to use it. Now come here Skitty!$"

GastreeCity_NPC2_Text_5:
# 242 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my SKITTY yet?$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 250 "data//maps/GastreeCity/scripts.pory"
	.string "There's something in the tree...\p"
	.string "It's Skitty!$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 257 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 282 "data//maps/GastreeCity/scripts.pory"
	.string "Skitty ran away again. It's too\n"
	.string "slippery!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 300 "data//maps/GastreeCity/scripts.pory"
	.string "It's Skitty! Okay, this time you'd\n"
	.string "better come here, Skitty!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 307 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. Looks like Skitty ran\n"
	.string "back to its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 331 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skee~~$"

GastreeCity_Poltchageist_Text_0:
# 341 "data//maps/GastreeCity/scripts.pory"
	.string "Poltchageist is picking herbs for the\n"
	.string "teahouse!$"

GastreeCity_KohlaIntro1::
# 74 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: Well well, look who thought it\n"
	.string "was fashionable to be late! I'm way\l"
	.string "ahead of you, chum! I've already beaten\l"
	.string "Inger and got the GYM BADGE.$"

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
