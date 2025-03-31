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
	release
	return


GastreeCity_EventScript_SkittyQuestStart::
# 157 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 158 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 159 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 161 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 162 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 163 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 166 "data//maps/GastreeCity/scripts.pory"
	lockall
# 167 "data//maps/GastreeCity/scripts.pory"
	delay 12
# 168 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 169 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 170 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_0
# 171 "data//maps/GastreeCity/scripts.pory"
	release
# 172 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTYOG, GastreeCity_EventScript_SkittyQuestStart_Movement_0
# 173 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 174 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_1
# 175 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 176 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 177 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_2
# 178 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 179 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_1
# 180 "data//maps/GastreeCity/scripts.pory"
	release
# 181 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_3
# 182 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 183 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 184 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_4
# 185 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 186 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 187 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_NPC8_Movement_0
# 188 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 189 "data//maps/GastreeCity/scripts.pory"
	delay 36
# 190 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_5
# 191 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 192 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScript_SkittyQuestStart_Text_2
# 193 "data//maps/GastreeCity/scripts.pory"
	release
# 194 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 195 "data//maps/GastreeCity/scripts.pory"
	startquest QUEST_GASTREE_SKITTY
# 196 "data//maps/GastreeCity/scripts.pory"
	applymovement 3, GastreeCity_EventScript_SkittyQuestStart_Movement_6
# 197 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 202 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY
# 203 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTYOG
# 206 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY1
# 207 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY1
# 210 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 1
# 211 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC2::
# 217 "data//maps/GastreeCity/scripts.pory"
	lockall
# 218 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 220 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_NPC_SKITTY, GastreeCity_NPC2_2
# 223 "data//maps/GastreeCity/scripts.pory"
	goto_if_set FLAG_GASTREE_TRIGGER_SKITTY, GastreeCity_NPC2_5
# 235 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_5
GastreeCity_NPC2_1:
# 238 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end

GastreeCity_NPC2_2:
# 221 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_0
	goto GastreeCity_NPC2_1

GastreeCity_NPC2_5:
# 224 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 225 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_1
# 226 "data//maps/GastreeCity/scripts.pory"
	release
# 227 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 228 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_2
# 229 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_3
# 230 "data//maps/GastreeCity/scripts.pory"
	giveitem ITEM_HM_CUT
# 231 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC2_Text_4
# 232 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 5
# 233 "data//maps/GastreeCity/scripts.pory"
	completequest QUEST_GASTREE_SKITTY
	goto GastreeCity_NPC2_1


GastreeCity_EventScripts_SkittyTrigger1::
# 243 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 244 "data//maps/GastreeCity/scripts.pory"
	release
# 245 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 246 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY1, GastreeCity_EventScripts_SkittyTrigger1_Movement_0
# 247 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 248 "data//maps/GastreeCity/scripts.pory"
	removeobject 17
# 249 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_1
# 253 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY1
# 254 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY1
# 257 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY2
# 258 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY2
# 261 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 2
# 262 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger2::
# 267 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger1_Text_0
# 268 "data//maps/GastreeCity/scripts.pory"
	release
# 269 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 270 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY2, GastreeCity_EventScripts_SkittyTrigger2_Movement_0
# 271 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 272 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 273 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger2_Text_0
# 276 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY2
# 277 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY2
# 280 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY3
# 281 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTY3
# 284 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 3
# 285 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_EventScripts_SkittyTrigger3::
# 291 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_0
# 292 "data//maps/GastreeCity/scripts.pory"
	release
# 293 "data//maps/GastreeCity/scripts.pory"
	delay 16
# 294 "data//maps/GastreeCity/scripts.pory"
	applymovement LOCALID_SKITTY3, GastreeCity_EventScripts_SkittyTrigger3_Movement_0
# 295 "data//maps/GastreeCity/scripts.pory"
	waitmovement 0
# 296 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 297 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_EventScripts_SkittyTrigger3_Text_1
# 300 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_HIDE_GASTREE_SKITTY3
# 301 "data//maps/GastreeCity/scripts.pory"
	removeobject LOCALID_SKITTY3
# 304 "data//maps/GastreeCity/scripts.pory"
	clearflag FLAG_HIDE_GASTREE_SKITTY
# 305 "data//maps/GastreeCity/scripts.pory"
	addobject LOCALID_SKITTYOG
# 308 "data//maps/GastreeCity/scripts.pory"
	setvar VAR_GASTREE_SKITTY_QUEST, 4
# 311 "data//maps/GastreeCity/scripts.pory"
	setflag FLAG_GASTREE_TRIGGER_SKITTY
# 313 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_NPC_Skitty::
# 318 "data//maps/GastreeCity/scripts.pory"
	lockall
# 319 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 320 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 321 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_NPC_Skitty_Text_0
# 322 "data//maps/GastreeCity/scripts.pory"
	releaseall
	end


GastreeCity_Poltchageist::
# 328 "data//maps/GastreeCity/scripts.pory"
	lockall
# 329 "data//maps/GastreeCity/scripts.pory"
	playmoncry SPECIES_POLTCHAGEIST, CRY_MODE_NORMAL
# 330 "data//maps/GastreeCity/scripts.pory"
	faceplayer
# 331 "data//maps/GastreeCity/scripts.pory"
	msgbox GastreeCity_Poltchageist_Text_0
# 332 "data//maps/GastreeCity/scripts.pory"
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

# 172 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_0:
# 172 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 172 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 172 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 172 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 172 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 172 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 172 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 174 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_1:
# 174 "data//maps/GastreeCity/scripts.pory"
	face_down
	step_end

# 177 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_2:
# 177 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 177 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
# 177 "data//maps/GastreeCity/scripts.pory"
	jump_in_place_down
	step_end

# 181 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_3:
# 181 "data//maps/GastreeCity/scripts.pory"
	face_left
	step_end

# 184 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_4:
# 184 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 190 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_5:
# 190 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 190 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 190 "data//maps/GastreeCity/scripts.pory"
	walk_right
# 190 "data//maps/GastreeCity/scripts.pory"
	face_up
	step_end

# 196 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScript_SkittyQuestStart_Movement_6:
# 196 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 196 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 196 "data//maps/GastreeCity/scripts.pory"
	walk_left
# 196 "data//maps/GastreeCity/scripts.pory"
	face_right
	step_end

# 246 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger1_Movement_0:
# 246 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 246 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 246 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 246 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 246 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 246 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 246 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 246 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 246 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 246 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 246 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 246 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
# 246 "data//maps/GastreeCity/scripts.pory"
	walk_fast_left
	step_end

# 270 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger2_Movement_0:
# 270 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
# 270 "data//maps/GastreeCity/scripts.pory"
	walk_fast_down
	step_end

# 294 "data//maps/GastreeCity/scripts.pory"
GastreeCity_EventScripts_SkittyTrigger3_Movement_0:
# 294 "data//maps/GastreeCity/scripts.pory"
	emote_exclamation_mark
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_fast_right
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 294 "data//maps/GastreeCity/scripts.pory"
	walk_fast_up
# 294 "data//maps/GastreeCity/scripts.pory"
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
	.string "$"

GastreeCity_EventScript_SkittyQuestStart_Text_0:
# 170 "data//maps/GastreeCity/scripts.pory"
	.string "No! SKITTY!$"

GastreeCity_EventScript_SkittyQuestStart_Text_1:
# 179 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY! Come back!!!$"

GastreeCity_EventScript_SkittyQuestStart_Text_2:
# 192 "data//maps/GastreeCity/scripts.pory"
	.string "Trainer! Trainer! You saw what\n"
	.string "happened, right? Oh, you have to bring\l"
	.string "my SKITTY back, you absolutely have to!\l"
	.string "I don't want her to get hurt...please\l"
	.string "find her!$"

GastreeCity_NPC2_Text_0:
# 221 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY ran away because she got\n"
	.string "bored...maybe I should catch a PURRLOIN\l"
	.string "or MEOWTH for her to play with.$"

GastreeCity_NPC2_Text_1:
# 225 "data//maps/GastreeCity/scripts.pory"
	.string "Thank you trainer - my SKITTY is back!$"

GastreeCity_NPC2_Text_2:
# 228 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skiiii!!!$"

GastreeCity_NPC2_Text_3:
# 229 "data//maps/GastreeCity/scripts.pory"
	.string "Please take this as a reward.$"

GastreeCity_NPC2_Text_4:
# 231 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY already knows CUT, so I don't\n"
	.string "need it any more. With CUT, any {PKMN} can\l"
	.string "cut small trees in its path! But only\l"
	.string "some {PKMN} can use CUT in battle.\p"
	.string "Oh, but you do need to have at least one\n"
	.string "GYM BADGE to use it.$"

GastreeCity_NPC2_Text_5:
# 235 "data//maps/GastreeCity/scripts.pory"
	.string "Have you found my SKITTY yet?$"

GastreeCity_EventScripts_SkittyTrigger1_Text_0:
# 243 "data//maps/GastreeCity/scripts.pory"
	.string "It's the SKITTY! Come here SKITTY...$"

GastreeCity_EventScripts_SkittyTrigger1_Text_1:
# 249 "data//maps/GastreeCity/scripts.pory"
	.string "The SKITTY ran away! Gotta chase it!$"

GastreeCity_EventScripts_SkittyTrigger2_Text_0:
# 273 "data//maps/GastreeCity/scripts.pory"
	.string "The SKITTY ran away again! Argh!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_0:
# 291 "data//maps/GastreeCity/scripts.pory"
	.string "It's the SKITTY! Okay, this time you'd\n"
	.string "better come here, SKITTY!$"

GastreeCity_EventScripts_SkittyTrigger3_Text_1:
# 297 "data//maps/GastreeCity/scripts.pory"
	.string "Phew! Finally. The SKITTY ran back to\n"
	.string "its owner!$"

GastreeCity_NPC_Skitty_Text_0:
# 321 "data//maps/GastreeCity/scripts.pory"
	.string "SKITTY: skee~~$"

GastreeCity_Poltchageist_Text_0:
# 331 "data//maps/GastreeCity/scripts.pory"
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
