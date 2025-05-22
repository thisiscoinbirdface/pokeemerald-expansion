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
	setflag FLAG_SKIP_FINALE_CUTSCENE
# 47 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_SKIP_FINALE_CUTSCENE, UnchartedIsland_Finale_2
UnchartedIsland_Finale_1:
# 56 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Cutscene
	return

UnchartedIsland_Finale_2:
# 48 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Finale_Text_0, MSGBOX_YESNO
# 49 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq UnchartedIsland_Finale_4
# 52 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Skip
	goto UnchartedIsland_Finale_1

UnchartedIsland_Finale_4:
# 50 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Cutscene
	goto UnchartedIsland_Finale_1


UnchartedIsland_Finale_Cutscene::
# 62 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_SKIP_FINALE_CUTSCENE
# 64 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 67 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_0
# 68 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 71 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_1
# 73 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 74 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 75 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 76 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_3
# 78 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 79 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 80 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 81 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_4
# 83 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_2
# 84 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 85 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 86 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Cutscene_Movement_3
# 87 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 88 "data//maps/UnchartedIsland/scripts.pory"
	delay 30
# 90 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE_2
# 91 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_4
# 92 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 93 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 94 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 95 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 6
# 96 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 97 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 98 "data//maps/UnchartedIsland/scripts.pory"
	waitstate
# 100 "data//maps/UnchartedIsland/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, 0
# 101 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_4
# 102 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 103 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 104 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 105 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 6
# 106 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 107 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 108 "data//maps/UnchartedIsland/scripts.pory"
	waitstate
# 109 "data//maps/UnchartedIsland/scripts.pory"
	release
# 111 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 112 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 113 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 114 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_5
# 116 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 117 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 118 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 119 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Finale_Cutscene_Text_6
# 121 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 122 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 123 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 124 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_8
# 126 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_6
# 127 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 128 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 129 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_9
# 131 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_7
# 132 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_7
# 133 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 134 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 136 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 137 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 138 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 139 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_11
# 141 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 142 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 143 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 144 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_12
# 146 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 147 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 148 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 149 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 150 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 151 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 152 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 153 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 154 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_13
# 156 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 157 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 158 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 159 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_14
# 161 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 162 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 163 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 164 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_15
# 166 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_8
# 167 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_16
# 169 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 170 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 171 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 172 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_17
# 174 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 175 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 176 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 177 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_18
# 179 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 180 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 181 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 182 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_19
# 184 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 185 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 186 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 187 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Finale_Cutscene_Text_20
# 189 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 190 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 191 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 12
# 192 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 193 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 194 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 195 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 196 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 197 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_21
# 199 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 200 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 201 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 202 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_22
# 204 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 205 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 206 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 207 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Finale_Cutscene_Text_23
# 209 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Cutscene_Movement_1
# 210 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 211 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 212 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_24, UnchartedIsland_Finale_Cutscene_Text_25
# 214 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 215 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 216 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 217 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_26
# 219 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 220 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 221 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 222 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Cutscene_Text_27
# 224 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_8
# 225 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 226 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 228 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Cutscene
	return


UnchartedIsland_Finale_Battle::
# 232 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Cutscene_Movement_5
# 233 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 234 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 235 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_10, UnchartedIsland_Finale_Battle_Text_0
# 237 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_no_intro TRAINER_UNCHARTED_ISLAND_RUE, UnchartedIsland_Finale_Battle_Text_1
# 239 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 5
# 240 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Finale_Skip::
# 246 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_TO_BLACK
# 247 "data//maps/UnchartedIsland/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, 0
# 248 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE_2
# 249 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE_2, UnchartedIsland_Finale_Skip_Movement_0
# 250 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_2, UnchartedIsland_Finale_Skip_Movement_1
# 251 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_2, UnchartedIsland_Finale_Skip_Movement_1
# 252 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_RUE_2, UnchartedIsland_Finale_Skip_Movement_1
# 253 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 254 "data//maps/UnchartedIsland/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 256 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Finale_Battle
	return


UnchartedIsland_Breech::
# 262 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Breech_Text_0, UnchartedIsland_Breech_Text_1
	return


UnchartedIsland_Clefable::
# 265 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_CLEFABLE, CRY_MODE_NORMAL
# 266 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Clefable_Text_0, UnchartedIsland_Clefable_Text_1
	end


UnchartedIsland_Leader_Caught_A::
# 274 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 275 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
# 276 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_B::
# 280 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 281 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 37, 24
# 282 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_C::
# 287 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 288 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 53, 41
# 289 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Inger::
# 293 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Inger_Text_0
# 294 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Ariana::
# 297 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Ariana_Text_0
# 298 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Gloria::
# 301 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Gloria_Text_0
# 302 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Carona::
# 305 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Carona_Text_0
# 306 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Jania::
# 312 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Jania_Text_0
# 313 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Raazi::
# 316 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Raazi_Text_0
# 317 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_C
	return


UnchartedIsland_Grunt_A::
# 329 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_A, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_1
# 330 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_2
# 331 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_B::
# 334 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_B, UnchartedIsland_Grunt_B_Text_0, UnchartedIsland_Grunt_B_Text_1
# 335 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 336 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Grunt_C::
# 339 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_C, UnchartedIsland_Grunt_C_Text_0, UnchartedIsland_Grunt_C_Text_1
# 340 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_B_Text_2
# 341 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	return


UnchartedIsland_Moxie_Viewpoint_Trigger::
# 356 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_2
# 358 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 360 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 361 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Finale_Cutscene_Movement_6
# 362 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 365 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0
# 366 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 367 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 368 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1
# 369 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 370 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_VIEWPOINT
# 372 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_VIEWPOINT
# 374 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_2
# 375 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 376 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 378 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end

UnchartedIsland_Moxie_Viewpoint_Trigger_2:
	end


UnchartedIsland_Moxie_Trigger0::
# 385 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger0_2
# 386 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 387 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger0_Movement_0
# 388 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 389 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger0_2:
	end


UnchartedIsland_Moxie_Trigger1::
# 392 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Trigger1_2
# 393 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 394 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger1_Movement_0
# 395 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 396 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return

UnchartedIsland_Moxie_Trigger1_2:
	end


UnchartedIsland_Moxie_Melea_Fight::
# 400 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_MELEA_BATTLE, UnchartedIsland_Moxie_Melea_Fight_2
# 402 "data//maps/UnchartedIsland/scripts.pory"
	clearflag FLAG_SYS_OW_FOLLOWERS_DISABLED
# 404 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_24, UnchartedIsland_Moxie_Melea_Fight_Text_0
# 406 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 407 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 408 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 410 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_24, UnchartedIsland_Moxie_Melea_Fight_Text_1
# 413 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_MELEA_1
# 414 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 60, 41
# 415 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 416 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_2
# 417 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 419 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_2
# 421 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 422 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 423 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 424 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 425 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_24, UnchartedIsland_Moxie_Melea_Fight_Text_3
# 427 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 428 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Cutscene_Movement_5
# 429 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 430 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 431 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_4
# 433 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Finale_Skip_Movement_1
# 434 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Skip_Movement_1
# 435 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 436 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 438 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 439 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_4
# 440 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 442 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_24, UnchartedIsland_Moxie_Melea_Fight_Text_5
# 444 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 67, 38
# 446 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Melea_Fight_Movement_5
# 447 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 448 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 450 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 451 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 452 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_6
# 453 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 454 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 455 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_6
# 458 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 459 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 460 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 461 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 462 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_24, UnchartedIsland_Moxie_Melea_Fight_Text_7
# 465 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 466 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 467 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_7
# 469 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_KOHLA_1
# 470 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_KOHLA_1, 60, 41
# 471 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_8
# 472 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 473 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 475 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 476 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 477 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 478 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_24, UnchartedIsland_Moxie_Melea_Fight_Text_8
# 479 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 480 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 481 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 482 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_9
# 483 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 485 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_0, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 486 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 488 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_KOHLA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_9
# 489 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 490 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_KOHLA_1
# 492 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_10
# 494 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_10
# 495 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 496 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 497 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 498 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_11
# 500 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 501 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 502 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 503 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 504 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_24, UnchartedIsland_Moxie_Melea_Fight_Text_12
# 509 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 510 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 511 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 512 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 513 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_24, UnchartedIsland_Moxie_Melea_Fight_Text_13
# 515 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_10
# 516 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_1
# 517 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 518 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 519 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_14
# 521 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Melea_Fight_Movement_11
# 522 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 527 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Moxie_Melea_Fight_Text_15
# 528 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_12
# 529 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 532 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_MELEA_1, 79, 42
# 533 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_MELEA_1, 79, 42
# 535 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_1
# 537 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 1
# 538 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_MELEA_BATTLE
	end

UnchartedIsland_Moxie_Melea_Fight_2:
	end


UnchartedIsland_Melea_Destroy_Trigger::
# 543 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 1
	goto_if_eq UnchartedIsland_Melea_Destroy_Trigger_2
	end

UnchartedIsland_Melea_Destroy_Trigger_2:
# 545 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 548 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Melea_Fight_Movement_3
# 549 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 551 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 552 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_0
# 553 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 554 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 556 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Finale_Cutscene_Movement_1
# 557 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_0
# 559 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MELEA_1, UnchartedIsland_Moxie_Melea_Fight_Movement_0
# 560 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_2, UnchartedIsland_Melea_Destroy_Trigger_Text_1
# 562 "data//maps/UnchartedIsland/scripts.pory"
	playmoncry SPECIES_ABSOL_MEGA, CRY_MODE_NORMAL
# 565 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8004, 2
# 566 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8005, 2
# 567 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8006, 30
# 568 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_0x8007, 5
# 569 "data//maps/UnchartedIsland/scripts.pory"
	special ShakeCamera
# 571 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 572 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Melea_Destroy_Trigger_Movement_1
# 573 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 574 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 577 "data//maps/UnchartedIsland/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 578 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 2
# 579 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, VAR_TEMP_2, VAR_TEMP_3
# 581 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


UnchartedIsland_Tenebris::
# 589 "data//maps/UnchartedIsland/scripts.pory"
	compare VAR_UNCHARTED_ISLAND_CUTSCENES, 2
	goto_if_eq UnchartedIsland_Tenebris_1
	return

UnchartedIsland_Tenebris_1:
# 590 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 591 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_0
# 592 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 593 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 594 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_1
# 596 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 597 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_1
# 598 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 601 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxyperm LOCALID_TENE, 67, 45
# 602 "data//maps/UnchartedIsland/scripts.pory"
	addobject LOCALID_TENE
# 603 "data//maps/UnchartedIsland/scripts.pory"
	setobjectxy LOCALID_TENE, 67, 45
# 605 "data//maps/UnchartedIsland/scripts.pory"
	playse SE_PUDDLE
# 606 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_2
# 607 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 608 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 609 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Tenebris_Movement_3
# 610 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_4
# 611 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 612 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Skip_Movement_1
# 613 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 614 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 616 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 618 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 619 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 620 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 621 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Tenebris_Text_0, UnchartedIsland_Tenebris_Text_2
# 622 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Finale_Cutscene_Movement_3
# 623 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 624 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 625 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 626 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 627 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 628 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_3
# 629 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 630 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 631 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 632 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_4
# 633 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 634 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_5
# 635 "data//maps/UnchartedIsland/scripts.pory"
	showmonpic SPECIES_KORAIDON, 10, 3
# 636 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_6
# 637 "data//maps/UnchartedIsland/scripts.pory"
	hidemonpic
# 638 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 639 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_7
# 642 "data//maps/UnchartedIsland/scripts.pory"
	speakername NULL
# 643 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Tenebris_Text_8, MSGBOX_POKENAV
# 644 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 645 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Finale_Cutscene_Text_7
# 646 "data//maps/UnchartedIsland/scripts.pory"
	message UnchartedIsland_Tenebris_Text_9
# 647 "data//maps/UnchartedIsland/scripts.pory"
	waitmessage
# 648 "data//maps/UnchartedIsland/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, UnchartedIsland_Tenebris_Text_10, UnchartedIsland_Tenebris_Text_11, UnchartedIsland_Tenebris_Text_12
# 651 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Finale_Cutscene_Movement_1
# 652 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 653 "data//maps/UnchartedIsland/scripts.pory"
	delay 16
# 654 "data//maps/UnchartedIsland/scripts.pory"
	msgbox_delay UnchartedIsland_Finale_Cutscene_Text_7, UnchartedIsland_Tenebris_Text_13
# 656 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_5
# 657 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_TENE, UnchartedIsland_Tenebris_Movement_6
# 658 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 659 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_TENE
# 660 "data//maps/UnchartedIsland/scripts.pory"
	delay 8
# 662 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Tenebris_Movement_7
# 663 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_ANCIENT_CORMORIA_FINAL, 9, 51
# 665 "data//maps/UnchartedIsland/scripts.pory"
	setvar VAR_UNCHARTED_ISLAND_CUTSCENES, 3
# 666 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end


# 67 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_0:
# 67 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 67 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 67 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 73 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_1:
# 73 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_down
	step_end

# 83 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_2:
# 83 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 83 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 83 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 84 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_3:
# 84 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 84 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 91 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_4:
# 91 "data//maps/UnchartedIsland/scripts.pory"
	fly_down
	step_end

# 111 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_5:
# 111 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_up
	step_end

# 126 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_6:
# 126 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 126 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 131 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_7:
# 131 "data//maps/UnchartedIsland/scripts.pory"
	emote_question_mark
	step_end

# 166 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Cutscene_Movement_8:
# 166 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 249 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Skip_Movement_0:
# 249 "data//maps/UnchartedIsland/scripts.pory"
	face_down
	step_end

# 250 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Finale_Skip_Movement_1:
# 250 "data//maps/UnchartedIsland/scripts.pory"
	face_up
	step_end

# 365 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0:
# 365 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
	step_end

# 368 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1:
# 368 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 368 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 368 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 368 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 374 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_2:
# 374 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 374 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 387 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger0_Movement_0:
# 387 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 387 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 387 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 387 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 387 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 387 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 394 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger1_Movement_0:
# 394 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 394 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 394 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 394 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 394 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 394 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 394 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 406 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_0:
# 406 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_left
	step_end

# 415 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_1:
# 415 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 416 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_2:
# 416 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 416 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 416 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 416 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 416 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 416 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 416 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 416 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 416 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 416 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 421 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_3:
# 421 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 439 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_4:
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 439 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 446 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_5:
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 446 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
	step_end

# 452 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_6:
# 452 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 452 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 465 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_7:
# 465 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 465 "data//maps/UnchartedIsland/scripts.pory"
	face_left
	step_end

# 471 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_8:
# 471 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 471 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 471 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 471 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 471 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 471 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 471 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 471 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 471 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 471 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 488 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_9:
# 488 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 488 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 488 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 488 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 488 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 488 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 488 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 488 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 488 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 488 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 488 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 494 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_10:
# 494 "data//maps/UnchartedIsland/scripts.pory"
	jump_in_place_right
	step_end

# 521 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_11:
# 521 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 521 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 521 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 521 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 521 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 521 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 521 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 521 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 528 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Melea_Fight_Movement_12:
# 528 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 528 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 528 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 528 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 528 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 528 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_right
# 528 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 528 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 528 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 528 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
# 528 "data//maps/UnchartedIsland/scripts.pory"
	walk_fast_down
	step_end

# 552 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_0:
# 552 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 552 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 552 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 552 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 552 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 572 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Melea_Destroy_Trigger_Movement_1:
# 572 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 572 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 572 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 572 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 572 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 591 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_0:
# 591 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
# 591 "data//maps/UnchartedIsland/scripts.pory"
	face_right
	step_end

# 597 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_1:
# 597 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 597 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 597 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 597 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 606 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_2:
# 606 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_up
	step_end

# 609 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_3:
# 609 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 609 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 609 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 609 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 610 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_4:
# 610 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 610 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 610 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 610 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 610 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 610 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 610 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 610 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 610 "data//maps/UnchartedIsland/scripts.pory"
	walk_left
# 610 "data//maps/UnchartedIsland/scripts.pory"
	face_down
	step_end

# 656 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_5:
# 656 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 656 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 656 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 656 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 656 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 656 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 656 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 656 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 656 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 656 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 657 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_6:
# 657 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 657 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 657 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 657 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 657 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 657 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 657 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 657 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 657 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 657 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

# 662 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Tenebris_Movement_7:
# 662 "data//maps/UnchartedIsland/scripts.pory"
	jump_2_down
	step_end

UnchartedIsland_Finale_Text_0:
# 48 "data//maps/UnchartedIsland/scripts.pory"
	.string "Skip cutscene?$"

UnchartedIsland_Finale_Cutscene_Text_0:
# 71 "data//maps/UnchartedIsland/scripts.pory"
	.string "Kohla$"

UnchartedIsland_Finale_Cutscene_Text_1:
# 71 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ceruledge...Ceruledge!!\p"
	.string "No!!$"

UnchartedIsland_Finale_Cutscene_Text_2:
# 76 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea$"

UnchartedIsland_Finale_Cutscene_Text_3:
# 76 "data//maps/UnchartedIsland/scripts.pory"
	.string "The famous Ace Rookie and his\n"
	.string "Ceruledge...burned to dust!$"

UnchartedIsland_Finale_Cutscene_Text_4:
# 81 "data//maps/UnchartedIsland/scripts.pory"
	.string "And with this, nobody can stop us from -$"

UnchartedIsland_Finale_Cutscene_Text_5:
# 114 "data//maps/UnchartedIsland/scripts.pory"
	.string "Isn't that Professor Tenebris?$"

UnchartedIsland_Finale_Cutscene_Text_6:
# 119 "data//maps/UnchartedIsland/scripts.pory"
	.string "...and {PLAYER}!\n"
	.string "How on earth?$"

UnchartedIsland_Finale_Cutscene_Text_7:
# 124 "data//maps/UnchartedIsland/scripts.pory"
	.string "Tenebris$"

UnchartedIsland_Finale_Cutscene_Text_8:
# 124 "data//maps/UnchartedIsland/scripts.pory"
	.string "RUE! They got to you!\n"
	.string "Are you okay? Did they hurt you?$"

UnchartedIsland_Finale_Cutscene_Text_9:
# 129 "data//maps/UnchartedIsland/scripts.pory"
	.string "No...you've got it all wrong...$"

UnchartedIsland_Finale_Cutscene_Text_10:
# 139 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue$"

UnchartedIsland_Finale_Cutscene_Text_11:
# 139 "data//maps/UnchartedIsland/scripts.pory"
	.string "You did get it all wrong, Tenebris.$"

UnchartedIsland_Finale_Cutscene_Text_12:
# 144 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue? What's going on?$"

UnchartedIsland_Finale_Cutscene_Text_13:
# 154 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'll tell you what's going on!$"

UnchartedIsland_Finale_Cutscene_Text_14:
# 159 "data//maps/UnchartedIsland/scripts.pory"
	.string "What you see is the truth, Tenebris\p"
	.string "I founded Team Somber!\p"
	.string "I was the one spying on you from the\n"
	.string "start! Easy enough, since I was right\l"
	.string "under your nose! I studied all your\l"
	.string "papers, took all your research...and\l"
	.string "right when you were about to bring the\l"
	.string "dreamstone home, you ran off with it!$"

UnchartedIsland_Finale_Cutscene_Text_15:
# 164 "data//maps/UnchartedIsland/scripts.pory"
	.string "And you - {PLAYER}! You stupid little\n"
	.string "gnat!\p"
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
# 167 "data//maps/UnchartedIsland/scripts.pory"
	.string "Y-you set me up?$"

UnchartedIsland_Finale_Cutscene_Text_17:
# 172 "data//maps/UnchartedIsland/scripts.pory"
	.string "Stupid child...I set you all up a hundred\n"
	.string "times over!\p"
	.string "{PLAYER}, when you saw me at the\n"
	.string "Master Ball Maker's house at the Mirroh\l"
	.string "Base Camp, I feared you'd connect the\l"
	.string "dots for a moment...but it looks like I\l"
	.string "overestimated your cognitive abilities.\p"
	.string "No...I did everything right.\p"
	.string "Everything was perfect!$"

UnchartedIsland_Finale_Cutscene_Text_18:
# 177 "data//maps/UnchartedIsland/scripts.pory"
	.string "But why, Rue?$"

UnchartedIsland_Finale_Cutscene_Text_19:
# 182 "data//maps/UnchartedIsland/scripts.pory"
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

UnchartedIsland_Finale_Cutscene_Text_20:
# 187 "data//maps/UnchartedIsland/scripts.pory"
	.string "Rue...a mind like yours could do far\n"
	.string "better.$"

UnchartedIsland_Finale_Cutscene_Text_21:
# 197 "data//maps/UnchartedIsland/scripts.pory"
	.string "NO, TENEBRIS!$"

UnchartedIsland_Finale_Cutscene_Text_22:
# 202 "data//maps/UnchartedIsland/scripts.pory"
	.string "A mind like YOURS can do far better!\n"
	.string "That's why the world knows you and\l"
	.string "nobody knows me!\p"
	.string "For the less special, other means must\n"
	.string "be sought. This, Tenebris, is an emotion\l"
	.string "you will never understand.$"

UnchartedIsland_Finale_Cutscene_Text_23:
# 207 "data//maps/UnchartedIsland/scripts.pory"
	.string "That's no excuse for what you're doing!$"

UnchartedIsland_Finale_Cutscene_Text_24:
# 212 "data//maps/UnchartedIsland/scripts.pory"
	.string "Moxie$"

UnchartedIsland_Finale_Cutscene_Text_25:
# 212 "data//maps/UnchartedIsland/scripts.pory"
	.string "Silence, loser!$"

UnchartedIsland_Finale_Cutscene_Text_26:
# 217 "data//maps/UnchartedIsland/scripts.pory"
	.string "It's fine, Moxie. He's right...that's no\n"
	.string "excuse.\p"
	.string "But who will stop me? Who will force my\n"
	.string "hand now?\p"
	.string "I've beaten everyone - I've hoodwinked\n"
	.string "the detectives, bypassed the gym\l"
	.string "leaders and crushed the Ace Rookie.$"

UnchartedIsland_Finale_Cutscene_Text_27:
# 222 "data//maps/UnchartedIsland/scripts.pory"
	.string "No, Rue.\p"
	.string "You haven't beaten us all.$"

UnchartedIsland_Finale_Battle_Text_0:
# 235 "data//maps/UnchartedIsland/scripts.pory"
	.string "So this is what it comes down to - the\n"
	.string "assistant versus the professor.\p"
	.string "Very well.\p"
	.string "I'm sorry, {PLAYER}. I really do like\n"
	.string "you.\p"
	.string "But Cormoria has only enough space for\n"
	.string "one future!$"

UnchartedIsland_Finale_Battle_Text_1:
# 237 "data//maps/UnchartedIsland/scripts.pory"
	.string "No! Nooo! NOOO!!!$"

UnchartedIsland_Breech_Text_0:
# 262 "data//maps/UnchartedIsland/scripts.pory"
	.string "Breech$"

UnchartedIsland_Breech_Text_1:
# 262 "data//maps/UnchartedIsland/scripts.pory"
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
# 266 "data//maps/UnchartedIsland/scripts.pory"
	.string "Clefairy$"

UnchartedIsland_Clefable_Text_1:
# 266 "data//maps/UnchartedIsland/scripts.pory"
	.string "cleee!!!$"

UnchartedIsland_Leader_Caught_A_Text_0:
# 274 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey! What are you doing here? You\n"
	.string "should be on the S.S. Elegant.$"

UnchartedIsland_Inger_Text_0:
# 293 "data//maps/UnchartedIsland/scripts.pory"
	.string "Inger$"

UnchartedIsland_Ariana_Text_0:
# 297 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ariana$"

UnchartedIsland_Gloria_Text_0:
# 301 "data//maps/UnchartedIsland/scripts.pory"
	.string "Gloria$"

UnchartedIsland_Carona_Text_0:
# 305 "data//maps/UnchartedIsland/scripts.pory"
	.string "Carona$"

UnchartedIsland_Jania_Text_0:
# 312 "data//maps/UnchartedIsland/scripts.pory"
	.string "Jania$"

UnchartedIsland_Raazi_Text_0:
# 316 "data//maps/UnchartedIsland/scripts.pory"
	.string "Raazi$"

UnchartedIsland_Grunt_A_Text_0:
# 329 "data//maps/UnchartedIsland/scripts.pory"
	.string "The boss gave me new Pokemon just to\n"
	.string "stop the Ace Rookie. You can't stop us -\l"
	.string "wait, you're not the Ace Rookie!$"

UnchartedIsland_Grunt_A_Text_1:
# 329 "data//maps/UnchartedIsland/scripts.pory"
	.string "Guess you're still on the case!$"

UnchartedIsland_Grunt_A_Text_2:
# 330 "data//maps/UnchartedIsland/scripts.pory"
	.string "It doesn't matter who's on the case.\n"
	.string "You can't stop us now!$"

UnchartedIsland_Grunt_B_Text_0:
# 334 "data//maps/UnchartedIsland/scripts.pory"
	.string "They said the Ace Rookie was coming.\n"
	.string "Why are you here instead?$"

UnchartedIsland_Grunt_B_Text_1:
# 334 "data//maps/UnchartedIsland/scripts.pory"
	.string "I'd rather fight the Ace Rookie!$"

UnchartedIsland_Grunt_B_Text_2:
# 335 "data//maps/UnchartedIsland/scripts.pory"
	.string "$"

UnchartedIsland_Grunt_C_Text_0:
# 339 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah, weren't you kicked off the case?\n"
	.string "Well whatever! We've almost achieved\l"
	.string "our goal - you think we'll let you stop\l"
	.string "us now?$"

UnchartedIsland_Grunt_C_Text_1:
# 339 "data//maps/UnchartedIsland/scripts.pory"
	.string "Don't ruin our plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_0:
# 404 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER}.\p"
	.string "A familiar face by now.\n"
	.string "How many times has it been?\p"
	.string "We received intel that you were off the\n"
	.string "case, and we would only have to deal\l"
	.string "with the Ace Rookie.\p"
	.string "It was our mistake, I suppose, to\n"
	.string "assume you wouldn't come any way.$"

UnchartedIsland_Moxie_Melea_Fight_Text_1:
# 410 "data//maps/UnchartedIsland/scripts.pory"
	.string "Melea!\n"
	.string "{PLAYER}'s here!$"

UnchartedIsland_Moxie_Melea_Fight_Text_2:
# 419 "data//maps/UnchartedIsland/scripts.pory"
	.string "So you came after all.\p"
	.string "Time and again we've tried to explain\n"
	.string "how insignificant you are in our plans.$"

UnchartedIsland_Moxie_Melea_Fight_Text_3:
# 425 "data//maps/UnchartedIsland/scripts.pory"
	.string "And yet, pest that you are, you manage\n"
	.string "to find your way to us and foil our\l"
	.string "plans again and again!$"

UnchartedIsland_Moxie_Melea_Fight_Text_4:
# 431 "data//maps/UnchartedIsland/scripts.pory"
	.string "Look across the water.$"

UnchartedIsland_Moxie_Melea_Fight_Text_5:
# 442 "data//maps/UnchartedIsland/scripts.pory"
	.string "The third and final dreamstone.\p"
	.string "It took us a while to locate, but this is\n"
	.string "where Professor Tenebris took her\l"
	.string "dreamstone and vanished.\p"
	.string "This is where it all began...$"

UnchartedIsland_Moxie_Melea_Fight_Text_6:
# 455 "data//maps/UnchartedIsland/scripts.pory"
	.string "And this is where we'll finally complete\n"
	.string "the plan!$"

UnchartedIsland_Moxie_Melea_Fight_Text_7:
# 462 "data//maps/UnchartedIsland/scripts.pory"
	.string "You bested us before.\p"
	.string "We're not taking that risk again. Not\n"
	.string "here. Not now.\p"
	.string "You can't beat the two of us,\n"
	.string "{PLAYER}!\n"
	.string "If only you had some help.$"

UnchartedIsland_Moxie_Melea_Fight_Text_8:
# 478 "data//maps/UnchartedIsland/scripts.pory"
	.string "Poetic - right on cue, the help arrives.$"

UnchartedIsland_Moxie_Melea_Fight_Text_9:
# 482 "data//maps/UnchartedIsland/scripts.pory"
	.string "No matter - they can't beat the two of\n"
	.string "us.\p"
	.string "I'll take the Ace Rookie.\n"
	.string "You deal with {PLAYER}!$"

UnchartedIsland_Moxie_Melea_Fight_Text_10:
# 485 "data//maps/UnchartedIsland/scripts.pory"
	.string "...$"

UnchartedIsland_Moxie_Melea_Fight_Text_11:
# 498 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! I can't believe it! You've been\n"
	.string "thrown under the bus! The Ace Rookie\l"
	.string "just left you alone!$"

UnchartedIsland_Moxie_Melea_Fight_Text_12:
# 504 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hahaha! Now that settles it.\p"
	.string "You're finished, {PLAYER}! Once we\n"
	.string "deal with you, we'll go and stop the Ace\l"
	.string "Rookie.\p"
	.string "Come then, it's time to end this - once\n"
	.string "and for all!$"

UnchartedIsland_Moxie_Melea_Fight_Text_13:
# 513 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "Noo!!!\p"
	.string "I...$"

UnchartedIsland_Moxie_Melea_Fight_Text_14:
# 519 "data//maps/UnchartedIsland/scripts.pory"
	.string "Calm down Moxie! I'm here.\p"
	.string "Go now - go and stop Kohla.\n"
	.string "I'll finish {PLAYER} off!$"

UnchartedIsland_Moxie_Melea_Fight_Text_15:
# 527 "data//maps/UnchartedIsland/scripts.pory"
	.string "No!\p"
	.string "We've worked too hard...I can't let it\n"
	.string "end like this.\p"
	.string "No!!!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_0:
# 557 "data//maps/UnchartedIsland/scripts.pory"
	.string "Absol! Destroy those rocks!\n"
	.string "We can't let anyone come after us!$"

UnchartedIsland_Melea_Destroy_Trigger_Text_1:
# 560 "data//maps/UnchartedIsland/scripts.pory"
	.string "You'll never make it through!\p"
	.string "So long, {PLAYER}. You've caused us\n"
	.string "enough pain and now we'll finally be rid\l"
	.string "of you!$"

UnchartedIsland_Tenebris_Text_0:
# 594 "data//maps/UnchartedIsland/scripts.pory"
	.string "???$"

UnchartedIsland_Tenebris_Text_1:
# 594 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey you - wait!$"

UnchartedIsland_Tenebris_Text_2:
# 621 "data//maps/UnchartedIsland/scripts.pory"
	.string "I never forget a face when I see one.\p"
	.string "I remember signing off on your\n"
	.string "application, {PLAYER}.\p"
	.string "It's long overdue, but it gives me great\n"
	.string "pleasure to welcome you to the Tenebris\l"
	.string "Lab...although I wish it were under\l"
	.string "better circumstances.$"

UnchartedIsland_Tenebris_Text_3:
# 628 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yes, I'm Professor Tenebris.\p"
	.string "I've been hiding in Ancient\n"
	.string "Cormoria...but Team Somber found the\l"
	.string "dreamstones any way, so my effort was,\l"
	.string "it seems, wasted.$"

UnchartedIsland_Tenebris_Text_4:
# 632 "data//maps/UnchartedIsland/scripts.pory"
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
# 634 "data//maps/UnchartedIsland/scripts.pory"
	.string "The Ancient Terror...$"

UnchartedIsland_Tenebris_Text_6:
# 636 "data//maps/UnchartedIsland/scripts.pory"
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
# 639 "data//maps/UnchartedIsland/scripts.pory"
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
# 643 "data//maps/UnchartedIsland/scripts.pory"
	.string "This is your last choice in the game!\n"
	.string "Please choose carefully.$"

UnchartedIsland_Tenebris_Text_9:
# 646 "data//maps/UnchartedIsland/scripts.pory"
	.string "{PLAYER} - will you stop Team Somber?$"

UnchartedIsland_Tenebris_Text_10:
# 648 "data//maps/UnchartedIsland/scripts.pory"
	.string "Yeah!$"

UnchartedIsland_Tenebris_Text_11:
# 648 "data//maps/UnchartedIsland/scripts.pory"
	.string "Of course!$"

UnchartedIsland_Tenebris_Text_12:
# 648 "data//maps/UnchartedIsland/scripts.pory"
	.string "Definitely!$"

UnchartedIsland_Tenebris_Text_13:
# 654 "data//maps/UnchartedIsland/scripts.pory"
	.string "You truly are a gem of a human being.\p"
	.string "Now come! Let us enter Ancient Cormoria\n"
	.string "once more...and exit right where the\l"
	.string "dreamstone is!$"
