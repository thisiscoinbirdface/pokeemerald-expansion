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
	lockall
# 529 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_MANECTRIC_MEGA, CRY_MODE_NORMAL
# 530 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Manectric_Text_0
# 531 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_VinielGrunts::
# 535 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay NULL, UnchartedIsland_VinielGrunts_Text_0
	end


UnchartedIsland_Jania::
# 541 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Jania_Text_0
# 542 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Raazi::
# 545 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Raazi_Text_0
# 546 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Grunt_A::
# 558 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_A, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_1
# 559 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_2
# 560 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_B::
# 563 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_B, UnchartedIsland_Grunt_B_Text_0, UnchartedIsland_Grunt_B_Text_1
# 564 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 565 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_C::
# 568 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_C, UnchartedIsland_Grunt_C_Text_0, UnchartedIsland_Grunt_C_Text_1
# 569 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_C_Text_2
# 570 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Moxie_Viewpoint_Trigger::
# 585 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_2
# 587 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 589 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 590 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_6
# 591 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 594 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Finale_Battle_Movement_0
# 595 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 596 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 597 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0
# 598 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 599 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_VIEWPOINT
# 601 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_VIEWPOINT
# 603 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1
# 604 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 605 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 607 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end

UnchartedIsland_Moxie_Viewpoint_Trigger_2:
	end


UnchartedIsland_Moxie_Trigger0::
# 614 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger0_2
# 615 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 616 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger0_Movement_0
# 617 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 618 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger0_2:
	end


UnchartedIsland_Moxie_Trigger1::
# 621 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger1_2
# 622 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 623 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger1_Movement_0
# 624 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 625 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger1_2:
	end


UnchartedIsland_Moxie_Melea_Fight::
# 629 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Melea_Fight_2
# 631 "data//maps/UnchartedIsland/scripts.pory"
	clearflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 633 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_0
# 635 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 636 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 637 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 639 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_1
# 642 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_MELEA_1
# 643 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 60, 41
# 644 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 645 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 646 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 648 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_2
# 650 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 651 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 652 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 653 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 654 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_3
# 656 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 657 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_6
# 658 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 659 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 660 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_4
# 662 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_6
# 663 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_6
# 664 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 665 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 667 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 668 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_2
# 669 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 671 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_5
# 673 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 67, 38
# 675 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 676 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 677 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 679 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 680 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 681 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_4
# 682 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 683 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 684 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_6
# 687 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 688 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 689 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 690 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 691 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_7
# 694 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 695 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 696 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 698 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_KOHLA_1
# 699 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_KOHLA_1, 60, 41
# 700 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_6
# 701 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 702 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 704 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 705 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 706 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 707 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_8
# 708 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_13
# 709 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 710 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 711 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_9
# 712 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 714 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 715 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 717 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 718 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 719 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_KOHLA_1
# 721 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 723 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_12
# 724 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 725 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 726 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 727 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_11
# 729 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 730 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 731 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 732 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 733 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_12
# 736 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_MOXIE, UnchartedIsland_Moxie_Melea_Fight_Text_13
# 738 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 739 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 740 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 741 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 742 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_14
# 744 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_12
# 745 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 746 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 747 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 748 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_15
# 750 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_8
# 751 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 754 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_MELEA, UnchartedIsland_Moxie_Melea_Fight_Text_16
# 756 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_17
# 757 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_9
# 758 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 761 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 79, 42
# 762 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 79, 42
# 764 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_1
# 766 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 1
# 767 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_MELEA_BATTLE
	end

UnchartedIsland_Moxie_Melea_Fight_2:
	end


UnchartedIsland_Melea_Destroy_Trigger::
# 772 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 1
	goto_if_eq UnchartedIsland_Melea_Destroy_Trigger_2
	end

UnchartedIsland_Melea_Destroy_Trigger_2:
# 774 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 777 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 778 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 780 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 781 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_0
# 782 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 783 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 785 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Cutscene_Movement_1
# 786 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_0
# 788 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_13
# 789 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_1
# 791 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_NORMAL
# 794 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 795 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 796 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 30
# 797 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 798 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 800 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 801 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_1
# 802 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 803 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 806 "data//maps/UnchartedIsland/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 807 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 2
# 808 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, VAR_TEMP_2, VAR_TEMP_3
# 810 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Tenebris::
# 818 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 2
	goto_if_eq UnchartedIsland_Tenebris_1
	return

UnchartedIsland_Tenebris_1:
# 819 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 820 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_0
# 821 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 822 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 823 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_1
# 825 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 826 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_1
# 827 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 830 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_TENE, 67, 45
# 831 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE
# 832 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_TENE, 67, 45
# 834 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_PUDDLE
# 835 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Ending_Movement_8
# 836 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 837 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 838 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_2
# 839 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_3
# 840 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 841 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_6
# 842 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 843 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 845 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 847 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 848 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 849 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 850 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_2
# 851 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_3
# 852 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 853 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 854 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 855 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 856 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 857 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_3
# 858 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 859 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 860 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 861 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_4
# 862 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 863 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_5
# 864 "data//maps/UnchartedIsland/scripts.pory"
	showmonpic SPECIES_KORAIDON, 10, 3
# 865 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_6
# 866 "data//maps/UnchartedIsland/scripts.pory"
	hidemonpic
# 867 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 868 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_7
# 871 "data//maps/UnchartedIsland/scripts.pory"
	speakername NULL
# 872 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Tenebris_Text_8, MSGBOX_POKENAV
# 873 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 874 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Finale_Cutscene_Text_7
# 875 "data//maps/UnchartedIsland/scripts.pory"
	message UnchartedIsland_Tenebris_Text_9
# 876 "data//maps/UnchartedIsland/scripts.pory"
	waitmessage
# 877 "data//maps/UnchartedIsland/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, UnchartedIsland_Tenebris_Text_10, UnchartedIsland_Tenebris_Text_11, UnchartedIsland_Tenebris_Text_12
# 880 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 881 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 882 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 883 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_13
# 884 "data//maps/UnchartedIsland/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 885 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_14
# 887 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_4
# 888 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_5
# 889 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 890 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_M_DIVE
# 891 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_TENE
# 892 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 894 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_6
# 895 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 896 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_M_DIVE
# 897 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_ANCIENT_CORMORIA_FINAL, 9, 51
# 899 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 3
# 900 "data//maps/UnchartedIsland/scripts.pory"
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

# 597 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0:
# 597 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 597 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 597 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 597 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 603 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1:
# 603 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 603 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 616 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger0_Movement_0:
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 616 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 623 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger1_Movement_0:
# 623 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 623 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 623 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 623 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 623 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 623 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 623 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 644 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_0:
# 644 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 645 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_1:
# 645 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 645 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 645 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 645 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 645 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 645 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 645 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 645 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 645 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 645 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 668 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_2:
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 668 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 675 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_3:
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 675 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
	step_end

# 681 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_4:
# 681 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 681 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 694 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_5:
# 694 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 694 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 700 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_6:
# 700 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 700 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 700 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 700 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 700 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 700 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 700 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 700 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 700 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 700 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 717 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_7:
# 717 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 717 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 717 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 717 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 717 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 717 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 717 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 717 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 717 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 717 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 717 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 750 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_8:
# 750 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 750 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 750 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 750 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 750 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 750 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 750 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 750 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 757 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_9:
# 757 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 757 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 757 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 757 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 757 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 757 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 757 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 757 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 757 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 757 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 757 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 781 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_0:
# 781 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 781 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 781 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 781 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 781 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 801 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_1:
# 801 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 801 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 801 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 801 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 801 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 820 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_0:
# 820 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 820 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 826 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_1:
# 826 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 826 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 826 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 826 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 838 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_2:
# 838 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 838 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 838 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 838 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 839 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_3:
# 839 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 839 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 839 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 839 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 839 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 839 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 839 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 839 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 839 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 839 "data//maps/UnchartedIsland/scripts.pory"
	face_down
	step_end

# 887 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_4:
# 887 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 887 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 887 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 887 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 887 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 887 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 887 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 887 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 887 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 887 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 888 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_5:
# 888 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 888 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 888 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 888 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 888 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 888 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 888 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 888 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 888 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 888 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

# 894 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_6:
# 894 "data//maps/UnchartedIsland/scripts.pory"
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
# 530 "data//maps/UnchartedIsland/scripts.pory"
	.string "Manectric has mega evolved! These\n"
	.string "grunts don't stand a chance...$"

UnchartedIsland_VinielGrunts_Text_0:
# 535 "data//maps/UnchartedIsland/scripts.pory"
	.string "Why is his Mega Manectric so strong?$"

UnchartedIsland_Jania_Text_0:
# 541 "data//maps/UnchartedIsland/scripts.pory"
	.string "Jania$"

UnchartedIsland_Raazi_Text_0:
# 545 "data//maps/UnchartedIsland/scripts.pory"
	.string "Raazi$"

UnchartedIsland_Grunt_A_Text_0:
# 558 "data//maps/UnchartedIsland/scripts.pory"
	.string "The boss gave me new Pokémon just to\n"
	.string "stop the Ace Rookie. You can't stop us -\l"
	.string "wait, you're not the Ace Rookie!$"

UnchartedIsland_Grunt_A_Text_1:
# 558 "data//maps/UnchartedIsland/scripts.pory"
	.string "Guess you're still on the case!$"

UnchartedIsland_Grunt_A_Text_2:
# 559 "data//maps/UnchartedIsland/scripts.pory"
	.string "It doesn't matter who's on the case.\n"
	.string "You can't stop us now!$"

UnchartedIsland_Grunt_B_Text_0:
# 563 "data//maps/UnchartedIsland/scripts.pory"
	.string "They said the Ace Rookie was coming.\n"
	.string "Why are you here instead?$"

UnchartedIsland_Grunt_B_Text_1:
# 563 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'd rather fight the Ace Rookie!$"

UnchartedIsland_Grunt_B_Text_2:
# 564 "data//maps/UnchartedIsland/scripts.pory"
	.string "We've never beaten you once...\n"
	.string "who are you?$"

UnchartedIsland_Grunt_C_Text_0:
# 568 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah, weren't you kicked off the case?\n"
	.string "Well whatever! We're so close - you\l"
	.string "think we'll let you stop us now?$"

UnchartedIsland_Grunt_C_Text_1:
# 568 "data//maps/UnchartedIsland/scripts.pory"
	.string "Don't ruin our plan!$"

UnchartedIsland_Grunt_C_Text_2:
# 569 "data//maps/UnchartedIsland/scripts.pory"
	.string "Go on ahead then! I bet Moxie and Melea\n"
	.string "will teach you a lesson!$"

UnchartedIsland_Moxie_Melea_Fight_Text_0:
# 633 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}.\p"
	.string "A familiar face by now.\n"
	.string "How many times has it been?\p"
	.string "We received intel that you were off\n"
	.string "the case, and we would only have to\l"
	.string "deal with the Ace Rookie.\p"
	.string "It was our mistake, I suppose, to\n"
	.string "assume you wouldn't come any way.$"

UnchartedIsland_Moxie_Melea_Fight_Text_1:
# 639 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea!\n"
	.string "{PLAYER}'s here!$"

UnchartedIsland_Moxie_Melea_Fight_Text_2:
# 648 "data//maps/UnchartedIsland/scripts.pory"
	.string "So you came after all.\p"
	.string "Time and again we've tried to explain\n"
	.string "how insignificant you are in our plans.$"

UnchartedIsland_Moxie_Melea_Fight_Text_3:
# 654 "data//maps/UnchartedIsland/scripts.pory"
	.string "And yet, pest that you are, you\n"
	.string "manage to find your way to us and\l"
	.string "foil our plans every time!$"

UnchartedIsland_Moxie_Melea_Fight_Text_4:
# 660 "data//maps/UnchartedIsland/scripts.pory"
	.string "Look across the water.$"

UnchartedIsland_Moxie_Melea_Fight_Text_5:
# 671 "data//maps/UnchartedIsland/scripts.pory"
	.string "The third and final dreamstone.\p"
	.string "It took us a while to locate, but this\n"
	.string "is where Professor Tenebris took her\l"
	.string "dreamstone and vanished.\p"
	.string "This is where it all began...$"

UnchartedIsland_Moxie_Melea_Fight_Text_6:
# 684 "data//maps/UnchartedIsland/scripts.pory"
	.string "And this is where we - Team Somber - will\n"
	.string "finally complete our plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_7:
# 691 "data//maps/UnchartedIsland/scripts.pory"
	.string "You bested us before.\p"
	.string "We're not taking that risk again.\n"
	.string "Not here. Not now.\p"
	.string "You can't beat the two of us,\n"
	.string "{PLAYER}!\n"
	.string "If only you had some help.$"

UnchartedIsland_Moxie_Melea_Fight_Text_8:
# 707 "data//maps/UnchartedIsland/scripts.pory"
	.string "Poetic - right on cue, the help arrives.$"

UnchartedIsland_Moxie_Melea_Fight_Text_9:
# 711 "data//maps/UnchartedIsland/scripts.pory"
	.string "No matter - they won't win against the\n"
	.string "two of us together.\p"
	.string "I'll take the Ace Rookie.\n"
	.string "You deal with {PLAYER}!$"

UnchartedIsland_Moxie_Melea_Fight_Text_10:
# 714 "data//maps/UnchartedIsland/scripts.pory"
	.string "...$"

UnchartedIsland_Moxie_Melea_Fight_Text_11:
# 727 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! I can't believe it! You've been\n"
	.string "thrown under the bus!\p"
	.string "The Ace Rookie just left you alone!$"

UnchartedIsland_Moxie_Melea_Fight_Text_12:
# 733 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! Now that settles it.\p"
	.string "You're finished, {PLAYER}! Once we\n"
	.string "deal with you, we'll stop the Ace Rookie.\p"
	.string "Now that we control the dreamstone,\n"
	.string "we've picked up some powerful ancient\l"
	.string "Pokémon of our own!\p"
	.string "It's time to end this once and for all!$"

UnchartedIsland_Moxie_Melea_Fight_Text_13:
# 736 "data//maps/UnchartedIsland/scripts.pory"
	.string "No! Everything's ruined!$"

UnchartedIsland_Moxie_Melea_Fight_Text_14:
# 742 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "Noo!!!\p"
	.string "I...$"

UnchartedIsland_Moxie_Melea_Fight_Text_15:
# 748 "data//maps/UnchartedIsland/scripts.pory"
	.string "Calm down Moxie! I'm here.\p"
	.string "Go now - go and stop Kohla.\n"
	.string "I'll finish {PLAYER} off!$"

UnchartedIsland_Moxie_Melea_Fight_Text_16:
# 754 "data//maps/UnchartedIsland/scripts.pory"
	.string "This can't be happening!$"

UnchartedIsland_Moxie_Melea_Fight_Text_17:
# 756 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "We've worked too hard...\n"
	.string "I can't let it end like this!\p"
	.string "No!!!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_0:
# 786 "data//maps/UnchartedIsland/scripts.pory"
	.string "Absol! Destroy those rocks!\n"
	.string "We can't let anyone come after us!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_1:
# 789 "data//maps/UnchartedIsland/scripts.pory"
	.string "You'll never make it through!\p"
	.string "So long, {PLAYER}. You've caused us\n"
	.string "enough pain, but now we'll finally be\l"
	.string "rid of you!$"

UnchartedIsland_Tenebris_Text_0:
# 823 "data//maps/UnchartedIsland/scripts.pory"
	.string "???$"

UnchartedIsland_Tenebris_Text_1:
# 823 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey you - wait!$"

UnchartedIsland_Tenebris_Text_2:
# 850 "data//maps/UnchartedIsland/scripts.pory"
	.string "I never forget a face when I see one.\p"
	.string "I remember signing off on your\n"
	.string "application, {PLAYER}.\p"
	.string "It's long overdue, but it gives me great\n"
	.string "pleasure to welcome you to the Tenebris\l"
	.string "Lab...although I dearly wish it were\l"
	.string "under better circumstances.$"

UnchartedIsland_Tenebris_Text_3:
# 857 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yes, I'm Professor Tenebris.\p"
	.string "I've been hiding in Ancient Cormoria...\n"
	.string "but Team Somber found the dreamstones\l"
	.string "any way, so my effort was wasted.$"

UnchartedIsland_Tenebris_Text_4:
# 861 "data//maps/UnchartedIsland/scripts.pory"
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
# 863 "data//maps/UnchartedIsland/scripts.pory"
	.string "The Ancient Terror...$"

UnchartedIsland_Tenebris_Text_6:
# 865 "data//maps/UnchartedIsland/scripts.pory"
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
# 868 "data//maps/UnchartedIsland/scripts.pory"
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
# 872 "data//maps/UnchartedIsland/scripts.pory"
	.string "This is your last choice in the game!\n"
	.string "Please choose carefully.$"

UnchartedIsland_Tenebris_Text_9:
# 875 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER} - will you stop Team Somber?$"

UnchartedIsland_Tenebris_Text_10:
# 877 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah!$"

UnchartedIsland_Tenebris_Text_11:
# 877 "data//maps/UnchartedIsland/scripts.pory"
	.string "Of course!$"

UnchartedIsland_Tenebris_Text_12:
# 877 "data//maps/UnchartedIsland/scripts.pory"
	.string "Definitely!$"

UnchartedIsland_Tenebris_Text_13:
# 883 "data//maps/UnchartedIsland/scripts.pory"
	.string "You truly are a gem of a human being.\p"
	.string "Let me heal your Pokémon first.$"

UnchartedIsland_Tenebris_Text_14:
# 885 "data//maps/UnchartedIsland/scripts.pory"
	.string "Now come! Follow me and we'll enter\n"
	.string "Ancient Cormoria once more. We can use\l"
	.string "the dreamstone in the past to bring us\l"
	.string "to Team Somber in the present!$"
