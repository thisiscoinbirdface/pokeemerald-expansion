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
	delay 20
# 46 "data//maps/PellucaCity/scripts.pory"
	msgbox Common_Text_Greta_Comecome
# 47 "data//maps/PellucaCity/scripts.pory"
	release
# 48 "data//maps/PellucaCity/scripts.pory"
	delay 20
# 50 "data//maps/PellucaCity/scripts.pory"
	goto PellucaCity_Greta_ShowItemsForSale
	return


PellucaCity_Greta_GottaGo::
# 54 "data//maps/PellucaCity/scripts.pory"
	release
# 55 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_0
# 56 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 57 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Greta_GottaGo_Text_0
# 58 "data//maps/PellucaCity/scripts.pory"
	release
# 59 "data//maps/PellucaCity/scripts.pory"
	applymovement 27, PellucaCity_Greta_GottaGo_Movement_1
# 60 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 61 "data//maps/PellucaCity/scripts.pory"
	removeobject 27
# 62 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_GRETA_PELLUCACITY
# 63 "data//maps/PellucaCity/scripts.pory"
	fadedefaultbgm
# 65 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_EventScripts_Gabrielle::
# 85 "data//maps/PellucaCity/scripts.pory"
	lockall
# 86 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_GABRIELLE_CHOICEBAND, PellucaCity_EventScripts_Gabrielle_2
# 91 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_1
# 92 "data//maps/PellucaCity/scripts.pory"
	release
# 93 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 94 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 95 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 96 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_2, MSGBOX_YESNO
# 97 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_EventScripts_Gabrielle_6
# 105 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 106 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_4
# 107 "data//maps/PellucaCity/scripts.pory"
	release
PellucaCity_EventScripts_Gabrielle_5:
# 109 "data//maps/PellucaCity/scripts.pory"
	delay 30
# 110 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_5
# 111 "data//maps/PellucaCity/scripts.pory"
	release
# 112 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 113 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 114 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 115 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_6
# 116 "data//maps/PellucaCity/scripts.pory"
	release
# 117 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 118 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_7
# 119 "data//maps/PellucaCity/scripts.pory"
	release
# 120 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_GABRIELLE_CHOICEBAND
# 121 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 122 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
PellucaCity_EventScripts_Gabrielle_1:
# 124 "data//maps/PellucaCity/scripts.pory"
	releaseall
	return

PellucaCity_EventScripts_Gabrielle_2:
# 87 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_0
# 88 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_1

PellucaCity_EventScripts_Gabrielle_6:
# 99 "data//maps/PellucaCity/scripts.pory"
	applymovement LOCALID_GAB, PellucaCity_Greta_Trigger1_Movement_1
# 100 "data//maps/PellucaCity/scripts.pory"
	delay 24
# 101 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_EventScripts_Gabrielle_Text_3
# 102 "data//maps/PellucaCity/scripts.pory"
	release
	goto PellucaCity_EventScripts_Gabrielle_5


PellucaCity_Zorua::
# 129 "data//maps/PellucaCity/scripts.pory"
	lockall
# 130 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 131 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_ZORUA, CRY_MODE_NORMAL
# 132 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Zorua_Text_0
# 133 "data//maps/PellucaCity/scripts.pory"
	release
# 134 "data//maps/PellucaCity/scripts.pory"
	applymovement 25, PellucaCity_Greta_Trigger1_Movement_1
# 135 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 136 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_Lycanroc::
# 152 "data//maps/PellucaCity/scripts.pory"
	lockall
# 153 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 154 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 155 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Lycanroc_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC1::
# 168 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC1_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC2::
# 173 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC3::
# 178 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC3_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC4::
# 183 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC4_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC5::
# 188 "data//maps/PellucaCity/scripts.pory"
	lockall
# 189 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_0
# 190 "data//maps/PellucaCity/scripts.pory"
	release
# 191 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 192 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_0
# 193 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 194 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 195 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_1
# 196 "data//maps/PellucaCity/scripts.pory"
	release
# 197 "data//maps/PellucaCity/scripts.pory"
	special SpawnCameraObject
# 198 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PellucaCity_NPC5_Movement_1
# 199 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 200 "data//maps/PellucaCity/scripts.pory"
	special RemoveCameraObject
# 201 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC5_Text_2, MSGBOX_NPC
# 202 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC6::
# 207 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC6_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC7::
# 212 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC7_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC8::
# 217 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC8_Text_0, MSGBOX_NPC
	end


PellucaCity_Sealeo::
# 222 "data//maps/PellucaCity/scripts.pory"
	lockall
# 223 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 224 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_SEALEO, CRY_MODE_NORMAL
# 225 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Sealeo_Text_0, MSGBOX_NPC
# 226 "data//maps/PellucaCity/scripts.pory"
	release
# 227 "data//maps/PellucaCity/scripts.pory"
	applymovement 26, PellucaCity_Sealeo_Movement_0
# 228 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 229 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end


PellucaCity_NPC9::
# 237 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC9_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullGirl::
# 246 "data//maps/PellucaCity/scripts.pory"
	lock
# 247 "data//maps/PellucaCity/scripts.pory"
	faceplayer
# 248 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_0
# 249 "data//maps/PellucaCity/scripts.pory"
	dynmultichoice 16, 8, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, PellucaCity_WingullGirl_Text_1, PellucaCity_WingullGirl_Text_2
# 251 "data//maps/PellucaCity/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PellucaCity_WingullGirl_2
# 265 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_5, MSGBOX_NPC
PellucaCity_WingullGirl_1:
# 268 "data//maps/PellucaCity/scripts.pory"
	releaseall
	end

PellucaCity_WingullGirl_2:
# 253 "data//maps/PellucaCity/scripts.pory"
	applymovement 15, PellucaCity_WingullGirl_Movement_0
# 254 "data//maps/PellucaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_WingullGirl_Movement_0
# 255 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_3
# 256 "data//maps/PellucaCity/scripts.pory"
	release
# 257 "data//maps/PellucaCity/scripts.pory"
	applymovement 16, PellucaCity_Greta_GottaGo_Movement_0
# 258 "data//maps/PellucaCity/scripts.pory"
	applymovement 17, PellucaCity_Greta_GottaGo_Movement_0
# 259 "data//maps/PellucaCity/scripts.pory"
	waitmovement 0
# 260 "data//maps/PellucaCity/scripts.pory"
	delay 16
# 261 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullGirl_Text_4
# 262 "data//maps/PellucaCity/scripts.pory"
	setwildbattle SPECIES_WINGULL, 25
# 263 "data//maps/PellucaCity/scripts.pory"
	dowildbattle
	goto PellucaCity_WingullGirl_1


PellucaCity_WingullMother::
# 273 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullMother_Text_0, MSGBOX_NPC
	end


PellucaCity_WingullCritique::
# 278 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_WingullCritique_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC10::
# 291 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC10_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC11::
# 297 "data//maps/PellucaCity/scripts.pory"
	goto_if_set FLAG_PELLUCA_CITY_TM_GIVER, PellucaCity_NPC11_2
# 302 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_1, MSGBOX_NPC
# 303 "data//maps/PellucaCity/scripts.pory"
	giveitem ITEM_TM01
# 304 "data//maps/PellucaCity/scripts.pory"
	setflag FLAG_PELLUCA_CITY_TM_GIVER
# 305 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_2, MSGBOX_NPC
	end

PellucaCity_NPC11_2:
# 298 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC11_Text_0, MSGBOX_NPC
	end


PellucaCity_NPC12::
# 311 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_NPC12_Text_0, MSGBOX_NPC
	end


PellucaCity_Stantler::
# 316 "data//maps/PellucaCity/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 317 "data//maps/PellucaCity/scripts.pory"
	msgbox PellucaCity_Stantler_Text_0, MSGBOX_NPC
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

# 55 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_0:
# 55 "data//maps/PellucaCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 59 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Greta_GottaGo_Movement_1:
# 59 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 59 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 59 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 59 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 59 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 59 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 59 "data//maps/PellucaCity/scripts.pory"
	walk_up
# 59 "data//maps/PellucaCity/scripts.pory"
	walk_up
	step_end

# 192 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_0:
# 192 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 192 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 192 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 192 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 192 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 192 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
# 192 "data//maps/PellucaCity/scripts.pory"
	walk_fast_up
	step_end

# 198 "data//maps/PellucaCity/scripts.pory"
PellucaCity_NPC5_Movement_1:
# 198 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 198 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 198 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 198 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 198 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 198 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
# 198 "data//maps/PellucaCity/scripts.pory"
	walk_fast_down
	step_end

# 227 "data//maps/PellucaCity/scripts.pory"
PellucaCity_Sealeo_Movement_0:
# 227 "data//maps/PellucaCity/scripts.pory"
	face_down
	step_end

# 253 "data//maps/PellucaCity/scripts.pory"
PellucaCity_WingullGirl_Movement_0:
# 253 "data//maps/PellucaCity/scripts.pory"
	face_up
	step_end

PellucaCity_Greta_Main_Text_0:
# 43 "data//maps/PellucaCity/scripts.pory"
	.string "GRETA: Oh, hello there! It's you again.\n"
	.string "Fancy seeing you in these parts. Route\l"
	.string "6 was a tough trek, eh?$"

PellucaCity_Greta_GottaGo_Text_0:
# 57 "data//maps/PellucaCity/scripts.pory"
	.string "GRETA: Would you look at the time! I've\n"
	.string "gotta run. See you around!$"

PellucaCity_EventScripts_Gabrielle_Text_0:
# 87 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Ahh, I love the smell of the\n"
	.string "river!$"

PellucaCity_EventScripts_Gabrielle_Text_1:
# 91 "data//maps/PellucaCity/scripts.pory"
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
# 96 "data//maps/PellucaCity/scripts.pory"
	.string "Was I just like that when you met me\n"
	.string "with that hiker with the CLEFAIRY?$"

PellucaCity_EventScripts_Gabrielle_Text_3:
# 101 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Yeah...I doubt he'd ever\n"
	.string "forgive me.$"

PellucaCity_EventScripts_Gabrielle_Text_4:
# 106 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: You're just trying to make\n"
	.string "me feel better, aren't you? I don't need\l"
	.string "your pity. I know what I've done.$"

PellucaCity_EventScripts_Gabrielle_Text_5:
# 110 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: After getting kicked out of\n"
	.string "Team Somber, I feel like I've come to my\l"
	.string "senses a little. I'm going to support my\l"
	.string "family - but do it right. Be honest.\l"
	.string "Responsible.$"

PellucaCity_EventScripts_Gabrielle_Text_6:
# 115 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: I want you to have this. As\n"
	.string "a thank you. For saving me - not just\l"
	.string "once, but so many times. You're a strong\l"
	.string "trainer, but more importantly - you're a\l"
	.string "good person. I hope to be like you.$"

PellucaCity_EventScripts_Gabrielle_Text_7:
# 118 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE: Who we are is defined by the\n"
	.string "chocies we make, and once we lock in, we\l"
	.string "can't change.\p"
	.string "I can't erase what I've done, but I'm\n"
	.string "going to make a better choice this time.\p"
	.string "GABRIELLE: I suppose you're going to\n"
	.string "head to the Mirroh Base Camp from here?\l"
	.string "Team Somber must've reached there\l"
	.string "already. Best of luck, {PLAYER}.$"

PellucaCity_Zorua_Text_0:
# 132 "data//maps/PellucaCity/scripts.pory"
	.string "GABRIELLE's ZORUA looks content. Life\n"
	.string "is more peaceful for it now!$"

PellucaCity_Lycanroc_Text_0:
# 155 "data//maps/PellucaCity/scripts.pory"
	.string "Lycanroc is howling. It must be pining\n"
	.string "for a table at the restaurant!$"

PellucaCity_NPC1_Text_0:
# 168 "data//maps/PellucaCity/scripts.pory"
	.string "Whee!!!$"

PellucaCity_NPC2_Text_0:
# 173 "data//maps/PellucaCity/scripts.pory"
	.string "A tourist! Have you come to eat at the\n"
	.string "Pelluca Restaurant?$"

PellucaCity_NPC3_Text_0:
# 178 "data//maps/PellucaCity/scripts.pory"
	.string "I would've trained up in Mt. Mirroh but I\n"
	.string "can't go there without a Cable Car Pass.\l"
	.string "So I'm jogging here instead.$"

PellucaCity_NPC4_Text_0:
# 183 "data//maps/PellucaCity/scripts.pory"
	.string "This bridge is too small. It's nothing\n"
	.string "like the cycling roads in other regions!\l"
	.string "Why does the mayor even let us cycle\l"
	.string "then?$"

PellucaCity_NPC5_Text_0:
# 189 "data//maps/PellucaCity/scripts.pory"
	.string "Look over there...$"

PellucaCity_NPC5_Text_1:
# 195 "data//maps/PellucaCity/scripts.pory"
	.string "The Gym Leader of Pelluca City had her\n"
	.string "gym constructed on a separate island.$"

PellucaCity_NPC5_Text_2:
# 201 "data//maps/PellucaCity/scripts.pory"
	.string "Talk about entitlement!$"

PellucaCity_NPC6_Text_0:
# 207 "data//maps/PellucaCity/scripts.pory"
	.string "Are you headed to the Mirroh Base Camp?\n"
	.string "You'll have to take the cable car. It's\l"
	.string "just past the Pokemart. Wear something\l"
	.string "warm!$"

PellucaCity_NPC7_Text_0:
# 212 "data//maps/PellucaCity/scripts.pory"
	.string "There are no free tables at the\n"
	.string "restaurant! I should've made a\l"
	.string "reservation.$"

PellucaCity_NPC8_Text_0:
# 217 "data//maps/PellucaCity/scripts.pory"
	.string "What's even the point of fishing if the\n"
	.string "Mega Sharpedo's going to scare all the\l"
	.string "fish away? I wish our mayor would do\l"
	.string "something about it.$"

PellucaCity_Sealeo_Text_0:
# 225 "data//maps/PellucaCity/scripts.pory"
	.string "Sealeo wants to catch fish!$"

PellucaCity_NPC9_Text_0:
# 237 "data//maps/PellucaCity/scripts.pory"
	.string "This is the Pelluca Fishery! But it's\n"
	.string "closed due to the Mega Sharpedo\l"
	.string "attacks.$"

PellucaCity_WingullGirl_Text_0:
# 248 "data//maps/PellucaCity/scripts.pory"
	.string "Hahaha! I'm throwing stones at the\n"
	.string "Wingulls over there. Wanna throw some?$"

PellucaCity_WingullGirl_Text_1:
# 249 "data//maps/PellucaCity/scripts.pory"
	.string "That's mean$"

PellucaCity_WingullGirl_Text_2:
# 249 "data//maps/PellucaCity/scripts.pory"
	.string "Gimme a stone!$"

PellucaCity_WingullGirl_Text_3:
# 255 "data//maps/PellucaCity/scripts.pory"
	.string "{PLAYER} threw a stone at a Wingull!$"

PellucaCity_WingullGirl_Text_4:
# 261 "data//maps/PellucaCity/scripts.pory"
	.string "The Wingull gets angry!$"

PellucaCity_WingullGirl_Text_5:
# 265 "data//maps/PellucaCity/scripts.pory"
	.string "Mean? You're mean!$"

PellucaCity_WingullMother_Text_0:
# 273 "data//maps/PellucaCity/scripts.pory"
	.string "My daughter loves throwing stones at\n"
	.string "Wingulls. She's just so cute!$"

PellucaCity_WingullCritique_Text_0:
# 278 "data//maps/PellucaCity/scripts.pory"
	.string "That little girl is so bad! Throwing\n"
	.string "stones at Pokémon...that's poor\l"
	.string "parenting. The mayor should really do\l"
	.string "something but he's too incompetent.$"

PellucaCity_NPC10_Text_0:
# 291 "data//maps/PellucaCity/scripts.pory"
	.string "I ate too many apple tarts! I'm too full.\n"
	.string "Whoever said people have a second\l"
	.string "stomach for dessert was lying!$"

PellucaCity_NPC11_Text_0:
# 298 "data//maps/PellucaCity/scripts.pory"
	.string "Life is too short to worry!$"

PellucaCity_NPC11_Text_1:
# 302 "data//maps/PellucaCity/scripts.pory"
	.string "The Pelluca Gym is across the\n"
	.string "water...when I was younger, I tried to\l"
	.string "challenge Jania many times, but I could\l"
	.string "never win. She was my classmate, you\l"
	.string "know? We grew up in Galecrest City\l"
	.string "together. She went on to become a big\l"
	.string "Gym Leader and I moved here too, with a\l"
	.string "regular family and a regular job.\l"
	.string "Whenever I look off at the gym, I\l"
	.string "wonder...\p"
	.string "I don't battle anymore. Maybe you might\n"
	.string "like to use this.$"

PellucaCity_NPC11_Text_2:
# 305 "data//maps/PellucaCity/scripts.pory"
	.string "It's time for me to let go.$"

PellucaCity_NPC12_Text_0:
# 311 "data//maps/PellucaCity/scripts.pory"
	.string "The mayor isn't maintaining the city one\n"
	.string "bit! My Stantler eating the overgrown\l"
	.string "flowers is actually contributing to\l"
	.string "city maintenance.$"

PellucaCity_Stantler_Text_0:
# 317 "data//maps/PellucaCity/scripts.pory"
	.string "Stantler is nonchalantly chomping on\n"
	.string "the flowers.$"
