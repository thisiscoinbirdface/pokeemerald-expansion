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
# 31 "data//maps/RivetshoreCity/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_GAB, RivetshoreCity_Gabrielle_Trigger_2
# 33 "data//maps/RivetshoreCity/scripts.pory"
	lockall
# 35 "data//maps/RivetshoreCity/scripts.pory"
	addobject LOCALID_GAB
# 37 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_Gabrielle_Trigger_Movement_0
# 38 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GAB, RivetshoreCity_Gabrielle_Trigger_Movement_1
# 39 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 41 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Gabrielle_Trigger_Text_0, RivetshoreCity_Gabrielle_Trigger_Text_1
# 43 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GAB, RivetshoreCity_Gabrielle_Trigger_Movement_2
# 44 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 45 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_GAB
# 48 "data//maps/RivetshoreCity/scripts.pory"
	setvar VAR_RIVETSHORE_CEO_QUEST, 0
# 50 "data//maps/RivetshoreCity/scripts.pory"
	setflag FLAG_RIVETSHORE_GAB
# 51 "data//maps/RivetshoreCity/scripts.pory"
	releaseall
	end

RivetshoreCity_Gabrielle_Trigger_2:
	end


RivetshoreCity_Assembly_Trigger::
# 62 "data//maps/RivetshoreCity/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreCity_Assembly_Trigger_2
# 66 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_VINIEL
# 67 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_CARONA
# 70 "data//maps/RivetshoreCity/scripts.pory"
	special SpawnCameraObject
# 71 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_0
# 72 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 76 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 77 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 78 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_1
# 80 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 81 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 82 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_2, RivetshoreCity_Assembly_Trigger_Text_3
# 83 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_3
# 84 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 85 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_4, RivetshoreCity_Assembly_Trigger_Text_5
# 86 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_7
# 89 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 90 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 91 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_8
# 92 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_4
# 93 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 94 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_10
# 99 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 100 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 101 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_11
# 102 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 103 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 104 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_12
# 105 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 106 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 107 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_14
# 108 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_5
# 109 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 110 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_16
# 112 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 113 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 114 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_17
# 116 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_6
# 117 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 118 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_18
# 119 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_19
# 121 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 122 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 123 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_20
# 125 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_21
# 126 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_7
# 127 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 128 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_22
# 129 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_1
# 130 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 131 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_23, RivetshoreCity_Assembly_Trigger_Text_24
# 133 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 134 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 135 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 136 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_5
# 137 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_5
# 138 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 139 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_25
# 141 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_1
# 142 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 143 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_23, RivetshoreCity_Assembly_Trigger_Text_26
# 145 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_5
# 146 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 147 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_27
# 149 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_8
# 150 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 151 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_28
# 154 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 155 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 156 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_29
# 157 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_5
# 158 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 159 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_30
# 160 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_31
# 161 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_6
# 162 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 163 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_32
# 164 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_33
# 166 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_6
# 167 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 168 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_34
# 170 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_35
# 171 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_4, RivetshoreCity_Assembly_Trigger_Text_36
# 172 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_37
# 173 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_38
# 174 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_39
# 176 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_8
# 177 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 178 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_40
# 181 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_9
# 182 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_10
# 183 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_10
# 184 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 185 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 187 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_9
# 188 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_10
# 189 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 190 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_DET1
# 192 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_9
# 193 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 194 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_DET2
# 196 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_11
# 197 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 200 "data//maps/RivetshoreCity/scripts.pory"
	playse SE_SHIP
# 201 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_SPEEDBOAT, RivetshoreCity_Assembly_Trigger_Movement_12
# 202 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 204 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_13
# 205 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 207 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 208 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 209 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_41
# 211 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_14
# 212 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_15
# 213 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_16
# 214 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_17
# 215 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 216 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_GLORIA
# 218 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_10
# 219 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_18
# 220 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_9
# 221 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 222 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_INGER
# 224 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_9
# 225 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_9
# 226 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 227 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_ARIANA
# 229 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_15
# 230 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 231 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_JANIA
# 234 "data//maps/RivetshoreCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 235 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_RAAZI
# 236 "data//maps/RivetshoreCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 238 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Gabrielle_Trigger_Movement_2
# 239 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 240 "data//maps/RivetshoreCity/scripts.pory"
	special RemoveCameraObject
# 243 "data//maps/RivetshoreCity/scripts.pory"
	completesubquest QUEST_STOP_TEAM_SOMBER, SUB_QUEST_2
# 244 "data//maps/RivetshoreCity/scripts.pory"
	setflag FLAG_RIVETSHORE_ASSEMBLY
# 245 "data//maps/RivetshoreCity/scripts.pory"
	releaseall
	end

RivetshoreCity_Assembly_Trigger_2:
	end


RivetshoreCity_NPC_StorageBayDude::
# 261 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_StorageBayDude_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_StorageBaySailor::
# 267 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_StorageBaySailor_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_1::
# 273 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_2::
# 278 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_2_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_3::
# 283 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_3_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_4::
# 288 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_4_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_5::
# 293 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_5_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_6::
# 298 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_6_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_7::
# 303 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_7_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_8::
# 308 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_8_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_9::
# 313 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_9_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Market_Shop_1::
# 326 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 327 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 328 "data//maps/RivetshoreCity/scripts.pory"
	message gText_HowMayIServeYou
# 329 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 330 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_1
# 331 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 332 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


RivetshoreCity_Market_Shop_2::
# 338 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 339 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 340 "data//maps/RivetshoreCity/scripts.pory"
	message gText_HowMayIServeYou
# 341 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 342 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_2
# 343 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 344 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


RivetshoreCity_Market_Shop_Secret::
# 351 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 352 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 353 "data//maps/RivetshoreCity/scripts.pory"
	speakername RivetshoreCity_Market_Shop_Secret_Text_0
# 354 "data//maps/RivetshoreCity/scripts.pory"
	message RivetshoreCity_Market_Shop_Secret_Text_1
# 355 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 356 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_Secret
# 357 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 358 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


	.align 2
# 362 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_1:
# 363 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 364 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 365 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 366 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 367 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 368 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_THICK_CLUB
	.2byte ITEM_NONE

	.align 2
# 371 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_2:
# 372 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM19
# 373 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM23
# 374 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM26
# 375 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM30
# 376 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM33
# 377 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM34
# 378 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM36
	.2byte ITEM_NONE

	.align 2
# 381 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_Secret:
# 382 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 383 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 384 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 385 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_MOON_STONE
# 386 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 387 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TIME_WATER
	.2byte ITEM_NONE

RivetshoreCity_Mareanie::
# 402 "data//maps/RivetshoreCity/scripts.pory"
	lockall
# 403 "data//maps/RivetshoreCity/scripts.pory"
	playmoncry SPECIES_MAREANIE, CRY_MODE_NORMAL
# 404 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_Mareanie_Text_0
# 405 "data//maps/RivetshoreCity/scripts.pory"
	releaseall
	end


RivetshoreCity_Aron::
# 409 "data//maps/RivetshoreCity/scripts.pory"
	playmoncry SPECIES_ARON, CRY_MODE_NORMAL
# 410 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_Aron_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Geodude::
# 414 "data//maps/RivetshoreCity/scripts.pory"
	playmoncry SPECIES_GEODUDE, CRY_MODE_NORMAL
# 415 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_Geodude_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Surskit::
# 419 "data//maps/RivetshoreCity/scripts.pory"
	playmoncry SPECIES_SURSKIT, CRY_MODE_NORMAL
# 420 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_Surskit_Text_0, MSGBOX_NPC
	end


# 37 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Gabrielle_Trigger_Movement_0:
# 37 "data//maps/RivetshoreCity/scripts.pory"
	face_left
	step_end

# 38 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Gabrielle_Trigger_Movement_1:
# 38 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 38 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 38 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 38 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 38 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 38 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 38 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 38 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 38 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 38 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 43 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Gabrielle_Trigger_Movement_2:
# 43 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 43 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 43 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 43 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 43 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 43 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 43 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 43 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 71 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_0:
# 71 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 71 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 71 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 71 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 71 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 71 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 71 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 71 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 76 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_1:
# 76 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_down
	step_end

# 80 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_2:
# 80 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_right
	step_end

# 83 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_3:
# 83 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_left
# 83 "data//maps/RivetshoreCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 92 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_4:
# 92 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_left
	step_end

# 102 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_5:
# 102 "data//maps/RivetshoreCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 116 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_6:
# 116 "data//maps/RivetshoreCity/scripts.pory"
	emote_question_mark
	step_end

# 126 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_7:
# 126 "data//maps/RivetshoreCity/scripts.pory"
	face_right
	step_end

# 149 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_8:
# 149 "data//maps/RivetshoreCity/scripts.pory"
	face_down
	step_end

# 181 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_9:
# 181 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 182 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_10:
# 182 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 196 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_11:
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 201 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_12:
# 201 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 201 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 201 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 201 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 201 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 201 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 201 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 201 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 201 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 201 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
	step_end

# 204 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_13:
# 204 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 204 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 204 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 204 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 204 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 204 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 204 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 204 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 204 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 204 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 211 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_14:
# 211 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 211 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 212 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_15:
# 212 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 212 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 213 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_16:
# 213 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 213 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 214 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_17:
# 214 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 214 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 219 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_18:
# 219 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

RivetshoreCity_Gabrielle_Trigger_Text_0:
# 41 "data//maps/RivetshoreCity/scripts.pory"
	.string "Gabrielle$"

RivetshoreCity_Gabrielle_Trigger_Text_1:
# 41 "data//maps/RivetshoreCity/scripts.pory"
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
# 78 "data//maps/RivetshoreCity/scripts.pory"
	.string "Detective$"

RivetshoreCity_Assembly_Trigger_Text_1:
# 78 "data//maps/RivetshoreCity/scripts.pory"
	.string "Thank you gym leaders for assembling\n"
	.string "here on such short notice.$"

RivetshoreCity_Assembly_Trigger_Text_2:
# 82 "data//maps/RivetshoreCity/scripts.pory"
	.string "???$"

RivetshoreCity_Assembly_Trigger_Text_3:
# 82 "data//maps/RivetshoreCity/scripts.pory"
	.string "It's our duty, detectives.\n"
	.string "No need to thank us.$"

RivetshoreCity_Assembly_Trigger_Text_4:
# 85 "data//maps/RivetshoreCity/scripts.pory"
	.string "Ariana$"

RivetshoreCity_Assembly_Trigger_Text_5:
# 85 "data//maps/RivetshoreCity/scripts.pory"
	.string "Easy for you to say, Raazi!\p"
	.string "You live here. Inger and I came all the\n"
	.string "way from the other side of Cormoria!$"

RivetshoreCity_Assembly_Trigger_Text_6:
# 86 "data//maps/RivetshoreCity/scripts.pory"
	.string "Raazi$"

RivetshoreCity_Assembly_Trigger_Text_7:
# 86 "data//maps/RivetshoreCity/scripts.pory"
	.string "Which is also your duty.$"

RivetshoreCity_Assembly_Trigger_Text_8:
# 91 "data//maps/RivetshoreCity/scripts.pory"
	.string "I don't see all of you though.\n"
	.string "Who's missing?$"

RivetshoreCity_Assembly_Trigger_Text_9:
# 94 "data//maps/RivetshoreCity/scripts.pory"
	.string "Gloria$"

RivetshoreCity_Assembly_Trigger_Text_10:
# 94 "data//maps/RivetshoreCity/scripts.pory"
	.string "Viniel and Carona sent word - they're on\n"
	.string "their way. They'll take some time,\l"
	.string "considering how remote they are.$"

RivetshoreCity_Assembly_Trigger_Text_11:
# 101 "data//maps/RivetshoreCity/scripts.pory"
	.string "Unfortunately we don't have time to\n"
	.string "wait for them.\p"
	.string "Allow us to explain the current\n"
	.string "situation as it stands.\p"
	.string "You all know about the disappearance\n"
	.string "of Professor Tenebris in connection\l"
	.string "with the dreamstones and Team Somber's\l"
	.string "involvement in this case.$"

RivetshoreCity_Assembly_Trigger_Text_12:
# 104 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes.$"

RivetshoreCity_Assembly_Trigger_Text_13:
# 107 "data//maps/RivetshoreCity/scripts.pory"
	.string "Jania$"

RivetshoreCity_Assembly_Trigger_Text_14:
# 107 "data//maps/RivetshoreCity/scripts.pory"
	.string "I hope the Professor is safe,\n"
	.string "wherever she is.$"

RivetshoreCity_Assembly_Trigger_Text_15:
# 110 "data//maps/RivetshoreCity/scripts.pory"
	.string "Inger$"

RivetshoreCity_Assembly_Trigger_Text_16:
# 110 "data//maps/RivetshoreCity/scripts.pory"
	.string "Just you watch - I'm going to teach\n"
	.string "Team Somber a lesson!$"

RivetshoreCity_Assembly_Trigger_Text_17:
# 114 "data//maps/RivetshoreCity/scripts.pory"
	.string "We regret to say that despite all our\n"
	.string "efforts, not a single trace of the\l"
	.string "Professor has yet been found.\p"
	.string "Nobody has seen her anywhere. Our\n"
	.string "working theory is that Team Somber is\l"
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
# 118 "data//maps/RivetshoreCity/scripts.pory"
	.string "The location?$"

RivetshoreCity_Assembly_Trigger_Text_19:
# 119 "data//maps/RivetshoreCity/scripts.pory"
	.string "An uncharted island off the coast.\n"
	.string "Further east from here.$"

RivetshoreCity_Assembly_Trigger_Text_20:
# 123 "data//maps/RivetshoreCity/scripts.pory"
	.string "So that explains the heatwave\n"
	.string "we had here yesterday.\p"
	.string "It must have been Team Somber's doing.$"

RivetshoreCity_Assembly_Trigger_Text_21:
# 125 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla here has been working the case.\p"
	.string "He's handed over his Gym Leader duties\n"
	.string "to the next Ace Rookie, and is now\l"
	.string "pursuing Team Somber full-time.$"

RivetshoreCity_Assembly_Trigger_Text_22:
# 128 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla - go on and tell them about the\n"
	.string "Ancient Terror.$"

RivetshoreCity_Assembly_Trigger_Text_23:
# 131 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla$"

RivetshoreCity_Assembly_Trigger_Text_24:
# 131 "data//maps/RivetshoreCity/scripts.pory"
	.string "Right, yes, well.\p"
	.string "Ahem.\p"
	.string "So, well...they...they've captured the\n"
	.string "Ancient Terror.$"

RivetshoreCity_Assembly_Trigger_Text_25:
# 139 "data//maps/RivetshoreCity/scripts.pory"
	.string "What? How?$"

RivetshoreCity_Assembly_Trigger_Text_26:
# 143 "data//maps/RivetshoreCity/scripts.pory"
	.string "My...ex-colleague and I chased them\n"
	.string "into Ancient Cormoria through a\l"
	.string "dreamstone and Melea captured the\l"
	.string "Ancient Terror with a Master Ball!$"

RivetshoreCity_Assembly_Trigger_Text_27:
# 147 "data//maps/RivetshoreCity/scripts.pory"
	.string "They were strong enough without\n"
	.string "it...but with the Ancient Terror, they'll\l"
	.string "be unstoppable!$"

RivetshoreCity_Assembly_Trigger_Text_28:
# 151 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes...which is why we need the combined\n"
	.string "power of the eight strongest trainers\l"
	.string "in all of Cormoria.\p"
	.string "We think this heatwave has something\n"
	.string "to do with the Ancient Terror...and we\l"
	.string "also believe worse is on the way.\p"
	.string "That's why we need to get to this\n"
	.string "uncharted island ASAP!$"

RivetshoreCity_Assembly_Trigger_Text_29:
# 156 "data//maps/RivetshoreCity/scripts.pory"
	.string "We should wait for Viniel and Carona\n"
	.string "however. Without Medicham and\l"
	.string "Manectric, we'll lose a lot of firepower.$"

RivetshoreCity_Assembly_Trigger_Text_30:
# 159 "data//maps/RivetshoreCity/scripts.pory"
	.string "Time is of the essence, Raazi.\n"
	.string "We need someone to go now.$"

RivetshoreCity_Assembly_Trigger_Text_31:
# 160 "data//maps/RivetshoreCity/scripts.pory"
	.string "Then I propose Kohla.\p"
	.string "He's a star and I can personally\n"
	.string "vouch for his strength.$"

RivetshoreCity_Assembly_Trigger_Text_32:
# 163 "data//maps/RivetshoreCity/scripts.pory"
	.string "Did he beat you, Raazi?$"

RivetshoreCity_Assembly_Trigger_Text_33:
# 164 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes. He's a fearsome trainer.\p"
	.string "Not to mention - he's been fighting\n"
	.string "Team Somber from the start.\p"
	.string "His dedication to the cause is far\n"
	.string "beyond the rest of us combined.$"

RivetshoreCity_Assembly_Trigger_Text_34:
# 168 "data//maps/RivetshoreCity/scripts.pory"
	.string "Right then. Those in favour of sending\n"
	.string "Kohla ahead?$"

RivetshoreCity_Assembly_Trigger_Text_35:
# 170 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yeah!$"

RivetshoreCity_Assembly_Trigger_Text_36:
# 171 "data//maps/RivetshoreCity/scripts.pory"
	.string "Of course!$"

RivetshoreCity_Assembly_Trigger_Text_37:
# 172 "data//maps/RivetshoreCity/scripts.pory"
	.string "Without question.$"

RivetshoreCity_Assembly_Trigger_Text_38:
# 173 "data//maps/RivetshoreCity/scripts.pory"
	.string "He's the best choice.$"

RivetshoreCity_Assembly_Trigger_Text_39:
# 174 "data//maps/RivetshoreCity/scripts.pory"
	.string "Needless to say, detective,\n"
	.string "we're all in favour.\p"
	.string "Kohla, you have the respect of all the\n"
	.string "other leaders in Cormoria.\p"
	.string "We're counting on you.\p"
	.string "I'm not going to ask whether you're up\n"
	.string "to the task...because I know you are.$"

RivetshoreCity_Assembly_Trigger_Text_40:
# 178 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla - you're coming with us on the\n"
	.string "speedboat then.\p"
	.string "There's a cruise ship that's scheduled\n"
	.string "to leave soon. The other Gym Leaders\l"
	.string "can follow us on that.\p"
	.string "Let's get to it!$"

RivetshoreCity_Assembly_Trigger_Text_41:
# 209 "data//maps/RivetshoreCity/scripts.pory"
	.string "I'm heading back to the quarry.\n"
	.string "The rest of you - wait in the harbor.$"

RivetshoreCity_NPC_StorageBayDude_Text_0:
# 261 "data//maps/RivetshoreCity/scripts.pory"
	.string "Hehehe...when that sailor isn't looking,\n"
	.string "I'll sneak in and stow away on board the\l"
	.string "S.S. Elegant!$"

RivetshoreCity_NPC_StorageBaySailor_Text_0:
# 267 "data//maps/RivetshoreCity/scripts.pory"
	.string "This is the storage bay. We're loading\n"
	.string "supplies for the S.S. Elegant!\p"
	.string "What - you trying to stow away?\p"
	.string "Scram!$"

RivetshoreCity_NPC_1_Text_0:
# 273 "data//maps/RivetshoreCity/scripts.pory"
	.string "Look! Look! My footprints stay on the\n"
	.string "sand.$"

RivetshoreCity_NPC_2_Text_0:
# 278 "data//maps/RivetshoreCity/scripts.pory"
	.string "They've turned this town into a\n"
	.string "monstrosity! It used to be a beautiful\l"
	.string "fishing spot until they built the quarry\l"
	.string "and drove all the Pokémon away.$"

RivetshoreCity_NPC_3_Text_0:
# 283 "data//maps/RivetshoreCity/scripts.pory"
	.string "I wanted to go on the SS Elegant cruise\n"
	.string "but I couldn't get a ticket!$"

RivetshoreCity_NPC_4_Text_0:
# 288 "data//maps/RivetshoreCity/scripts.pory"
	.string "My house has rickety stairs! I'm going\n"
	.string "to sue Rivetshore Construction.$"

RivetshoreCity_NPC_5_Text_0:
# 293 "data//maps/RivetshoreCity/scripts.pory"
	.string "I heard there was a secret shopkeeper\n"
	.string "selling rare items here!\p"
	.string "But these shopkeepers just have the\n"
	.string "regular stuff...was it just a rumour?$"

RivetshoreCity_NPC_6_Text_0:
# 298 "data//maps/RivetshoreCity/scripts.pory"
	.string "Whose boat is that floating over there?$"

RivetshoreCity_NPC_7_Text_0:
# 303 "data//maps/RivetshoreCity/scripts.pory"
	.string "Today's a great day to walk at the\n"
	.string "harbor, but yesterday was so hot!$"

RivetshoreCity_NPC_8_Text_0:
# 308 "data//maps/RivetshoreCity/scripts.pory"
	.string "Shoo, child! Don't disturb me.$"

RivetshoreCity_NPC_9_Text_0:
# 313 "data//maps/RivetshoreCity/scripts.pory"
	.string "What am I doing here? Enjoying the sea\n"
	.string "breeze, of course!\p"
	.string "...\p"
	.string "Fine. My boat drifted away so I'm\n"
	.string "waiting to get picked up.$"

RivetshoreCity_Market_Shop_Secret_Text_0:
# 353 "data//maps/RivetshoreCity/scripts.pory"
	.string "Greta$"

RivetshoreCity_Market_Shop_Secret_Text_1:
# 354 "data//maps/RivetshoreCity/scripts.pory"
	.string "Hello {PLAYER}! Surprised?\n"
	.string "I'm done traveling. I think a storefront\l"
	.string "is better for business. But I couldn't\l"
	.string "get a spot at the market!\p"
	.string "What'll you buy today?$"

RivetshoreCity_Mareanie_Text_0:
# 404 "data//maps/RivetshoreCity/scripts.pory"
	.string "Mareanie is peering into the water...\n"
	.string "It must be looking for a Corsola!$"

RivetshoreCity_Aron_Text_0:
# 410 "data//maps/RivetshoreCity/scripts.pory"
	.string "Aron is scurrying around!\n"
	.string "It's hard to squeeze through...$"

RivetshoreCity_Geodude_Text_0:
# 415 "data//maps/RivetshoreCity/scripts.pory"
	.string "Geodude thumps itself with its arms!\n"
	.string "Guess it doesn't hurt much.$"

RivetshoreCity_Surskit_Text_0:
# 420 "data//maps/RivetshoreCity/scripts.pory"
	.string "Surskit shkips around nervously...is it\n"
	.string "looking out for the prankster Pokémon?$"
