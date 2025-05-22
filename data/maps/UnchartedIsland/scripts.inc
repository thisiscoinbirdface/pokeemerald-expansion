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
# 44 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 45 "data//maps/UnchartedIsland/scripts.pory"
	setrespawn HEAL_LOCATION_ANCIENT_CORMORIA_FINAL_ISLAND
# 47 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_SKIP_FINALE_CUTSCENE, UnchartedIsland_Finale_2
UnchartedIsland_Finale_1:
# 57 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Cutscene
	return

UnchartedIsland_Finale_2:
# 48 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Finale_Text_0, MSGBOX_YESNO
# 49 "data//maps/UnchartedIsland/scripts.pory"
	release
# 50 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq UnchartedIsland_Finale_4
# 53 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Skip
	goto UnchartedIsland_Finale_1

UnchartedIsland_Finale_4:
# 51 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Cutscene
	goto UnchartedIsland_Finale_1


UnchartedIsland_Finale_Cutscene::
# 63 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_SKIP_FINALE_CUTSCENE
# 65 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 68 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_0
# 69 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 72 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_1
# 74 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 75 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 76 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 77 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_3
# 79 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 80 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 81 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 82 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_4
# 84 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_2
# 85 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 86 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 87 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 88 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 89 "data//maps/UnchartedIsland/scripts.pory"
	delay 30
# 91 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE_2
# 92 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_4
# 93 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 94 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 95 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 96 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 6
# 97 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 98 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 99 "data//maps/UnchartedIsland/scripts.pory"
	waitstate
# 101 "data//maps/UnchartedIsland/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, 0
# 102 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_4
# 103 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 104 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 105 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 106 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 6
# 107 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 108 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 109 "data//maps/UnchartedIsland/scripts.pory"
	waitstate
# 110 "data//maps/UnchartedIsland/scripts.pory"
	release
# 112 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 113 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 114 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 115 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_5
# 117 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 118 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 119 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 120 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_6
# 122 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 123 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 124 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 125 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_8
# 127 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_6
# 128 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 129 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 130 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_9
# 132 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_7
# 133 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_7
# 134 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 135 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 137 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 138 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 139 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 140 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_11
# 142 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 143 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 144 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 145 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_12
# 147 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 148 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 149 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 150 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 151 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 152 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_13
# 154 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 155 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 156 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 157 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_14
# 159 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 160 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 161 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 162 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_15
# 164 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_8
# 165 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_16
# 167 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 168 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 169 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 170 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_17
# 174 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 175 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_9
# 176 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 177 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 178 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_18
# 180 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 181 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 182 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 183 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_19
# 185 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 186 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 187 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 188 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_20
# 190 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 191 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 192 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 193 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_21
# 195 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 196 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 197 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 198 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 199 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 200 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 201 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 202 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 203 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_22
# 205 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 206 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 207 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 208 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_23
# 210 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 211 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 212 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 213 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_24
# 215 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 216 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 217 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 218 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Finale_Cutscene_Text_26
# 219 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 220 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_27
# 222 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 223 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 224 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 225 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_28
# 227 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_8
# 228 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 229 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 231 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Battle
	return


UnchartedIsland_Finale_Battle::
# 235 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Battle_Movement_0
# 236 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 237 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 238 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Battle_Text_0
# 240 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_RUE, UnchartedIsland_Finale_Battle_Text_1
# 242 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 5
# 243 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Finale_Skip::
# 249 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 250 "data//maps/UnchartedIsland/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, 0
# 251 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE_2
# 252 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Skip_Movement_0
# 253 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Skip_Movement_1
# 254 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Skip_Movement_1
# 255 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Skip_Movement_1
# 256 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 257 "data//maps/UnchartedIsland/scripts.pory"
	delay 2
# 258 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Skip_Movement_0
# 259 "data//maps/UnchartedIsland/scripts.pory"
	delay 2
# 260 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 262 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Battle
	return


UnchartedIsland_Breech::
# 268 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Breech_Text_0, UnchartedIsland_Breech_Text_1
	return


UnchartedIsland_Clefable::
# 271 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 272 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Clefable_Text_0, UnchartedIsland_Clefable_Text_1
	end


UnchartedIsland_Leader_Caught_A::
# 280 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 281 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
# 282 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_B::
# 286 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 287 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 37, 24
# 288 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_C::
# 293 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 294 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 53, 41
# 295 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Inger::
# 299 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Inger_Text_0
# 300 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Ariana::
# 303 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Ariana_Text_0
# 304 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Gloria::
# 307 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Gloria_Text_0
# 308 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Carona::
# 311 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Carona_Text_0
# 312 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Jania::
# 318 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Jania_Text_0
# 319 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Raazi::
# 322 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Raazi_Text_0
# 323 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Grunt_A::
# 335 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_A, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_1
# 336 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_2
# 337 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_B::
# 340 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_B, UnchartedIsland_Grunt_B_Text_0, UnchartedIsland_Grunt_B_Text_1
# 341 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 342 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_C::
# 345 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_C, UnchartedIsland_Grunt_C_Text_0, UnchartedIsland_Grunt_C_Text_1
# 346 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 347 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Moxie_Viewpoint_Trigger::
# 362 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_2
# 364 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 366 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 367 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_6
# 368 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 371 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Finale_Battle_Movement_0
# 372 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 373 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 374 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0
# 375 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 376 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_VIEWPOINT
# 378 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_VIEWPOINT
# 380 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1
# 381 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 382 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 384 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end

UnchartedIsland_Moxie_Viewpoint_Trigger_2:
	end


UnchartedIsland_Moxie_Trigger0::
# 391 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger0_2
# 392 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 393 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger0_Movement_0
# 394 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 395 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger0_2:
	end


UnchartedIsland_Moxie_Trigger1::
# 398 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger1_2
# 399 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 400 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger1_Movement_0
# 401 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 402 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger1_2:
	end


UnchartedIsland_Moxie_Melea_Fight::
# 406 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Melea_Fight_2
# 408 "data//maps/UnchartedIsland/scripts.pory"
	clearflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 410 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_0
# 412 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 413 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 414 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 416 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_1
# 419 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_MELEA_1
# 420 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 60, 41
# 421 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 422 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_2
# 423 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 425 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_2
# 427 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 428 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 429 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 430 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 431 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_3
# 433 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 434 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Cutscene_Movement_5
# 435 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 436 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 437 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_4
# 439 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Skip_Movement_1
# 440 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Skip_Movement_1
# 441 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 442 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 444 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 445 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_4
# 446 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 448 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_5
# 450 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 67, 38
# 452 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 453 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 454 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 456 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 457 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 458 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_6
# 459 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 460 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 461 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_6
# 464 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 465 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 466 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 467 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 468 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_7
# 471 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 472 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 473 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 475 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_KOHLA_1
# 476 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_KOHLA_1, 60, 41
# 477 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_8
# 478 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 479 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 481 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 482 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 483 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 484 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_8
# 485 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 486 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 487 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 488 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_9
# 489 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 491 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 492 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 494 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_9
# 495 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 496 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_KOHLA_1
# 498 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 500 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_10
# 501 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 502 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 503 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 504 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_11
# 506 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 507 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 508 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 509 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 510 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_12
# 515 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 516 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 517 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 518 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 519 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_13
# 521 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_10
# 522 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 523 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 524 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 525 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_14
# 527 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_11
# 528 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 533 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_15
# 534 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_12
# 535 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 538 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 79, 42
# 539 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 79, 42
# 541 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_1
# 543 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 1
# 544 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_MELEA_BATTLE
	end

UnchartedIsland_Moxie_Melea_Fight_2:
	end


UnchartedIsland_Melea_Destroy_Trigger::
# 549 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 1
	goto_if_eq UnchartedIsland_Melea_Destroy_Trigger_2
	end

UnchartedIsland_Melea_Destroy_Trigger_2:
# 551 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 554 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 555 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 557 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 558 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_0
# 559 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 560 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 562 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Cutscene_Movement_1
# 563 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_0
# 565 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 566 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_1
# 568 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_NORMAL
# 571 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 572 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 573 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 30
# 574 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 575 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 577 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 578 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_1
# 579 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 580 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 583 "data//maps/UnchartedIsland/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 584 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 2
# 585 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, VAR_TEMP_2, VAR_TEMP_3
# 587 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Tenebris::
# 595 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 2
	goto_if_eq UnchartedIsland_Tenebris_1
	return

UnchartedIsland_Tenebris_1:
# 596 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 597 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_0
# 598 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 599 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 600 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_1
# 602 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 603 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_1
# 604 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 607 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_TENE, 67, 45
# 608 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE
# 609 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_TENE, 67, 45
# 611 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_PUDDLE
# 612 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_2
# 613 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 614 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 615 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_3
# 616 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_4
# 617 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 618 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Skip_Movement_1
# 619 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 620 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 622 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 624 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 625 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 626 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 627 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_2
# 628 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_3
# 629 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 630 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 631 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 632 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 633 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 634 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_3
# 635 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 636 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 637 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 638 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_4
# 639 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 640 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_5
# 641 "data//maps/UnchartedIsland/scripts.pory"
	showmonpic SPECIES_KORAIDON, 10, 3
# 642 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_6
# 643 "data//maps/UnchartedIsland/scripts.pory"
	hidemonpic
# 644 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 645 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_7
# 648 "data//maps/UnchartedIsland/scripts.pory"
	speakername NULL
# 649 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Tenebris_Text_8, MSGBOX_POKENAV
# 650 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 651 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Finale_Cutscene_Text_7
# 652 "data//maps/UnchartedIsland/scripts.pory"
	message UnchartedIsland_Tenebris_Text_9
# 653 "data//maps/UnchartedIsland/scripts.pory"
	waitmessage
# 654 "data//maps/UnchartedIsland/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, UnchartedIsland_Tenebris_Text_10, UnchartedIsland_Tenebris_Text_11, UnchartedIsland_Tenebris_Text_12
# 657 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 658 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 659 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 660 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_13
# 662 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_5
# 663 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_6
# 664 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 665 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_TENE
# 666 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 668 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_7
# 669 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_ANCIENT_CORMORIA_FINAL, 9, 51
# 671 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 3
# 672 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


# 68 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_0:
# 68 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 68 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 68 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 74 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_1:
# 74 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_down
	step_end

# 84 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_2:
# 84 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 84 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 84 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 85 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_3:
# 85 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 85 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 92 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_4:
# 92 "data//maps/UnchartedIsland/scripts.pory"
	fly_down
	step_end

# 112 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_5:
# 112 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 127 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_6:
# 127 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 127 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 132 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_7:
# 132 "data//maps/UnchartedIsland/scripts.pory"
	emote_question_mark
	step_end

# 164 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_8:
# 164 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 175 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_9:
# 175 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 235 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Battle_Movement_0:
# 235 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
	step_end

# 252 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Skip_Movement_0:
# 252 "data//maps/UnchartedIsland/scripts.pory"
	face_down
	step_end

# 253 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Skip_Movement_1:
# 253 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 374 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0:
# 374 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 374 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 374 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 374 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 380 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1:
# 380 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 380 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 393 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger0_Movement_0:
# 393 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 393 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 393 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 393 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 393 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 393 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 400 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger1_Movement_0:
# 400 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 400 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 400 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 400 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 400 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 400 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 400 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 412 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_0:
# 412 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_left
	step_end

# 421 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_1:
# 421 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 422 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_2:
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 422 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 427 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_3:
# 427 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 445 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_4:
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 445 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 452 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_5:
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 452 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
	step_end

# 458 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_6:
# 458 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 458 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 471 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_7:
# 471 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 471 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 477 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_8:
# 477 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 477 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 477 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 477 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 477 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 477 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 477 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 477 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 477 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 477 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 494 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_9:
# 494 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 494 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 494 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 494 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 494 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 494 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 494 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 494 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 494 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 494 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 494 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 500 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_10:
# 500 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 527 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_11:
# 527 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 527 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 527 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 527 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 527 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 527 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 527 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 527 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 534 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_12:
# 534 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 534 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 534 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 534 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 534 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 534 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 534 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 534 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 534 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 534 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 534 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 558 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_0:
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 578 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_1:
# 578 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 578 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 578 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 578 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 578 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 597 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_0:
# 597 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 597 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 603 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_1:
# 603 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 603 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 603 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 603 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 612 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_2:
# 612 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_up
	step_end

# 615 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_3:
# 615 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 615 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 615 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 615 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 616 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_4:
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 616 "data//maps/UnchartedIsland/scripts.pory"
	face_down
	step_end

# 662 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_5:
# 662 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 662 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 662 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 662 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 662 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 662 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 662 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 662 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 662 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 662 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 663 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_6:
# 663 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 663 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 663 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 663 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 663 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 663 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 663 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 663 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 663 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 663 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

# 668 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_7:
# 668 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

UnchartedIsland_Finale_Text_0:
# 48 "data//maps/UnchartedIsland/scripts.pory"
	.string "Skip cutscene?$"

UnchartedIsland_Finale_Cutscene_Text_0:
# 72 "data//maps/UnchartedIsland/scripts.pory"
	.string "Kohla$"

UnchartedIsland_Finale_Cutscene_Text_1:
# 72 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ceruledge...Ceruledge!!\p"
	.string "No!!$"

UnchartedIsland_Finale_Cutscene_Text_2:
# 77 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea$"

UnchartedIsland_Finale_Cutscene_Text_3:
# 77 "data//maps/UnchartedIsland/scripts.pory"
	.string "The famous Ace Rookie and his\n"
	.string "Ceruledge...burned to dust!$"

UnchartedIsland_Finale_Cutscene_Text_4:
# 82 "data//maps/UnchartedIsland/scripts.pory"
	.string "And with this, nobody can stop us from -$"

UnchartedIsland_Finale_Cutscene_Text_5:
# 115 "data//maps/UnchartedIsland/scripts.pory"
	.string "Isn't that Professor Tenebris?$"

UnchartedIsland_Finale_Cutscene_Text_6:
# 120 "data//maps/UnchartedIsland/scripts.pory"
	.string "...and {PLAYER}!\n"
	.string "How on earth?$"

UnchartedIsland_Finale_Cutscene_Text_7:
# 125 "data//maps/UnchartedIsland/scripts.pory"
	.string "Tenebris$"

UnchartedIsland_Finale_Cutscene_Text_8:
# 125 "data//maps/UnchartedIsland/scripts.pory"
	.string "RUE! They got to you!\n"
	.string "Are you okay? Did they hurt you?$"

UnchartedIsland_Finale_Cutscene_Text_9:
# 130 "data//maps/UnchartedIsland/scripts.pory"
	.string "No...you've got it all wrong...$"

UnchartedIsland_Finale_Cutscene_Text_10:
# 140 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue$"

UnchartedIsland_Finale_Cutscene_Text_11:
# 140 "data//maps/UnchartedIsland/scripts.pory"
	.string "You did get it all wrong, Tenebris.$"

UnchartedIsland_Finale_Cutscene_Text_12:
# 145 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue? What's going on?$"

UnchartedIsland_Finale_Cutscene_Text_13:
# 152 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'll tell you what's going on!$"

UnchartedIsland_Finale_Cutscene_Text_14:
# 157 "data//maps/UnchartedIsland/scripts.pory"
	.string "What you see is the truth, Tenebris.\p"
	.string "I founded Team Somber!\p"
	.string "I was the one spying on you from the\n"
	.string "start! Easy enough, since I was right\l"
	.string "under your nose. I studied all your\l"
	.string "papers, took all your research...and\l"
	.string "right when you were about to bring the\l"
	.string "dreamstone home, you ran off with it!$"

UnchartedIsland_Finale_Cutscene_Text_15:
# 162 "data//maps/UnchartedIsland/scripts.pory"
	.string "And you - {PLAYER}! You stupid,\n"
	.string "stupid gnat!\p"
	.string "I tricked the detectives into sending\n"
	.string "an inexperienced idiot on the hunt for\l"
	.string "the dreamstones! How easy it should\l"
	.string "have been to stop you and Kohla!\p"
	.string "But you - despite all odds - managed to\n"
	.string "get in our way at Mt. Ceram.\p"
	.string "Then I sent Kohla on a wild goose chase\n"
	.string "at Silversun City! But you managed to\l"
	.string "take down our base without his help!$"

UnchartedIsland_Finale_Cutscene_Text_16:
# 165 "data//maps/UnchartedIsland/scripts.pory"
	.string "Y-you set me up?$"

UnchartedIsland_Finale_Cutscene_Text_17:
# 170 "data//maps/UnchartedIsland/scripts.pory"
	.string "Stupid child...I set you all up a hundred\n"
	.string "times over!$"

UnchartedIsland_Finale_Cutscene_Text_18:
# 178 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}, when you saw me at the\n"
	.string "Master Ball Maker's house at the Mirroh\l"
	.string "Base Camp, I feared you'd connect the\l"
	.string "dots for a moment...but it looks like I\l"
	.string "overestimated your cognitive abilities.\p"
	.string "No...I did everything right.\p"
	.string "Everything was perfect!$"

UnchartedIsland_Finale_Cutscene_Text_19:
# 183 "data//maps/UnchartedIsland/scripts.pory"
	.string "But why, Rue?$"

UnchartedIsland_Finale_Cutscene_Text_20:
# 188 "data//maps/UnchartedIsland/scripts.pory"
	.string "It's genius, Tenebris. Genius of the ilk\n"
	.string "that a cerebral mind like yours could\l"
	.string "never grasp.\p"
	.string "In times of war, the arms dealers stand\n"
	.string "to prosper.\p"
	.string "Orichalcum Pulse will create heatwaves\n"
	.string "and destruction across Cormoria.\l"
	.string "People will need services of all kinds -\l"
	.string "emergency services, repairs,\l"
	.string "construction, delivery of\l"
	.string "essentials...and Team Somber, with our\l"
	.string "army of strong Ancient Pokemon, can do\l"
	.string "all of that!\p"
	.string "For a fee, of course.$"

UnchartedIsland_Finale_Cutscene_Text_21:
# 193 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue...a mind like yours could do far\n"
	.string "better.$"

UnchartedIsland_Finale_Cutscene_Text_22:
# 203 "data//maps/UnchartedIsland/scripts.pory"
	.string "NO, TENEBRIS!$"

UnchartedIsland_Finale_Cutscene_Text_23:
# 208 "data//maps/UnchartedIsland/scripts.pory"
	.string "A mind like YOURS can do far better!\n"
	.string "That's why the world knows you and\l"
	.string "nobody knows me!\p"
	.string "For the less special, other means must\n"
	.string "be sought. This, Tenebris, is an emotion\l"
	.string "you will never understand.$"

UnchartedIsland_Finale_Cutscene_Text_24:
# 213 "data//maps/UnchartedIsland/scripts.pory"
	.string "That's no excuse for what you're doing!$"

UnchartedIsland_Finale_Cutscene_Text_25:
# 218 "data//maps/UnchartedIsland/scripts.pory"
	.string "Moxie$"

UnchartedIsland_Finale_Cutscene_Text_26:
# 218 "data//maps/UnchartedIsland/scripts.pory"
	.string "Silence, loser!$"

UnchartedIsland_Finale_Cutscene_Text_27:
# 220 "data//maps/UnchartedIsland/scripts.pory"
	.string "It's fine, Moxie. He's right...that's no\n"
	.string "excuse.\p"
	.string "But who will stop me? Who will force my\n"
	.string "hand now?\p"
	.string "I've beaten everyone - I've hoodwinked\n"
	.string "the detectives, bypassed the gym\l"
	.string "leaders and crushed the Ace Rookie.$"

UnchartedIsland_Finale_Cutscene_Text_28:
# 225 "data//maps/UnchartedIsland/scripts.pory"
	.string "No, Rue.\p"
	.string "You haven't beaten us all.$"

UnchartedIsland_Finale_Battle_Text_0:
# 238 "data//maps/UnchartedIsland/scripts.pory"
	.string "So this is what it comes down to - the\n"
	.string "assistant versus the professor.\p"
	.string "Very well.\p"
	.string "I'm sorry, {PLAYER}.\n"
	.string "I really do like you.\p"
	.string "But Cormoria has only enough space for\n"
	.string "one future.\p"
	.string "One of us must step aside.\p"
	.string "...\p"
	.string "I'm sorry.$"

UnchartedIsland_Finale_Battle_Text_1:
# 240 "data//maps/UnchartedIsland/scripts.pory"
	.string "No! Nooo! NOOO!!!$"

UnchartedIsland_Breech_Text_0:
# 268 "data//maps/UnchartedIsland/scripts.pory"
	.string "Breech$"

UnchartedIsland_Breech_Text_1:
# 268 "data//maps/UnchartedIsland/scripts.pory"
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
# 272 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefairy$"

UnchartedIsland_Clefable_Text_1:
# 272 "data//maps/UnchartedIsland/scripts.pory"
	.string "cleee!!!$"

UnchartedIsland_Leader_Caught_A_Text_0:
# 280 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey! What are you doing here? You\n"
	.string "should be on the S.S. Elegant.$"

UnchartedIsland_Inger_Text_0:
# 299 "data//maps/UnchartedIsland/scripts.pory"
	.string "Inger$"

UnchartedIsland_Ariana_Text_0:
# 303 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ariana$"

UnchartedIsland_Gloria_Text_0:
# 307 "data//maps/UnchartedIsland/scripts.pory"
	.string "Gloria$"

UnchartedIsland_Carona_Text_0:
# 311 "data//maps/UnchartedIsland/scripts.pory"
	.string "Carona$"

UnchartedIsland_Jania_Text_0:
# 318 "data//maps/UnchartedIsland/scripts.pory"
	.string "Jania$"

UnchartedIsland_Raazi_Text_0:
# 322 "data//maps/UnchartedIsland/scripts.pory"
	.string "Raazi$"

UnchartedIsland_Grunt_A_Text_0:
# 335 "data//maps/UnchartedIsland/scripts.pory"
	.string "The boss gave me new Pokemon just to\n"
	.string "stop the Ace Rookie. You can't stop us -\l"
	.string "wait, you're not the Ace Rookie!$"

UnchartedIsland_Grunt_A_Text_1:
# 335 "data//maps/UnchartedIsland/scripts.pory"
	.string "Guess you're still on the case!$"

UnchartedIsland_Grunt_A_Text_2:
# 336 "data//maps/UnchartedIsland/scripts.pory"
	.string "It doesn't matter who's on the case.\n"
	.string "You can't stop us now!$"

UnchartedIsland_Grunt_B_Text_0:
# 340 "data//maps/UnchartedIsland/scripts.pory"
	.string "They said the Ace Rookie was coming.\n"
	.string "Why are you here instead?$"

UnchartedIsland_Grunt_B_Text_1:
# 340 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'd rather fight the Ace Rookie!$"

UnchartedIsland_Grunt_B_Text_2:
# 341 "data//maps/UnchartedIsland/scripts.pory"
	.string "$"

UnchartedIsland_Grunt_C_Text_0:
# 345 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah, weren't you kicked off the case?\n"
	.string "Well whatever! We've almost achieved\l"
	.string "our goal - you think we'll let you stop\l"
	.string "us now?$"

UnchartedIsland_Grunt_C_Text_1:
# 345 "data//maps/UnchartedIsland/scripts.pory"
	.string "Don't ruin our plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_0:
# 410 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}.\p"
	.string "A familiar face by now.\n"
	.string "How many times has it been?\p"
	.string "We received intel that you were off the\n"
	.string "case, and we would only have to deal\l"
	.string "with the Ace Rookie.\p"
	.string "It was our mistake, I suppose, to\n"
	.string "assume you wouldn't come any way.$"

UnchartedIsland_Moxie_Melea_Fight_Text_1:
# 416 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea!\n"
	.string "{PLAYER}'s here!$"

UnchartedIsland_Moxie_Melea_Fight_Text_2:
# 425 "data//maps/UnchartedIsland/scripts.pory"
	.string "So you came after all.\p"
	.string "Time and again we've tried to explain\n"
	.string "how insignificant you are in our plans.$"

UnchartedIsland_Moxie_Melea_Fight_Text_3:
# 431 "data//maps/UnchartedIsland/scripts.pory"
	.string "And yet, pest that you are, you manage\n"
	.string "to find your way to us and foil our\l"
	.string "plans again and again!$"

UnchartedIsland_Moxie_Melea_Fight_Text_4:
# 437 "data//maps/UnchartedIsland/scripts.pory"
	.string "Look across the water.$"

UnchartedIsland_Moxie_Melea_Fight_Text_5:
# 448 "data//maps/UnchartedIsland/scripts.pory"
	.string "The third and final dreamstone.\p"
	.string "It took us a while to locate, but this is\n"
	.string "where Professor Tenebris took her\l"
	.string "dreamstone and vanished.\p"
	.string "This is where it all began...$"

UnchartedIsland_Moxie_Melea_Fight_Text_6:
# 461 "data//maps/UnchartedIsland/scripts.pory"
	.string "And this is where we'll finally complete\n"
	.string "the plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_7:
# 468 "data//maps/UnchartedIsland/scripts.pory"
	.string "You bested us before.\p"
	.string "We're not taking that risk again. Not\n"
	.string "here. Not now.\p"
	.string "You can't beat the two of us,\n"
	.string "{PLAYER}!\n"
	.string "If only you had some help.$"

UnchartedIsland_Moxie_Melea_Fight_Text_8:
# 484 "data//maps/UnchartedIsland/scripts.pory"
	.string "Poetic - right on cue, the help arrives.$"

UnchartedIsland_Moxie_Melea_Fight_Text_9:
# 488 "data//maps/UnchartedIsland/scripts.pory"
	.string "No matter - they can't beat the two of\n"
	.string "us.\p"
	.string "I'll take the Ace Rookie.\n"
	.string "You deal with {PLAYER}!$"

UnchartedIsland_Moxie_Melea_Fight_Text_10:
# 491 "data//maps/UnchartedIsland/scripts.pory"
	.string "...$"

UnchartedIsland_Moxie_Melea_Fight_Text_11:
# 504 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! I can't believe it! You've been\n"
	.string "thrown under the bus! The Ace Rookie\l"
	.string "just left you alone!$"

UnchartedIsland_Moxie_Melea_Fight_Text_12:
# 510 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! Now that settles it.\p"
	.string "You're finished, {PLAYER}! Once we\n"
	.string "deal with you, we'll go and stop the Ace\l"
	.string "Rookie.\p"
	.string "Come then, it's time to end this - once\n"
	.string "and for all!$"

UnchartedIsland_Moxie_Melea_Fight_Text_13:
# 519 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "Noo!!!\p"
	.string "I...$"

UnchartedIsland_Moxie_Melea_Fight_Text_14:
# 525 "data//maps/UnchartedIsland/scripts.pory"
	.string "Calm down Moxie! I'm here.\p"
	.string "Go now - go and stop Kohla.\n"
	.string "I'll finish {PLAYER} off!$"

UnchartedIsland_Moxie_Melea_Fight_Text_15:
# 533 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "We've worked too hard...I can't let it\n"
	.string "end like this.\p"
	.string "No!!!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_0:
# 563 "data//maps/UnchartedIsland/scripts.pory"
	.string "Absol! Destroy those rocks!\n"
	.string "We can't let anyone come after us!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_1:
# 566 "data//maps/UnchartedIsland/scripts.pory"
	.string "You'll never make it through!\p"
	.string "So long, {PLAYER}. You've caused us\n"
	.string "enough pain and now we'll finally be rid\l"
	.string "of you!$"

UnchartedIsland_Tenebris_Text_0:
# 600 "data//maps/UnchartedIsland/scripts.pory"
	.string "???$"

UnchartedIsland_Tenebris_Text_1:
# 600 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey you - wait!$"

UnchartedIsland_Tenebris_Text_2:
# 627 "data//maps/UnchartedIsland/scripts.pory"
	.string "I never forget a face when I see one.\p"
	.string "I remember signing off on your\n"
	.string "application, {PLAYER}.\p"
	.string "It's long overdue, but it gives me great\n"
	.string "pleasure to welcome you to the Tenebris\l"
	.string "Lab...although I wish it were under\l"
	.string "better circumstances.$"

UnchartedIsland_Tenebris_Text_3:
# 634 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yes, I'm Professor Tenebris.\p"
	.string "I've been hiding in Ancient\n"
	.string "Cormoria...but Team Somber found the\l"
	.string "dreamstones any way, so my effort was,\l"
	.string "it seems, wasted.$"

UnchartedIsland_Tenebris_Text_4:
# 638 "data//maps/UnchartedIsland/scripts.pory"
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

UnchartedIsland_Tenebris_Text_5:
# 640 "data//maps/UnchartedIsland/scripts.pory"
	.string "The Ancient Terror...$"

UnchartedIsland_Tenebris_Text_6:
# 642 "data//maps/UnchartedIsland/scripts.pory"
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

UnchartedIsland_Tenebris_Text_7:
# 645 "data//maps/UnchartedIsland/scripts.pory"
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

UnchartedIsland_Tenebris_Text_8:
# 649 "data//maps/UnchartedIsland/scripts.pory"
	.string "This is your last choice in the game!\n"
	.string "Please choose carefully.$"

UnchartedIsland_Tenebris_Text_9:
# 652 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER} - will you stop Team Somber?$"

UnchartedIsland_Tenebris_Text_10:
# 654 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah!$"

UnchartedIsland_Tenebris_Text_11:
# 654 "data//maps/UnchartedIsland/scripts.pory"
	.string "Of course!$"

UnchartedIsland_Tenebris_Text_12:
# 654 "data//maps/UnchartedIsland/scripts.pory"
	.string "Definitely!$"

UnchartedIsland_Tenebris_Text_13:
# 660 "data//maps/UnchartedIsland/scripts.pory"
	.string "You truly are a gem of a human being.\p"
	.string "Now come! Let us enter Ancient Cormoria\n"
	.string "once more...and exit right where the\l"
	.string "dreamstone is!$"
