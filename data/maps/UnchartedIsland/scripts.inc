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

UnchartedIsland_MapScripts::
# 28 "data//maps/UnchartedIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UnchartedIsland_OnTransition
# 22 "data//maps/UnchartedIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, UnchartedIsland_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 25 "data//maps/UnchartedIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, UnchartedIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

UnchartedIsland_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 23 "data//maps/UnchartedIsland/scripts.pory"
	map_script_2 VAR_UNCHARTED_ISLAND_CUTSCENES, 4, UnchartedIsland_OnWarp
	.2byte 0

UnchartedIsland_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 26 "data//maps/UnchartedIsland/scripts.pory"
	map_script_2 VAR_UNCHARTED_ISLAND_CUTSCENES, 4, UnchartedIsland_Finale
	.2byte 0


UnchartedIsland_OnTransition::
# 33 "data//maps/UnchartedIsland/scripts.pory"
	setrespawn HEAL_LOCATION_UNCHARTED_ISLAND
# 35 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 2
	goto_if_eq UnchartedIsland_OnTransition_2
UnchartedIsland_OnTransition_1:
	end

UnchartedIsland_OnTransition_2:
# 36 "data//maps/UnchartedIsland/scripts.pory"
	setmaplayoutindex LAYOUT_UNCHARTED_ISLAND_DESTROYED
	goto UnchartedIsland_OnTransition_1


UnchartedIsland_OnWarp::
# 43 "data//maps/UnchartedIsland/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
	end


UnchartedIsland_Finale::
# 48 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 49 "data//maps/UnchartedIsland/scripts.pory"
	setrespawn HEAL_LOCATION_ANCIENT_CORMORIA_FINAL_ISLAND
# 51 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_SKIP_FINALE_CUTSCENE, UnchartedIsland_Finale_2
UnchartedIsland_Finale_1:
# 61 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Cutscene
	return

UnchartedIsland_Finale_2:
# 52 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Finale_Text_0, MSGBOX_YESNO
# 53 "data//maps/UnchartedIsland/scripts.pory"
	release
# 54 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq UnchartedIsland_Finale_4
# 57 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Skip
	goto UnchartedIsland_Finale_1

UnchartedIsland_Finale_4:
# 55 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Cutscene
	goto UnchartedIsland_Finale_1


UnchartedIsland_Finale_Cutscene::
# 67 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_SKIP_FINALE_CUTSCENE
# 69 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 72 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_0
# 73 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 76 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_1
# 78 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 79 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 80 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 81 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_3
# 83 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 84 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 85 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 86 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_4
# 88 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_2
# 89 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 90 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 91 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 92 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 93 "data//maps/UnchartedIsland/scripts.pory"
	delay 30
# 95 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE_2
# 96 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_4
# 97 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 98 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 99 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 100 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 6
# 101 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 102 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 103 "data//maps/UnchartedIsland/scripts.pory"
	waitstate
# 105 "data//maps/UnchartedIsland/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, 0
# 106 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_4
# 107 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 108 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 109 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 110 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 6
# 111 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 112 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 113 "data//maps/UnchartedIsland/scripts.pory"
	waitstate
# 114 "data//maps/UnchartedIsland/scripts.pory"
	release
# 116 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 117 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 118 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 119 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_5
# 121 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 122 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 123 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 124 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_6
# 126 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 127 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 128 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 129 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_8
# 131 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_6
# 132 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 133 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 134 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_9
# 136 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_7
# 137 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_7
# 138 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 139 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 141 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 142 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 143 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 144 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_11
# 146 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 147 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 148 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 149 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_12
# 151 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 152 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 153 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 154 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 155 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 156 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_13
# 158 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 159 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 160 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 161 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_14
# 163 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 164 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 165 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 166 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_15
# 168 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_8
# 169 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_16
# 171 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 172 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 173 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 174 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_17
# 178 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 179 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_9
# 180 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 181 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 182 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_18
# 184 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 185 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 186 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 187 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_19
# 189 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 190 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 191 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 192 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_20
# 194 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 195 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 196 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 197 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_21
# 199 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 200 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 201 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 202 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 203 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 204 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 205 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 206 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 207 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_22
# 209 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 210 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 211 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 212 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_23
# 214 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 215 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 216 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 217 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_24
# 219 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 220 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 221 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 222 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Finale_Cutscene_Text_26
# 223 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 224 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_27
# 226 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Battle
	return


UnchartedIsland_Finale_Battle::
# 231 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 232 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 233 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 234 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Battle_Text_0
# 236 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_8
# 237 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 238 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 240 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Battle_Movement_0
# 241 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 242 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 243 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Battle_Text_1
# 245 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_RUE, UnchartedIsland_Finale_Battle_Text_2
# 247 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Ending
	return


UnchartedIsland_Finale_Ending::
# 251 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_8
# 252 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 253 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 254 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_0
# 256 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_0
# 257 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 258 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 259 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Ending_Text_1
# 261 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_1
# 262 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 263 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 264 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Finale_Ending_Text_2
# 266 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 267 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_3
# 269 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 270 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 271 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 272 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 273 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 274 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 275 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_4
# 277 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Battle_Movement_0
# 278 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 279 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 280 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_5
# 282 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 283 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_KOR, 79, 26
# 284 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_KOR
# 285 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_KORAIDON, CRY_MODE_NORMAL
# 286 "data//maps/UnchartedIsland/scripts.pory"
	waitmoncry
# 287 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 289 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_6
# 292 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_2
# 293 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_2
# 294 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_2
# 295 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Ending_Movement_2
# 296 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOR, UnchartedIsland_Finale_Ending_Movement_2
# 297 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_2
# 298 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_2, UnchartedIsland_Finale_Ending_Movement_2
# 299 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 300 "data//maps/UnchartedIsland/scripts.pory"
	delay 20
# 303 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Ending_Text_7, UnchartedIsland_Finale_Ending_Text_8
# 305 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_CLEF, 78, 33
# 306 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_CLEF
# 307 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_BREECH, 78, 34
# 308 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_BREECH
# 311 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_BREECH, UnchartedIsland_Finale_Ending_Movement_3
# 312 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_CLEF, UnchartedIsland_Finale_Ending_Movement_4
# 313 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 316 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_5
# 317 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_5
# 318 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_5
# 319 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Ending_Movement_5
# 320 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOR, UnchartedIsland_Finale_Ending_Movement_5
# 321 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_5
# 322 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_2, UnchartedIsland_Finale_Ending_Movement_5
# 323 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 326 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Ending_Movement_6
# 328 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 329 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 330 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Ending_Text_9, UnchartedIsland_Finale_Ending_Text_10
# 331 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_CLEF, UnchartedIsland_Finale_Cutscene_Movement_5
# 332 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 333 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 334 "data//maps/UnchartedIsland/scripts.pory"
	applymovement 2, UnchartedIsland_Finale_Ending_Movement_7
# 335 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 336 "data//maps/UnchartedIsland/scripts.pory"
	removeobject 2
# 337 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_M_DIVE
# 338 "data//maps/UnchartedIsland/scripts.pory"
	waitse
# 339 "data//maps/UnchartedIsland/scripts.pory"
	delay 30
# 341 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 342 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 343 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 344 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 345 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 346 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 347 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Ending_Text_4
# 350 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 5
# 351 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_FINALE_DONE
# 353 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_CARABRUE_TOWN_TENEBRIS_LAB_FINALE, 5, 4
# 356 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Finale_Skip::
# 362 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 363 "data//maps/UnchartedIsland/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, 0
# 364 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE_2
# 365 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Skip_Movement_0
# 366 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Ending_Movement_5
# 367 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Ending_Movement_5
# 368 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Ending_Movement_5
# 369 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 370 "data//maps/UnchartedIsland/scripts.pory"
	delay 2
# 371 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Skip_Movement_0
# 372 "data//maps/UnchartedIsland/scripts.pory"
	delay 2
# 373 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 375 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Battle
	return


UnchartedIsland_Breech::
# 381 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Ending_Text_7, UnchartedIsland_Breech_Text_0
	return


UnchartedIsland_Clefable::
# 384 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 385 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Clefable_Text_0, UnchartedIsland_Finale_Ending_Text_10
	end


UnchartedIsland_Leader_Caught_A::
# 393 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 394 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
# 395 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_B::
# 399 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 400 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 37, 24
# 401 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_C::
# 406 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 407 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 53, 41
# 408 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Inger::
# 412 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Inger_Text_0
# 413 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Ariana::
# 416 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Ariana_Text_0
# 417 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Gloria::
# 420 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Gloria_Text_0
# 421 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Carona::
# 424 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Carona_Text_0
# 425 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Jania::
# 431 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Jania_Text_0
# 432 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Raazi::
# 435 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Raazi_Text_0
# 436 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Grunt_A::
# 448 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_A, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_1
# 449 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_2
# 450 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_B::
# 453 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_B, UnchartedIsland_Grunt_B_Text_0, UnchartedIsland_Grunt_B_Text_1
# 454 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 455 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_C::
# 458 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_C, UnchartedIsland_Grunt_C_Text_0, UnchartedIsland_Grunt_C_Text_1
# 459 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 460 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Moxie_Viewpoint_Trigger::
# 475 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_2
# 477 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 479 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 480 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_6
# 481 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 484 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Finale_Battle_Movement_0
# 485 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 486 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 487 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0
# 488 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 489 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_VIEWPOINT
# 491 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_VIEWPOINT
# 493 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Ending_Movement_6
# 494 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 495 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 497 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end

UnchartedIsland_Moxie_Viewpoint_Trigger_2:
	end


UnchartedIsland_Moxie_Trigger0::
# 504 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger0_2
# 505 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 506 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger0_Movement_0
# 507 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 508 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger0_2:
	end


UnchartedIsland_Moxie_Trigger1::
# 511 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger1_2
# 512 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 513 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger1_Movement_0
# 514 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 515 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger1_2:
	end


UnchartedIsland_Moxie_Melea_Fight::
# 519 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Melea_Fight_2
# 521 "data//maps/UnchartedIsland/scripts.pory"
	clearflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 523 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_0
# 525 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 526 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 527 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 529 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_1
# 532 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_MELEA_1
# 533 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 60, 41
# 534 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 535 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_2
# 536 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 538 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_2
# 540 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 541 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 542 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 543 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 544 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_3
# 546 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 547 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Cutscene_Movement_5
# 548 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 549 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 550 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_4
# 552 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Ending_Movement_5
# 553 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_5
# 554 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 555 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 557 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 558 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_4
# 559 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 561 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_5
# 563 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 67, 38
# 565 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 566 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 567 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 569 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 570 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 571 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_6
# 572 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 573 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 574 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_6
# 577 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 578 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 579 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 580 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 581 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_7
# 584 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 585 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 586 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 588 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_KOHLA_1
# 589 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_KOHLA_1, 60, 41
# 590 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_8
# 591 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 592 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 594 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 595 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 596 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 597 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_8
# 598 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 599 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 600 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 601 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_9
# 602 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 604 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 605 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 607 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_9
# 608 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 609 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_KOHLA_1
# 611 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 613 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_10
# 614 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 615 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 616 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 617 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_11
# 619 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 620 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 621 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 622 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 623 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_12
# 626 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_MOXIE, UnchartedIsland_Moxie_Melea_Fight_Text_13
# 628 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 629 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 630 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 631 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 632 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_25, UnchartedIsland_Moxie_Melea_Fight_Text_14
# 634 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_10
# 635 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 636 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 637 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 638 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_15
# 640 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_11
# 641 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 644 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_MELEA, UnchartedIsland_Moxie_Melea_Fight_Text_16
# 646 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_17
# 647 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_12
# 648 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 651 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 79, 42
# 652 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 79, 42
# 654 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_1
# 656 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 1
# 657 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_MELEA_BATTLE
	end

UnchartedIsland_Moxie_Melea_Fight_2:
	end


UnchartedIsland_Melea_Destroy_Trigger::
# 662 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 1
	goto_if_eq UnchartedIsland_Melea_Destroy_Trigger_2
	end

UnchartedIsland_Melea_Destroy_Trigger_2:
# 664 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 667 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 668 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 670 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 671 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_0
# 672 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 673 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 675 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Cutscene_Movement_1
# 676 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_0
# 678 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 679 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_1
# 681 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_NORMAL
# 684 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 685 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 686 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 30
# 687 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 688 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 690 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 691 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_1
# 692 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 693 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 696 "data//maps/UnchartedIsland/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 697 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 2
# 698 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, VAR_TEMP_2, VAR_TEMP_3
# 700 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Tenebris::
# 708 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 2
	goto_if_eq UnchartedIsland_Tenebris_1
	return

UnchartedIsland_Tenebris_1:
# 709 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 710 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_0
# 711 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 712 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 713 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_1
# 715 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 716 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_1
# 717 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 720 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_TENE, 67, 45
# 721 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE
# 722 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_TENE, 67, 45
# 724 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_PUDDLE
# 725 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Ending_Movement_7
# 726 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 727 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 728 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_2
# 729 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_3
# 730 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 731 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Ending_Movement_5
# 732 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 733 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 735 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 737 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 738 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 739 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 740 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_2
# 741 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_3
# 742 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 743 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 744 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 745 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 746 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 747 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_3
# 748 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 749 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 750 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 751 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_4
# 752 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 753 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_5
# 754 "data//maps/UnchartedIsland/scripts.pory"
	showmonpic SPECIES_KORAIDON, 10, 3
# 755 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_6
# 756 "data//maps/UnchartedIsland/scripts.pory"
	hidemonpic
# 757 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 758 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_7
# 761 "data//maps/UnchartedIsland/scripts.pory"
	speakername NULL
# 762 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Tenebris_Text_8, MSGBOX_POKENAV
# 763 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 764 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Finale_Cutscene_Text_7
# 765 "data//maps/UnchartedIsland/scripts.pory"
	message UnchartedIsland_Tenebris_Text_9
# 766 "data//maps/UnchartedIsland/scripts.pory"
	waitmessage
# 767 "data//maps/UnchartedIsland/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, UnchartedIsland_Tenebris_Text_10, UnchartedIsland_Tenebris_Text_11, UnchartedIsland_Tenebris_Text_12
# 770 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 771 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 772 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 773 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_13
# 775 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_4
# 776 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_5
# 777 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 778 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_M_DIVE
# 779 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_TENE
# 780 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 782 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_6
# 783 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 784 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_M_DIVE
# 785 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_ANCIENT_CORMORIA_FINAL, 9, 51
# 787 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 3
# 788 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


# 72 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_0:
# 72 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 72 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 72 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 78 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_1:
# 78 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_down
	step_end

# 88 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_2:
# 88 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 88 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 88 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 89 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_3:
# 89 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 89 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 96 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_4:
# 96 "data//maps/UnchartedIsland/scripts.pory"
	fly_down
	step_end

# 116 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_5:
# 116 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 131 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_6:
# 131 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 131 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 136 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_7:
# 136 "data//maps/UnchartedIsland/scripts.pory"
	emote_question_mark
	step_end

# 168 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_8:
# 168 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 179 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_9:
# 179 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 240 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Battle_Movement_0:
# 240 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
	step_end

# 256 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_0:
# 256 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 256 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 261 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_1:
# 261 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 261 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_left
	step_end

# 292 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_2:
# 292 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 292 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_down
	step_end

# 311 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_3:
# 311 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 311 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 311 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 311 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 311 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 311 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_left
# 311 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 311 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_left
# 311 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 312 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_4:
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_left
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_left
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_up
# 312 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 312 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 316 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_5:
# 316 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 326 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_6:
# 326 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 326 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 334 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Ending_Movement_7:
# 334 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_up
	step_end

# 365 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Skip_Movement_0:
# 365 "data//maps/UnchartedIsland/scripts.pory"
	face_down
	step_end

# 487 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0:
# 487 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 487 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 487 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 487 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 506 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger0_Movement_0:
# 506 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 506 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 506 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 506 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 506 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 506 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 513 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger1_Movement_0:
# 513 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 513 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 513 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 513 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 513 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 513 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 513 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 525 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_0:
# 525 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_left
	step_end

# 534 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_1:
# 534 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 535 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_2:
# 535 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 535 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 535 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 535 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 535 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 535 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 535 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 535 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 535 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 535 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 540 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_3:
# 540 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 558 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_4:
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 558 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 565 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_5:
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 565 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
	step_end

# 571 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_6:
# 571 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 571 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 584 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_7:
# 584 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 584 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 590 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_8:
# 590 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 590 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 590 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 590 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 590 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 590 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 590 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 590 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 590 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 590 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 607 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_9:
# 607 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 607 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 607 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 607 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 607 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 607 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 607 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 607 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 607 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 607 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 607 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 613 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_10:
# 613 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 640 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_11:
# 640 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 640 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 640 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 640 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 640 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 640 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 640 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 640 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 647 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_12:
# 647 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 647 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 647 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 647 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 647 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 647 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 647 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 647 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 647 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 647 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 647 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 671 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_0:
# 671 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 671 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 671 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 671 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 671 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 691 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_1:
# 691 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 691 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 691 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 691 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 691 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 710 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_0:
# 710 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 710 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 716 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_1:
# 716 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 716 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 716 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 716 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 728 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_2:
# 728 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 728 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 728 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 728 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 729 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_3:
# 729 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 729 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 729 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 729 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 729 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 729 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 729 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 729 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 729 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 729 "data//maps/UnchartedIsland/scripts.pory"
	face_down
	step_end

# 775 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_4:
# 775 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 775 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 775 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 775 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 775 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 775 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 775 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 775 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 775 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 775 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 776 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_5:
# 776 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 776 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 776 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 776 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 776 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 776 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 776 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 776 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 776 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 776 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

# 782 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_6:
# 782 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

UnchartedIsland_Finale_Text_0:
# 52 "data//maps/UnchartedIsland/scripts.pory"
	.string "Skip cutscene?$"

UnchartedIsland_Finale_Cutscene_Text_0:
# 76 "data//maps/UnchartedIsland/scripts.pory"
	.string "Kohla$"

UnchartedIsland_Finale_Cutscene_Text_1:
# 76 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ceruledge...Ceruledge!!\p"
	.string "No!!$"

UnchartedIsland_Finale_Cutscene_Text_2:
# 81 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea$"

UnchartedIsland_Finale_Cutscene_Text_3:
# 81 "data//maps/UnchartedIsland/scripts.pory"
	.string "The famous {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY} and his\n"
	.string "Ceruledge...burned to dust!$"

UnchartedIsland_Finale_Cutscene_Text_4:
# 86 "data//maps/UnchartedIsland/scripts.pory"
	.string "And with this, nobody can stop us from -$"

UnchartedIsland_Finale_Cutscene_Text_5:
# 119 "data//maps/UnchartedIsland/scripts.pory"
	.string "Isn't that {COLOR GREEN}Professor Tenebris{COLOR DARK_GRAY}?$"

UnchartedIsland_Finale_Cutscene_Text_6:
# 124 "data//maps/UnchartedIsland/scripts.pory"
	.string "...and {PLAYER}!\n"
	.string "How on earth?$"

UnchartedIsland_Finale_Cutscene_Text_7:
# 129 "data//maps/UnchartedIsland/scripts.pory"
	.string "Tenebris$"

UnchartedIsland_Finale_Cutscene_Text_8:
# 129 "data//maps/UnchartedIsland/scripts.pory"
	.string "RUE! They got to you!\n"
	.string "Are you okay? Did they hurt you?$"

UnchartedIsland_Finale_Cutscene_Text_9:
# 134 "data//maps/UnchartedIsland/scripts.pory"
	.string "No...you've got it all wrong...$"

UnchartedIsland_Finale_Cutscene_Text_10:
# 144 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue$"

UnchartedIsland_Finale_Cutscene_Text_11:
# 144 "data//maps/UnchartedIsland/scripts.pory"
	.string "You did get it all wrong, Tenebris.$"

UnchartedIsland_Finale_Cutscene_Text_12:
# 149 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue? What's going on?$"

UnchartedIsland_Finale_Cutscene_Text_13:
# 156 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'll tell you what's going on!$"

UnchartedIsland_Finale_Cutscene_Text_14:
# 161 "data//maps/UnchartedIsland/scripts.pory"
	.string "What you see is the truth, Tenebris.\p"
	.string "I founded {COLOR BLUE}Team Somber{COLOR DARK_GRAY}!\p"
	.string "I was the one spying on you from the\n"
	.string "start! Easy enough, since I was right\l"
	.string "under your nose. I studied all your\l"
	.string "papers, took all your research...and\l"
	.string "right when you were about to bring the\l"
	.string "dreamstone home, you ran off with it!$"

UnchartedIsland_Finale_Cutscene_Text_15:
# 166 "data//maps/UnchartedIsland/scripts.pory"
	.string "And you - {PLAYER}! You stupid,\n"
	.string "stupid gnat!\p"
	.string "I tricked the detectives into sending\n"
	.string "an inexperienced idiot on the hunt for\l"
	.string "the dreamstones! How easy it should\l"
	.string "have been to stop you and {COLOR GREEN}Kohla{COLOR DARK_GRAY}!\p"
	.string "But you - despite all odds - managed to\n"
	.string "get in our way at {COLOR RED}Mt. Ceram{COLOR DARK_GRAY}.\p"
	.string "Then I sent {COLOR GREEN}Kohla{COLOR DARK_GRAY} on a wild goose chase\n"
	.string "at {COLOR BLUE}Silversun City{COLOR DARK_GRAY}! But you managed to\l"
	.string "take down our base without his help!$"

UnchartedIsland_Finale_Cutscene_Text_16:
# 169 "data//maps/UnchartedIsland/scripts.pory"
	.string "Y-you set me up?$"

UnchartedIsland_Finale_Cutscene_Text_17:
# 174 "data//maps/UnchartedIsland/scripts.pory"
	.string "Stupid child...I set you all up a hundred\n"
	.string "times over!$"

UnchartedIsland_Finale_Cutscene_Text_18:
# 182 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}, when you saw me at the\n"
	.string "Master Ball Maker's house at the {COLOR BLUE}Mirroh\l"
	.string "Base Camp{COLOR DARK_GRAY}, I feared you'd connect the\l"
	.string "dots for a moment...but it looks like I\l"
	.string "overestimated your cognitive abilities.\p"
	.string "No...I did everything right.\p"
	.string "Everything was perfect!$"

UnchartedIsland_Finale_Cutscene_Text_19:
# 187 "data//maps/UnchartedIsland/scripts.pory"
	.string "But why, {COLOR BLUE}Rue{COLOR DARK_GRAY}?$"

UnchartedIsland_Finale_Cutscene_Text_20:
# 192 "data//maps/UnchartedIsland/scripts.pory"
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
	.string "essentials...and {COLOR BLUE}Team Somber{COLOR DARK_GRAY}, with our\l"
	.string "army of strong Ancient Pokémon, can do\l"
	.string "all of that!\p"
	.string "For a fee, of course.$"

UnchartedIsland_Finale_Cutscene_Text_21:
# 197 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue...a mind like yours could do far\n"
	.string "better.$"

UnchartedIsland_Finale_Cutscene_Text_22:
# 207 "data//maps/UnchartedIsland/scripts.pory"
	.string "NO, TENEBRIS!$"

UnchartedIsland_Finale_Cutscene_Text_23:
# 212 "data//maps/UnchartedIsland/scripts.pory"
	.string "A mind like YOURS can do far better!\n"
	.string "That's why the world knows you and\l"
	.string "nobody knows me!\p"
	.string "For the less special, other means must\n"
	.string "be sought. This, Tenebris, is an emotion\l"
	.string "you will never understand.$"

UnchartedIsland_Finale_Cutscene_Text_24:
# 217 "data//maps/UnchartedIsland/scripts.pory"
	.string "That's no excuse for what you're doing!$"

UnchartedIsland_Finale_Cutscene_Text_25:
# 222 "data//maps/UnchartedIsland/scripts.pory"
	.string "Moxie$"

UnchartedIsland_Finale_Cutscene_Text_26:
# 222 "data//maps/UnchartedIsland/scripts.pory"
	.string "Silence, loser!$"

UnchartedIsland_Finale_Cutscene_Text_27:
# 224 "data//maps/UnchartedIsland/scripts.pory"
	.string "It's fine, Moxie. He's right...that's no\n"
	.string "excuse.\p"
	.string "But who will stop me? Who will force my\n"
	.string "hand now?\p"
	.string "I've beaten everyone - I've hoodwinked\n"
	.string "the detectives, bypassed the gym\l"
	.string "leaders and crushed the {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY}.$"

UnchartedIsland_Finale_Battle_Text_0:
# 234 "data//maps/UnchartedIsland/scripts.pory"
	.string "No, {COLOR BLUE}Rue{COLOR DARK_GRAY}.\p"
	.string "You haven't beaten us all.$"

UnchartedIsland_Finale_Battle_Text_1:
# 243 "data//maps/UnchartedIsland/scripts.pory"
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

UnchartedIsland_Finale_Battle_Text_2:
# 245 "data//maps/UnchartedIsland/scripts.pory"
	.string "No! Nooo! NOOO!!!$"

UnchartedIsland_Finale_Ending_Text_0:
# 254 "data//maps/UnchartedIsland/scripts.pory"
	.string "I lost...\p"
	.string "How could I lose?\p"
	.string "To a research associate?\p"
	.string "I...$"

UnchartedIsland_Finale_Ending_Text_1:
# 259 "data//maps/UnchartedIsland/scripts.pory"
	.string "Boss!$"

UnchartedIsland_Finale_Ending_Text_2:
# 264 "data//maps/UnchartedIsland/scripts.pory"
	.string "C'mon boss! Let's get out of here\n"
	.string "before the detectives come!$"

UnchartedIsland_Finale_Ending_Text_3:
# 267 "data//maps/UnchartedIsland/scripts.pory"
	.string "No...$"

UnchartedIsland_Finale_Ending_Text_4:
# 275 "data//maps/UnchartedIsland/scripts.pory"
	.string "NO!!!$"

UnchartedIsland_Finale_Ending_Text_5:
# 280 "data//maps/UnchartedIsland/scripts.pory"
	.string "I will not be bested!\p"
	.string "If we can get the dreamstone, we can\n"
	.string "try again.\p"
	.string "Ancient Terror! Bring me the\n"
	.string "dreamstone!$"

UnchartedIsland_Finale_Ending_Text_6:
# 289 "data//maps/UnchartedIsland/scripts.pory"
	.string "Now hurry up and get me -$"

UnchartedIsland_Finale_Ending_Text_7:
# 303 "data//maps/UnchartedIsland/scripts.pory"
	.string "Breech$"

UnchartedIsland_Finale_Ending_Text_8:
# 303 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefable! It's dangerous!\n"
	.string "Come back!$"

UnchartedIsland_Finale_Ending_Text_9:
# 330 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefable$"

UnchartedIsland_Finale_Ending_Text_10:
# 330 "data//maps/UnchartedIsland/scripts.pory"
	.string "Cleee!!!$"

UnchartedIsland_Breech_Text_0:
# 381 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER} - you made it through!\p"
	.string "Clefable and I will hide here behind the\n"
	.string "trees. You go on ahead, but be careful!\l"
	.string "I saw all the gym leaders out there. If\l"
	.string "they catch you, they'll send you back\l"
	.string "to the ship!\p"
	.string "...\p"
	.string "You're just like you were back when I\n"
	.string "met you in {COLOR GREEN}Fennilahl Town{COLOR DARK_GRAY}. The only\l"
	.string "thing that changed is that you saved a\l"
	.string "hiker back then and you're saving all of\l"
	.string "Cormoria now.\p"
	.string "You're really cool, {PLAYER}.\n"
	.string "I'm happy we met.\p"
	.string "Good luck!$"

UnchartedIsland_Clefable_Text_0:
# 385 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefairy$"

UnchartedIsland_Leader_Caught_A_Text_0:
# 393 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey! What are you doing here? You\n"
	.string "should be on the S.S. Elegant.$"

UnchartedIsland_Inger_Text_0:
# 412 "data//maps/UnchartedIsland/scripts.pory"
	.string "Inger$"

UnchartedIsland_Ariana_Text_0:
# 416 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ariana$"

UnchartedIsland_Gloria_Text_0:
# 420 "data//maps/UnchartedIsland/scripts.pory"
	.string "Gloria$"

UnchartedIsland_Carona_Text_0:
# 424 "data//maps/UnchartedIsland/scripts.pory"
	.string "Carona$"

UnchartedIsland_Jania_Text_0:
# 431 "data//maps/UnchartedIsland/scripts.pory"
	.string "Jania$"

UnchartedIsland_Raazi_Text_0:
# 435 "data//maps/UnchartedIsland/scripts.pory"
	.string "Raazi$"

UnchartedIsland_Grunt_A_Text_0:
# 448 "data//maps/UnchartedIsland/scripts.pory"
	.string "The boss gave me new Pokémon just to\n"
	.string "stop the {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY}. You can't stop us -\l"
	.string "wait, you're not the {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY}!$"

UnchartedIsland_Grunt_A_Text_1:
# 448 "data//maps/UnchartedIsland/scripts.pory"
	.string "Guess you're still on the case!$"

UnchartedIsland_Grunt_A_Text_2:
# 449 "data//maps/UnchartedIsland/scripts.pory"
	.string "It doesn't matter who's on the case.\n"
	.string "You can't stop us now!$"

UnchartedIsland_Grunt_B_Text_0:
# 453 "data//maps/UnchartedIsland/scripts.pory"
	.string "They said the {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY} was coming.\n"
	.string "Why are you here instead?$"

UnchartedIsland_Grunt_B_Text_1:
# 453 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'd rather fight the {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY}!$"

UnchartedIsland_Grunt_B_Text_2:
# 454 "data//maps/UnchartedIsland/scripts.pory"
	.string "$"

UnchartedIsland_Grunt_C_Text_0:
# 458 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah, weren't you kicked off the case?\n"
	.string "Well whatever! We've almost achieved\l"
	.string "our goal - you think we'll let you stop\l"
	.string "us now?$"

UnchartedIsland_Grunt_C_Text_1:
# 458 "data//maps/UnchartedIsland/scripts.pory"
	.string "Don't ruin our plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_0:
# 523 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}.\p"
	.string "A familiar face by now.\n"
	.string "How many times has it been?\p"
	.string "We received intel that you were off the\n"
	.string "case, and we would only have to deal\l"
	.string "with the {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY}.\p"
	.string "It was our mistake, I suppose, to\n"
	.string "assume you wouldn't come any way.$"

UnchartedIsland_Moxie_Melea_Fight_Text_1:
# 529 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea!\n"
	.string "{PLAYER}'s here!$"

UnchartedIsland_Moxie_Melea_Fight_Text_2:
# 538 "data//maps/UnchartedIsland/scripts.pory"
	.string "So you came after all.\p"
	.string "Time and again we've tried to explain\n"
	.string "how insignificant you are in our plans.$"

UnchartedIsland_Moxie_Melea_Fight_Text_3:
# 544 "data//maps/UnchartedIsland/scripts.pory"
	.string "And yet, pest that you are, you manage\n"
	.string "to find your way to us and foil our\l"
	.string "plans again and again!$"

UnchartedIsland_Moxie_Melea_Fight_Text_4:
# 550 "data//maps/UnchartedIsland/scripts.pory"
	.string "Look across the water.$"

UnchartedIsland_Moxie_Melea_Fight_Text_5:
# 561 "data//maps/UnchartedIsland/scripts.pory"
	.string "The third and final dreamstone.\p"
	.string "It took us a while to locate, but this is\n"
	.string "where {COLOR GREEN}Professor Tenebris{COLOR DARK_GRAY} took her\l"
	.string "dreamstone and vanished.\p"
	.string "This is where it all began...$"

UnchartedIsland_Moxie_Melea_Fight_Text_6:
# 574 "data//maps/UnchartedIsland/scripts.pory"
	.string "And this is where we'll finally complete\n"
	.string "the plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_7:
# 581 "data//maps/UnchartedIsland/scripts.pory"
	.string "You bested us before.\p"
	.string "We're not taking that risk again. Not\n"
	.string "here. Not now.\p"
	.string "You can't beat the two of us,\n"
	.string "{PLAYER}!\n"
	.string "If only you had some help.$"

UnchartedIsland_Moxie_Melea_Fight_Text_8:
# 597 "data//maps/UnchartedIsland/scripts.pory"
	.string "Poetic - right on cue, the help arrives.$"

UnchartedIsland_Moxie_Melea_Fight_Text_9:
# 601 "data//maps/UnchartedIsland/scripts.pory"
	.string "No matter - they can't beat the two of\n"
	.string "us.\p"
	.string "I'll take the {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY}.\n"
	.string "You deal with {PLAYER}!$"

UnchartedIsland_Moxie_Melea_Fight_Text_10:
# 604 "data//maps/UnchartedIsland/scripts.pory"
	.string "...$"

UnchartedIsland_Moxie_Melea_Fight_Text_11:
# 617 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! I can't believe it! You've been\n"
	.string "thrown under the bus! The {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY}\l"
	.string "just left you alone!$"

UnchartedIsland_Moxie_Melea_Fight_Text_12:
# 623 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! Now that settles it.\p"
	.string "You're finished, {PLAYER}! Once we\n"
	.string "deal with you, we'll go and stop the {COLOR GREEN}Ace\l"
	.string "Rookie{COLOR DARK_GRAY}.\p"
	.string "Now that we control the dreamstone,\n"
	.string "we've picked up some rare ancient\l"
	.string "Pokémon of our own!\p"
	.string "It's time to end this once and for all!$"

UnchartedIsland_Moxie_Melea_Fight_Text_13:
# 626 "data//maps/UnchartedIsland/scripts.pory"
	.string "No! Everything's ruined!$"

UnchartedIsland_Moxie_Melea_Fight_Text_14:
# 632 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "Noo!!!\p"
	.string "I...$"

UnchartedIsland_Moxie_Melea_Fight_Text_15:
# 638 "data//maps/UnchartedIsland/scripts.pory"
	.string "Calm down Moxie! I'm here.\p"
	.string "Go now - go and stop {COLOR GREEN}Kohla{COLOR DARK_GRAY}.\n"
	.string "I'll finish {PLAYER} off!$"

UnchartedIsland_Moxie_Melea_Fight_Text_16:
# 644 "data//maps/UnchartedIsland/scripts.pory"
	.string "This can't be happening!$"

UnchartedIsland_Moxie_Melea_Fight_Text_17:
# 646 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "We've worked too hard...I can't let it\n"
	.string "end like this.\p"
	.string "No!!!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_0:
# 676 "data//maps/UnchartedIsland/scripts.pory"
	.string "Absol! Destroy those rocks!\n"
	.string "We can't let anyone come after us!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_1:
# 679 "data//maps/UnchartedIsland/scripts.pory"
	.string "You'll never make it through!\p"
	.string "So long, {PLAYER}. You've caused us\n"
	.string "enough pain and now we'll finally be rid\l"
	.string "of you!$"

UnchartedIsland_Tenebris_Text_0:
# 713 "data//maps/UnchartedIsland/scripts.pory"
	.string "???$"

UnchartedIsland_Tenebris_Text_1:
# 713 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey you - wait!$"

UnchartedIsland_Tenebris_Text_2:
# 740 "data//maps/UnchartedIsland/scripts.pory"
	.string "I never forget a face when I see one.\p"
	.string "I remember signing off on your\n"
	.string "application, {PLAYER}.\p"
	.string "It's long overdue, but it gives me great\n"
	.string "pleasure to welcome you to the Tenebris\l"
	.string "Lab...although I wish it were under\l"
	.string "better circumstances.$"

UnchartedIsland_Tenebris_Text_3:
# 747 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yes, I'm {COLOR GREEN}Professor Tenebris{COLOR DARK_GRAY}.\p"
	.string "I've been hiding in {COLOR RED}Ancient\n"
	.string "Cormoria{COLOR DARK_GRAY}...but {COLOR BLUE}Team Somber{COLOR DARK_GRAY} found the\l"
	.string "dreamstones any way, so my effort was,\l"
	.string "it seems, wasted.$"

UnchartedIsland_Tenebris_Text_4:
# 751 "data//maps/UnchartedIsland/scripts.pory"
	.string "But you! I've been watching you.\n"
	.string "I chose a good research assistant.\p"
	.string "You've done your best to put an end to\n"
	.string "{COLOR BLUE}Team Somber{COLOR DARK_GRAY}'s plans.\p"
	.string "It's commendable.\p"
	.string "When I first discovered the\n"
	.string "dreamstones, I began to suspect that I\l"
	.string "was being spied on. That's why I took\l"
	.string "the dreamstone and ran away with it. I\l"
	.string "didn't know where to hide it so I came\l"
	.string "here and jumped into {COLOR RED}Ancient Cormoria{COLOR DARK_GRAY}.\l"
	.string "I thought that would be enough to stop\l"
	.string "whoever was spying on me, but clearly it\l"
	.string "wasn't.\p"
	.string "Someone from {COLOR BLUE}Team Somber{COLOR DARK_GRAY} had eyes on\n"
	.string "me and the dreamstone from the very\l"
	.string "beginning!\p"
	.string "And after my time in {COLOR RED}Ancient Cormoria{COLOR DARK_GRAY}, I\n"
	.string "know why.$"

UnchartedIsland_Tenebris_Text_5:
# 753 "data//maps/UnchartedIsland/scripts.pory"
	.string "The Ancient Terror...$"

UnchartedIsland_Tenebris_Text_6:
# 755 "data//maps/UnchartedIsland/scripts.pory"
	.string "Of the many strong Pokémon that ruled\n"
	.string "over {COLOR RED}Ancient Cormoria{COLOR DARK_GRAY}, the Ancient\l"
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
# 758 "data//maps/UnchartedIsland/scripts.pory"
	.string "We must stop them...but I don't have my\n"
	.string "Pokémon. Even if I did, I'm not much\l"
	.string "resistance.\p"
	.string "I can't stop them, {PLAYER}. And I\n"
	.string "fear neither can your {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY}\l"
	.string "friend.\p"
	.string "...\p"
	.string "Like I said, I've been watching you.\n"
	.string "First at {COLOR RED}Mt. Ceram{COLOR DARK_GRAY}.\p"
	.string "Then at {COLOR BLUE}Silversun City{COLOR DARK_GRAY}.\p"
	.string "Again at {COLOR BLUE}Mt. Mirroh{COLOR DARK_GRAY}.\p"
	.string "...\p"
	.string "I know nobody believes in you right now,\n"
	.string "{PLAYER}.\p"
	.string "And truth be told, I'd love to keep my\n"
	.string "youngest research associate safe from\l"
	.string "harm!\p"
	.string "...but you're the best we've got.$"

UnchartedIsland_Tenebris_Text_8:
# 762 "data//maps/UnchartedIsland/scripts.pory"
	.string "This is your last choice in the game!\n"
	.string "Please choose carefully.$"

UnchartedIsland_Tenebris_Text_9:
# 765 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER} - will you stop {COLOR BLUE}Team Somber{COLOR DARK_GRAY}?$"

UnchartedIsland_Tenebris_Text_10:
# 767 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah!$"

UnchartedIsland_Tenebris_Text_11:
# 767 "data//maps/UnchartedIsland/scripts.pory"
	.string "Of course!$"

UnchartedIsland_Tenebris_Text_12:
# 767 "data//maps/UnchartedIsland/scripts.pory"
	.string "Definitely!$"

UnchartedIsland_Tenebris_Text_13:
# 773 "data//maps/UnchartedIsland/scripts.pory"
	.string "You truly are a gem of a human being.\p"
	.string "Now come! Let us enter {COLOR RED}Ancient Cormoria{COLOR DARK_GRAY}\n"
	.string "once more...and exit right where the\l"
	.string "dreamstone is!$"
