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

UnchartedIsland_MapScripts::
# 12 "data//maps/UnchartedIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UnchartedIsland_OnTransition
	.byte 0


UnchartedIsland_OnTransition::
# 18 "data//maps/UnchartedIsland/scripts.pory"
	setrespawn HEAL_LOCATION_UNCHARTED_ISLAND
# 20 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 2
	goto_if_eq UnchartedIsland_OnTransition_2
UnchartedIsland_OnTransition_1:
	end

UnchartedIsland_OnTransition_2:
# 21 "data//maps/UnchartedIsland/scripts.pory"
	setmaplayoutindex LAYOUT_UNCHARTED_ISLAND_DESTROYED
	goto UnchartedIsland_OnTransition_1


UnchartedIsland_Breech::
# 29 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Breech_Text_0, UnchartedIsland_Breech_Text_1
	return


UnchartedIsland_Clefable::
# 32 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 33 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Clefable_Text_0, UnchartedIsland_Clefable_Text_1
	end


UnchartedIsland_Leader_Caught_A::
# 41 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 42 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
# 43 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_B::
# 47 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 48 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 37, 24
# 49 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_C::
# 54 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 55 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 53, 41
# 56 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Inger::
# 60 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Inger_Text_0
# 61 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Ariana::
# 64 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Ariana_Text_0
# 65 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Gloria::
# 68 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Gloria_Text_0
# 69 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Carona::
# 72 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Carona_Text_0
# 73 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Jania::
# 79 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Jania_Text_0
# 80 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Raazi::
# 83 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Raazi_Text_0
# 84 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Grunt_A::
# 96 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_A, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_1
# 97 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_2
# 98 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_B::
# 101 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_B, UnchartedIsland_Grunt_B_Text_0, UnchartedIsland_Grunt_B_Text_1
# 102 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 103 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_C::
# 106 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_C, UnchartedIsland_Grunt_C_Text_0, UnchartedIsland_Grunt_C_Text_1
# 107 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 108 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Moxie_Viewpoint_Trigger::
# 123 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_2
# 125 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 127 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 128 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0
# 129 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 132 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1
# 133 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 134 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 135 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_2
# 136 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 137 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_VIEWPOINT
# 139 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_VIEWPOINT
# 141 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_3
# 142 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 143 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 145 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end

UnchartedIsland_Moxie_Viewpoint_Trigger_2:
	end


UnchartedIsland_Moxie_Trigger0::
# 152 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger0_2
# 153 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 154 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger0_Movement_0
# 155 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 156 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger0_2:
	end


UnchartedIsland_Moxie_Trigger1::
# 159 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 160 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger1_Movement_0
# 161 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 162 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return


UnchartedIsland_Moxie_Melea_Fight::
# 166 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Melea_Fight_2
# 168 "data//maps/UnchartedIsland/scripts.pory"
	clearflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 170 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_1
# 172 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 173 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 174 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 176 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_2
# 179 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_MELEA_1
# 180 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 60, 41
# 181 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 182 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_2
# 183 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 185 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_3, UnchartedIsland_Moxie_Melea_Fight_Text_4
# 187 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 188 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 189 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 190 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 191 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_5
# 193 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 194 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_4
# 195 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 196 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 197 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_3, UnchartedIsland_Moxie_Melea_Fight_Text_6
# 199 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 200 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 201 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 202 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 204 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 205 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_6
# 206 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 208 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_7
# 210 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 67, 38
# 212 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 213 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 214 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 216 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 217 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 218 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_8
# 219 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 220 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 221 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_3, UnchartedIsland_Moxie_Melea_Fight_Text_8
# 224 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 225 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 226 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 227 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 228 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_9
# 231 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_9
# 232 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_9
# 233 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_9
# 235 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_KOHLA_1
# 236 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_KOHLA_1, 60, 41
# 237 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_10
# 238 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 239 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 241 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 242 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 243 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 244 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 245 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 246 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 247 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 248 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_3, UnchartedIsland_Moxie_Melea_Fight_Text_11
# 249 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 251 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_12, UnchartedIsland_Moxie_Melea_Fight_Text_13
# 252 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 254 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_11
# 255 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 256 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_KOHLA_1
# 258 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_3, UnchartedIsland_Moxie_Melea_Fight_Text_13
# 260 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_12
# 261 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 262 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 263 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 264 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_3, UnchartedIsland_Moxie_Melea_Fight_Text_14
# 266 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 267 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 268 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 269 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 270 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_15
# 275 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 276 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 277 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 278 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 279 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_16
# 281 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_12
# 282 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 283 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 284 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 285 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_3, UnchartedIsland_Moxie_Melea_Fight_Text_17
# 287 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_13
# 288 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 293 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_3, UnchartedIsland_Moxie_Melea_Fight_Text_18
# 294 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_14
# 295 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 298 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 79, 42
# 299 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 79, 42
# 301 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_1
# 303 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 1
# 304 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_MELEA_BATTLE
	end

UnchartedIsland_Moxie_Melea_Fight_2:
	end


UnchartedIsland_Melea_Destroy_Trigger::
# 309 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 1
	goto_if_eq UnchartedIsland_Melea_Destroy_Trigger_2
	end

UnchartedIsland_Melea_Destroy_Trigger_2:
# 311 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 314 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 315 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 317 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 318 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_0
# 319 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 320 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 322 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Melea_Destroy_Trigger_Movement_1
# 323 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_3, UnchartedIsland_Melea_Destroy_Trigger_Text_0
# 325 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 326 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Moxie_Melea_Fight_Text_3, UnchartedIsland_Melea_Destroy_Trigger_Text_1
# 328 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_NORMAL
# 331 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 332 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 333 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 30
# 334 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 335 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 337 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 338 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_2
# 339 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 340 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 343 "data//maps/UnchartedIsland/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 344 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 2
# 345 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, VAR_TEMP_2, VAR_TEMP_3
# 347 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


# 128 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0:
# 128 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 128 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 132 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1:
# 132 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
	step_end

# 135 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_2:
# 135 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 135 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 135 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 135 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 141 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_3:
# 141 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 141 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 154 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger0_Movement_0:
# 154 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 154 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 154 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 154 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 154 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 154 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 160 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger1_Movement_0:
# 160 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 160 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 160 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 160 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 160 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 160 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 160 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 172 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_0:
# 172 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_left
	step_end

# 181 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_1:
# 181 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 182 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_2:
# 182 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 182 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 182 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 182 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 182 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 182 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 182 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 182 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 182 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 182 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 187 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_3:
# 187 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 194 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_4:
# 194 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 199 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_5:
# 199 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 205 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_6:
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 205 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 212 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_7:
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 212 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
	step_end

# 218 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_8:
# 218 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 218 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 231 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_9:
# 231 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 231 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 237 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_10:
# 237 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 237 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 237 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 237 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 237 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 237 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 237 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 237 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 237 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 237 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 254 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_11:
# 254 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 254 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 254 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 254 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 254 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 254 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 254 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 254 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 254 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 254 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 254 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 260 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_12:
# 260 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 287 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_13:
# 287 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 287 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 287 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 287 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 287 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 287 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 287 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 287 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 294 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_14:
# 294 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 294 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 294 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 294 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 294 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 294 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 294 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 294 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 294 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 294 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 294 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 318 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_0:
# 318 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 318 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 318 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 318 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 318 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 322 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_1:
# 322 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_down
	step_end

# 338 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_2:
# 338 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 338 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 338 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 338 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 338 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

UnchartedIsland_Breech_Text_0:
# 29 "data//maps/UnchartedIsland/scripts.pory"
	.string "Breech$"

UnchartedIsland_Breech_Text_1:
# 29 "data//maps/UnchartedIsland/scripts.pory"
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
# 33 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefairy$"

UnchartedIsland_Clefable_Text_1:
# 33 "data//maps/UnchartedIsland/scripts.pory"
	.string "cleee!!!$"

UnchartedIsland_Leader_Caught_A_Text_0:
# 41 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey! What are you doing here? You\n"
	.string "should be on the S.S. Elegant.$"

UnchartedIsland_Inger_Text_0:
# 60 "data//maps/UnchartedIsland/scripts.pory"
	.string "Inger$"

UnchartedIsland_Ariana_Text_0:
# 64 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ariana$"

UnchartedIsland_Gloria_Text_0:
# 68 "data//maps/UnchartedIsland/scripts.pory"
	.string "Gloria$"

UnchartedIsland_Carona_Text_0:
# 72 "data//maps/UnchartedIsland/scripts.pory"
	.string "Carona$"

UnchartedIsland_Jania_Text_0:
# 79 "data//maps/UnchartedIsland/scripts.pory"
	.string "Jania$"

UnchartedIsland_Raazi_Text_0:
# 83 "data//maps/UnchartedIsland/scripts.pory"
	.string "Raazi$"

UnchartedIsland_Grunt_A_Text_0:
# 96 "data//maps/UnchartedIsland/scripts.pory"
	.string "The boss gave me new Pokemon just to\n"
	.string "stop the Ace Rookie. You can't stop us -\l"
	.string "wait, you're not the Ace Rookie!$"

UnchartedIsland_Grunt_A_Text_1:
# 96 "data//maps/UnchartedIsland/scripts.pory"
	.string "Guess you're still on the case!$"

UnchartedIsland_Grunt_A_Text_2:
# 97 "data//maps/UnchartedIsland/scripts.pory"
	.string "It doesn't matter who's on the case.\n"
	.string "You can't stop us now!$"

UnchartedIsland_Grunt_B_Text_0:
# 101 "data//maps/UnchartedIsland/scripts.pory"
	.string "They said the Ace Rookie was coming.\n"
	.string "Why are you here instead?$"

UnchartedIsland_Grunt_B_Text_1:
# 101 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'd rather fight the Ace Rookie!$"

UnchartedIsland_Grunt_B_Text_2:
# 102 "data//maps/UnchartedIsland/scripts.pory"
	.string "$"

UnchartedIsland_Grunt_C_Text_0:
# 106 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah, weren't you kicked off the case?\n"
	.string "Well whatever! We've almost achieved\l"
	.string "our goal - you think we'll let you stop\l"
	.string "us now?$"

UnchartedIsland_Grunt_C_Text_1:
# 106 "data//maps/UnchartedIsland/scripts.pory"
	.string "Don't ruin our plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_0:
# 170 "data//maps/UnchartedIsland/scripts.pory"
	.string "Moxie$"

UnchartedIsland_Moxie_Melea_Fight_Text_1:
# 170 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}.\p"
	.string "A familiar face by now.\n"
	.string "How many times has it been?\p"
	.string "We received intel that you were off the\n"
	.string "case, and we would only have to deal\l"
	.string "with the Ace Rookie.\p"
	.string "It was our mistake, I suppose, to\n"
	.string "assume you wouldn't come any way.$"

UnchartedIsland_Moxie_Melea_Fight_Text_2:
# 176 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea!\n"
	.string "{PLAYER}'s here!$"

UnchartedIsland_Moxie_Melea_Fight_Text_3:
# 185 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea$"

UnchartedIsland_Moxie_Melea_Fight_Text_4:
# 185 "data//maps/UnchartedIsland/scripts.pory"
	.string "So you came after all.\p"
	.string "Time and again we've tried to explain\n"
	.string "how insignificant you are in our plans.$"

UnchartedIsland_Moxie_Melea_Fight_Text_5:
# 191 "data//maps/UnchartedIsland/scripts.pory"
	.string "And yet, pest that you are, you manage\n"
	.string "to find your way to us and foil our\l"
	.string "plans again and again!$"

UnchartedIsland_Moxie_Melea_Fight_Text_6:
# 197 "data//maps/UnchartedIsland/scripts.pory"
	.string "Look across the water.$"

UnchartedIsland_Moxie_Melea_Fight_Text_7:
# 208 "data//maps/UnchartedIsland/scripts.pory"
	.string "The third and final dreamstone.\p"
	.string "It took us a while to locate, but this is\n"
	.string "where Professor Tenebris took her\l"
	.string "dreamstone and vanished.\p"
	.string "This is where it all began...$"

UnchartedIsland_Moxie_Melea_Fight_Text_8:
# 221 "data//maps/UnchartedIsland/scripts.pory"
	.string "And this is where we'll finally complete\n"
	.string "the plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_9:
# 228 "data//maps/UnchartedIsland/scripts.pory"
	.string "You bested us before.\p"
	.string "We're not taking that risk again. Not\n"
	.string "here. Not now.\p"
	.string "You can't beat the two of us,\n"
	.string "{PLAYER}!\n"
	.string "If only you had some help.$"

UnchartedIsland_Moxie_Melea_Fight_Text_10:
# 244 "data//maps/UnchartedIsland/scripts.pory"
	.string "Poetic - right on cue, the help arrives.$"

UnchartedIsland_Moxie_Melea_Fight_Text_11:
# 248 "data//maps/UnchartedIsland/scripts.pory"
	.string "No matter - they can't beat the two of\n"
	.string "us.\p"
	.string "I'll take the Ace Rookie.\n"
	.string "You deal with {PLAYER}!$"

UnchartedIsland_Moxie_Melea_Fight_Text_12:
# 251 "data//maps/UnchartedIsland/scripts.pory"
	.string "Kohla$"

UnchartedIsland_Moxie_Melea_Fight_Text_13:
# 251 "data//maps/UnchartedIsland/scripts.pory"
	.string "...$"

UnchartedIsland_Moxie_Melea_Fight_Text_14:
# 264 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! I can't believe it! You've been\n"
	.string "thrown under the bus! The Ace Rookie\l"
	.string "just left you alone!$"

UnchartedIsland_Moxie_Melea_Fight_Text_15:
# 270 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! Now that settles it.\p"
	.string "You're finished, {PLAYER}! Once we\n"
	.string "deal with you, we'll go and stop the Ace\l"
	.string "Rookie.\p"
	.string "Come then, it's time to end this - once\n"
	.string "and for all!$"

UnchartedIsland_Moxie_Melea_Fight_Text_16:
# 279 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "Noo!!!\p"
	.string "I...$"

UnchartedIsland_Moxie_Melea_Fight_Text_17:
# 285 "data//maps/UnchartedIsland/scripts.pory"
	.string "Calm down Moxie! I'm here.\p"
	.string "Go now - go and stop Kohla.\n"
	.string "I'll finish {PLAYER} off!$"

UnchartedIsland_Moxie_Melea_Fight_Text_18:
# 293 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "We've worked too hard...I can't let it\n"
	.string "end like this.\p"
	.string "No!!!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_0:
# 323 "data//maps/UnchartedIsland/scripts.pory"
	.string "Absol! Destroy those rocks!\n"
	.string "We can't let anyone come after us!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_1:
# 326 "data//maps/UnchartedIsland/scripts.pory"
	.string "You'll never make it through!\p"
	.string "So long, {PLAYER}. You've caused us\n"
	.string "enough pain and now we'll finally be rid\l"
	.string "of you!$"
