# 1 "data//maps/RivetshoreCity/scripts.pory"

# 2 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_SPEEDBOAT, 1
# 3 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_GAB, 28
# 4 "data//maps/RivetshoreCity/scripts.pory"

# 5 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_KOHLA, 21
# 6 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_DET1, 22
# 7 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_DET2, 23
# 8 "data//maps/RivetshoreCity/scripts.pory"

# 9 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_INGER, 15
# 10 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_ARIANA, 14
# 11 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_GLORIA, 16
# 12 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_CARONA, 17
# 13 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_VINIEL, 18
# 14 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_JANIA, 19
# 15 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_RAAZI, 20

RivetshoreCity_MapScripts::
# 20 "data//maps/RivetshoreCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RivetshoreCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RivetshoreCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 21 "data//maps/RivetshoreCity/scripts.pory"
	setflag FLAG_VISITED_RIVETSHORE_CITY
	return


RivetshoreCity_Gabrielle_Trigger::
# 33 "data//maps/RivetshoreCity/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_GAB, RivetshoreCity_Gabrielle_Trigger_2
# 35 "data//maps/RivetshoreCity/scripts.pory"
	lockall
# 37 "data//maps/RivetshoreCity/scripts.pory"
	addobject LOCALID_GAB
# 39 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_Gabrielle_Trigger_Movement_0
# 40 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GAB, RivetshoreCity_Gabrielle_Trigger_Movement_1
# 41 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 43 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Gabrielle_Trigger_Text_0, RivetshoreCity_Gabrielle_Trigger_Text_1
# 45 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GAB, RivetshoreCity_Gabrielle_Trigger_Movement_2
# 46 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 47 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_GAB
# 50 "data//maps/RivetshoreCity/scripts.pory"
	setvar VAR_RIVETSHORE_CEO_QUEST, 0
# 52 "data//maps/RivetshoreCity/scripts.pory"
	setflag FLAG_RIVETSHORE_GAB
# 53 "data//maps/RivetshoreCity/scripts.pory"
	releaseall
	end

RivetshoreCity_Gabrielle_Trigger_2:
	end


RivetshoreCity_Assembly_Trigger::
# 64 "data//maps/RivetshoreCity/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreCity_Assembly_Trigger_2
# 68 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_VINIEL
# 69 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_CARONA
# 72 "data//maps/RivetshoreCity/scripts.pory"
	special SpawnCameraObject
# 73 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_0
# 74 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 78 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 79 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 80 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_1
# 82 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 83 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 84 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_2, RivetshoreCity_Assembly_Trigger_Text_3
# 85 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_3
# 86 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 87 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_4, RivetshoreCity_Assembly_Trigger_Text_5
# 88 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_7
# 91 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 92 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 93 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_8
# 94 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_4
# 95 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 96 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_10
# 101 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 102 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 103 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_11
# 104 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 105 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 106 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_12
# 107 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 108 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 109 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_14
# 110 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_5
# 111 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 112 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_16
# 114 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 115 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 116 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_17
# 118 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_6
# 119 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 120 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_18
# 121 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_19
# 123 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 124 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 125 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_20
# 127 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_21
# 128 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_7
# 129 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 130 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_22
# 131 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_1
# 132 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 133 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_23, RivetshoreCity_Assembly_Trigger_Text_24
# 135 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 136 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 137 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 138 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_5
# 139 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_5
# 140 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 141 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_25
# 143 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_1
# 144 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 145 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_23, RivetshoreCity_Assembly_Trigger_Text_26
# 147 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_5
# 148 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 149 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_27
# 151 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_8
# 152 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 153 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_28
# 156 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 157 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 158 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_29
# 159 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_5
# 160 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 161 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_30
# 162 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_31
# 163 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_6
# 164 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 165 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_32
# 166 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_33
# 168 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_6
# 169 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 170 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_34
# 172 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_35
# 173 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_4, RivetshoreCity_Assembly_Trigger_Text_36
# 174 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_37
# 175 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_38
# 176 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_39
# 178 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_8
# 179 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 180 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_40
# 183 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_9
# 184 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_10
# 185 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_10
# 186 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 187 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 189 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_9
# 190 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_10
# 191 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 192 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_DET1
# 194 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_9
# 195 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 196 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_DET2
# 198 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_11
# 199 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 202 "data//maps/RivetshoreCity/scripts.pory"
	playse SE_SHIP
# 203 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_SPEEDBOAT, RivetshoreCity_Assembly_Trigger_Movement_12
# 204 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 206 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_13
# 207 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 209 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 210 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 211 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_41
# 213 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_14
# 214 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_15
# 215 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_16
# 216 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_17
# 217 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 218 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_GLORIA
# 220 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_10
# 221 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_18
# 222 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_9
# 223 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 224 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_INGER
# 226 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_9
# 227 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_9
# 228 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 229 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_ARIANA
# 231 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_15
# 232 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 233 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_JANIA
# 236 "data//maps/RivetshoreCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 237 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_RAAZI
# 238 "data//maps/RivetshoreCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 240 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Gabrielle_Trigger_Movement_2
# 241 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 242 "data//maps/RivetshoreCity/scripts.pory"
	special RemoveCameraObject
# 245 "data//maps/RivetshoreCity/scripts.pory"
	setflag FLAG_RIVETSHORE_ASSEMBLY
# 246 "data//maps/RivetshoreCity/scripts.pory"
	releaseall
	end

RivetshoreCity_Assembly_Trigger_2:
	end


RivetshoreCity_NPC_StorageBaySailor::
# 264 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_StorageBaySailor_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_1::
# 270 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_2::
# 275 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_2_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_3::
# 280 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_3_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_4::
# 285 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_4_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_5::
# 290 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_5_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_6::
# 295 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_6_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_7::
# 300 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_7_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_8::
# 305 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_8_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_9::
# 310 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_9_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Market_Shop_1::
# 323 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 324 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 325 "data//maps/RivetshoreCity/scripts.pory"
	message gText_HowMayIServeYou
# 326 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 327 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_1
# 328 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 329 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


RivetshoreCity_Market_Shop_2::
# 335 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 336 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 337 "data//maps/RivetshoreCity/scripts.pory"
	message gText_HowMayIServeYou
# 338 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 339 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_2
# 340 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 341 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


RivetshoreCity_Market_Shop_Secret::
# 348 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 349 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 350 "data//maps/RivetshoreCity/scripts.pory"
	speakername RivetshoreCity_Market_Shop_Secret_Text_0
# 351 "data//maps/RivetshoreCity/scripts.pory"
	message RivetshoreCity_Market_Shop_Secret_Text_1
# 352 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 353 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_Secret
# 354 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 355 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


	.align 2
# 359 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_1:
# 360 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 361 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 362 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 363 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 364 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_FLAME_ORB
	.2byte ITEM_NONE

	.align 2
# 367 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_2:
# 368 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM19
# 369 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM23
# 370 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM26
# 371 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM30
# 372 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM33
# 373 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM34
# 374 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM36
	.2byte ITEM_NONE

	.align 2
# 377 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_Secret:
# 378 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 379 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 380 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 381 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_MOON_STONE
# 382 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 383 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TIME_WATER
	.2byte ITEM_NONE

# 39 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Gabrielle_Trigger_Movement_0:
# 39 "data//maps/RivetshoreCity/scripts.pory"
	face_left
	step_end

# 40 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Gabrielle_Trigger_Movement_1:
# 40 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 40 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 40 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 40 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 40 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 40 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 40 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 40 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 40 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 40 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 45 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Gabrielle_Trigger_Movement_2:
# 45 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 45 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 45 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 45 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 45 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 45 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 45 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 45 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 73 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_0:
# 73 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 73 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 73 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 73 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 73 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 73 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 73 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 73 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 78 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_1:
# 78 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_down
	step_end

# 82 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_2:
# 82 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_right
	step_end

# 85 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_3:
# 85 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_left
# 85 "data//maps/RivetshoreCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 94 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_4:
# 94 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_left
	step_end

# 104 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_5:
# 104 "data//maps/RivetshoreCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 118 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_6:
# 118 "data//maps/RivetshoreCity/scripts.pory"
	emote_question_mark
	step_end

# 128 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_7:
# 128 "data//maps/RivetshoreCity/scripts.pory"
	face_right
	step_end

# 151 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_8:
# 151 "data//maps/RivetshoreCity/scripts.pory"
	face_down
	step_end

# 183 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_9:
# 183 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 184 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_10:
# 184 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 198 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_11:
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 203 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_12:
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
	step_end

# 206 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_13:
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 213 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_14:
# 213 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 213 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 214 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_15:
# 214 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 214 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 215 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_16:
# 215 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 215 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 216 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_17:
# 216 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 216 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 221 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_18:
# 221 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

RivetshoreCity_Gabrielle_Trigger_Text_0:
# 43 "data//maps/RivetshoreCity/scripts.pory"
	.string "Gabrielle$"

RivetshoreCity_Gabrielle_Trigger_Text_1:
# 43 "data//maps/RivetshoreCity/scripts.pory"
	.string "{PLAYER}! I knew you'd come.\p"
	.string "Listen - I overheard some of the Gym\n"
	.string "Leaders by the harbor talking about\l"
	.string "their plans. I don't know much but\l"
	.string "they're planning to sail east from here!\p"
	.string "There's a cruise set to depart soon.\n"
	.string "We can follow them!\p"
	.string "I got my ticket already so hurry up and\n"
	.string "buy yours before they sell out!$"

RivetshoreCity_Assembly_Trigger_Text_0:
# 80 "data//maps/RivetshoreCity/scripts.pory"
	.string "Detective$"

RivetshoreCity_Assembly_Trigger_Text_1:
# 80 "data//maps/RivetshoreCity/scripts.pory"
	.string "Thank you gym leaders for assembling\n"
	.string "here on such short notice.$"

RivetshoreCity_Assembly_Trigger_Text_2:
# 84 "data//maps/RivetshoreCity/scripts.pory"
	.string "???$"

RivetshoreCity_Assembly_Trigger_Text_3:
# 84 "data//maps/RivetshoreCity/scripts.pory"
	.string "It's our duty, detectives.\n"
	.string "No need to thank us.$"

RivetshoreCity_Assembly_Trigger_Text_4:
# 87 "data//maps/RivetshoreCity/scripts.pory"
	.string "Ariana$"

RivetshoreCity_Assembly_Trigger_Text_5:
# 87 "data//maps/RivetshoreCity/scripts.pory"
	.string "Easy for you to say, {COLOR RED}Raazi{COLOR DARK_GRAY}!\p"
	.string "You live here. {COLOR RED}Inger{COLOR DARK_GRAY} and I came all the\n"
	.string "way from the other side of Cormoria!$"

RivetshoreCity_Assembly_Trigger_Text_6:
# 88 "data//maps/RivetshoreCity/scripts.pory"
	.string "Raazi$"

RivetshoreCity_Assembly_Trigger_Text_7:
# 88 "data//maps/RivetshoreCity/scripts.pory"
	.string "Which is also your duty.$"

RivetshoreCity_Assembly_Trigger_Text_8:
# 93 "data//maps/RivetshoreCity/scripts.pory"
	.string "I don't see all of you though.\n"
	.string "Who's missing?$"

RivetshoreCity_Assembly_Trigger_Text_9:
# 96 "data//maps/RivetshoreCity/scripts.pory"
	.string "Gloria$"

RivetshoreCity_Assembly_Trigger_Text_10:
# 96 "data//maps/RivetshoreCity/scripts.pory"
	.string "Viniel and {COLOR BLUE}Carona{COLOR DARK_GRAY} sent word - they're on\n"
	.string "their way. They'll take some time,\l"
	.string "considering how remote they are.$"

RivetshoreCity_Assembly_Trigger_Text_11:
# 103 "data//maps/RivetshoreCity/scripts.pory"
	.string "Unfortunately we don't have time to\n"
	.string "wait for them.\p"
	.string "Allow us to explain the current\n"
	.string "situation as it stands.\p"
	.string "You all know about the disappearance\n"
	.string "of {COLOR GREEN}Professor Tenebris{COLOR DARK_GRAY} in connection\l"
	.string "with the dreamstones and {COLOR BLUE}Team Somber{COLOR DARK_GRAY}'s\l"
	.string "involvement in this case.$"

RivetshoreCity_Assembly_Trigger_Text_12:
# 106 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes.$"

RivetshoreCity_Assembly_Trigger_Text_13:
# 109 "data//maps/RivetshoreCity/scripts.pory"
	.string "Jania$"

RivetshoreCity_Assembly_Trigger_Text_14:
# 109 "data//maps/RivetshoreCity/scripts.pory"
	.string "I hope the Professor is safe,\n"
	.string "wherever she is.$"

RivetshoreCity_Assembly_Trigger_Text_15:
# 112 "data//maps/RivetshoreCity/scripts.pory"
	.string "Inger$"

RivetshoreCity_Assembly_Trigger_Text_16:
# 112 "data//maps/RivetshoreCity/scripts.pory"
	.string "Just you watch - I'm going to teach\n"
	.string "{COLOR BLUE}Team Somber{COLOR DARK_GRAY} a lesson!$"

RivetshoreCity_Assembly_Trigger_Text_17:
# 116 "data//maps/RivetshoreCity/scripts.pory"
	.string "We regret to say that despite all our\n"
	.string "efforts, not a single trace of the\l"
	.string "Professor has yet been found.\p"
	.string "Nobody has seen her anywhere. Our\n"
	.string "working theory is that {COLOR BLUE}Team Somber{COLOR DARK_GRAY} is\l"
	.string "holding her captive somewhere...\p"
	.string "...and that leads us to today.\p"
	.string "A massive uptick in geological activity\n"
	.string "was recorded by the Pokémon Ranger\l"
	.string "Institute yesterday.\p"
	.string "The heat signatures were off the\n"
	.string "charts. Ravine, the Ranger Head says\l"
	.string "it's like the start of a region-wide\l"
	.string "drought.$"

RivetshoreCity_Assembly_Trigger_Text_18:
# 120 "data//maps/RivetshoreCity/scripts.pory"
	.string "The location?$"

RivetshoreCity_Assembly_Trigger_Text_19:
# 121 "data//maps/RivetshoreCity/scripts.pory"
	.string "An uncharted island off the coast.\n"
	.string "Further east from here.$"

RivetshoreCity_Assembly_Trigger_Text_20:
# 125 "data//maps/RivetshoreCity/scripts.pory"
	.string "So that explains the heatwave\n"
	.string "we had here yesterday.\p"
	.string "It must have been {COLOR BLUE}Team Somber{COLOR DARK_GRAY}'s doing.$"

RivetshoreCity_Assembly_Trigger_Text_21:
# 127 "data//maps/RivetshoreCity/scripts.pory"
	.string "{COLOR GREEN}Kohla{COLOR DARK_GRAY} here has been working the case.\p"
	.string "He's handed over his Gym Leader duties\n"
	.string "to the next {COLOR GREEN}Ace Rookie{COLOR DARK_GRAY}, and is now\l"
	.string "pursuing {COLOR BLUE}Team Somber{COLOR DARK_GRAY} full-time.$"

RivetshoreCity_Assembly_Trigger_Text_22:
# 130 "data//maps/RivetshoreCity/scripts.pory"
	.string "{COLOR GREEN}Kohla{COLOR DARK_GRAY} - go on and tell them about the\n"
	.string "Ancient Terror.$"

RivetshoreCity_Assembly_Trigger_Text_23:
# 133 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla$"

RivetshoreCity_Assembly_Trigger_Text_24:
# 133 "data//maps/RivetshoreCity/scripts.pory"
	.string "Right, yes, well.\p"
	.string "Ahem.\p"
	.string "So, well...they...they've captured the\n"
	.string "Ancient Terror.$"

RivetshoreCity_Assembly_Trigger_Text_25:
# 141 "data//maps/RivetshoreCity/scripts.pory"
	.string "What? How?$"

RivetshoreCity_Assembly_Trigger_Text_26:
# 145 "data//maps/RivetshoreCity/scripts.pory"
	.string "My...ex-colleague and I chased them\n"
	.string "into {COLOR RED}Ancient Cormoria{COLOR DARK_GRAY} through a\l"
	.string "dreamstone and Melea captured the\l"
	.string "Ancient Terror with a Master Ball!$"

RivetshoreCity_Assembly_Trigger_Text_27:
# 149 "data//maps/RivetshoreCity/scripts.pory"
	.string "They were strong enough without\n"
	.string "it...but with the Ancient Terror, they'll\l"
	.string "be unstoppable!$"

RivetshoreCity_Assembly_Trigger_Text_28:
# 153 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes...which is why we need the combined\n"
	.string "power of the eight strongest trainers\l"
	.string "in all of Cormoria.\p"
	.string "We think this heatwave has something\n"
	.string "to do with the Ancient Terror...and we\l"
	.string "also believe worse is on the way.\p"
	.string "That's why we need to get to this\n"
	.string "uncharted island ASAP!$"

RivetshoreCity_Assembly_Trigger_Text_29:
# 158 "data//maps/RivetshoreCity/scripts.pory"
	.string "We should wait for {COLOR BLUE}Viniel{COLOR DARK_GRAY} and {COLOR BLUE}Carona{COLOR DARK_GRAY}\n"
	.string "however. Without Medicham and\l"
	.string "Manectric, we'll lose a lot of firepower.$"

RivetshoreCity_Assembly_Trigger_Text_30:
# 161 "data//maps/RivetshoreCity/scripts.pory"
	.string "Time is of the essence, {COLOR RED}Raazi{COLOR DARK_GRAY}.\n"
	.string "We need someone to go now.$"

RivetshoreCity_Assembly_Trigger_Text_31:
# 162 "data//maps/RivetshoreCity/scripts.pory"
	.string "Then I propose {COLOR GREEN}Kohla{COLOR DARK_GRAY}.\p"
	.string "He's a star and I can personally\n"
	.string "vouch for his strength.$"

RivetshoreCity_Assembly_Trigger_Text_32:
# 165 "data//maps/RivetshoreCity/scripts.pory"
	.string "Did he beat you, {COLOR RED}Raazi{COLOR DARK_GRAY}?$"

RivetshoreCity_Assembly_Trigger_Text_33:
# 166 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes. He's a fearsome trainer.\p"
	.string "Not to mention - he's been fighting\n"
	.string "{COLOR BLUE}Team Somber{COLOR DARK_GRAY} from the start.\p"
	.string "His dedication to the cause is far\n"
	.string "beyond the rest of us combined.$"

RivetshoreCity_Assembly_Trigger_Text_34:
# 170 "data//maps/RivetshoreCity/scripts.pory"
	.string "Right then. Those in favour of sending\n"
	.string "{COLOR GREEN}Kohla{COLOR DARK_GRAY} ahead?$"

RivetshoreCity_Assembly_Trigger_Text_35:
# 172 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yeah!$"

RivetshoreCity_Assembly_Trigger_Text_36:
# 173 "data//maps/RivetshoreCity/scripts.pory"
	.string "Of course!$"

RivetshoreCity_Assembly_Trigger_Text_37:
# 174 "data//maps/RivetshoreCity/scripts.pory"
	.string "Without question.$"

RivetshoreCity_Assembly_Trigger_Text_38:
# 175 "data//maps/RivetshoreCity/scripts.pory"
	.string "He's the best choice.$"

RivetshoreCity_Assembly_Trigger_Text_39:
# 176 "data//maps/RivetshoreCity/scripts.pory"
	.string "Needless to say, detective,\n"
	.string "we're all in favour.\p"
	.string "{COLOR GREEN}Kohla{COLOR DARK_GRAY}, you have the respect of all the\n"
	.string "other leaders in Cormoria.\p"
	.string "We're counting on you.\p"
	.string "I'm not going to ask whether you're up\n"
	.string "to the task...because I know you are.$"

RivetshoreCity_Assembly_Trigger_Text_40:
# 180 "data//maps/RivetshoreCity/scripts.pory"
	.string "{COLOR GREEN}Kohla{COLOR DARK_GRAY} - you're coming with us on the\n"
	.string "speedboat then.\p"
	.string "There's a cruise ship that's scheduled\n"
	.string "to leave soon. The other Gym Leaders\l"
	.string "can follow us on that.\p"
	.string "Let's get to it!$"

RivetshoreCity_Assembly_Trigger_Text_41:
# 211 "data//maps/RivetshoreCity/scripts.pory"
	.string "I'm heading back to the quarry.\n"
	.string "The rest of you - wait in the harbor.$"

RivetshoreCity_NPC_StorageBaySailor_Text_0:
# 264 "data//maps/RivetshoreCity/scripts.pory"
	.string "This is the storage bay. We're loading\n"
	.string "supplies for the S.S. Elegant!\p"
	.string "What - you trying to stow away?\p"
	.string "Scram!$"

RivetshoreCity_NPC_1_Text_0:
# 270 "data//maps/RivetshoreCity/scripts.pory"
	.string "Look! Look! My footprints stay on the\n"
	.string "sand.$"

RivetshoreCity_NPC_2_Text_0:
# 275 "data//maps/RivetshoreCity/scripts.pory"
	.string "They've turned this town into a\n"
	.string "monstrosity! It used to be a beautiful\l"
	.string "fishing spot until they built the quarry\l"
	.string "and drove all the Pokémon away.$"

RivetshoreCity_NPC_3_Text_0:
# 280 "data//maps/RivetshoreCity/scripts.pory"
	.string "I wanted to go on the SS Elegant cruise\n"
	.string "but I couldn't get a ticket!$"

RivetshoreCity_NPC_4_Text_0:
# 285 "data//maps/RivetshoreCity/scripts.pory"
	.string "My house has rickety stairs! I'm going\n"
	.string "to sue Rivetshore Construction.$"

RivetshoreCity_NPC_5_Text_0:
# 290 "data//maps/RivetshoreCity/scripts.pory"
	.string "I heard there was a secret shopkeeper\n"
	.string "selling rare items here!\p"
	.string "But these shopkeepers just have the\n"
	.string "regular stuff...was it just a rumour?$"

RivetshoreCity_NPC_6_Text_0:
# 295 "data//maps/RivetshoreCity/scripts.pory"
	.string "Whose boat is that floating over there?$"

RivetshoreCity_NPC_7_Text_0:
# 300 "data//maps/RivetshoreCity/scripts.pory"
	.string "Today's a great day to walk at the\n"
	.string "harbor, but yesterday was so hot!$"

RivetshoreCity_NPC_8_Text_0:
# 305 "data//maps/RivetshoreCity/scripts.pory"
	.string "Shoo, child! Don't disturb me.$"

RivetshoreCity_NPC_9_Text_0:
# 310 "data//maps/RivetshoreCity/scripts.pory"
	.string "What am I doing here? Enjoying the sea\n"
	.string "breeze, of course!\p"
	.string "...\p"
	.string "Fine. My boat drifted away so I'm\n"
	.string "waiting to get picked up.$"

RivetshoreCity_Market_Shop_Secret_Text_0:
# 350 "data//maps/RivetshoreCity/scripts.pory"
	.string "Greta$"

RivetshoreCity_Market_Shop_Secret_Text_1:
# 351 "data//maps/RivetshoreCity/scripts.pory"
	.string "Hello {PLAYER}! Surprised?\n"
	.string "I'm done traveling. I think a storefront\l"
	.string "is better for business. But I couldn't\l"
	.string "get a spot at the market!\p"
	.string "What'll you buy today?$"
