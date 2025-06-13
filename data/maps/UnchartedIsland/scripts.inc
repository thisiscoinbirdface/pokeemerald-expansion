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
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_STOP_TEAM_SOMBER, SUB_QUEST_4
# 40 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq UnchartedIsland_OnTransition_2
UnchartedIsland_OnTransition_1:
# 44 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 2
	goto_if_eq UnchartedIsland_OnTransition_5
UnchartedIsland_OnTransition_4:
	end

UnchartedIsland_OnTransition_2:
# 41 "data//maps/UnchartedIsland/scripts.pory"
	completesubquest QUEST_STOP_TEAM_SOMBER, SUB_QUEST_4
	goto UnchartedIsland_OnTransition_1

UnchartedIsland_OnTransition_5:
# 45 "data//maps/UnchartedIsland/scripts.pory"
	setmaplayoutindex LAYOUT_UNCHARTED_ISLAND_DESTROYED
	goto UnchartedIsland_OnTransition_4


UnchartedIsland_OnWarp::
# 52 "data//maps/UnchartedIsland/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	end


UnchartedIsland_Finale::
# 57 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 58 "data//maps/UnchartedIsland/scripts.pory"
	setrespawn HEAL_LOCATION_ANCIENT_CORMORIA_FINAL_ISLAND
# 60 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_SKIP_FINALE_CUTSCENE, UnchartedIsland_Finale_2
UnchartedIsland_Finale_1:
# 70 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Cutscene
	return

UnchartedIsland_Finale_2:
# 61 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Finale_Text_0, MSGBOX_YESNO
# 62 "data//maps/UnchartedIsland/scripts.pory"
	release
# 63 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq UnchartedIsland_Finale_4
# 66 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Skip
	goto UnchartedIsland_Finale_1

UnchartedIsland_Finale_4:
# 64 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Cutscene
	goto UnchartedIsland_Finale_1


UnchartedIsland_Finale_Cutscene::
# 76 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_SKIP_FINALE_CUTSCENE
# 78 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 81 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_0
# 82 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 85 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_1
# 87 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 88 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 89 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 90 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_3
# 92 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 93 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 94 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 95 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_4
# 97 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_2
# 98 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 99 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 100 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 101 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 102 "data//maps/UnchartedIsland/scripts.pory"
	delay 30
# 104 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE_2
# 105 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_4
# 106 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 107 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 108 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 109 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 6
# 110 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 111 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 112 "data//maps/UnchartedIsland/scripts.pory"
	waitstate
# 114 "data//maps/UnchartedIsland/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, 0
# 115 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_4
# 116 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 117 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 118 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 119 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 6
# 120 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 121 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 122 "data//maps/UnchartedIsland/scripts.pory"
	waitstate
# 123 "data//maps/UnchartedIsland/scripts.pory"
	release
# 125 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 126 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 127 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 128 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_5
# 130 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 131 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 132 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 133 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_6
# 135 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 136 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 137 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 138 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_8
# 140 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_6
# 141 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 142 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 143 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_9
# 145 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_7
# 146 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_7
# 147 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 148 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 150 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 151 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 152 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 153 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_11
# 155 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 156 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 157 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 158 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_12
# 160 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 161 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 162 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 163 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 164 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 165 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_13
# 167 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 168 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 169 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 170 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_14
# 172 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 173 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 174 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 175 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_15
# 177 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_8
# 178 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_16
# 180 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 181 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 182 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 183 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_17
# 187 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 189 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_9
# 190 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 191 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 193 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 194 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_18
# 196 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 197 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 198 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 199 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_19
# 201 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 202 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 203 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 204 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_20
# 206 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 207 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 208 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 209 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_21
# 211 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 212 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 213 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 214 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 215 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 216 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 217 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 218 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 219 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_22
# 221 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 222 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 223 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 224 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_23
# 226 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 227 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 228 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 229 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_24
# 231 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 232 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 233 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 234 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Finale_Cutscene_Text_26
# 235 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 236 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_27
# 238 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Battle
	return


UnchartedIsland_Finale_Battle::
# 243 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 244 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 245 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 246 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Battle_Text_0
# 248 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_8
# 249 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 250 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 252 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Battle_Movement_0
# 253 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 254 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 255 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Battle_Text_1
# 257 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_RUE, UnchartedIsland_Finale_Battle_Text_2
# 259 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Ending
	return


UnchartedIsland_Finale_Ending::
# 263 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_0
# 270 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 271 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 272 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_0
# 274 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_1
# 275 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 276 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 277 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Ending_Text_1
# 279 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_2
# 280 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 281 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 282 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Finale_Ending_Text_2
# 284 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 285 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_3
# 287 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 288 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 289 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 290 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 291 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 292 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 293 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_4
# 295 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Battle_Movement_0
# 296 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 297 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 298 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_5
# 300 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 301 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_KOR, 79, 26
# 302 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_KOR
# 303 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_KORAIDON, CRY_MODE_NORMAL
# 304 "data//maps/UnchartedIsland/scripts.pory"
	waitmoncry
# 305 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 307 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_6
# 310 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_3
# 311 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_3
# 312 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_3
# 313 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Ending_Movement_3
# 314 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOR, UnchartedIsland_Finale_Ending_Movement_3
# 315 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_3
# 316 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_2, UnchartedIsland_Finale_Ending_Movement_3
# 317 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 318 "data//maps/UnchartedIsland/scripts.pory"
	delay 20
# 321 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Ending_Text_7, UnchartedIsland_Finale_Ending_Text_8
# 323 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_CLEF, 78, 33
# 324 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_CLEF
# 325 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_BREECH, 78, 34
# 326 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_BREECH
# 329 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_BREECH, UnchartedIsland_Finale_Ending_Movement_4
# 330 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_CLEF, UnchartedIsland_Finale_Ending_Movement_5
# 331 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 334 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_6
# 335 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_6
# 336 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_6
# 337 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Ending_Movement_6
# 338 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOR, UnchartedIsland_Finale_Ending_Movement_6
# 339 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_6
# 340 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_2, UnchartedIsland_Finale_Ending_Movement_6
# 342 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_CLEF, UnchartedIsland_Finale_Ending_Movement_7
# 344 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 345 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_2
# 346 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 348 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 349 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 350 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Ending_Text_9, UnchartedIsland_Finale_Ending_Text_10
# 351 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_CLEF, UnchartedIsland_Finale_Cutscene_Movement_5
# 352 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 353 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 354 "data//maps/UnchartedIsland/scripts.pory"
	applymovement 2, UnchartedIsland_Finale_Ending_Movement_8
# 355 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 356 "data//maps/UnchartedIsland/scripts.pory"
	removeobject 2
# 357 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_M_DIVE
# 358 "data//maps/UnchartedIsland/scripts.pory"
	waitse
# 359 "data//maps/UnchartedIsland/scripts.pory"
	delay 40
# 361 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_0
# 362 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 364 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 365 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 366 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 367 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 368 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 369 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 370 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_4
# 371 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 374 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOR, UnchartedIsland_Finale_Ending_Movement_9
# 375 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 378 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_CLEF, UnchartedIsland_Finale_Ending_Movement_10
# 379 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_BREECH, UnchartedIsland_Finale_Ending_Movement_11
# 380 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_10
# 381 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Ending_Movement_10
# 382 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 385 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_12
# 386 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 387 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 388 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Ending_Text_1
# 390 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_13
# 391 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 392 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 393 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Finale_Ending_Text_11
# 395 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 396 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_3
# 398 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_12
# 399 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 402 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_SHIP
# 403 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_SHIP
# 404 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_SHIP, 69, 28
# 406 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_SHIP, UnchartedIsland_Finale_Ending_Movement_14
# 409 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_15
# 410 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_15
# 411 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 412 "data//maps/UnchartedIsland/scripts.pory"
	delay 20
# 413 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_16
# 414 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_16
# 415 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 416 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_EXIT
# 419 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 420 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_DET1
# 421 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_DET1, 75, 26
# 422 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_DET2
# 423 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_DET2, 75, 28
# 424 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_BREECH, 77, 29
# 425 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_BREECH, UnchartedIsland_Finale_Ending_Movement_6
# 426 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 427 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 429 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Ending_Text_13, UnchartedIsland_Finale_Ending_Text_14
# 430 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 431 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_17
# 432 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 433 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 434 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_15
# 435 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_18
# 436 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 438 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_DET1, UnchartedIsland_Finale_Ending_Movement_10
# 439 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_DET2, UnchartedIsland_Finale_Ending_Movement_6
# 441 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 442 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_16
# 445 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 5
# 446 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_FINALE_DONE
# 448 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_CARABRUE_TOWN_TENEBRIS_LAB_FINALE, 5, 4
# 451 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Finale_Skip::
# 457 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 458 "data//maps/UnchartedIsland/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, 0
# 459 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE_2
# 460 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Ending_Movement_10
# 461 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_6
# 462 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_6
# 463 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_6
# 464 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 465 "data//maps/UnchartedIsland/scripts.pory"
	delay 2
# 466 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Ending_Movement_10
# 467 "data//maps/UnchartedIsland/scripts.pory"
	delay 2
# 468 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 470 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Battle
	return


UnchartedIsland_Breech::
# 476 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Ending_Text_7, UnchartedIsland_Breech_Text_0
	return


UnchartedIsland_Clefable::
# 479 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 480 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Clefable_Text_0, UnchartedIsland_Finale_Ending_Text_10
	end


UnchartedIsland_Leader_Caught_A::
# 488 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 489 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
# 490 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_B::
# 494 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 495 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 37, 24
# 496 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_C::
# 501 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 502 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 53, 41
# 503 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Inger::
# 507 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Inger_Text_0
# 508 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Ariana::
# 511 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Ariana_Text_0
# 512 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Gloria::
# 515 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Gloria_Text_0
# 516 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Carona::
# 519 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Carona_Text_0
# 520 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Jania::
# 526 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Jania_Text_0
# 527 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Raazi::
# 530 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Raazi_Text_0
# 531 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Grunt_A::
# 543 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_A, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_1
# 544 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_2
# 545 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_B::
# 548 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_B, UnchartedIsland_Grunt_B_Text_0, UnchartedIsland_Grunt_B_Text_1
# 549 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 550 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_C::
# 553 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_C, UnchartedIsland_Grunt_C_Text_0, UnchartedIsland_Grunt_C_Text_1
# 554 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 555 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Moxie_Viewpoint_Trigger::
# 570 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_2
# 572 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 574 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 575 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_6
# 576 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 579 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Finale_Battle_Movement_0
# 580 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 581 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 582 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0
# 583 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 584 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_VIEWPOINT
# 586 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_VIEWPOINT
# 588 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1
# 589 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 590 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 592 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end

UnchartedIsland_Moxie_Viewpoint_Trigger_2:
	end


UnchartedIsland_Moxie_Trigger0::
# 599 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger0_2
# 600 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 601 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger0_Movement_0
# 602 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 603 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger0_2:
	end


UnchartedIsland_Moxie_Trigger1::
# 606 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger1_2
# 607 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 608 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger1_Movement_0
# 609 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 610 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger1_2:
	end


UnchartedIsland_Moxie_Melea_Fight::
# 614 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Melea_Fight_2
# 616 "data//maps/UnchartedIsland/scripts.pory"
	clearflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 618 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_0
# 620 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 621 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 622 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 624 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_1
# 627 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_MELEA_1
# 628 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 60, 41
# 629 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 630 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 631 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 633 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_2
# 635 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 636 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 637 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 638 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 639 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_3
# 641 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 642 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Cutscene_Movement_5
# 643 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 644 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 645 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_4
# 647 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_6
# 648 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_6
# 649 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 650 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 652 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 653 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_2
# 654 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 656 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_5
# 658 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 67, 38
# 660 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 661 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 662 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 664 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 665 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 666 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_4
# 667 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 668 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 669 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_6
# 672 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 673 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 674 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 675 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 676 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_7
# 679 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 680 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 681 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 683 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_KOHLA_1
# 684 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_KOHLA_1, 60, 41
# 685 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_6
# 686 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 687 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 689 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 690 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 691 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 692 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_8
# 693 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_13
# 694 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 695 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 696 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_9
# 697 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 699 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 700 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 702 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 703 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 704 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_KOHLA_1
# 706 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 708 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_12
# 709 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 710 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 711 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 712 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_11
# 714 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 715 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 716 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 717 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 718 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_12
# 721 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_MOXIE, UnchartedIsland_Moxie_Melea_Fight_Text_13
# 723 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_13
# 724 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 725 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 726 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 727 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_14
# 729 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_12
# 730 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 731 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 732 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 733 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_15
# 735 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_8
# 736 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 739 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_MELEA, UnchartedIsland_Moxie_Melea_Fight_Text_16
# 741 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_17
# 742 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_9
# 743 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 746 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 79, 42
# 747 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 79, 42
# 749 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_1
# 751 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 1
# 752 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_MELEA_BATTLE
	end

UnchartedIsland_Moxie_Melea_Fight_2:
	end


UnchartedIsland_Melea_Destroy_Trigger::
# 757 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 1
	goto_if_eq UnchartedIsland_Melea_Destroy_Trigger_2
	end

UnchartedIsland_Melea_Destroy_Trigger_2:
# 759 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 762 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_11
# 763 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 765 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 766 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_0
# 767 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 768 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 770 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Cutscene_Movement_1
# 771 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_0
# 773 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Ending_Movement_13
# 774 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_1
# 776 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_NORMAL
# 779 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 780 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 781 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 30
# 782 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 783 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 785 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 786 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_1
# 787 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 788 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 791 "data//maps/UnchartedIsland/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 792 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 2
# 793 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, VAR_TEMP_2, VAR_TEMP_3
# 795 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Tenebris::
# 803 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 2
	goto_if_eq UnchartedIsland_Tenebris_1
	return

UnchartedIsland_Tenebris_1:
# 804 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 805 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_0
# 806 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 807 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 808 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_1
# 810 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 811 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_1
# 812 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 815 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_TENE, 67, 45
# 816 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE
# 817 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_TENE, 67, 45
# 819 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_PUDDLE
# 820 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Ending_Movement_8
# 821 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 822 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 823 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_2
# 824 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_3
# 825 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 826 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_6
# 827 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 828 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 830 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 832 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 833 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 834 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 835 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_2
# 836 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_3
# 837 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 838 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 839 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 840 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 841 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 842 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_3
# 843 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 844 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 845 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 846 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_4
# 847 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 848 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_5
# 849 "data//maps/UnchartedIsland/scripts.pory"
	showmonpic SPECIES_KORAIDON, 10, 3
# 850 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_6
# 851 "data//maps/UnchartedIsland/scripts.pory"
	hidemonpic
# 852 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 853 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_7
# 856 "data//maps/UnchartedIsland/scripts.pory"
	speakername NULL
# 857 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Tenebris_Text_8, MSGBOX_POKENAV
# 858 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 859 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Finale_Cutscene_Text_7
# 860 "data//maps/UnchartedIsland/scripts.pory"
	message UnchartedIsland_Tenebris_Text_9
# 861 "data//maps/UnchartedIsland/scripts.pory"
	waitmessage
# 862 "data//maps/UnchartedIsland/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, UnchartedIsland_Tenebris_Text_10, UnchartedIsland_Tenebris_Text_11, UnchartedIsland_Tenebris_Text_12
# 865 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 866 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 867 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 868 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_13
# 870 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_4
# 871 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_5
# 872 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 873 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_M_DIVE
# 874 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_TENE
# 875 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 877 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_6
# 878 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 879 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_M_DIVE
# 880 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_ANCIENT_CORMORIA_FINAL, 9, 51
# 882 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 3
# 883 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


# 81 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_0:
# 81 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 81 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 81 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 87 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_1:
# 87 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_down
	step_end

# 97 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_2:
# 97 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 97 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 97 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 98 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_3:
# 98 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 98 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 105 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_4:
# 105 "data//maps/UnchartedIsland/scripts.pory"
	fly_down
	step_end

# 125 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_5:
# 125 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 140 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_6:
# 140 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 140 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 145 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_7:
# 145 "data//maps/UnchartedIsland/scripts.pory"
	emote_question_mark
	step_end

# 177 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_8:
# 177 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 189 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_9:
# 189 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 252 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Battle_Movement_0:
# 252 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
	step_end

# 263 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_0:
# 264 "data//maps/UnchartedIsland/scripts.pory"
	lock_anim
# 265 "data//maps/UnchartedIsland/scripts.pory"
	lock_facing_direction
# 266 "data//maps/UnchartedIsland/scripts.pory"
	walk_faster_down
# 267 "data//maps/UnchartedIsland/scripts.pory"
	unlock_anim
# 268 "data//maps/UnchartedIsland/scripts.pory"
	unlock_facing_direction
	step_end

# 274 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_1:
# 274 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 274 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 279 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_2:
# 279 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 279 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_left
	step_end

# 310 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_3:
# 310 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 310 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_down
	step_end

# 329 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_4:
# 329 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 329 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 329 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 329 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 329 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 329 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_left
# 329 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 329 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_left
# 329 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 330 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_5:
# 330 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 330 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 330 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 330 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 330 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_left
# 330 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 330 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_left
# 330 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
	step_end

# 334 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_6:
# 334 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 342 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_7:
# 342 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 342 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 342 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 342 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 342 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 342 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 354 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_8:
# 354 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_up
	step_end

# 374 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_9:
# 374 "data//maps/UnchartedIsland/scripts.pory"
	enter_pokeball
	step_end

# 378 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_10:
# 378 "data//maps/UnchartedIsland/scripts.pory"
	face_down
	step_end

# 379 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_11:
# 379 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 385 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_12:
# 385 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 390 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_13:
# 390 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_left
	step_end

# 406 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_14:
# 406 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 406 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 406 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 409 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_15:
# 409 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 409 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_left
	step_end

# 413 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_16:
# 413 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 413 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 413 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 413 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 413 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 413 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 431 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_17:
# 431 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
	step_end

# 435 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_18:
# 435 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 435 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
	step_end

# 582 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0:
# 582 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 582 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 582 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 582 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 588 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1:
# 588 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 588 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 601 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger0_Movement_0:
# 601 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 601 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 601 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 601 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 601 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 601 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 608 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger1_Movement_0:
# 608 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 608 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 608 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 608 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 608 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 608 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 608 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 629 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_0:
# 629 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 630 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_1:
# 630 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 630 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 630 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 630 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 630 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 630 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 630 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 630 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 630 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 630 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 653 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_2:
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 653 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 660 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_3:
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 660 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
	step_end

# 666 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_4:
# 666 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 666 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 679 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_5:
# 679 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 679 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 685 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_6:
# 685 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 685 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 685 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 685 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 685 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 685 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 685 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 685 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 685 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 685 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 702 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_7:
# 702 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 702 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 702 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 702 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 702 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 702 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 702 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 702 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 702 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 702 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 702 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 735 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_8:
# 735 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 735 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 735 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 735 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 735 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 735 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 735 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 735 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 742 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_9:
# 742 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 742 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 742 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 742 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 742 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 742 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 742 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 742 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 742 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 742 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 742 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 766 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_0:
# 766 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 766 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 766 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 766 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 766 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 786 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_1:
# 786 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 786 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 786 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 786 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 786 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 805 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_0:
# 805 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 805 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 811 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_1:
# 811 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 811 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 811 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 811 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 823 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_2:
# 823 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 823 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 823 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 823 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 824 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_3:
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 824 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 824 "data//maps/UnchartedIsland/scripts.pory"
	face_down
	step_end

# 870 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_4:
# 870 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 870 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 870 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 870 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 870 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 870 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 870 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 870 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 870 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 870 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 871 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_5:
# 871 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 871 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 871 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 871 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 871 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 871 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 871 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 871 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 871 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 871 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

# 877 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_6:
# 877 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

UnchartedIsland_Finale_Text_0:
# 61 "data//maps/UnchartedIsland/scripts.pory"
	.string "Skip cutscene?$"

UnchartedIsland_Finale_Cutscene_Text_0:
# 85 "data//maps/UnchartedIsland/scripts.pory"
	.string "Kohla$"

UnchartedIsland_Finale_Cutscene_Text_1:
# 85 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ceruledge...Ceruledge!!\p"
	.string "No!!$"

UnchartedIsland_Finale_Cutscene_Text_2:
# 90 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea$"

UnchartedIsland_Finale_Cutscene_Text_3:
# 90 "data//maps/UnchartedIsland/scripts.pory"
	.string "The famous Ace Rookie and his\n"
	.string "Ceruledge...burned to dust!$"

UnchartedIsland_Finale_Cutscene_Text_4:
# 95 "data//maps/UnchartedIsland/scripts.pory"
	.string "And with this, nobody can stop us from -$"

UnchartedIsland_Finale_Cutscene_Text_5:
# 128 "data//maps/UnchartedIsland/scripts.pory"
	.string "Isn't that Professor Tenebris?$"

UnchartedIsland_Finale_Cutscene_Text_6:
# 133 "data//maps/UnchartedIsland/scripts.pory"
	.string "...and {PLAYER}! How on earth?$"

UnchartedIsland_Finale_Cutscene_Text_7:
# 138 "data//maps/UnchartedIsland/scripts.pory"
	.string "Tenebris$"

UnchartedIsland_Finale_Cutscene_Text_8:
# 138 "data//maps/UnchartedIsland/scripts.pory"
	.string "RUE! They got to you!\n"
	.string "Are you okay? Did they hurt you?$"

UnchartedIsland_Finale_Cutscene_Text_9:
# 143 "data//maps/UnchartedIsland/scripts.pory"
	.string "No...you've got it all wrong...$"

UnchartedIsland_Finale_Cutscene_Text_10:
# 153 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue$"

UnchartedIsland_Finale_Cutscene_Text_11:
# 153 "data//maps/UnchartedIsland/scripts.pory"
	.string "You did get it all wrong, Tenebris.$"

UnchartedIsland_Finale_Cutscene_Text_12:
# 158 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue? What's going on?$"

UnchartedIsland_Finale_Cutscene_Text_13:
# 165 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'll tell you what's going on!$"

UnchartedIsland_Finale_Cutscene_Text_14:
# 170 "data//maps/UnchartedIsland/scripts.pory"
	.string "What you see is the truth, Tenebris.\p"
	.string "I founded Team Somber!\p"
	.string "I was the one spying on you from the\n"
	.string "start! Easy enough, since I was right\l"
	.string "under your nose. I studied all your\l"
	.string "papers, took all your research...and\l"
	.string "right when you were about to bring the\l"
	.string "dreamstone home, you ran off with it!$"

UnchartedIsland_Finale_Cutscene_Text_15:
# 175 "data//maps/UnchartedIsland/scripts.pory"
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
# 178 "data//maps/UnchartedIsland/scripts.pory"
	.string "Y-you set me up?$"

UnchartedIsland_Finale_Cutscene_Text_17:
# 183 "data//maps/UnchartedIsland/scripts.pory"
	.string "Stupid child...I set you all up a\n"
	.string "hundred times over!$"

UnchartedIsland_Finale_Cutscene_Text_18:
# 194 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}, when you saw me at the\n"
	.string "Master Ball Maker's house at the Mirroh\l"
	.string "Base Camp, I feared you'd connect the\l"
	.string "dots for a moment...but it looks like I\l"
	.string "overestimated your cognitive abilities.\p"
	.string "No...I did everything right.\p"
	.string "Everything was perfect!$"

UnchartedIsland_Finale_Cutscene_Text_19:
# 199 "data//maps/UnchartedIsland/scripts.pory"
	.string "But why, Rue?$"

UnchartedIsland_Finale_Cutscene_Text_20:
# 204 "data//maps/UnchartedIsland/scripts.pory"
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
# 209 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue...a mind like yours could do far\n"
	.string "better.$"

UnchartedIsland_Finale_Cutscene_Text_22:
# 219 "data//maps/UnchartedIsland/scripts.pory"
	.string "NO, TENEBRIS!$"

UnchartedIsland_Finale_Cutscene_Text_23:
# 224 "data//maps/UnchartedIsland/scripts.pory"
	.string "A mind like YOURS can do far better!\n"
	.string "That's why the world knows you and\l"
	.string "nobody knows me!\p"
	.string "For the less special, other means must\n"
	.string "be sought. This, Tenebris, is an emotion\l"
	.string "you will never understand.$"

UnchartedIsland_Finale_Cutscene_Text_24:
# 229 "data//maps/UnchartedIsland/scripts.pory"
	.string "That's no excuse for what you're doing!$"

UnchartedIsland_Finale_Cutscene_Text_25:
# 234 "data//maps/UnchartedIsland/scripts.pory"
	.string "Moxie$"

UnchartedIsland_Finale_Cutscene_Text_26:
# 234 "data//maps/UnchartedIsland/scripts.pory"
	.string "Silence, loser!$"

UnchartedIsland_Finale_Cutscene_Text_27:
# 236 "data//maps/UnchartedIsland/scripts.pory"
	.string "It's fine, Moxie.\n"
	.string "He's right...that's no excuse.\p"
	.string "But who will stop me?\n"
	.string "Who will force my hand now?\p"
	.string "I've beaten everyone - I've hoodwinked\n"
	.string "the detectives, bypassed the gym\l"
	.string "leaders and crushed the Ace Rookie.$"

UnchartedIsland_Finale_Battle_Text_0:
# 246 "data//maps/UnchartedIsland/scripts.pory"
	.string "No, Rue.\p"
	.string "You haven't beaten us all.$"

UnchartedIsland_Finale_Battle_Text_1:
# 255 "data//maps/UnchartedIsland/scripts.pory"
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
# 257 "data//maps/UnchartedIsland/scripts.pory"
	.string "No! Nooo! NOOO!!!$"

UnchartedIsland_Finale_Ending_Text_0:
# 272 "data//maps/UnchartedIsland/scripts.pory"
	.string "I lost...\p"
	.string "How could I lose?\p"
	.string "To a research associate?\p"
	.string "I...$"

UnchartedIsland_Finale_Ending_Text_1:
# 277 "data//maps/UnchartedIsland/scripts.pory"
	.string "Boss!$"

UnchartedIsland_Finale_Ending_Text_2:
# 282 "data//maps/UnchartedIsland/scripts.pory"
	.string "C'mon boss! Let's get out of here\n"
	.string "before the detectives come!$"

UnchartedIsland_Finale_Ending_Text_3:
# 285 "data//maps/UnchartedIsland/scripts.pory"
	.string "No...$"

UnchartedIsland_Finale_Ending_Text_4:
# 293 "data//maps/UnchartedIsland/scripts.pory"
	.string "NO!!!$"

UnchartedIsland_Finale_Ending_Text_5:
# 298 "data//maps/UnchartedIsland/scripts.pory"
	.string "I will not be bested!\p"
	.string "If we can get the dreamstone,\n"
	.string "we can just try again.\p"
	.string "Ancient Terror!\n"
	.string "Bring me the dreamstone!$"

UnchartedIsland_Finale_Ending_Text_6:
# 307 "data//maps/UnchartedIsland/scripts.pory"
	.string "Now hurry up and get me -$"

UnchartedIsland_Finale_Ending_Text_7:
# 321 "data//maps/UnchartedIsland/scripts.pory"
	.string "Breech$"

UnchartedIsland_Finale_Ending_Text_8:
# 321 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefable! It's dangerous!\p"
	.string "Come back!$"

UnchartedIsland_Finale_Ending_Text_9:
# 350 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefable$"

UnchartedIsland_Finale_Ending_Text_10:
# 350 "data//maps/UnchartedIsland/scripts.pory"
	.string "Cleee!!!$"

UnchartedIsland_Finale_Ending_Text_11:
# 393 "data//maps/UnchartedIsland/scripts.pory"
	.string "Boss! Let's get out of here!$"

UnchartedIsland_Finale_Ending_Text_12:
# 398 "data//maps/UnchartedIsland/scripts.pory"
	.string "Th-the dreamstone...$"

UnchartedIsland_Finale_Ending_Text_13:
# 429 "data//maps/UnchartedIsland/scripts.pory"
	.string "Detective$"

UnchartedIsland_Finale_Ending_Text_14:
# 429 "data//maps/UnchartedIsland/scripts.pory"
	.string "It's over, Rue. You're finished!$"

UnchartedIsland_Finale_Ending_Text_15:
# 434 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}...$"

UnchartedIsland_Finale_Ending_Text_16:
# 442 "data//maps/UnchartedIsland/scripts.pory"
	.string "A name worth remembering...$"

UnchartedIsland_Breech_Text_0:
# 476 "data//maps/UnchartedIsland/scripts.pory"
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
# 480 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefairy$"

UnchartedIsland_Leader_Caught_A_Text_0:
# 488 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey! What are you doing here? You\n"
	.string "should be on the S.S. Elegant.$"

UnchartedIsland_Inger_Text_0:
# 507 "data//maps/UnchartedIsland/scripts.pory"
	.string "Inger$"

UnchartedIsland_Ariana_Text_0:
# 511 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ariana$"

UnchartedIsland_Gloria_Text_0:
# 515 "data//maps/UnchartedIsland/scripts.pory"
	.string "Gloria$"

UnchartedIsland_Carona_Text_0:
# 519 "data//maps/UnchartedIsland/scripts.pory"
	.string "Carona$"

UnchartedIsland_Jania_Text_0:
# 526 "data//maps/UnchartedIsland/scripts.pory"
	.string "Jania$"

UnchartedIsland_Raazi_Text_0:
# 530 "data//maps/UnchartedIsland/scripts.pory"
	.string "Raazi$"

UnchartedIsland_Grunt_A_Text_0:
# 543 "data//maps/UnchartedIsland/scripts.pory"
	.string "The boss gave me new Pokémon just to\n"
	.string "stop the Ace Rookie. You can't stop us -\l"
	.string "wait, you're not the Ace Rookie!$"

UnchartedIsland_Grunt_A_Text_1:
# 543 "data//maps/UnchartedIsland/scripts.pory"
	.string "Guess you're still on the case!$"

UnchartedIsland_Grunt_A_Text_2:
# 544 "data//maps/UnchartedIsland/scripts.pory"
	.string "It doesn't matter who's on the case.\n"
	.string "You can't stop us now!$"

UnchartedIsland_Grunt_B_Text_0:
# 548 "data//maps/UnchartedIsland/scripts.pory"
	.string "They said the Ace Rookie was coming.\n"
	.string "Why are you here instead?$"

UnchartedIsland_Grunt_B_Text_1:
# 548 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'd rather fight the Ace Rookie!$"

UnchartedIsland_Grunt_B_Text_2:
# 549 "data//maps/UnchartedIsland/scripts.pory"
	.string "$"

UnchartedIsland_Grunt_C_Text_0:
# 553 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah, weren't you kicked off the case?\n"
	.string "Well whatever! We've almost achieved\l"
	.string "our goal - you think we'll let you stop\l"
	.string "us now?$"

UnchartedIsland_Grunt_C_Text_1:
# 553 "data//maps/UnchartedIsland/scripts.pory"
	.string "Don't ruin our plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_0:
# 618 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}.\p"
	.string "A familiar face by now.\n"
	.string "How many times has it been?\p"
	.string "We received intel that you were off the\n"
	.string "case, and we would only have to deal\l"
	.string "with the Ace Rookie.\p"
	.string "It was our mistake, I suppose, to\n"
	.string "assume you wouldn't come any way.$"

UnchartedIsland_Moxie_Melea_Fight_Text_1:
# 624 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea!\n"
	.string "{PLAYER}'s here!$"

UnchartedIsland_Moxie_Melea_Fight_Text_2:
# 633 "data//maps/UnchartedIsland/scripts.pory"
	.string "So you came after all.\p"
	.string "Time and again we've tried to explain\n"
	.string "how insignificant you are in our plans.$"

UnchartedIsland_Moxie_Melea_Fight_Text_3:
# 639 "data//maps/UnchartedIsland/scripts.pory"
	.string "And yet, pest that you are, you manage\n"
	.string "to find your way to us and foil our\l"
	.string "plans again and again!$"

UnchartedIsland_Moxie_Melea_Fight_Text_4:
# 645 "data//maps/UnchartedIsland/scripts.pory"
	.string "Look across the water.$"

UnchartedIsland_Moxie_Melea_Fight_Text_5:
# 656 "data//maps/UnchartedIsland/scripts.pory"
	.string "The third and final dreamstone.\p"
	.string "It took us a while to locate, but this is\n"
	.string "where Professor Tenebris took her\l"
	.string "dreamstone and vanished.\p"
	.string "This is where it all began...$"

UnchartedIsland_Moxie_Melea_Fight_Text_6:
# 669 "data//maps/UnchartedIsland/scripts.pory"
	.string "And this is where we'll finally complete\n"
	.string "the plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_7:
# 676 "data//maps/UnchartedIsland/scripts.pory"
	.string "You bested us before.\p"
	.string "We're not taking that risk again. Not\n"
	.string "here. Not now.\p"
	.string "You can't beat the two of us,\n"
	.string "{PLAYER}!\n"
	.string "If only you had some help.$"

UnchartedIsland_Moxie_Melea_Fight_Text_8:
# 692 "data//maps/UnchartedIsland/scripts.pory"
	.string "Poetic - right on cue, the help arrives.$"

UnchartedIsland_Moxie_Melea_Fight_Text_9:
# 696 "data//maps/UnchartedIsland/scripts.pory"
	.string "No matter - they can't beat the two of\n"
	.string "us.\p"
	.string "I'll take the Ace Rookie.\n"
	.string "You deal with {PLAYER}!$"

UnchartedIsland_Moxie_Melea_Fight_Text_10:
# 699 "data//maps/UnchartedIsland/scripts.pory"
	.string "...$"

UnchartedIsland_Moxie_Melea_Fight_Text_11:
# 712 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! I can't believe it! You've been\n"
	.string "thrown under the bus! The Ace Rookie\l"
	.string "just left you alone!$"

UnchartedIsland_Moxie_Melea_Fight_Text_12:
# 718 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! Now that settles it.\p"
	.string "You're finished, {PLAYER}! Once we\n"
	.string "deal with you, we'll go and stop the Ace\l"
	.string "Rookie.\p"
	.string "Now that we control the dreamstone,\n"
	.string "we've picked up some rare ancient\l"
	.string "Pokémon of our own!\p"
	.string "It's time to end this once and for all!$"

UnchartedIsland_Moxie_Melea_Fight_Text_13:
# 721 "data//maps/UnchartedIsland/scripts.pory"
	.string "No! Everything's ruined!$"

UnchartedIsland_Moxie_Melea_Fight_Text_14:
# 727 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "Noo!!!\p"
	.string "I...$"

UnchartedIsland_Moxie_Melea_Fight_Text_15:
# 733 "data//maps/UnchartedIsland/scripts.pory"
	.string "Calm down Moxie! I'm here.\p"
	.string "Go now - go and stop Kohla.\n"
	.string "I'll finish {PLAYER} off!$"

UnchartedIsland_Moxie_Melea_Fight_Text_16:
# 739 "data//maps/UnchartedIsland/scripts.pory"
	.string "This can't be happening!$"

UnchartedIsland_Moxie_Melea_Fight_Text_17:
# 741 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "We've worked too hard...I can't let it\n"
	.string "end like this.\p"
	.string "No!!!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_0:
# 771 "data//maps/UnchartedIsland/scripts.pory"
	.string "Absol! Destroy those rocks!\n"
	.string "We can't let anyone come after us!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_1:
# 774 "data//maps/UnchartedIsland/scripts.pory"
	.string "You'll never make it through!\p"
	.string "So long, {PLAYER}. You've caused us\n"
	.string "enough pain and now we'll finally be rid\l"
	.string "of you!$"

UnchartedIsland_Tenebris_Text_0:
# 808 "data//maps/UnchartedIsland/scripts.pory"
	.string "???$"

UnchartedIsland_Tenebris_Text_1:
# 808 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey you - wait!$"

UnchartedIsland_Tenebris_Text_2:
# 835 "data//maps/UnchartedIsland/scripts.pory"
	.string "I never forget a face when I see one.\p"
	.string "I remember signing off on your\n"
	.string "application, {PLAYER}.\p"
	.string "It's long overdue, but it gives me great\n"
	.string "pleasure to welcome you to the Tenebris\l"
	.string "Lab...although I wish it were under\l"
	.string "better circumstances.$"

UnchartedIsland_Tenebris_Text_3:
# 842 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yes, I'm Professor Tenebris.\p"
	.string "I've been hiding in Ancient\n"
	.string "Cormoria...but Team Somber found the\l"
	.string "dreamstones any way, so my effort was,\l"
	.string "it seems, wasted.$"

UnchartedIsland_Tenebris_Text_4:
# 846 "data//maps/UnchartedIsland/scripts.pory"
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
# 848 "data//maps/UnchartedIsland/scripts.pory"
	.string "The Ancient Terror...$"

UnchartedIsland_Tenebris_Text_6:
# 850 "data//maps/UnchartedIsland/scripts.pory"
	.string "Of the many strong Pokémon that ruled\n"
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
# 853 "data//maps/UnchartedIsland/scripts.pory"
	.string "We must stop them...but I don't have my\n"
	.string "Pokémon. Even if I did, I'm not much\l"
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
# 857 "data//maps/UnchartedIsland/scripts.pory"
	.string "This is your last choice in the game!\n"
	.string "Please choose carefully.$"

UnchartedIsland_Tenebris_Text_9:
# 860 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER} - will you stop Team Somber?$"

UnchartedIsland_Tenebris_Text_10:
# 862 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah!$"

UnchartedIsland_Tenebris_Text_11:
# 862 "data//maps/UnchartedIsland/scripts.pory"
	.string "Of course!$"

UnchartedIsland_Tenebris_Text_12:
# 862 "data//maps/UnchartedIsland/scripts.pory"
	.string "Definitely!$"

UnchartedIsland_Tenebris_Text_13:
# 868 "data//maps/UnchartedIsland/scripts.pory"
	.string "You truly are a gem of a human being.\p"
	.string "Now come! Let us enter Ancient Cormoria\n"
	.string "once more...and exit right where the\l"
	.string "dreamstone is!$"
