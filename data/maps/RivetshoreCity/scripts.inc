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
	.byte 0


RivetshoreCity_Gabrielle_Trigger::
# 29 "data//maps/RivetshoreCity/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_GAB, RivetshoreCity_Gabrielle_Trigger_2
# 31 "data//maps/RivetshoreCity/scripts.pory"
	lockall
# 33 "data//maps/RivetshoreCity/scripts.pory"
	addobject LOCALID_GAB
# 35 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RivetshoreCity_Gabrielle_Trigger_Movement_0
# 36 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GAB, RivetshoreCity_Gabrielle_Trigger_Movement_1
# 37 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 39 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Gabrielle_Trigger_Text_0, RivetshoreCity_Gabrielle_Trigger_Text_1
# 41 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GAB, RivetshoreCity_Gabrielle_Trigger_Movement_2
# 42 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 43 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_GAB
# 46 "data//maps/RivetshoreCity/scripts.pory"
	setvar VAR_RIVETSHORE_CEO_QUEST, 0
# 48 "data//maps/RivetshoreCity/scripts.pory"
	setflag FLAG_RIVETSHORE_GAB
# 49 "data//maps/RivetshoreCity/scripts.pory"
	releaseall
	end

RivetshoreCity_Gabrielle_Trigger_2:
	end


RivetshoreCity_Assembly_Trigger::
# 60 "data//maps/RivetshoreCity/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreCity_Assembly_Trigger_2
# 64 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_VINIEL
# 65 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_CARONA
# 68 "data//maps/RivetshoreCity/scripts.pory"
	special SpawnCameraObject
# 69 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_0
# 70 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 74 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 75 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 76 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_1
# 78 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 79 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 80 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_2, RivetshoreCity_Assembly_Trigger_Text_3
# 81 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_3
# 82 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 83 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_4, RivetshoreCity_Assembly_Trigger_Text_5
# 84 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_7
# 87 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 88 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 89 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_8
# 90 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_4
# 91 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 92 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_10
# 97 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 98 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 99 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_11
# 100 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 101 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 102 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_12
# 103 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 104 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 105 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_14
# 106 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_5
# 107 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 108 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_16
# 110 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 111 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 112 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_17
# 114 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_6
# 115 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 116 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_18
# 117 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_19
# 119 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 120 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 121 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_20
# 123 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_21
# 124 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_7
# 125 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 126 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_22
# 127 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_1
# 128 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 129 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_23, RivetshoreCity_Assembly_Trigger_Text_24
# 131 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 132 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 133 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 134 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_5
# 135 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_5
# 136 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 137 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_25
# 139 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_1
# 140 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 141 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_23, RivetshoreCity_Assembly_Trigger_Text_26
# 143 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_5
# 144 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 145 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_27
# 147 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_8
# 148 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 149 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_28
# 152 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 153 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 154 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_29
# 155 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_5
# 156 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 157 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_30
# 158 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_31
# 159 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_6
# 160 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 161 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_32
# 162 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_33
# 164 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_6
# 165 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 166 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_34
# 168 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_35
# 169 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_4, RivetshoreCity_Assembly_Trigger_Text_36
# 170 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_37
# 171 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_38
# 172 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_39
# 174 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_8
# 175 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 176 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_40
# 179 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_9
# 180 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_10
# 181 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_10
# 182 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 183 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 185 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_9
# 186 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_10
# 187 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 188 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_DET1
# 190 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_9
# 191 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 192 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_DET2
# 194 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_11
# 195 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 198 "data//maps/RivetshoreCity/scripts.pory"
	playse SE_SHIP
# 199 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_SPEEDBOAT, RivetshoreCity_Assembly_Trigger_Movement_12
# 200 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 202 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_13
# 203 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 205 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 206 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 207 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_41
# 209 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_14
# 210 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_15
# 211 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_16
# 212 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_17
# 213 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 214 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_GLORIA
# 216 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_10
# 217 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_18
# 218 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_9
# 219 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 220 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_INGER
# 222 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_9
# 223 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_9
# 224 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 225 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_ARIANA
# 227 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_15
# 228 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 229 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_JANIA
# 232 "data//maps/RivetshoreCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 233 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_RAAZI
# 234 "data//maps/RivetshoreCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 236 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Gabrielle_Trigger_Movement_2
# 237 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 238 "data//maps/RivetshoreCity/scripts.pory"
	special RemoveCameraObject
# 241 "data//maps/RivetshoreCity/scripts.pory"
	setflag FLAG_RIVETSHORE_ASSEMBLY
# 242 "data//maps/RivetshoreCity/scripts.pory"
	releaseall
	end

RivetshoreCity_Assembly_Trigger_2:
	end


RivetshoreCity_NPC_StorageBaySailor::
# 260 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_StorageBaySailor_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_1::
# 266 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_2::
# 271 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_2_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_3::
# 276 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_3_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_4::
# 281 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_4_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_5::
# 286 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_5_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_6::
# 291 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_6_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_7::
# 296 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_7_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_8::
# 301 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_8_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_9::
# 306 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_9_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Market_Shop_1::
# 319 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 320 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 321 "data//maps/RivetshoreCity/scripts.pory"
	message gText_HowMayIServeYou
# 322 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 323 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_1
# 324 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 325 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


RivetshoreCity_Market_Shop_2::
# 331 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 332 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 333 "data//maps/RivetshoreCity/scripts.pory"
	message gText_HowMayIServeYou
# 334 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 335 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_2
# 336 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 337 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


RivetshoreCity_Market_Shop_Secret::
# 344 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 345 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 346 "data//maps/RivetshoreCity/scripts.pory"
	speakername RivetshoreCity_Market_Shop_Secret_Text_0
# 347 "data//maps/RivetshoreCity/scripts.pory"
	message RivetshoreCity_Market_Shop_Secret_Text_1
# 348 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 349 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_Secret
# 350 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 351 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


	.align 2
# 355 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_1:
# 356 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 357 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 358 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 359 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_NONE

	.align 2
# 362 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_2:
# 363 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM19
# 364 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM23
# 365 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM26
# 366 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM30
# 367 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM33
# 368 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM34
# 369 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM36
	.2byte ITEM_NONE

	.align 2
# 372 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_Secret:
# 373 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 374 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 375 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 376 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_MOON_STONE
# 377 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 378 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TIME_WATER
	.2byte ITEM_NONE

# 35 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Gabrielle_Trigger_Movement_0:
# 35 "data//maps/RivetshoreCity/scripts.pory"
	face_left
	step_end

# 36 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Gabrielle_Trigger_Movement_1:
# 36 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 36 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 36 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 36 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 36 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 36 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 36 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 36 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 36 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 36 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 41 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Gabrielle_Trigger_Movement_2:
# 41 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 41 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 41 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 41 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 41 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 41 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 41 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 41 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 69 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_0:
# 69 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 69 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 69 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 69 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 69 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 69 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 69 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 69 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 74 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_1:
# 74 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_down
	step_end

# 78 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_2:
# 78 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_right
	step_end

# 81 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_3:
# 81 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_left
# 81 "data//maps/RivetshoreCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 90 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_4:
# 90 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_left
	step_end

# 100 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_5:
# 100 "data//maps/RivetshoreCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 114 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_6:
# 114 "data//maps/RivetshoreCity/scripts.pory"
	emote_question_mark
	step_end

# 124 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_7:
# 124 "data//maps/RivetshoreCity/scripts.pory"
	face_right
	step_end

# 147 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_8:
# 147 "data//maps/RivetshoreCity/scripts.pory"
	face_down
	step_end

# 179 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_9:
# 179 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 180 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_10:
# 180 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 194 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_11:
# 194 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 194 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 194 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 194 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 194 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 194 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 194 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 194 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 194 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 194 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 199 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_12:
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
	step_end

# 202 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_13:
# 202 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 202 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 202 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 202 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 202 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 202 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 202 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 202 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 202 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 202 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 209 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_14:
# 209 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 209 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 210 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_15:
# 210 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 210 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 211 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_16:
# 211 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 211 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 212 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_17:
# 212 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 212 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 217 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_18:
# 217 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

RivetshoreCity_Gabrielle_Trigger_Text_0:
# 39 "data//maps/RivetshoreCity/scripts.pory"
	.string "Gabrielle$"

RivetshoreCity_Gabrielle_Trigger_Text_1:
# 39 "data//maps/RivetshoreCity/scripts.pory"
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
# 76 "data//maps/RivetshoreCity/scripts.pory"
	.string "Detective$"

RivetshoreCity_Assembly_Trigger_Text_1:
# 76 "data//maps/RivetshoreCity/scripts.pory"
	.string "Thank you gym leaders for assembling\n"
	.string "here on such short notice.$"

RivetshoreCity_Assembly_Trigger_Text_2:
# 80 "data//maps/RivetshoreCity/scripts.pory"
	.string "???$"

RivetshoreCity_Assembly_Trigger_Text_3:
# 80 "data//maps/RivetshoreCity/scripts.pory"
	.string "It's our duty, detectives.\n"
	.string "No need to thank us.$"

RivetshoreCity_Assembly_Trigger_Text_4:
# 83 "data//maps/RivetshoreCity/scripts.pory"
	.string "Ariana$"

RivetshoreCity_Assembly_Trigger_Text_5:
# 83 "data//maps/RivetshoreCity/scripts.pory"
	.string "Easy for you to say, Raazi!\p"
	.string "You live here. Inger and I came all the\n"
	.string "way from the other side of Cormoria!$"

RivetshoreCity_Assembly_Trigger_Text_6:
# 84 "data//maps/RivetshoreCity/scripts.pory"
	.string "Raazi$"

RivetshoreCity_Assembly_Trigger_Text_7:
# 84 "data//maps/RivetshoreCity/scripts.pory"
	.string "Which is also your duty.$"

RivetshoreCity_Assembly_Trigger_Text_8:
# 89 "data//maps/RivetshoreCity/scripts.pory"
	.string "I don't see all of you though.\n"
	.string "Who's missing?$"

RivetshoreCity_Assembly_Trigger_Text_9:
# 92 "data//maps/RivetshoreCity/scripts.pory"
	.string "Gloria$"

RivetshoreCity_Assembly_Trigger_Text_10:
# 92 "data//maps/RivetshoreCity/scripts.pory"
	.string "Viniel and Carona sent word - they're on\n"
	.string "their way. They'll take some time,\l"
	.string "considering how remote they are.$"

RivetshoreCity_Assembly_Trigger_Text_11:
# 99 "data//maps/RivetshoreCity/scripts.pory"
	.string "Unfortunately we don't have time to\n"
	.string "wait for them.\p"
	.string "Allow us to explain the current\n"
	.string "situation as it stands.\p"
	.string "You all know about the disappearance\n"
	.string "of Professor Tenebris in connection\l"
	.string "with the dreamstones and Team Somber's\l"
	.string "involvement in this case.$"

RivetshoreCity_Assembly_Trigger_Text_12:
# 102 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes.$"

RivetshoreCity_Assembly_Trigger_Text_13:
# 105 "data//maps/RivetshoreCity/scripts.pory"
	.string "Jania$"

RivetshoreCity_Assembly_Trigger_Text_14:
# 105 "data//maps/RivetshoreCity/scripts.pory"
	.string "I hope the Professor is safe,\n"
	.string "wherever she is.$"

RivetshoreCity_Assembly_Trigger_Text_15:
# 108 "data//maps/RivetshoreCity/scripts.pory"
	.string "Inger$"

RivetshoreCity_Assembly_Trigger_Text_16:
# 108 "data//maps/RivetshoreCity/scripts.pory"
	.string "Just you watch - I'm going to teach\n"
	.string "Team Somber a lesson!$"

RivetshoreCity_Assembly_Trigger_Text_17:
# 112 "data//maps/RivetshoreCity/scripts.pory"
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
# 116 "data//maps/RivetshoreCity/scripts.pory"
	.string "The location?$"

RivetshoreCity_Assembly_Trigger_Text_19:
# 117 "data//maps/RivetshoreCity/scripts.pory"
	.string "An uncharted island off the coast.\n"
	.string "Further east from here.$"

RivetshoreCity_Assembly_Trigger_Text_20:
# 121 "data//maps/RivetshoreCity/scripts.pory"
	.string "So that explains the heatwave\n"
	.string "we had here yesterday.\p"
	.string "It must have been Team Somber's doing.$"

RivetshoreCity_Assembly_Trigger_Text_21:
# 123 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla here has been working the case.\p"
	.string "He's handed over his Gym Leader duties\n"
	.string "to the next Ace Rookie, and is now\l"
	.string "pursuing Team Somber full-time.$"

RivetshoreCity_Assembly_Trigger_Text_22:
# 126 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla - go on and tell them about the\n"
	.string "Ancient Terror.$"

RivetshoreCity_Assembly_Trigger_Text_23:
# 129 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla$"

RivetshoreCity_Assembly_Trigger_Text_24:
# 129 "data//maps/RivetshoreCity/scripts.pory"
	.string "Right, yes, well.\p"
	.string "Ahem.\p"
	.string "So, well...they...they've captured the\n"
	.string "Ancient Terror.$"

RivetshoreCity_Assembly_Trigger_Text_25:
# 137 "data//maps/RivetshoreCity/scripts.pory"
	.string "What? How?$"

RivetshoreCity_Assembly_Trigger_Text_26:
# 141 "data//maps/RivetshoreCity/scripts.pory"
	.string "My...ex-colleague and I chased them\n"
	.string "into Ancient Cormoria through a\l"
	.string "dreamstone and Melea captured the\l"
	.string "Ancient Terror with a Master Ball!$"

RivetshoreCity_Assembly_Trigger_Text_27:
# 145 "data//maps/RivetshoreCity/scripts.pory"
	.string "They were strong enough without\n"
	.string "it...but with the Ancient Terror, they'll\l"
	.string "be unstoppable!$"

RivetshoreCity_Assembly_Trigger_Text_28:
# 149 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes...which is why we need the combined\n"
	.string "power of the eight strongest trainers\l"
	.string "in all of Cormoria.\p"
	.string "We think this heatwave has something\n"
	.string "to do with the Ancient Terror...and we\l"
	.string "also believe worse is on the way.\p"
	.string "That's why we need to get to this\n"
	.string "uncharted island ASAP!$"

RivetshoreCity_Assembly_Trigger_Text_29:
# 154 "data//maps/RivetshoreCity/scripts.pory"
	.string "We should wait for Viniel and Carona\n"
	.string "however. Without Medicham and\l"
	.string "Manectric, we'll lose a lot of firepower.$"

RivetshoreCity_Assembly_Trigger_Text_30:
# 157 "data//maps/RivetshoreCity/scripts.pory"
	.string "Time is of the essence, Raazi.\n"
	.string "We need someone to go now.$"

RivetshoreCity_Assembly_Trigger_Text_31:
# 158 "data//maps/RivetshoreCity/scripts.pory"
	.string "Then I propose Kohla.\p"
	.string "He's a star and I can personally\n"
	.string "vouch for his strength.$"

RivetshoreCity_Assembly_Trigger_Text_32:
# 161 "data//maps/RivetshoreCity/scripts.pory"
	.string "Did he beat you, Raazi?$"

RivetshoreCity_Assembly_Trigger_Text_33:
# 162 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes. He's a fearsome trainer.\p"
	.string "Not to mention - he's been fighting\n"
	.string "Team Somber from the start.\p"
	.string "His dedication to the cause is far\n"
	.string "beyond the rest of us combined.$"

RivetshoreCity_Assembly_Trigger_Text_34:
# 166 "data//maps/RivetshoreCity/scripts.pory"
	.string "Right then. Those in favour of sending\n"
	.string "Kohla ahead?$"

RivetshoreCity_Assembly_Trigger_Text_35:
# 168 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yeah!$"

RivetshoreCity_Assembly_Trigger_Text_36:
# 169 "data//maps/RivetshoreCity/scripts.pory"
	.string "Of course!$"

RivetshoreCity_Assembly_Trigger_Text_37:
# 170 "data//maps/RivetshoreCity/scripts.pory"
	.string "Without question.$"

RivetshoreCity_Assembly_Trigger_Text_38:
# 171 "data//maps/RivetshoreCity/scripts.pory"
	.string "He's the best choice.$"

RivetshoreCity_Assembly_Trigger_Text_39:
# 172 "data//maps/RivetshoreCity/scripts.pory"
	.string "Needless to say, detective,\n"
	.string "we're all in favour.\p"
	.string "Kohla, you have the respect of all the\n"
	.string "other leaders in Cormoria.\p"
	.string "We're counting on you.\p"
	.string "I'm not going to ask whether you're up\n"
	.string "to the task...because I know you are.$"

RivetshoreCity_Assembly_Trigger_Text_40:
# 176 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla - you're coming with us on the\n"
	.string "speedboat then.\p"
	.string "There's a cruise ship that's scheduled\n"
	.string "to leave soon. The other Gym Leaders\l"
	.string "can follow us on that.\p"
	.string "Let's get to it!$"

RivetshoreCity_Assembly_Trigger_Text_41:
# 207 "data//maps/RivetshoreCity/scripts.pory"
	.string "I'm heading back to the quarry.\n"
	.string "The rest of you - wait in the harbor.$"

RivetshoreCity_NPC_StorageBaySailor_Text_0:
# 260 "data//maps/RivetshoreCity/scripts.pory"
	.string "This is the storage bay. We're loading\n"
	.string "supplies for the S.S. Elegant!\p"
	.string "What - you trying to stow away?\p"
	.string "Scram!$"

RivetshoreCity_NPC_1_Text_0:
# 266 "data//maps/RivetshoreCity/scripts.pory"
	.string "Look! Look! My footprints stay on the\n"
	.string "sand.$"

RivetshoreCity_NPC_2_Text_0:
# 271 "data//maps/RivetshoreCity/scripts.pory"
	.string "They've turned this town into a\n"
	.string "monstrosity! It used to be a beautiful\l"
	.string "fishing spot until they built the quarry\l"
	.string "and drove all the Pokémon away.$"

RivetshoreCity_NPC_3_Text_0:
# 276 "data//maps/RivetshoreCity/scripts.pory"
	.string "I wanted to go on the SS Elegant cruise\n"
	.string "but I couldn't get a ticket!$"

RivetshoreCity_NPC_4_Text_0:
# 281 "data//maps/RivetshoreCity/scripts.pory"
	.string "My house has rickety stairs! I'm going\n"
	.string "to sue Rivetshore Construction.$"

RivetshoreCity_NPC_5_Text_0:
# 286 "data//maps/RivetshoreCity/scripts.pory"
	.string "I heard there was a secret shopkeeper\n"
	.string "selling rare items here!\p"
	.string "But these shopkeepers just have the\n"
	.string "regular stuff...was it just a rumour?$"

RivetshoreCity_NPC_6_Text_0:
# 291 "data//maps/RivetshoreCity/scripts.pory"
	.string "Whose boat is that floating over there?$"

RivetshoreCity_NPC_7_Text_0:
# 296 "data//maps/RivetshoreCity/scripts.pory"
	.string "Today's a great day to walk at the\n"
	.string "harbor, but yesterday was so hot!$"

RivetshoreCity_NPC_8_Text_0:
# 301 "data//maps/RivetshoreCity/scripts.pory"
	.string "Shoo, child! Don't disturb me.$"

RivetshoreCity_NPC_9_Text_0:
# 306 "data//maps/RivetshoreCity/scripts.pory"
	.string "What am I doing here? Enjoying the sea\n"
	.string "breeze, of course!\p"
	.string "...\p"
	.string "Fine. My boat drifted away so I'm\n"
	.string "waiting to get picked up.$"

RivetshoreCity_Market_Shop_Secret_Text_0:
# 346 "data//maps/RivetshoreCity/scripts.pory"
	.string "Greta$"

RivetshoreCity_Market_Shop_Secret_Text_1:
# 347 "data//maps/RivetshoreCity/scripts.pory"
	.string "Hello {PLAYER}! Surprised?\n"
	.string "I'm done traveling. I think a storefront\l"
	.string "is better for business. But I couldn't\l"
	.string "get a spot at the market!\p"
	.string "What'll you buy today?$"
