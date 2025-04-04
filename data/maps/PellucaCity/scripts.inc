# 1 "data//maps/PellucaCity/scripts.pory"

# 2 "data//maps/PellucaCity/scripts.pory"
    .set LOCALID_GAB, 5

PellucaCity_MapScripts::
	.byte 0


PellucaCity_Greta_Trigger0::
# 9 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger0_2
# 11 "data//maps/PellucaCity/scripts.pory"
	lockall
# 12 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger0_Movement_0
# 13 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 14 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger0_Movement_1
# 15 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 16 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger0_2:
	end


PellucaCity_Greta_Trigger1::
# 20 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger1_2
# 22 "data//maps/PellucaCity/scripts.pory"
	lockall
# 23 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger1_Movement_0
# 24 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 25 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger1_Movement_1
# 26 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 27 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger1_2:
	end


PellucaCity_Greta_Trigger2::
# 31 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_GRETA_PELLUCACITY, PellucaCity_Greta_Trigger2_2
# 33 "data//maps/PellucaCity/scripts.pory"
	lockall
# 34 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_Trigger2_Movement_0
# 35 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 36 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_Greta_Trigger1_Movement_1
# 37 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 38 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_Main
	return

PellucaCity_Greta_Trigger2_2:
	end


PellucaCity_Greta_Main::
# 43 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_Main_Text_0
# 44 "data//maps/PellucaCity/scripts.pory"
	release
# 45 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 47 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return


PellucaCity_Greta_GottaGo::
# 51 "data//maps/PellucaCity/scripts.pory"
	release
# 52 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_0
# 53 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 54 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_GottaGo_Text_0
# 55 "data//maps/PellucaCity/scripts.pory"
	release
# 56 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_1
# 57 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 58 "data//maps/PellucaCity/scripts.pory"
	removeobject 7
# 59 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_GRETA_PELLUCACITY
# 60 "data//maps/PellucaCity/scripts.pory"
	fadedefaultbgm
# 62 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_EventScripts_Gabrielle::
# 82 "data//maps/PellucaCity/scripts.pory"
	lockall
# 83 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_2
# 88 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 89 "data//maps/PellucaCity/scripts.pory"
	release
# 90 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 91 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 92 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 93 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2, MSGBOX_YESNO
# 94 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_6
# 102 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 103 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 104 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_5:
# 106 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 107 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 108 "data//maps/PellucaCity/scripts.pory"
	release
# 109 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 110 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 111 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 112 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 113 "data//maps/PellucaCity/scripts.pory"
	release
# 114 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 115 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 116 "data//maps/PellucaCity/scripts.pory"
	release
# 117 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 118 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 119 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
PellucaCity_EventScripts_Gabrielle_1:
# 121 "data//maps/PellucaCity/scripts.pory"
	releaseall
	return

PellucaCity_EventScripts_Gabrielle_2:
# 84 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_0
# 85 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_1

PellucaCity_EventScripts_Gabrielle_6:
# 96 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 97 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 98 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3
# 99 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_5


PellucaCity_Zorua::
# 126 "data//maps/PellucaCity/scripts.pory"
	lockall
# 127 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 128 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_NORMAL
# 129 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 130 "data//maps/PellucaCity/scripts.pory"
	release
# 131 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCity_Greta_Trigger1_Movement_1
# 132 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 133 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 149 "data//maps/PellucaCity/scripts.pory"
	lockall
# 150 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 151 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 152 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0
# 153 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC1::
# 166 "data//maps/PellucaCity/scripts.pory"
	lockall
# 167 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 168 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0
# 169 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC2::
# 174 "data//maps/PellucaCity/scripts.pory"
	lockall
# 175 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 176 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0
# 177 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC3::
# 182 "data//maps/PellucaCity/scripts.pory"
	lockall
# 183 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 184 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0
# 185 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC4::
# 190 "data//maps/PellucaCity/scripts.pory"
	lockall
# 191 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 192 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0
# 193 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC5::
# 198 "data//maps/PellucaCity/scripts.pory"
	lockall
# 199 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 200 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 201 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 202 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 203 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 204 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 205 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 206 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 207 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 208 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 213 "data//maps/PellucaCity/scripts.pory"
	lockall
# 214 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 215 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0
# 216 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC7::
# 221 "data//maps/PellucaCity/scripts.pory"
	lockall
# 222 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 223 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0
# 224 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC8::
# 229 "data//maps/PellucaCity/scripts.pory"
	lockall
# 230 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 231 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0
# 232 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Sealeo::
# 237 "data//maps/PellucaCity/scripts.pory"
	lockall
# 238 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 239 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 240 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0
# 241 "data//maps/PellucaCity/scripts.pory"
	release
# 242 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_Sealeo_Movement_0
# 243 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 244 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 252 "data//maps/PellucaCity/scripts.pory"
	lockall
# 253 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 254 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0
# 255 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_WingullGirl::
# 264 "data//maps/PellucaCity/scripts.pory"
	lockall
# 265 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 266 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_0
# 267 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 269 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 283 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5
PellucaCity_WingullGirl_1:
# 286 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 271 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_WingullGirl_Movement_0
# 272 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_WingullGirl_Movement_0
# 273 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 274 "data//maps/PellucaCity/scripts.pory"
	release
# 275 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_Greta_GottaGo_Movement_0
# 276 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_Greta_GottaGo_Movement_0
# 277 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 278 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 279 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 280 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 281 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 291 "data//maps/PellucaCity/scripts.pory"
	lockall
# 292 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 293 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0
# 294 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_WingullCritique::
# 299 "data//maps/PellucaCity/scripts.pory"
	lockall
# 300 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 301 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0
# 302 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


# 12 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_0:
# 12 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 12 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 12 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 12 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 12 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 12 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 12 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 14 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger0_Movement_1:
# 14 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 23 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_0:
# 23 "data//maps/PellucaCity/scripts.pory"
	walk_left
# 23 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 23 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 23 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 23 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 23 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 23 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 23 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 25 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger1_Movement_1:
# 25 "data//maps/PellucaCity/scripts.pory"
	face_left
	step_end

# 34 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_Trigger2_Movement_0:
# 34 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 34 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 34 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 34 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 34 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 34 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 34 "data//maps/PellucaCity/scripts.pory"
	face_right
	step_end

# 52 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_0:
# 52 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 56 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_1:
# 56 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 56 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 56 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 56 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 56 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 56 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 56 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 56 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 200 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 200 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 200 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 200 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 200 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 200 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 200 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 200 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 200 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 200 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 200 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 200 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
# 200 "data//maps/PellucaCity/scripts.pory"
	walk_fast_left
	step_end

# 205 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 205 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 205 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 205 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 205 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 205 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 205 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 205 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 205 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 205 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 205 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 205 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
# 205 "data//maps/PellucaCity/scripts.pory"
	walk_fast_right
	step_end

# 242 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Sealeo_Movement_0:
# 242 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 271 "data//maps/PellucaCity/scripts.pory"
PellucaCity_WingullGirl_Movement_0:
# 271 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

PellucaCity_Greta_Main_Text_0:
# 43 "data//maps/PellucaCity/scripts.pory"
	.string "GRETA: Oh, hello there! It's you again.\n"
	.string "Fancy seeing you in these parts. ROUTE\l"
	.string "6 was a tough trek, eh?\p"
	.string "GRETA: Come, come. I've got some really\n"
	.string "great stuff from...well, you can't ask a\l"
	.string "magician to reveal her secrets, can\l"
	.string "you?$"

PellucaCity_Greta_GottaGo_Text_0:
# 54 "data//maps/PellucaCity/scripts.pory"
	.string "GRETA: Would you look at the time! I've\n"
	.string "gotta run. See you around!$"

PellucaCity_EventScripts_Gabrielle_Text_0:
# 84 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Ahh, I love the smell of the\n"
	.string "river!$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 88 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: I grew up here on this cliff\n"
	.string "without my parents. Life was hard.\p"
	.string "I didn't want my younger siblings to go\n"
	.string "through what I did, so when Team Somber\l"
	.string "promised me money, I took it.\p"
	.string "...\p"
	.string "GABRIELLE: Those grunts were really\n"
	.string "vicious to me. I was so scared I would\l"
	.string "lose ZORUA!$"

PellucaCity_EventScripts_Gabrielle_Text_2:
# 93 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the CLEFAIRY?$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 98 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Yeah...I doubt he'd ever\n"
	.string "forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 103 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: You're just trying to make\n"
	.string "me feel better, aren't you? I don't need\l"
	.string "your pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 107 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: After getting kicked out of\n"
	.string "Team Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 112 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: I want you to have this. As\n"
	.string "a thank you. For saving me - not just\l"
	.string "once, but so many times. You're a strong\l"
	.string "trainer, but more importantly - you're a\l"
	.string "good person. I hope to be like you.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 115 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Who we are is defined by the\n"
	.string "chocies we make, and once we lock in, we\l"
	.string "can't change.\p"
	.string "I can't erase what I've done, but I'm\n"
	.string "going to make a better choice this time.\p"
	.string "GABRIELLE: I suppose you're going to\n"
	.string "head to the MIRROH BASE CAMP from\l"
	.string "here? Team Somber must've reached\l"
	.string "there already. Best of luck, {PLAYER}.$"

PellucaCity_Zorua_Text_0:
# 129 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE's ZORUA looks content. Life\n"
	.string "is more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 152 "data//maps/PellucaCity/scripts.pory"
	.string "LYCANROC is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 168 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 176 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "PELLUCA RESTAURANT?$"

PellucaCity_NPC3_Text_0:
# 184 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in MT MIRROH but I\n"
	.string "can't go there without a CABLE CAR\l"
	.string "PASS. So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 192 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge is too small. It's nothing\n"
	.string "like the cycling roads in other regions!$"

PellucaCity_NPC5_Text_0:
# 203 "data//maps/PellucaCity/scripts.pory"
	.string "The Gym Leader of PELLUCA CITY had her\n"
	.string "gym constructed on a separate island.\l"
	.string "Talk about entitlement!$"

PellucaCity_NPC6_Text_0:
# 215 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the MIRROH BASE\n"
	.string "CAMP? You'll have to take the cable car.\l"
	.string "It's just past the Pokemart. Wear\l"
	.string "something warm!$"

PellucaCity_NPC7_Text_0:
# 223 "data//maps/PellucaCity/scripts.pory"
	.string "There are no free tables at the\n"
	.string "restaurant! I should've made a\l"
	.string "reservation.$"

PellucaCity_NPC8_Text_0:
# 231 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "SHARPEDO's going to scare all the fish\l"
	.string "away?$"

PellucaCity_Sealeo_Text_0:
# 240 "data//maps/PellucaCity/scripts.pory"
	.string "SEALEO wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 254 "data//maps/PellucaCity/scripts.pory"
	.string "This is the PELLUCA FISHERY! But it's\n"
	.string "closed due to the SHARPEDO attacks.$"

PellucaCity_WingullGirl_Text_0:
# 266 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "WINGULLS over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 267 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 267 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 273 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a WINGULL!$"

PellucaCity_WingullGirl_Text_4:
# 279 "data//maps/PellucaCity/scripts.pory"
	.string "The WINGULL gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 283 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 293 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "WINGULLS. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 301 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at {PKMN}...that's poor parenting.$"
