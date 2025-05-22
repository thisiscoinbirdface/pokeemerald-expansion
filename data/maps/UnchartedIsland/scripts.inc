# 1 "data//maps/UnchartedIsland/scripts.pory"

# 2 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_MOXIE_VIEWPOINT, 18
# 3 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_MOXIE_1, 30
# 4 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_MELEA_1, 25
# 5 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_KOHLA_1, 29
# 6 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_TENE, 26
# 7 "data//maps/UnchartedIsland/scripts.pory"

# 8 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_MOXIE_2, 5
# 9 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_MELEA_2, 4
# 10 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_RUE_2, 3
# 11 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_TENE_2, 33
# 12 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_KOHLA_2, 6

UnchartedIsland_MapScripts::
# 24 "data//maps/UnchartedIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UnchartedIsland_OnTransition
# 18 "data//maps/UnchartedIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, UnchartedIsland_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 21 "data//maps/UnchartedIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, UnchartedIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

UnchartedIsland_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 19 "data//maps/UnchartedIsland/scripts.pory"
	map_script_2 VAR_UNCHARTED_ISLAND_CUTSCENES, 4, UnchartedIsland_OnWarp
	.2byte 0

UnchartedIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data//maps/UnchartedIsland/scripts.pory"
	map_script_2 VAR_UNCHARTED_ISLAND_CUTSCENES, 4, UnchartedIsland_Finale
	.2byte 0


UnchartedIsland_OnTransition::
# 29 "data//maps/UnchartedIsland/scripts.pory"
	setrespawn HEAL_LOCATION_UNCHARTED_ISLAND
# 31 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 2
	goto_if_eq UnchartedIsland_OnTransition_2
UnchartedIsland_OnTransition_1:
	end

UnchartedIsland_OnTransition_2:
# 32 "data//maps/UnchartedIsland/scripts.pory"
	setmaplayoutindex LAYOUT_UNCHARTED_ISLAND_DESTROYED
	goto UnchartedIsland_OnTransition_1


UnchartedIsland_OnWarp::
# 39 "data//maps/UnchartedIsland/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	end


UnchartedIsland_Finale::
# 45 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 48 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 51 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Movement_0
# 52 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 55 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_0, UnchartedIsland_Finale_Text_1
# 57 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Movement_1
# 58 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 59 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 60 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_2, UnchartedIsland_Finale_Text_3
# 62 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Movement_1
# 63 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 64 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 65 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_2, UnchartedIsland_Finale_Text_4
# 67 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Movement_2
# 68 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Movement_3
# 69 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Movement_3
# 70 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Movement_3
# 71 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 72 "data//maps/UnchartedIsland/scripts.pory"
	delay 30
# 74 "data//maps/UnchartedIsland/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, 0
# 75 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Movement_4
# 76 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 80 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 5
# 81 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Breech::
# 87 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Breech_Text_0, UnchartedIsland_Breech_Text_1
	return


UnchartedIsland_Clefable::
# 90 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 91 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Clefable_Text_0, UnchartedIsland_Clefable_Text_1
	end


UnchartedIsland_Leader_Caught_A::
# 99 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 100 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
# 101 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_B::
# 105 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 106 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 37, 24
# 107 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_C::
# 112 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 113 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 53, 41
# 114 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Inger::
# 118 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Inger_Text_0
# 119 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Ariana::
# 122 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Ariana_Text_0
# 123 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Gloria::
# 126 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Gloria_Text_0
# 127 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Carona::
# 130 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Carona_Text_0
# 131 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Jania::
# 137 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Jania_Text_0
# 138 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Raazi::
# 141 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Raazi_Text_0
# 142 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Grunt_A::
# 154 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_A, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_1
# 155 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_2
# 156 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_B::
# 159 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_B, UnchartedIsland_Grunt_B_Text_0, UnchartedIsland_Grunt_B_Text_1
# 160 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 161 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_C::
# 164 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_C, UnchartedIsland_Grunt_C_Text_0, UnchartedIsland_Grunt_C_Text_1
# 165 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 166 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Moxie_Viewpoint_Trigger::
# 181 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_2
# 183 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 185 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 186 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0
# 187 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 190 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1
# 191 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 192 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 193 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_2
# 194 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 195 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_VIEWPOINT
# 197 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_VIEWPOINT
# 199 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_3
# 200 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 201 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 203 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end

UnchartedIsland_Moxie_Viewpoint_Trigger_2:
	end


UnchartedIsland_Moxie_Trigger0::
# 210 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger0_2
# 211 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 212 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger0_Movement_0
# 213 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 214 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger0_2:
	end


UnchartedIsland_Moxie_Trigger1::
# 217 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger1_2
# 218 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 219 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger1_Movement_0
# 220 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 221 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger1_2:
	end


UnchartedIsland_Moxie_Melea_Fight::
# 225 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Melea_Fight_2
# 227 "data//maps/UnchartedIsland/scripts.pory"
	clearflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 229 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_1
# 231 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 232 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 233 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 235 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_2
# 238 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_MELEA_1
# 239 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 60, 41
# 240 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 241 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_2
# 242 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 244 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_3
# 246 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 247 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 248 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 249 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 250 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_4
# 252 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 253 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_4
# 254 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 255 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 256 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_5
# 258 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 259 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 260 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 261 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 263 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 264 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_6
# 265 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 267 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_6
# 269 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 67, 38
# 271 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 272 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 273 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 275 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 276 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 277 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_8
# 278 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 279 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 280 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_7
# 283 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 284 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 285 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 286 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 287 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_8
# 290 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_9
# 291 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_9
# 292 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_9
# 294 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_KOHLA_1
# 295 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_KOHLA_1, 60, 41
# 296 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_10
# 297 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 298 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 300 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 301 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 302 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 303 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_9
# 304 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 305 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 306 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 307 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 308 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 310 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_11
# 311 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 313 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_11
# 314 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 315 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_KOHLA_1
# 317 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_11
# 319 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_12
# 320 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 321 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 322 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 323 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_12
# 325 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 326 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 327 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 328 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 329 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_13
# 334 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 335 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 336 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 337 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 338 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_14
# 340 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_12
# 341 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 342 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 343 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 344 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_15
# 346 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_13
# 347 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 352 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_16
# 353 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_14
# 354 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 357 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 79, 42
# 358 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 79, 42
# 360 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_1
# 362 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 1
# 363 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_MELEA_BATTLE
	end

UnchartedIsland_Moxie_Melea_Fight_2:
	end


UnchartedIsland_Melea_Destroy_Trigger::
# 368 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 1
	goto_if_eq UnchartedIsland_Melea_Destroy_Trigger_2
	end

UnchartedIsland_Melea_Destroy_Trigger_2:
# 370 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 373 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 374 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 376 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 377 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_0
# 378 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 379 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 381 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Movement_1
# 382 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_0
# 384 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 385 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_1
# 387 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_NORMAL
# 390 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 391 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 392 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 30
# 393 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 394 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 396 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 397 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_1
# 398 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 399 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 402 "data//maps/UnchartedIsland/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 403 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 2
# 404 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, VAR_TEMP_2, VAR_TEMP_3
# 406 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Tenebris::
# 414 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 2
	goto_if_eq UnchartedIsland_Tenebris_1
	return

UnchartedIsland_Tenebris_1:
# 415 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 416 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_0
# 417 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 418 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 419 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_1
# 421 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 422 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_1
# 423 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 426 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_TENE, 67, 45
# 427 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE
# 428 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_TENE, 67, 45
# 430 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_PUDDLE
# 431 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_2
# 432 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 433 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 434 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_3
# 435 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_4
# 436 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 437 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 438 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 439 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 441 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 443 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Movement_1
# 444 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 445 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 446 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_2
# 447 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Movement_3
# 448 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 449 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 450 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Movement_1
# 451 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 452 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 453 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_3, UnchartedIsland_Tenebris_Text_4
# 454 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Movement_1
# 455 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 456 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 457 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_3, UnchartedIsland_Tenebris_Text_5
# 458 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 459 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_3, UnchartedIsland_Tenebris_Text_6
# 460 "data//maps/UnchartedIsland/scripts.pory"
	showmonpic SPECIES_KORAIDON, 10, 3
# 461 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_3, UnchartedIsland_Tenebris_Text_7
# 462 "data//maps/UnchartedIsland/scripts.pory"
	hidemonpic
# 463 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 464 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_3, UnchartedIsland_Tenebris_Text_8
# 467 "data//maps/UnchartedIsland/scripts.pory"
	speakername NULL
# 468 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Tenebris_Text_9, MSGBOX_POKENAV
# 469 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 470 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Tenebris_Text_3
# 471 "data//maps/UnchartedIsland/scripts.pory"
	message UnchartedIsland_Tenebris_Text_10
# 472 "data//maps/UnchartedIsland/scripts.pory"
	waitmessage
# 473 "data//maps/UnchartedIsland/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, UnchartedIsland_Tenebris_Text_11, UnchartedIsland_Tenebris_Text_12, UnchartedIsland_Tenebris_Text_13
# 476 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Movement_1
# 477 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 478 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 479 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_3, UnchartedIsland_Tenebris_Text_14
# 481 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_5
# 482 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_6
# 483 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 484 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_TENE
# 485 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 487 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_7
# 488 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_ANCIENT_CORMORIA_FINAL, 9, 51
# 490 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 3
# 491 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


# 51 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Movement_0:
# 51 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 51 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 51 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 57 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Movement_1:
# 57 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_down
	step_end

# 67 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Movement_2:
# 67 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 67 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 67 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 68 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Movement_3:
# 68 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 68 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 75 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Movement_4:
# 75 "data//maps/UnchartedIsland/scripts.pory"
	fly_down
	step_end

# 186 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0:
# 186 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 186 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 190 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1:
# 190 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
	step_end

# 193 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_2:
# 193 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 193 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 193 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 193 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 199 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_3:
# 199 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 199 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 212 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger0_Movement_0:
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 219 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger1_Movement_0:
# 219 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 219 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 219 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 219 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 219 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 219 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 219 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 231 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_0:
# 231 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_left
	step_end

# 240 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_1:
# 240 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 241 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_2:
# 241 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 241 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 241 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 241 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 241 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 241 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 241 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 241 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 241 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 241 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 246 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_3:
# 246 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 253 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_4:
# 253 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 258 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_5:
# 258 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 264 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_6:
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 264 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 271 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_7:
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 271 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
	step_end

# 277 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_8:
# 277 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 277 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 290 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_9:
# 290 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 290 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 296 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_10:
# 296 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 296 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 296 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 296 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 296 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 296 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 296 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 296 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 296 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 296 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 313 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_11:
# 313 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 313 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 313 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 313 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 313 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 313 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 313 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 313 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 313 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 313 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 313 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 319 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_12:
# 319 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 346 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_13:
# 346 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 346 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 346 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 346 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 346 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 346 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 346 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 346 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 353 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_14:
# 353 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 353 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 353 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 353 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 353 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 353 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 353 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 353 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 353 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 353 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 353 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 377 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_0:
# 377 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 377 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 377 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 377 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 377 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 397 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_1:
# 397 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 397 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 397 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 397 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 397 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 416 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_0:
# 416 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 416 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 422 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_1:
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 431 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_2:
# 431 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_up
	step_end

# 434 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_3:
# 434 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 434 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 434 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 434 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 435 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_4:
# 435 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 435 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 435 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 435 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 435 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 435 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 435 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 435 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 435 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 435 "data//maps/UnchartedIsland/scripts.pory"
	face_down
	step_end

# 481 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_5:
# 481 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 481 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 481 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 481 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 481 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 481 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 481 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 481 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 481 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 481 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 482 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_6:
# 482 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 482 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 482 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 482 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 482 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 482 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 482 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 482 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 482 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 482 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

# 487 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_7:
# 487 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

UnchartedIsland_Finale_Text_0:
# 55 "data//maps/UnchartedIsland/scripts.pory"
	.string "Kohla$"

UnchartedIsland_Finale_Text_1:
# 55 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ceruledge...Ceruledge!!\p"
	.string "No!!$"

UnchartedIsland_Finale_Text_2:
# 60 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea$"

UnchartedIsland_Finale_Text_3:
# 60 "data//maps/UnchartedIsland/scripts.pory"
	.string "The famous Ace Rookie and his\n"
	.string "Ceruledge...burned to dust!$"

UnchartedIsland_Finale_Text_4:
# 65 "data//maps/UnchartedIsland/scripts.pory"
	.string "And with this, nobody can stop us from -$"

UnchartedIsland_Breech_Text_0:
# 87 "data//maps/UnchartedIsland/scripts.pory"
	.string "Breech$"

UnchartedIsland_Breech_Text_1:
# 87 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER} - you made it through!\p"
	.string "Clefable and I will hide here behind the\n"
	.string "trees. You go on ahead, but be careful!\l"
	.string "I saw all the gym leaders out there. If\l"
	.string "they catch you, they'll send you back\l"
	.string "to the ship!\p"
	.string "...\p"
	.string "You're just like you were back when I\n"
	.string "met you in Fennilahl Town. The only\l"
	.string "thing that changed is that you saved a\l"
	.string "hiker back then and you're saving all of\l"
	.string "Cormoria now.\p"
	.string "You're really cool, {PLAYER}.\n"
	.string "I'm happy we met.\p"
	.string "Good luck!$"

UnchartedIsland_Clefable_Text_0:
# 91 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefairy$"

UnchartedIsland_Clefable_Text_1:
# 91 "data//maps/UnchartedIsland/scripts.pory"
	.string "cleee!!!$"

UnchartedIsland_Leader_Caught_A_Text_0:
# 99 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey! What are you doing here? You\n"
	.string "should be on the S.S. Elegant.$"

UnchartedIsland_Inger_Text_0:
# 118 "data//maps/UnchartedIsland/scripts.pory"
	.string "Inger$"

UnchartedIsland_Ariana_Text_0:
# 122 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ariana$"

UnchartedIsland_Gloria_Text_0:
# 126 "data//maps/UnchartedIsland/scripts.pory"
	.string "Gloria$"

UnchartedIsland_Carona_Text_0:
# 130 "data//maps/UnchartedIsland/scripts.pory"
	.string "Carona$"

UnchartedIsland_Jania_Text_0:
# 137 "data//maps/UnchartedIsland/scripts.pory"
	.string "Jania$"

UnchartedIsland_Raazi_Text_0:
# 141 "data//maps/UnchartedIsland/scripts.pory"
	.string "Raazi$"

UnchartedIsland_Grunt_A_Text_0:
# 154 "data//maps/UnchartedIsland/scripts.pory"
	.string "The boss gave me new Pokemon just to\n"
	.string "stop the Ace Rookie. You can't stop us -\l"
	.string "wait, you're not the Ace Rookie!$"

UnchartedIsland_Grunt_A_Text_1:
# 154 "data//maps/UnchartedIsland/scripts.pory"
	.string "Guess you're still on the case!$"

UnchartedIsland_Grunt_A_Text_2:
# 155 "data//maps/UnchartedIsland/scripts.pory"
	.string "It doesn't matter who's on the case.\n"
	.string "You can't stop us now!$"

UnchartedIsland_Grunt_B_Text_0:
# 159 "data//maps/UnchartedIsland/scripts.pory"
	.string "They said the Ace Rookie was coming.\n"
	.string "Why are you here instead?$"

UnchartedIsland_Grunt_B_Text_1:
# 159 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'd rather fight the Ace Rookie!$"

UnchartedIsland_Grunt_B_Text_2:
# 160 "data//maps/UnchartedIsland/scripts.pory"
	.string "$"

UnchartedIsland_Grunt_C_Text_0:
# 164 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah, weren't you kicked off the case?\n"
	.string "Well whatever! We've almost achieved\l"
	.string "our goal - you think we'll let you stop\l"
	.string "us now?$"

UnchartedIsland_Grunt_C_Text_1:
# 164 "data//maps/UnchartedIsland/scripts.pory"
	.string "Don't ruin our plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_0:
# 229 "data//maps/UnchartedIsland/scripts.pory"
	.string "Moxie$"

UnchartedIsland_Moxie_Melea_Fight_Text_1:
# 229 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}.\p"
	.string "A familiar face by now.\n"
	.string "How many times has it been?\p"
	.string "We received intel that you were off the\n"
	.string "case, and we would only have to deal\l"
	.string "with the Ace Rookie.\p"
	.string "It was our mistake, I suppose, to\n"
	.string "assume you wouldn't come any way.$"

UnchartedIsland_Moxie_Melea_Fight_Text_2:
# 235 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea!\n"
	.string "{PLAYER}'s here!$"

UnchartedIsland_Moxie_Melea_Fight_Text_3:
# 244 "data//maps/UnchartedIsland/scripts.pory"
	.string "So you came after all.\p"
	.string "Time and again we've tried to explain\n"
	.string "how insignificant you are in our plans.$"

UnchartedIsland_Moxie_Melea_Fight_Text_4:
# 250 "data//maps/UnchartedIsland/scripts.pory"
	.string "And yet, pest that you are, you manage\n"
	.string "to find your way to us and foil our\l"
	.string "plans again and again!$"

UnchartedIsland_Moxie_Melea_Fight_Text_5:
# 256 "data//maps/UnchartedIsland/scripts.pory"
	.string "Look across the water.$"

UnchartedIsland_Moxie_Melea_Fight_Text_6:
# 267 "data//maps/UnchartedIsland/scripts.pory"
	.string "The third and final dreamstone.\p"
	.string "It took us a while to locate, but this is\n"
	.string "where Professor Tenebris took her\l"
	.string "dreamstone and vanished.\p"
	.string "This is where it all began...$"

UnchartedIsland_Moxie_Melea_Fight_Text_7:
# 280 "data//maps/UnchartedIsland/scripts.pory"
	.string "And this is where we'll finally complete\n"
	.string "the plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_8:
# 287 "data//maps/UnchartedIsland/scripts.pory"
	.string "You bested us before.\p"
	.string "We're not taking that risk again. Not\n"
	.string "here. Not now.\p"
	.string "You can't beat the two of us,\n"
	.string "{PLAYER}!\n"
	.string "If only you had some help.$"

UnchartedIsland_Moxie_Melea_Fight_Text_9:
# 303 "data//maps/UnchartedIsland/scripts.pory"
	.string "Poetic - right on cue, the help arrives.$"

UnchartedIsland_Moxie_Melea_Fight_Text_10:
# 307 "data//maps/UnchartedIsland/scripts.pory"
	.string "No matter - they can't beat the two of\n"
	.string "us.\p"
	.string "I'll take the Ace Rookie.\n"
	.string "You deal with {PLAYER}!$"

UnchartedIsland_Moxie_Melea_Fight_Text_11:
# 310 "data//maps/UnchartedIsland/scripts.pory"
	.string "...$"

UnchartedIsland_Moxie_Melea_Fight_Text_12:
# 323 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! I can't believe it! You've been\n"
	.string "thrown under the bus! The Ace Rookie\l"
	.string "just left you alone!$"

UnchartedIsland_Moxie_Melea_Fight_Text_13:
# 329 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! Now that settles it.\p"
	.string "You're finished, {PLAYER}! Once we\n"
	.string "deal with you, we'll go and stop the Ace\l"
	.string "Rookie.\p"
	.string "Come then, it's time to end this - once\n"
	.string "and for all!$"

UnchartedIsland_Moxie_Melea_Fight_Text_14:
# 338 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "Noo!!!\p"
	.string "I...$"

UnchartedIsland_Moxie_Melea_Fight_Text_15:
# 344 "data//maps/UnchartedIsland/scripts.pory"
	.string "Calm down Moxie! I'm here.\p"
	.string "Go now - go and stop Kohla.\n"
	.string "I'll finish {PLAYER} off!$"

UnchartedIsland_Moxie_Melea_Fight_Text_16:
# 352 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "We've worked too hard...I can't let it\n"
	.string "end like this.\p"
	.string "No!!!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_0:
# 382 "data//maps/UnchartedIsland/scripts.pory"
	.string "Absol! Destroy those rocks!\n"
	.string "We can't let anyone come after us!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_1:
# 385 "data//maps/UnchartedIsland/scripts.pory"
	.string "You'll never make it through!\p"
	.string "So long, {PLAYER}. You've caused us\n"
	.string "enough pain and now we'll finally be rid\l"
	.string "of you!$"

UnchartedIsland_Tenebris_Text_0:
# 419 "data//maps/UnchartedIsland/scripts.pory"
	.string "???$"

UnchartedIsland_Tenebris_Text_1:
# 419 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey you - wait!$"

UnchartedIsland_Tenebris_Text_2:
# 446 "data//maps/UnchartedIsland/scripts.pory"
	.string "I never forget a face when I see one.\p"
	.string "I remember signing off on your\n"
	.string "application, {PLAYER}.\p"
	.string "It's long overdue, but it gives me great\n"
	.string "pleasure to welcome you to the Tenebris\l"
	.string "Lab...although I wish it were under\l"
	.string "better circumstances.$"

UnchartedIsland_Tenebris_Text_3:
# 453 "data//maps/UnchartedIsland/scripts.pory"
	.string "Tenebris$"

UnchartedIsland_Tenebris_Text_4:
# 453 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yes, I'm Professor Tenebris.\p"
	.string "I've been hiding in Ancient\n"
	.string "Cormoria...but Team Somber found the\l"
	.string "dreamstones any way, so my effort was,\l"
	.string "it seems, wasted.$"

UnchartedIsland_Tenebris_Text_5:
# 457 "data//maps/UnchartedIsland/scripts.pory"
	.string "But you! I've been watching you.\n"
	.string "I chose a good research assistant.\p"
	.string "You've done your best to put an end to\n"
	.string "Team Somber's plans.\p"
	.string "It's commendable.\p"
	.string "When I first discovered the\n"
	.string "dreamstones, I began to suspect that I\l"
	.string "was being spied on. That's why I took\l"
	.string "the dreamstone and ran away with it. I\l"
	.string "didn't know where to hide it so I came\l"
	.string "here and jumped into Ancient Cormoria.\l"
	.string "I thought that would be enough to stop\l"
	.string "whoever was spying on me, but clearly it\l"
	.string "wasn't.\p"
	.string "Someone from Team Somber had eyes on\n"
	.string "me and the dreamstone from the very\l"
	.string "beginning!\p"
	.string "And after my time in Ancient Cormoria, I\n"
	.string "know why.$"

UnchartedIsland_Tenebris_Text_6:
# 459 "data//maps/UnchartedIsland/scripts.pory"
	.string "The Ancient Terror...$"

UnchartedIsland_Tenebris_Text_7:
# 461 "data//maps/UnchartedIsland/scripts.pory"
	.string "Of the many strong Pokemon that ruled\n"
	.string "over Ancient Cormoria, the Ancient\l"
	.string "Terror was the strongest! The most\l"
	.string "vicious!\p"
	.string "And the secret of its power?\p"
	.string "It's one-of-a-kind ability...\n"
	.string "Orichalcum Pulse!\p"
	.string "Orichalcum Pulse calls forth sunlight\n"
	.string "so harsh it's impact can be felt across\l"
	.string "the entire region!\p"
	.string "Why do you think there's an uncharted\n"
	.string "island right here? When I came there\l"
	.string "was nothing but a rock. They used\l"
	.string "Orichalcum Pulse and dried up the sea!$"

UnchartedIsland_Tenebris_Text_8:
# 464 "data//maps/UnchartedIsland/scripts.pory"
	.string "We must stop them...but I don't have my\n"
	.string "Pokemon. Even if I did, I'm not much\l"
	.string "resistance.\p"
	.string "I can't stop them, {PLAYER}. And I\n"
	.string "fear neither can your Ace Rookie\l"
	.string "friend.\p"
	.string "...\p"
	.string "Like I said, I've been watching you.\n"
	.string "First at Mt. Ceram.\p"
	.string "Then at Silversun City.\p"
	.string "Again at Mt. Mirroh.\p"
	.string "...\p"
	.string "I know nobody believes in you right now,\n"
	.string "{PLAYER}.\p"
	.string "And truth be told, I'd love to keep my\n"
	.string "youngest research associate safe from\l"
	.string "harm!\p"
	.string "...but you're the best we've got.$"

UnchartedIsland_Tenebris_Text_9:
# 468 "data//maps/UnchartedIsland/scripts.pory"
	.string "This is your last choice in the game!\n"
	.string "Please choose carefully.$"

UnchartedIsland_Tenebris_Text_10:
# 471 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER} - will you stop Team Somber?$"

UnchartedIsland_Tenebris_Text_11:
# 473 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah!$"

UnchartedIsland_Tenebris_Text_12:
# 473 "data//maps/UnchartedIsland/scripts.pory"
	.string "Of course!$"

UnchartedIsland_Tenebris_Text_13:
# 473 "data//maps/UnchartedIsland/scripts.pory"
	.string "Definitely!$"

UnchartedIsland_Tenebris_Text_14:
# 479 "data//maps/UnchartedIsland/scripts.pory"
	.string "You truly are a gem of a human being.\p"
	.string "Now come! Let us enter Ancient Cormoria\n"
	.string "once more...and exit right where the\l"
	.string "dreamstone is!$"
