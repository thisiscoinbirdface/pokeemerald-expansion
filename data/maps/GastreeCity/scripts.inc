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
# 25 "data//maps/GastreeCity/scripts.pory"
	lockall
# 26 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 29 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro1
# 30 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaIntro2
# 33 "data//maps/GastreeCity/scripts.pory"
	trainerbattle_no_intro TRAINER_GASTREE_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Text_0
# 36 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_KohlaPostBattle
# 37 "data//maps/GastreeCity/scripts.pory"
	release
# 39 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_KOHLA, GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0
# 40 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 43 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_KOHLA_BATTLE
# 44 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 47 "data//maps/GastreeCity/scripts.pory"
	releaseall
	return


GastreeCity_NPC1::
# 64 "data//maps/GastreeCity/scripts.pory"
	lockall
# 65 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 66 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC1_Text_0
# 67 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC3::
# 71 "data//maps/GastreeCity/scripts.pory"
	lockall
# 72 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 73 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC3_Text_0
# 74 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC4::
# 78 "data//maps/GastreeCity/scripts.pory"
	lockall
# 79 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 80 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC4_Text_0
# 81 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC5::
# 86 "data//maps/GastreeCity/scripts.pory"
	lockall
# 87 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 88 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC5_Text_0
# 89 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_Mankey::
# 93 "data//maps/GastreeCity/scripts.pory"
	lockall
# 94 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_MANKEY, CRY_MODE_NORMAL
# 95 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Mankey_Text_0
# 96 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC6::
# 102 "data//maps/GastreeCity/scripts.pory"
	lockall
# 103 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 104 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC6_Text_0
# 105 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC7::
# 110 "data//maps/GastreeCity/scripts.pory"
	lockall
# 111 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 112 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC7_Text_0
# 113 "data//maps/GastreeCity/scripts.pory"
	applymovement 11, GastreeCity_NPC7_Movement_0
# 114 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 115 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC8::
# 120 "data//maps/GastreeCity/scripts.pory"
	lockall
# 121 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 122 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_0
# 123 "data//maps/GastreeCity/scripts.pory"
	release
# 124 "data//maps/GastreeCity/scripts.pory"
	applymovement 5, GastreeCity_NPC8_Movement_0
# 125 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 126 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC8_Text_1
# 127 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC_Keckleon::
# 130 "data//maps/GastreeCity/scripts.pory"
	lockall
# 131 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 132 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Keckleon_Text_0
# 133 "data//maps/GastreeCity/scripts.pory"
	release
	return


GastreeCity_NPC9::
# 138 "data//maps/GastreeCity/scripts.pory"
	lockall
# 139 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 140 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_0
# 141 "data//maps/GastreeCity/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, GastreeCity_NPC9_Text_1, GastreeCity_NPC9_Text_2, GastreeCity_NPC9_Text_3, GastreeCity_NPC9_Text_4
# 142 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC9_Text_5
# 143 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScript_SkittyQuestStart::
# 160 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 161 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 162 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 164 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 165 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 166 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 169 "data//maps/GastreeCity/scripts.pory"
	lockall
# 170 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 171 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 172 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 173 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 174 "data//maps/GastreeCity/scripts.pory"
	release
# 175 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 176 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 177 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 178 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 179 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 180 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 181 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 182 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 183 "data//maps/GastreeCity/scripts.pory"
	release
# 184 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_3
# 185 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 186 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 187 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_4
# 188 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 189 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 190 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 191 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 192 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 193 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_5
# 194 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 195 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 196 "data//maps/GastreeCity/scripts.pory"
	release
# 197 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 198 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 199 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_6
# 200 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 205 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 206 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 209 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 210 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 213 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 214 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 220 "data//maps/GastreeCity/scripts.pory"
	lockall
# 221 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 223 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 226 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 238 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 241 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 224 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 227 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 228 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 229 "data//maps/GastreeCity/scripts.pory"
	release
# 230 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 231 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 232 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 233 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_CUT
# 234 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 235 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 236 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 246 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 247 "data//maps/GastreeCity/scripts.pory"
	release
# 248 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 249 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 250 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 251 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 252 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 256 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 257 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 260 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 261 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 264 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 265 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 270 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 271 "data//maps/GastreeCity/scripts.pory"
	release
# 272 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 273 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 274 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 275 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 276 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 279 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 280 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 283 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 284 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 287 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 288 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 294 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 295 "data//maps/GastreeCity/scripts.pory"
	release
# 296 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 297 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 298 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 299 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 300 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 303 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 304 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 307 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 308 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 311 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 314 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 316 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 321 "data//maps/GastreeCity/scripts.pory"
	lockall
# 322 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 323 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 324 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 325 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 331 "data//maps/GastreeCity/scripts.pory"
	lockall
# 332 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 333 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 334 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Poltchageist_Text_0
# 335 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


# 39 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_KohlaBattle_Trigger_Movement_0:
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
# 39 "data//maps/GastreeCity/scripts.pory"
	walk_up
	step_end

# 113 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC7_Movement_0:
# 113 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 124 "data//maps/GastreeCity/scripts.pory"
GastreeCity_NPC8_Movement_0:
# 124 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 175 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 175 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 175 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 175 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 175 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 175 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 175 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 175 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 177 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 177 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 180 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 180 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 180 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 180 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 184 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_3:
# 184 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 187 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_4:
# 187 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 193 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_5:
# 193 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 193 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 193 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 193 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 199 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_6:
# 199 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 199 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 199 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 199 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 249 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 249 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 249 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 249 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 249 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 249 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 249 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 249 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 249 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 249 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 249 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 249 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 249 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 249 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 273 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 273 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 273 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 297 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 297 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 297 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
	step_end

GastreeCity_EventScript_KohlaBattle_Trigger_Text_0:
# 33 "data//maps/GastreeCity/scripts.pory"
	.string "Not again!$"

GastreeCity_NPC1_Text_0:
# 66 "data//maps/GastreeCity/scripts.pory"
	.string "You came all the way from CARABRUE\n"
	.string "TOWN? Woah! Then I bet you don't know -\l"
	.string "be careful on ROUTE 4! There's a\l"
	.string "dangerouns DEWPIDER that attacks\l"
	.string "people.$"

GastreeCity_NPC3_Text_0:
# 73 "data//maps/GastreeCity/scripts.pory"
	.string "My dad drags me here every weekend and\n"
	.string "its sooo boring. I can't wait to grow up\l"
	.string "and leave the house!$"

GastreeCity_NPC4_Text_0:
# 80 "data//maps/GastreeCity/scripts.pory"
	.string "I come here every weekend with my\n"
	.string "daughter for some quality family time.\l"
	.string "Oh, how I'll miss her when she grows up!$"

GastreeCity_NPC5_Text_0:
# 88 "data//maps/GastreeCity/scripts.pory"
	.string "INGER, this city's Gym Leader, uses ROCK\n"
	.string "types. I should have an advantage with\l"
	.string "my FIGHTING-type {PKMN} right? So then\l"
	.string "why am I getting cold feet?$"

GastreeCity_Mankey_Text_0:
# 95 "data//maps/GastreeCity/scripts.pory"
	.string "MANKEY is getting angry at his trainer's\n"
	.string "cold feet.$"

GastreeCity_NPC6_Text_0:
# 104 "data//maps/GastreeCity/scripts.pory"
	.string "GASTREE CITY is famous not just for\n"
	.string "being a connecting Route to Mt. Ceram\l"
	.string "Base Camp, but also for its scenic\l"
	.string "viewpoints and its teahouse!$"

GastreeCity_NPC7_Text_0:
# 112 "data//maps/GastreeCity/scripts.pory"
	.string "I want to have tea too! When I get my\n"
	.string "first {PKMN}, I want it to be SINISTEA or\l"
	.string "POLTCHAGEIST.$"

GastreeCity_NPC8_Text_0:
# 122 "data//maps/GastreeCity/scripts.pory"
	.string "Hiiiiyah!\p"
	.string "I'm trying to teach my KECKLEON CUT so\n"
	.string "that we can go and explore Route 4\l"
	.string "together!$"

GastreeCity_NPC8_Text_1:
# 126 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!!$"

GastreeCity_NPC_Keckleon_Text_0:
# 132 "data//maps/GastreeCity/scripts.pory"
	.string "KECKLEON: keeee!!\p"
	.string "It's trying hard to learn CUT. Go\n"
	.string "KECKLEON!$"

GastreeCity_NPC9_Text_0:
# 140 "data//maps/GastreeCity/scripts.pory"
	.string "Yo, trainer! Come here. What's the most\n"
	.string "useful move a {PKMN} can learn?$"

GastreeCity_NPC9_Text_1:
# 141 "data//maps/GastreeCity/scripts.pory"
	.string "ERUPTION$"

GastreeCity_NPC9_Text_2:
# 141 "data//maps/GastreeCity/scripts.pory"
	.string "QUIVER DANCE$"

GastreeCity_NPC9_Text_3:
# 141 "data//maps/GastreeCity/scripts.pory"
	.string "EXPANDING FORCE$"

GastreeCity_NPC9_Text_4:
# 141 "data//maps/GastreeCity/scripts.pory"
	.string "EARTHQUAKE$"

GastreeCity_NPC9_Text_5:
# 142 "data//maps/GastreeCity/scripts.pory"
	.string "Nope - trick question! It's SPLASH!\p"
	.string "...\p"
	.string "No, seriously. Most people think it's\n"
	.string "useless, but if you have HM SPLASH, your\l"
	.string "{PKMN} can hop onto rocks in the water like\l"
	.string "the one here. But you need at least one\l"
	.string "Gym Badge to be able to use HMs.$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 173 "data//maps/GastreeCity/scripts.pory"
	.string "No! SKITTY!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 182 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 195 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my SKITTY back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her!$"

GastreeCity_NPC2_Text_0:
# 224 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY ran away because she got\n"
	.string "bored...maybe I should catch a PURRLOIN\l"
	.string "or MEOWTH for her to play with.$"

GastreeCity_NPC2_Text_1:
# 228 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my SKITTY is back!$"

GastreeCity_NPC2_Text_2:
# 231 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 232 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 234 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY already knows CUT, so I don't\n"
	.string "need it any more. With CUT, any {PKMN} can\l"
	.string "cut small trees in its path! But only\l"
	.string "some {PKMN} can use CUT in battle.\p"
	.string "Oh, but you do need to have at least one\n"
	.string "GYM BADGE to use it.$"

GastreeCity_NPC2_Text_5:
# 238 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my SKITTY yet?$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 246 "data//maps/GastreeCity/scripts.pory"
	.string "It's the SKITTY! Come here SKITTY...$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 252 "data//maps/GastreeCity/scripts.pory"
	.string "The SKITTY ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 276 "data//maps/GastreeCity/scripts.pory"
	.string "The SKITTY ran away again! Argh!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 294 "data//maps/GastreeCity/scripts.pory"
	.string "It's the SKITTY! Okay, this time you'd\n"
	.string "better come here, SKITTY!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 300 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. The SKITTY ran back to\n"
	.string "its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 324 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skee~~$"

GastreeCity_Poltchageist_Text_0:
# 334 "data//maps/GastreeCity/scripts.pory"
	.string "POLTCHAGEIST is hard at work for the\n"
	.string "teahouse!$"

GastreeCity_KohlaIntro1::
# 50 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: Well well, look who thought it\n"
	.string "was fashionable to be late! I'm way\l"
	.string "ahead of you, chum! I've already beaten\l"
	.string "INGER and got the GYM BADGE.$"

GastreeCity_KohlaIntro2::
# 53 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: I don't mind dishing out a\n"
	.string "second serving either. This is payback\l"
	.string "for one-upping me in front of the other\l"
	.string "detectives!$"

GastreeCity_KohlaPostBattle::
# 56 "data//maps/GastreeCity/scripts.pory"
	.string "KOHLA: You may have won, but I'll get\n"
	.string "the dreamstone first! I heard that\l"
	.string "some group called Team Somber is also\l"
	.string "after the dreamstone. I'm going to head\l"
	.string "north towards the CERAM BASE CAMP.\l"
	.string "Don't come after me - I don't need your\l"
	.string "help. Over and out, chum!$"
