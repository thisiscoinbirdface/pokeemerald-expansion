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
# 13 "data//maps/UnchartedIsland/scripts.pory"

# 14 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_KOR, 34
# 15 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_BREECH, 27
# 16 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_CLEF, 28
# 17 "data//maps/UnchartedIsland/scripts.pory"

# 18 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_SHIP, 35
# 19 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_DET1, 8
# 20 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_DET2, 7

UnchartedIsland_MapScripts::
# 32 "data//maps/UnchartedIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UnchartedIsland_OnTransition
# 26 "data//maps/UnchartedIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, UnchartedIsland_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 29 "data//maps/UnchartedIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, UnchartedIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

UnchartedIsland_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 27 "data//maps/UnchartedIsland/scripts.pory"
	map_script_2 VAR_UNCHARTED_ISLAND_CUTSCENES, 4, UnchartedIsland_OnWarp
	.2byte 0

UnchartedIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 30 "data//maps/UnchartedIsland/scripts.pory"
	map_script_2 VAR_UNCHARTED_ISLAND_CUTSCENES, 4, UnchartedIsland_Finale
	.2byte 0


UnchartedIsland_OnTransition::
# 37 "data//maps/UnchartedIsland/scripts.pory"
	setrespawn HEAL_LOCATION_UNCHARTED_ISLAND
# 39 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 2
	goto_if_eq UnchartedIsland_OnTransition_2
UnchartedIsland_OnTransition_1:
	end

UnchartedIsland_OnTransition_2:
# 40 "data//maps/UnchartedIsland/scripts.pory"
	setmaplayoutindex LAYOUT_UNCHARTED_ISLAND_DESTROYED
	goto UnchartedIsland_OnTransition_1


UnchartedIsland_OnWarp::
# 47 "data//maps/UnchartedIsland/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	end


UnchartedIsland_Finale::
# 52 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 53 "data//maps/UnchartedIsland/scripts.pory"
	setrespawn HEAL_LOCATION_ANCIENT_CORMORIA_FINAL_ISLAND
# 55 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_SKIP_FINALE_CUTSCENE, UnchartedIsland_Finale_2
UnchartedIsland_Finale_1:
# 65 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Cutscene
	return

UnchartedIsland_Finale_2:
# 56 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Finale_Text_0, MSGBOX_YESNO
# 57 "data//maps/UnchartedIsland/scripts.pory"
	release
# 58 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq UnchartedIsland_Finale_4
# 61 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Skip
	goto UnchartedIsland_Finale_1

UnchartedIsland_Finale_4:
# 59 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Cutscene
	goto UnchartedIsland_Finale_1


UnchartedIsland_Finale_Cutscene::
# 71 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_SKIP_FINALE_CUTSCENE
# 73 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 76 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_0
# 77 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 80 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_1
# 82 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 83 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 84 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 85 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_3
# 87 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 88 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 89 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 90 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_4
# 92 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_2
# 93 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 94 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 95 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 96 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 97 "data//maps/UnchartedIsland/scripts.pory"
	delay 30
# 99 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE_2
# 100 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_4
# 101 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 102 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 103 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 104 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 6
# 105 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 106 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 107 "data//maps/UnchartedIsland/scripts.pory"
	waitstate
# 109 "data//maps/UnchartedIsland/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, 0
# 110 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_4
# 111 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 112 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 113 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 114 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 6
# 115 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 116 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 117 "data//maps/UnchartedIsland/scripts.pory"
	waitstate
# 118 "data//maps/UnchartedIsland/scripts.pory"
	release
# 120 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 121 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 122 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 123 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_5
# 125 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 126 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 127 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 128 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_6
# 130 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 131 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 132 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 133 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_8
# 135 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_6
# 136 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 137 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 138 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_9
# 140 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_7
# 141 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_7
# 142 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 143 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 145 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 146 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 147 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 148 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_11
# 150 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 151 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 152 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 153 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_12
# 155 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 156 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 157 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 158 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 159 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 160 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_13
# 162 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 163 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 164 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 165 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_14
# 167 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 168 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 169 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 170 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_15
# 172 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_8
# 173 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_16
# 175 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 176 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 177 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 178 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_17
# 182 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 184 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_9
# 185 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 186 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 188 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 189 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_18
# 191 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 192 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 193 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 194 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_19
# 196 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 197 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 198 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 199 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_20
# 201 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 202 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 203 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 204 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_21
# 206 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 207 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 208 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 209 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 210 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 211 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 212 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 213 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 214 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_22
# 216 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 217 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 218 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 219 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_23
# 221 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 222 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 223 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 224 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_24
# 226 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 227 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 228 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 229 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Finale_Cutscene_Text_26
# 230 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 231 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_27
# 233 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Battle
	return


UnchartedIsland_Finale_Battle::
# 238 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 239 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 240 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 241 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Battle_Text_0
# 243 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_8
# 244 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 245 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 247 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Battle_Movement_0
# 248 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 249 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 250 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Battle_Text_1
# 252 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_RUE, UnchartedIsland_Finale_Battle_Text_2
# 254 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Ending
	return


UnchartedIsland_Finale_Ending::
# 258 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_0
# 265 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 266 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 267 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_0
# 269 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_1
# 270 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 271 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 272 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Ending_Text_1
# 274 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_2
# 275 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 276 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 277 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Finale_Ending_Text_2
# 279 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 280 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_3
# 282 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 283 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 284 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 285 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 286 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 287 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 288 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_4
# 290 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Battle_Movement_0
# 291 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 292 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 293 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_5
# 295 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 296 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_KOR, 79, 26
# 297 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_KOR
# 298 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_KORAIDON, CRY_MODE_NORMAL
# 299 "data//maps/UnchartedIsland/scripts.pory"
	waitmoncry
# 300 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 302 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_6
# 305 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_3
# 306 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_3
# 307 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_3
# 308 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Ending_Movement_3
# 309 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOR, UnchartedIsland_Finale_Ending_Movement_3
# 310 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_3
# 311 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_2, UnchartedIsland_Finale_Ending_Movement_3
# 312 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 313 "data//maps/UnchartedIsland/scripts.pory"
	delay 20
# 316 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Ending_Text_7, UnchartedIsland_Finale_Ending_Text_8
# 318 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_CLEF, 78, 33
# 319 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_CLEF
# 320 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_BREECH, 78, 34
# 321 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_BREECH
# 324 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_BREECH, UnchartedIsland_Finale_Ending_Movement_4
# 325 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_CLEF, UnchartedIsland_Finale_Ending_Movement_5
# 326 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 329 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_6
# 330 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_6
# 331 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_6
# 332 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Ending_Movement_6
# 333 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOR, UnchartedIsland_Finale_Ending_Movement_6
# 334 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_6
# 335 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_2, UnchartedIsland_Finale_Ending_Movement_6
# 337 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_CLEF, UnchartedIsland_Finale_Ending_Movement_7
# 339 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 340 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_2
# 341 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 343 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 344 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 345 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Ending_Text_9, UnchartedIsland_Finale_Ending_Text_10
# 346 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_CLEF, UnchartedIsland_Finale_Cutscene_Movement_5
# 347 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 348 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 349 "data//maps/UnchartedIsland/scripts.pory"
	applymovement 2, UnchartedIsland_Finale_Ending_Movement_8
# 350 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 351 "data//maps/UnchartedIsland/scripts.pory"
	removeobject 2
# 352 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_M_DIVE
# 353 "data//maps/UnchartedIsland/scripts.pory"
	waitse
# 354 "data//maps/UnchartedIsland/scripts.pory"
	delay 40
# 356 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_0
# 357 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 359 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 360 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 361 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 362 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 363 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 364 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 365 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_4
# 366 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 369 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOR, UnchartedIsland_Finale_Ending_Movement_9
# 370 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 373 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_CLEF, UnchartedIsland_Finale_Ending_Movement_10
# 374 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_BREECH, UnchartedIsland_Finale_Ending_Movement_11
# 375 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_10
# 376 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Ending_Movement_10
# 377 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 380 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_12
# 381 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 382 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 383 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Ending_Text_1
# 385 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_13
# 386 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 387 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 388 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Finale_Ending_Text_11
# 390 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 391 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_3
# 393 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_12
# 394 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 397 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_SHIP
# 398 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_SHIP
# 399 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_SHIP, 69, 28
# 401 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_SHIP, UnchartedIsland_Finale_Ending_Movement_14
# 404 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_15
# 405 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_15
# 406 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 407 "data//maps/UnchartedIsland/scripts.pory"
	delay 20
# 408 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_16
# 409 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_16
# 410 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 411 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_EXIT
# 414 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 415 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_DET1
# 416 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_DET1, 75, 26
# 417 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_DET2
# 418 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_DET2, 75, 28
# 419 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_BREECH, 77, 29
# 420 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_BREECH, UnchartedIsland_Finale_Ending_Movement_6
# 421 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 422 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 424 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Ending_Text_13, UnchartedIsland_Finale_Ending_Text_14
# 425 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 426 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_17
# 427 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 428 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 429 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_15
# 430 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_18
# 431 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 433 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_DET1, UnchartedIsland_Finale_Ending_Movement_10
# 434 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_DET2, UnchartedIsland_Finale_Ending_Movement_6
# 436 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 437 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_16
# 440 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 5
# 441 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_FINALE_DONE
# 443 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_CARABRUE_TOWN_TENEBRIS_LAB_FINALE, 5, 4
# 446 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Finale_Skip::
# 452 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 453 "data//maps/UnchartedIsland/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, 0
# 454 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE_2
# 455 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Ending_Movement_10
# 456 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_6
# 457 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_6
# 458 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_6
# 459 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 460 "data//maps/UnchartedIsland/scripts.pory"
	delay 2
# 461 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Ending_Movement_10
# 462 "data//maps/UnchartedIsland/scripts.pory"
	delay 2
# 463 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 465 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Battle
	return


UnchartedIsland_Breech::
# 471 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Ending_Text_7, UnchartedIsland_Breech_Text_0
	return


UnchartedIsland_Clefable::
# 474 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 475 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Clefable_Text_0, UnchartedIsland_Finale_Ending_Text_10
	end


UnchartedIsland_Leader_Caught_A::
# 483 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 484 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
# 485 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_B::
# 489 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 490 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 37, 24
# 491 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_C::
# 496 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 497 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 53, 41
# 498 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Inger::
# 502 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Inger_Text_0
# 503 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Ariana::
# 506 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Ariana_Text_0
# 507 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Gloria::
# 510 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Gloria_Text_0
# 511 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Carona::
# 514 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Carona_Text_0
# 515 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Viniel::
# 521 "data//maps/UnchartedIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, UnchartedIsland_Finale_Cutscene_Movement_5
# 522 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 523 "data//maps/UnchartedIsland/scripts.pory"
	delay 12
# 524 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Viniel_Text_0, UnchartedIsland_Viniel_Text_1
	end


UnchartedIsland_Manectric::
# 528 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_MANECTRIC_MEGA, CRY_MODE_NORMAL
# 529 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Manectric_Text_0
	end


UnchartedIsland_VinielGrunts::
# 533 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay NULL, UnchartedIsland_VinielGrunts_Text_0
	end


UnchartedIsland_Jania::
# 539 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Jania_Text_0
# 540 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Raazi::
# 543 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Raazi_Text_0
# 544 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Grunt_A::
# 556 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_A, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_1
# 557 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_2
# 558 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_B::
# 561 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_B, UnchartedIsland_Grunt_B_Text_0, UnchartedIsland_Grunt_B_Text_1
# 562 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 563 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_C::
# 566 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_C, UnchartedIsland_Grunt_C_Text_0, UnchartedIsland_Grunt_C_Text_1
# 567 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_C_Text_2
# 568 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Moxie_Viewpoint_Trigger::
# 583 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_2
# 585 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 587 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 588 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_6
# 589 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 592 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Finale_Battle_Movement_0
# 593 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 594 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 595 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0
# 596 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 597 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_VIEWPOINT
# 599 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_VIEWPOINT
# 601 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1
# 602 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 603 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 605 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end

UnchartedIsland_Moxie_Viewpoint_Trigger_2:
	end


UnchartedIsland_Moxie_Trigger0::
# 612 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger0_2
# 613 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 614 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger0_Movement_0
# 615 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 616 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger0_2:
	end


UnchartedIsland_Moxie_Trigger1::
# 619 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger1_2
# 620 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 621 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger1_Movement_0
# 622 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 623 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger1_2:
	end


UnchartedIsland_Moxie_Melea_Fight::
# 627 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Melea_Fight_2
# 629 "data//maps/UnchartedIsland/scripts.pory"
	clearflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 631 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_0
# 633 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 634 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 635 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 637 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_1
# 640 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_MELEA_1
# 641 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 60, 41
# 642 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 643 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 644 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 646 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_2
# 648 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 649 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 650 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 651 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 652 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_3
# 654 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 655 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_6
# 656 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 657 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 658 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_4
# 660 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_6
# 661 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_6
# 662 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 663 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 665 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 666 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_2
# 667 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 669 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_5
# 671 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 67, 38
# 673 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 674 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 675 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 677 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 678 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 679 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_4
# 680 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 681 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 682 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_6
# 685 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 686 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 687 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 688 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 689 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_7
# 692 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 693 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 694 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 696 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_KOHLA_1
# 697 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_KOHLA_1, 60, 41
# 698 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_6
# 699 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 700 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 702 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 703 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 704 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 705 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_8
# 706 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_13
# 707 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 708 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 709 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_9
# 710 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 712 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 713 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 715 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 716 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 717 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_KOHLA_1
# 719 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 721 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_12
# 722 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 723 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 724 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 725 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_11
# 727 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 728 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 729 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 730 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 731 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_12
# 734 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_MOXIE, UnchartedIsland_Moxie_Melea_Fight_Text_13
# 736 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 737 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 738 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 739 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 740 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_14
# 742 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_12
# 743 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 744 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 745 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 746 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_15
# 748 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_8
# 749 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 752 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_MELEA, UnchartedIsland_Moxie_Melea_Fight_Text_16
# 754 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_17
# 755 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_9
# 756 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 759 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 79, 42
# 760 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 79, 42
# 762 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_1
# 764 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 1
# 765 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_MELEA_BATTLE
	end

UnchartedIsland_Moxie_Melea_Fight_2:
	end


UnchartedIsland_Melea_Destroy_Trigger::
# 770 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 1
	goto_if_eq UnchartedIsland_Melea_Destroy_Trigger_2
	end

UnchartedIsland_Melea_Destroy_Trigger_2:
# 772 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 775 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 776 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 778 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 779 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_0
# 780 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 781 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 783 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Cutscene_Movement_1
# 784 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_0
# 786 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_13
# 787 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_1
# 789 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_NORMAL
# 792 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 793 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 794 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 30
# 795 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 796 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 798 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 799 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_1
# 800 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 801 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 804 "data//maps/UnchartedIsland/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 805 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 2
# 806 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, VAR_TEMP_2, VAR_TEMP_3
# 808 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Tenebris::
# 816 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 2
	goto_if_eq UnchartedIsland_Tenebris_1
	return

UnchartedIsland_Tenebris_1:
# 817 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 818 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_0
# 819 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 820 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 821 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_1
# 823 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 824 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_1
# 825 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 828 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_TENE, 67, 45
# 829 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE
# 830 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_TENE, 67, 45
# 832 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_PUDDLE
# 833 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Ending_Movement_8
# 834 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 835 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 836 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_2
# 837 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_3
# 838 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 839 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_6
# 840 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 841 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 843 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 845 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 846 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 847 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 848 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_2
# 849 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_3
# 850 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 851 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 852 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 853 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 854 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 855 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_3
# 856 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 857 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 858 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 859 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_4
# 860 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 861 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_5
# 862 "data//maps/UnchartedIsland/scripts.pory"
	showmonpic SPECIES_KORAIDON, 10, 3
# 863 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_6
# 864 "data//maps/UnchartedIsland/scripts.pory"
	hidemonpic
# 865 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 866 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_7
# 869 "data//maps/UnchartedIsland/scripts.pory"
	speakername NULL
# 870 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Tenebris_Text_8, MSGBOX_POKENAV
# 871 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 872 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Finale_Cutscene_Text_7
# 873 "data//maps/UnchartedIsland/scripts.pory"
	message UnchartedIsland_Tenebris_Text_9
# 874 "data//maps/UnchartedIsland/scripts.pory"
	waitmessage
# 875 "data//maps/UnchartedIsland/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, UnchartedIsland_Tenebris_Text_10, UnchartedIsland_Tenebris_Text_11, UnchartedIsland_Tenebris_Text_12
# 878 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 879 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 880 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 881 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_13
# 882 "data//maps/UnchartedIsland/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 883 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_14
# 885 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_4
# 886 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_5
# 887 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 888 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_M_DIVE
# 889 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_TENE
# 890 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 892 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_6
# 893 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 894 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_M_DIVE
# 895 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_ANCIENT_CORMORIA_FINAL, 9, 51
# 897 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 3
# 898 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


# 76 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_0:
# 76 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 76 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 76 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 82 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_1:
# 82 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_down
	step_end

# 92 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_2:
# 92 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 92 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 92 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 93 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_3:
# 93 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 93 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 100 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_4:
# 100 "data//maps/UnchartedIsland/scripts.pory"
	fly_down
	step_end

# 120 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_5:
# 120 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 135 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_6:
# 135 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 135 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 140 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_7:
# 140 "data//maps/UnchartedIsland/scripts.pory"
	emote_question_mark
	step_end

# 172 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_8:
# 172 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 184 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_9:
# 184 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 247 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Battle_Movement_0:
# 247 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
	step_end

# 258 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_0:
# 259 "data//maps/UnchartedIsland/scripts.pory"
	lock_anim
# 260 "data//maps/UnchartedIsland/scripts.pory"
	lock_facing_direction
# 261 "data//maps/UnchartedIsland/scripts.pory"
	walk_faster_down
# 262 "data//maps/UnchartedIsland/scripts.pory"
	unlock_anim
# 263 "data//maps/UnchartedIsland/scripts.pory"
	unlock_facing_direction
	step_end

# 269 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_1:
# 269 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 269 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 274 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_2:
# 274 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 274 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_left
	step_end

# 305 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_3:
# 305 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 305 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_down
	step_end

# 324 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_4:
# 324 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 324 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 324 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 324 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 324 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 324 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_left
# 324 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 324 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_left
# 324 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 325 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_5:
# 325 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 325 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 325 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 325 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 325 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_left
# 325 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 325 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_left
# 325 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
	step_end

# 329 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_6:
# 329 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 337 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_7:
# 337 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 337 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 337 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 337 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 337 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 337 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 349 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_8:
# 349 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_up
	step_end

# 369 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_9:
# 369 "data//maps/UnchartedIsland/scripts.pory"
	enter_pokeball
	step_end

# 373 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_10:
# 373 "data//maps/UnchartedIsland/scripts.pory"
	face_down
	step_end

# 374 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_11:
# 374 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 380 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_12:
# 380 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 385 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_13:
# 385 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_left
	step_end

# 401 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_14:
# 401 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 401 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 401 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 404 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_15:
# 404 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 404 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_left
	step_end

# 408 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_16:
# 408 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 408 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 408 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 408 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 408 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 408 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 426 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_17:
# 426 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
	step_end

# 430 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_18:
# 430 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 430 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
	step_end

# 595 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0:
# 595 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 595 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 595 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 595 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 601 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1:
# 601 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 601 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 614 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger0_Movement_0:
# 614 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 614 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 614 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 614 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 614 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 614 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 621 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger1_Movement_0:
# 621 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 621 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 621 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 621 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 621 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 621 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 621 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 642 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_0:
# 642 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 643 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_1:
# 643 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 643 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 643 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 643 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 643 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 643 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 643 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 643 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 643 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 643 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 666 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_2:
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 666 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 673 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_3:
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 673 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
	step_end

# 679 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_4:
# 679 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 679 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 692 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_5:
# 692 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 692 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 698 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_6:
# 698 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 698 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 698 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 698 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 698 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 698 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 698 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 698 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 698 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 698 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 715 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_7:
# 715 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 715 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 715 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 715 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 715 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 715 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 715 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 715 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 715 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 715 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 715 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 748 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_8:
# 748 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 748 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 748 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 748 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 748 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 748 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 748 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 748 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 755 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_9:
# 755 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 755 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 755 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 755 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 755 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 755 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 755 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 755 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 755 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 755 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 755 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 779 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_0:
# 779 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 779 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 779 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 779 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 779 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 799 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_1:
# 799 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 799 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 799 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 799 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 799 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 818 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_0:
# 818 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 818 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 824 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_1:
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 836 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_2:
# 836 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 836 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 836 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 836 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 837 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_3:
# 837 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 837 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 837 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 837 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 837 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 837 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 837 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 837 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 837 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 837 "data//maps/UnchartedIsland/scripts.pory"
	face_down
	step_end

# 885 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_4:
# 885 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 885 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 885 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 885 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 885 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 885 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 885 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 885 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 885 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 885 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 886 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_5:
# 886 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 886 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 886 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 886 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 886 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 886 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 886 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 886 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 886 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 886 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

# 892 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_6:
# 892 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

UnchartedIsland_Finale_Text_0:
# 56 "data//maps/UnchartedIsland/scripts.pory"
	.string "Skip cutscene?$"

UnchartedIsland_Finale_Cutscene_Text_0:
# 80 "data//maps/UnchartedIsland/scripts.pory"
	.string "Kohla$"

UnchartedIsland_Finale_Cutscene_Text_1:
# 80 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ceruledge...Ceruledge!!\p"
	.string "No!!$"

UnchartedIsland_Finale_Cutscene_Text_2:
# 85 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea$"

UnchartedIsland_Finale_Cutscene_Text_3:
# 85 "data//maps/UnchartedIsland/scripts.pory"
	.string "The famous Ace Rookie and his\n"
	.string "Ceruledge...burned to dust!$"

UnchartedIsland_Finale_Cutscene_Text_4:
# 90 "data//maps/UnchartedIsland/scripts.pory"
	.string "And with this, nobody can stop us from -$"

UnchartedIsland_Finale_Cutscene_Text_5:
# 123 "data//maps/UnchartedIsland/scripts.pory"
	.string "Isn't that Professor Tenebris?$"

UnchartedIsland_Finale_Cutscene_Text_6:
# 128 "data//maps/UnchartedIsland/scripts.pory"
	.string "...and {PLAYER}! How on earth?$"

UnchartedIsland_Finale_Cutscene_Text_7:
# 133 "data//maps/UnchartedIsland/scripts.pory"
	.string "Tenebris$"

UnchartedIsland_Finale_Cutscene_Text_8:
# 133 "data//maps/UnchartedIsland/scripts.pory"
	.string "RUE! They got to you!\n"
	.string "Are you okay? Did they hurt you?$"

UnchartedIsland_Finale_Cutscene_Text_9:
# 138 "data//maps/UnchartedIsland/scripts.pory"
	.string "No...you've got it all wrong...$"

UnchartedIsland_Finale_Cutscene_Text_10:
# 148 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue$"

UnchartedIsland_Finale_Cutscene_Text_11:
# 148 "data//maps/UnchartedIsland/scripts.pory"
	.string "You did get it all wrong, Tenebris.$"

UnchartedIsland_Finale_Cutscene_Text_12:
# 153 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue? What's going on?$"

UnchartedIsland_Finale_Cutscene_Text_13:
# 160 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'll tell you what's going on!$"

UnchartedIsland_Finale_Cutscene_Text_14:
# 165 "data//maps/UnchartedIsland/scripts.pory"
	.string "What you see is the truth, Tenebris.\p"
	.string "I founded Team Somber!\p"
	.string "I was the one spying on you from the\n"
	.string "start! Easy enough, since I was right\l"
	.string "under your nose. I studied all your\l"
	.string "papers, took all your research...and\l"
	.string "right when you were about to bring the\l"
	.string "dreamstone home, you ran off with it!$"

UnchartedIsland_Finale_Cutscene_Text_15:
# 170 "data//maps/UnchartedIsland/scripts.pory"
	.string "And you - {PLAYER}!\p"
	.string "You stupid, stupid gnat!\p"
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
# 173 "data//maps/UnchartedIsland/scripts.pory"
	.string "Y-you set me up?$"

UnchartedIsland_Finale_Cutscene_Text_17:
# 178 "data//maps/UnchartedIsland/scripts.pory"
	.string "Stupid child...I set you all up a\n"
	.string "hundred times over!$"

UnchartedIsland_Finale_Cutscene_Text_18:
# 189 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}, when you saw me at the\n"
	.string "Master Ball Maker's house at the Mirroh\l"
	.string "Base Camp, I feared you'd connect the\l"
	.string "dots for a moment...but it looks like I\l"
	.string "overestimated your cognitive abilities.\p"
	.string "No...I did everything right.\p"
	.string "Everything was perfect!$"

UnchartedIsland_Finale_Cutscene_Text_19:
# 194 "data//maps/UnchartedIsland/scripts.pory"
	.string "But why, Rue?$"

UnchartedIsland_Finale_Cutscene_Text_20:
# 199 "data//maps/UnchartedIsland/scripts.pory"
	.string "It's genius, Tenebris. Genius of the ilk\n"
	.string "that a cerebral mind like yours could\l"
	.string "never grasp.\p"
	.string "In times of war, the arms dealers stand\n"
	.string "to prosper.\p"
	.string "Orichalcum Pulse will create heatwaves\n"
	.string "and destruction across Cormoria.\l"
	.string "People will need services of all kinds -\l"
	.string "emergency services, repairs,\l"
	.string "construction, delivery of essentials...\l"
	.string "and Team Somber, with our army of\l"
	.string "strong Ancient Pokémon, can do all of\l"
	.string "that!\p"
	.string "For a fee, of course.$"

UnchartedIsland_Finale_Cutscene_Text_21:
# 204 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue...a mind like yours could do far\n"
	.string "better.$"

UnchartedIsland_Finale_Cutscene_Text_22:
# 214 "data//maps/UnchartedIsland/scripts.pory"
	.string "NO, TENEBRIS!$"

UnchartedIsland_Finale_Cutscene_Text_23:
# 219 "data//maps/UnchartedIsland/scripts.pory"
	.string "A mind like YOURS can do far better!\n"
	.string "That's why the world knows you and\l"
	.string "nobody knows me!\p"
	.string "For the less special, other means must\n"
	.string "be sought. This, Tenebris, is an emotion\l"
	.string "you will never understand.$"

UnchartedIsland_Finale_Cutscene_Text_24:
# 224 "data//maps/UnchartedIsland/scripts.pory"
	.string "That's no excuse for what you're doing!$"

UnchartedIsland_Finale_Cutscene_Text_25:
# 229 "data//maps/UnchartedIsland/scripts.pory"
	.string "Moxie$"

UnchartedIsland_Finale_Cutscene_Text_26:
# 229 "data//maps/UnchartedIsland/scripts.pory"
	.string "Silence, loser!$"

UnchartedIsland_Finale_Cutscene_Text_27:
# 231 "data//maps/UnchartedIsland/scripts.pory"
	.string "It's fine, Moxie.\n"
	.string "He's right...that's no excuse.\p"
	.string "But who will stop me?\n"
	.string "Who will force my hand now?\p"
	.string "I've beaten everyone - I've hoodwinked\n"
	.string "the detectives, bypassed the gym\l"
	.string "leaders and crushed the Ace Rookie.$"

UnchartedIsland_Finale_Battle_Text_0:
# 241 "data//maps/UnchartedIsland/scripts.pory"
	.string "No, Rue.\p"
	.string "You haven't beaten us all.$"

UnchartedIsland_Finale_Battle_Text_1:
# 250 "data//maps/UnchartedIsland/scripts.pory"
	.string "So this is what it comes down to - the\n"
	.string "assistant versus the professor.\p"
	.string "Very well.\p"
	.string "I'm sorry, {PLAYER}.\n"
	.string "I really do like you.\p"
	.string "But Cormoria has only enough space\n"
	.string "for one future.\p"
	.string "One of us must step aside.\p"
	.string "...\p"
	.string "I'm sorry.$"

UnchartedIsland_Finale_Battle_Text_2:
# 252 "data//maps/UnchartedIsland/scripts.pory"
	.string "No! Nooo! NOOO!!!$"

UnchartedIsland_Finale_Ending_Text_0:
# 267 "data//maps/UnchartedIsland/scripts.pory"
	.string "I lost...\p"
	.string "How could I lose?\p"
	.string "To a research associate?\p"
	.string "I...$"

UnchartedIsland_Finale_Ending_Text_1:
# 272 "data//maps/UnchartedIsland/scripts.pory"
	.string "Boss!$"

UnchartedIsland_Finale_Ending_Text_2:
# 277 "data//maps/UnchartedIsland/scripts.pory"
	.string "C'mon boss! Let's get out of here\n"
	.string "before the detectives come!$"

UnchartedIsland_Finale_Ending_Text_3:
# 280 "data//maps/UnchartedIsland/scripts.pory"
	.string "No...$"

UnchartedIsland_Finale_Ending_Text_4:
# 288 "data//maps/UnchartedIsland/scripts.pory"
	.string "NO!!!$"

UnchartedIsland_Finale_Ending_Text_5:
# 293 "data//maps/UnchartedIsland/scripts.pory"
	.string "I will not be bested!\p"
	.string "If we can get the dreamstone,\n"
	.string "we can just try again.\p"
	.string "Ancient Terror!\n"
	.string "Bring me the dreamstone!$"

UnchartedIsland_Finale_Ending_Text_6:
# 302 "data//maps/UnchartedIsland/scripts.pory"
	.string "Now hurry up and get me -$"

UnchartedIsland_Finale_Ending_Text_7:
# 316 "data//maps/UnchartedIsland/scripts.pory"
	.string "Breech$"

UnchartedIsland_Finale_Ending_Text_8:
# 316 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefable! It's dangerous!\p"
	.string "Come back!$"

UnchartedIsland_Finale_Ending_Text_9:
# 345 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefable$"

UnchartedIsland_Finale_Ending_Text_10:
# 345 "data//maps/UnchartedIsland/scripts.pory"
	.string "Cleee!!!$"

UnchartedIsland_Finale_Ending_Text_11:
# 388 "data//maps/UnchartedIsland/scripts.pory"
	.string "Boss! Let's get out of here!$"

UnchartedIsland_Finale_Ending_Text_12:
# 393 "data//maps/UnchartedIsland/scripts.pory"
	.string "Th-the dreamstone...$"

UnchartedIsland_Finale_Ending_Text_13:
# 424 "data//maps/UnchartedIsland/scripts.pory"
	.string "Detective$"

UnchartedIsland_Finale_Ending_Text_14:
# 424 "data//maps/UnchartedIsland/scripts.pory"
	.string "It's over, Rue. You're finished!$"

UnchartedIsland_Finale_Ending_Text_15:
# 429 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}...$"

UnchartedIsland_Finale_Ending_Text_16:
# 437 "data//maps/UnchartedIsland/scripts.pory"
	.string "A name worth remembering...$"

UnchartedIsland_Breech_Text_0:
# 471 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER} - you made it through!\p"
	.string "Clefable and I will hide here behind the\n"
	.string "trees. You go on ahead, but be careful!\l"
	.string "I saw all the gym leaders out there.\l"
	.string "If they catch you, they'll send you\l"
	.string "back to the ship!\p"
	.string "...\p"
	.string "You're just like you were back when I\n"
	.string "met you in Fennilahl Town. The only\l"
	.string "thing that changed is that you saved\l"
	.string "a hiker back then and you're saving\l"
	.string "all of Cormoria now.\p"
	.string "You're really cool, {PLAYER}.\n"
	.string "I'm happy we met.$"

UnchartedIsland_Clefable_Text_0:
# 475 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefairy$"

UnchartedIsland_Leader_Caught_A_Text_0:
# 483 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey! What are you doing here? You\n"
	.string "should be on the S.S. Elegant.$"

UnchartedIsland_Inger_Text_0:
# 502 "data//maps/UnchartedIsland/scripts.pory"
	.string "Inger$"

UnchartedIsland_Ariana_Text_0:
# 506 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ariana$"

UnchartedIsland_Gloria_Text_0:
# 510 "data//maps/UnchartedIsland/scripts.pory"
	.string "Gloria$"

UnchartedIsland_Carona_Text_0:
# 514 "data//maps/UnchartedIsland/scripts.pory"
	.string "Carona$"

UnchartedIsland_Viniel_Text_0:
# 524 "data//maps/UnchartedIsland/scripts.pory"
	.string "Viniel$"

UnchartedIsland_Viniel_Text_1:
# 524 "data//maps/UnchartedIsland/scripts.pory"
	.string "Haha - come on, all of you!\n"
	.string "Bring four more, in fact!$"

UnchartedIsland_Manectric_Text_0:
# 529 "data//maps/UnchartedIsland/scripts.pory"
	.string "Manectric has mega evolved! These\n"
	.string "grunts don't stand a chance...$"

UnchartedIsland_VinielGrunts_Text_0:
# 533 "data//maps/UnchartedIsland/scripts.pory"
	.string "Why is his Mega Manectric so strong?$"

UnchartedIsland_Jania_Text_0:
# 539 "data//maps/UnchartedIsland/scripts.pory"
	.string "Jania$"

UnchartedIsland_Raazi_Text_0:
# 543 "data//maps/UnchartedIsland/scripts.pory"
	.string "Raazi$"

UnchartedIsland_Grunt_A_Text_0:
# 556 "data//maps/UnchartedIsland/scripts.pory"
	.string "The boss gave me new Pokémon just to\n"
	.string "stop the Ace Rookie. You can't stop us -\l"
	.string "wait, you're not the Ace Rookie!$"

UnchartedIsland_Grunt_A_Text_1:
# 556 "data//maps/UnchartedIsland/scripts.pory"
	.string "Guess you're still on the case!$"

UnchartedIsland_Grunt_A_Text_2:
# 557 "data//maps/UnchartedIsland/scripts.pory"
	.string "It doesn't matter who's on the case.\n"
	.string "You can't stop us now!$"

UnchartedIsland_Grunt_B_Text_0:
# 561 "data//maps/UnchartedIsland/scripts.pory"
	.string "They said the Ace Rookie was coming.\n"
	.string "Why are you here instead?$"

UnchartedIsland_Grunt_B_Text_1:
# 561 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'd rather fight the Ace Rookie!$"

UnchartedIsland_Grunt_B_Text_2:
# 562 "data//maps/UnchartedIsland/scripts.pory"
	.string "We've never beaten you once...\n"
	.string "who are you?$"

UnchartedIsland_Grunt_C_Text_0:
# 566 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah, weren't you kicked off the case?\n"
	.string "Well whatever! We're so close - you\l"
	.string "think we'll let you stop us now?$"

UnchartedIsland_Grunt_C_Text_1:
# 566 "data//maps/UnchartedIsland/scripts.pory"
	.string "Don't ruin our plan!$"

UnchartedIsland_Grunt_C_Text_2:
# 567 "data//maps/UnchartedIsland/scripts.pory"
	.string "Go on ahead then! I bet Moxie and Melea\n"
	.string "will teach you a lesson!$"

UnchartedIsland_Moxie_Melea_Fight_Text_0:
# 631 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}.\p"
	.string "A familiar face by now.\n"
	.string "How many times has it been?\p"
	.string "We received intel that you were off\n"
	.string "the case, and we would only have to\l"
	.string "deal with the Ace Rookie.\p"
	.string "It was our mistake, I suppose, to\n"
	.string "assume you wouldn't come any way.$"

UnchartedIsland_Moxie_Melea_Fight_Text_1:
# 637 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea!\n"
	.string "{PLAYER}'s here!$"

UnchartedIsland_Moxie_Melea_Fight_Text_2:
# 646 "data//maps/UnchartedIsland/scripts.pory"
	.string "So you came after all.\p"
	.string "Time and again we've tried to explain\n"
	.string "how insignificant you are in our plans.$"

UnchartedIsland_Moxie_Melea_Fight_Text_3:
# 652 "data//maps/UnchartedIsland/scripts.pory"
	.string "And yet, pest that you are, you\n"
	.string "manage to find your way to us and\l"
	.string "foil our plans every time!$"

UnchartedIsland_Moxie_Melea_Fight_Text_4:
# 658 "data//maps/UnchartedIsland/scripts.pory"
	.string "Look across the water.$"

UnchartedIsland_Moxie_Melea_Fight_Text_5:
# 669 "data//maps/UnchartedIsland/scripts.pory"
	.string "The third and final dreamstone.\p"
	.string "It took us a while to locate, but this\n"
	.string "is where Professor Tenebris took her\l"
	.string "dreamstone and vanished.\p"
	.string "This is where it all began...$"

UnchartedIsland_Moxie_Melea_Fight_Text_6:
# 682 "data//maps/UnchartedIsland/scripts.pory"
	.string "And this is where we - Team Somber - will\n"
	.string "finally complete our plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_7:
# 689 "data//maps/UnchartedIsland/scripts.pory"
	.string "You bested us before.\p"
	.string "We're not taking that risk again.\n"
	.string "Not here. Not now.\p"
	.string "You can't beat the two of us,\n"
	.string "{PLAYER}!\n"
	.string "If only you had some help.$"

UnchartedIsland_Moxie_Melea_Fight_Text_8:
# 705 "data//maps/UnchartedIsland/scripts.pory"
	.string "Poetic - right on cue, the help arrives.$"

UnchartedIsland_Moxie_Melea_Fight_Text_9:
# 709 "data//maps/UnchartedIsland/scripts.pory"
	.string "No matter - they won't win against the\n"
	.string "two of us together.\p"
	.string "I'll take the Ace Rookie.\n"
	.string "You deal with {PLAYER}!$"

UnchartedIsland_Moxie_Melea_Fight_Text_10:
# 712 "data//maps/UnchartedIsland/scripts.pory"
	.string "...$"

UnchartedIsland_Moxie_Melea_Fight_Text_11:
# 725 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! I can't believe it! You've been\n"
	.string "thrown under the bus!\p"
	.string "The Ace Rookie just left you alone!$"

UnchartedIsland_Moxie_Melea_Fight_Text_12:
# 731 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! Now that settles it.\p"
	.string "You're finished, {PLAYER}! Once we\n"
	.string "deal with you, we'll stop the Ace Rookie.\p"
	.string "Now that we control the dreamstone,\n"
	.string "we've picked up some powerful ancient\l"
	.string "Pokémon of our own!\p"
	.string "It's time to end this once and for all!$"

UnchartedIsland_Moxie_Melea_Fight_Text_13:
# 734 "data//maps/UnchartedIsland/scripts.pory"
	.string "No! Everything's ruined!$"

UnchartedIsland_Moxie_Melea_Fight_Text_14:
# 740 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "Noo!!!\p"
	.string "I...$"

UnchartedIsland_Moxie_Melea_Fight_Text_15:
# 746 "data//maps/UnchartedIsland/scripts.pory"
	.string "Calm down Moxie! I'm here.\p"
	.string "Go now - go and stop Kohla.\n"
	.string "I'll finish {PLAYER} off!$"

UnchartedIsland_Moxie_Melea_Fight_Text_16:
# 752 "data//maps/UnchartedIsland/scripts.pory"
	.string "This can't be happening!$"

UnchartedIsland_Moxie_Melea_Fight_Text_17:
# 754 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "We've worked too hard...\n"
	.string "I can't let it end like this!\p"
	.string "No!!!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_0:
# 784 "data//maps/UnchartedIsland/scripts.pory"
	.string "Absol! Destroy those rocks!\n"
	.string "We can't let anyone come after us!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_1:
# 787 "data//maps/UnchartedIsland/scripts.pory"
	.string "You'll never make it through!\p"
	.string "So long, {PLAYER}. You've caused us\n"
	.string "enough pain, but now we'll finally be\l"
	.string "rid of you!$"

UnchartedIsland_Tenebris_Text_0:
# 821 "data//maps/UnchartedIsland/scripts.pory"
	.string "???$"

UnchartedIsland_Tenebris_Text_1:
# 821 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey you - wait!$"

UnchartedIsland_Tenebris_Text_2:
# 848 "data//maps/UnchartedIsland/scripts.pory"
	.string "I never forget a face when I see one.\p"
	.string "I remember signing off on your\n"
	.string "application, {PLAYER}.\p"
	.string "It's long overdue, but it gives me great\n"
	.string "pleasure to welcome you to the Tenebris\l"
	.string "Lab...although I dearly wish it were\l"
	.string "under better circumstances.$"

UnchartedIsland_Tenebris_Text_3:
# 855 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yes, I'm Professor Tenebris.\p"
	.string "I've been hiding in Ancient Cormoria...\n"
	.string "but Team Somber found the dreamstones\l"
	.string "any way, so my effort was wasted.$"

UnchartedIsland_Tenebris_Text_4:
# 859 "data//maps/UnchartedIsland/scripts.pory"
	.string "But you! I've been watching you.\n"
	.string "I chose a good research assistant.\p"
	.string "You've done your utmost to put an end\n"
	.string "to Team Somber and their plans.\p"
	.string "It's commendable.\p"
	.string "When I first discovered the\n"
	.string "dreamstones, I began to suspect that I\l"
	.string "was being spied on. That's why I took\l"
	.string "the dreamstone and ran away with it.\l"
	.string "I didn't know where to hide it so I came\l"
	.string "here and jumped into Ancient Cormoria.\l"
	.string "I thought that would be enough to stop\l"
	.string "whoever was spying on me...\l"
	.string "...but clearly it wasn't.\p"
	.string "Someone in Team Somber had eyes on the\n"
	.string "dreamstone from the very beginning!\p"
	.string "And now, after my time in Ancient\n"
	.string "Cormoria...I know why.$"

UnchartedIsland_Tenebris_Text_5:
# 861 "data//maps/UnchartedIsland/scripts.pory"
	.string "The Ancient Terror...$"

UnchartedIsland_Tenebris_Text_6:
# 863 "data//maps/UnchartedIsland/scripts.pory"
	.string "Of the many strong Pokémon that ruled\n"
	.string "Ancient Cormoria, the Ancient Terror\l"
	.string "was the strongest! The most vicious!\p"
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
# 866 "data//maps/UnchartedIsland/scripts.pory"
	.string "We must stop them...but I don't have my\n"
	.string "Pokémon. Even if I did, I'm not much use\l"
	.string "in a battle of strength.\p"
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
	.string "{PLAYER}. And truth be told, I'd love\l"
	.string "to keep my youngest research\l"
	.string "associate safe from harm!\p"
	.string "...but you're the best we've got.$"

UnchartedIsland_Tenebris_Text_8:
# 870 "data//maps/UnchartedIsland/scripts.pory"
	.string "This is your last choice in the game!\n"
	.string "Please choose carefully.$"

UnchartedIsland_Tenebris_Text_9:
# 873 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER} - will you stop Team Somber?$"

UnchartedIsland_Tenebris_Text_10:
# 875 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah!$"

UnchartedIsland_Tenebris_Text_11:
# 875 "data//maps/UnchartedIsland/scripts.pory"
	.string "Of course!$"

UnchartedIsland_Tenebris_Text_12:
# 875 "data//maps/UnchartedIsland/scripts.pory"
	.string "Definitely!$"

UnchartedIsland_Tenebris_Text_13:
# 881 "data//maps/UnchartedIsland/scripts.pory"
	.string "You truly are a gem of a human being.\p"
	.string "Let me heal your Pokémon first.$"

UnchartedIsland_Tenebris_Text_14:
# 883 "data//maps/UnchartedIsland/scripts.pory"
	.string "Now come! Follow me and we'll enter\n"
	.string "Ancient Cormoria once more. We can use\l"
	.string "the dreamstone in the past to bring us\l"
	.string "to Team Somber in the present!$"
