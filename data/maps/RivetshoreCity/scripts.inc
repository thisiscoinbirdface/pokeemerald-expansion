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
# 45 "data//maps/RivetshoreCity/scripts.pory"
	setflag FLAG_RIVETSHORE_GAB
# 46 "data//maps/RivetshoreCity/scripts.pory"
	releaseall
	end

RivetshoreCity_Gabrielle_Trigger_2:
	end


RivetshoreCity_Assembly_Trigger::
# 57 "data//maps/RivetshoreCity/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreCity_Assembly_Trigger_2
# 61 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_VINIEL
# 62 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_CARONA
# 65 "data//maps/RivetshoreCity/scripts.pory"
	special SpawnCameraObject
# 66 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_0
# 67 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 71 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 72 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 73 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_1
# 75 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 76 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 77 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_2, RivetshoreCity_Assembly_Trigger_Text_3
# 78 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_3
# 79 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 80 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_4, RivetshoreCity_Assembly_Trigger_Text_5
# 81 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_7
# 84 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 85 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 86 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_8
# 87 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_4
# 88 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 89 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_10
# 94 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 95 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 96 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_11
# 97 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 98 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 99 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_12
# 100 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 101 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 102 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_14
# 103 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_5
# 104 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 105 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_16
# 107 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 108 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 109 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_17
# 111 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_6
# 112 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 113 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_18
# 114 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_19
# 116 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 117 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 118 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_20
# 120 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_21
# 121 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_7
# 122 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 123 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_22
# 124 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_1
# 125 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 126 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_23, RivetshoreCity_Assembly_Trigger_Text_24
# 128 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 129 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 130 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 131 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_5
# 132 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_5
# 133 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 134 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_25
# 136 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_1
# 137 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 138 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_23, RivetshoreCity_Assembly_Trigger_Text_26
# 140 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_5
# 141 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 142 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_27
# 144 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_8
# 145 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 146 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_28
# 149 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 150 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 151 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_29
# 152 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_5
# 153 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 154 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_30
# 155 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_31
# 156 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_6
# 157 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 158 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_32
# 159 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_33
# 161 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_6
# 162 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 163 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_34
# 165 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_35
# 166 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_4, RivetshoreCity_Assembly_Trigger_Text_36
# 167 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_37
# 168 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_38
# 169 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_39
# 171 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_8
# 172 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 173 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_40
# 176 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_9
# 177 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_10
# 178 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_10
# 179 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 180 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 182 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_9
# 183 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_10
# 184 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 185 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_DET1
# 187 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_9
# 188 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 189 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_DET2
# 191 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_11
# 192 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 195 "data//maps/RivetshoreCity/scripts.pory"
	playse SE_SHIP
# 196 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_SPEEDBOAT, RivetshoreCity_Assembly_Trigger_Movement_12
# 197 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 199 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_13
# 200 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 202 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 203 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 204 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_41
# 206 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_14
# 207 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_15
# 208 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_16
# 209 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_17
# 210 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 211 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_GLORIA
# 213 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_10
# 214 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_18
# 215 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_9
# 216 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 217 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_INGER
# 219 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_9
# 220 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_9
# 221 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 222 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_ARIANA
# 224 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_15
# 225 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 226 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_JANIA
# 229 "data//maps/RivetshoreCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 230 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_RAAZI
# 231 "data//maps/RivetshoreCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 233 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Gabrielle_Trigger_Movement_2
# 234 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 235 "data//maps/RivetshoreCity/scripts.pory"
	special RemoveCameraObject
# 238 "data//maps/RivetshoreCity/scripts.pory"
	setflag FLAG_RIVETSHORE_ASSEMBLY
# 239 "data//maps/RivetshoreCity/scripts.pory"
	releaseall
	end

RivetshoreCity_Assembly_Trigger_2:
	end


RivetshoreCity_NPC_StorageBaySailor::
# 257 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_StorageBaySailor_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_1::
# 263 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_2::
# 268 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_2_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_3::
# 273 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_3_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_4::
# 278 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_4_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_5::
# 283 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_5_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_6::
# 288 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_6_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_7::
# 293 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_7_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_8::
# 298 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_8_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_9::
# 303 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_9_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Market_Shop_1::
# 316 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 317 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 318 "data//maps/RivetshoreCity/scripts.pory"
	message gText_HowMayIServeYou
# 319 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 320 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_1
# 321 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 322 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


RivetshoreCity_Market_Shop_2::
# 328 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 329 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 330 "data//maps/RivetshoreCity/scripts.pory"
	message gText_HowMayIServeYou
# 331 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 332 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_2
# 333 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 334 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


RivetshoreCity_Market_Shop_Secret::
# 341 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 342 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 343 "data//maps/RivetshoreCity/scripts.pory"
	speakername RivetshoreCity_Market_Shop_Secret_Text_0
# 344 "data//maps/RivetshoreCity/scripts.pory"
	message RivetshoreCity_Market_Shop_Secret_Text_1
# 345 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 346 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_Secret
# 347 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 348 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


	.align 2
# 352 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_1:
# 353 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 354 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 355 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 356 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_NONE

	.align 2
# 359 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_2:
# 360 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM04
# 361 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM15
# 362 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM24
# 363 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM30
# 364 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM35
# 365 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM38
	.2byte ITEM_NONE

	.align 2
# 368 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_Secret:
# 369 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 370 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 371 "data//maps/RivetshoreCity/scripts.pory"
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

# 66 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_0:
# 66 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 66 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 66 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 66 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 66 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 66 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 66 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 66 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 71 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_1:
# 71 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_down
	step_end

# 75 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_2:
# 75 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_right
	step_end

# 78 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_3:
# 78 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_left
# 78 "data//maps/RivetshoreCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 87 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_4:
# 87 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_left
	step_end

# 97 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_5:
# 97 "data//maps/RivetshoreCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 111 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_6:
# 111 "data//maps/RivetshoreCity/scripts.pory"
	emote_question_mark
	step_end

# 121 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_7:
# 121 "data//maps/RivetshoreCity/scripts.pory"
	face_right
	step_end

# 144 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_8:
# 144 "data//maps/RivetshoreCity/scripts.pory"
	face_down
	step_end

# 176 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_9:
# 176 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 177 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_10:
# 177 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 191 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_11:
# 191 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 191 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 191 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 191 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 191 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 191 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 191 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 191 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 191 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 191 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 196 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_12:
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 196 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
	step_end

# 199 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_13:
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 199 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 206 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_14:
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 207 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_15:
# 207 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 207 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 208 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_16:
# 208 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 208 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 209 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_17:
# 209 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 209 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 214 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_18:
# 214 "data//maps/RivetshoreCity/scripts.pory"
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
# 73 "data//maps/RivetshoreCity/scripts.pory"
	.string "Detective$"

RivetshoreCity_Assembly_Trigger_Text_1:
# 73 "data//maps/RivetshoreCity/scripts.pory"
	.string "Thank you gym leaders for assembling\n"
	.string "here on such short notice.$"

RivetshoreCity_Assembly_Trigger_Text_2:
# 77 "data//maps/RivetshoreCity/scripts.pory"
	.string "???$"

RivetshoreCity_Assembly_Trigger_Text_3:
# 77 "data//maps/RivetshoreCity/scripts.pory"
	.string "It's our duty, detectives.\n"
	.string "No need to thank us.$"

RivetshoreCity_Assembly_Trigger_Text_4:
# 80 "data//maps/RivetshoreCity/scripts.pory"
	.string "Ariana$"

RivetshoreCity_Assembly_Trigger_Text_5:
# 80 "data//maps/RivetshoreCity/scripts.pory"
	.string "Easy for you to say, Raazi!\p"
	.string "You live here. Inger and I came all the\n"
	.string "way from the other side of Cormoria!$"

RivetshoreCity_Assembly_Trigger_Text_6:
# 81 "data//maps/RivetshoreCity/scripts.pory"
	.string "Raazi$"

RivetshoreCity_Assembly_Trigger_Text_7:
# 81 "data//maps/RivetshoreCity/scripts.pory"
	.string "Which is also your duty.$"

RivetshoreCity_Assembly_Trigger_Text_8:
# 86 "data//maps/RivetshoreCity/scripts.pory"
	.string "I don't see all of you though.\n"
	.string "Who's missing?$"

RivetshoreCity_Assembly_Trigger_Text_9:
# 89 "data//maps/RivetshoreCity/scripts.pory"
	.string "Gloria$"

RivetshoreCity_Assembly_Trigger_Text_10:
# 89 "data//maps/RivetshoreCity/scripts.pory"
	.string "Viniel and Carona sent word - they're on\n"
	.string "their way. They'll take some time,\l"
	.string "considering how remote they are.$"

RivetshoreCity_Assembly_Trigger_Text_11:
# 96 "data//maps/RivetshoreCity/scripts.pory"
	.string "Unfortunately we don't have time to\n"
	.string "wait for them.\p"
	.string "Allow us to explain the current\n"
	.string "situation as it stands.\p"
	.string "You all know about the disappearance\n"
	.string "of Professor Tenebris in connection\l"
	.string "with the dreamstones and Team Somber's\l"
	.string "involvement in this case.$"

RivetshoreCity_Assembly_Trigger_Text_12:
# 99 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes.$"

RivetshoreCity_Assembly_Trigger_Text_13:
# 102 "data//maps/RivetshoreCity/scripts.pory"
	.string "Jania$"

RivetshoreCity_Assembly_Trigger_Text_14:
# 102 "data//maps/RivetshoreCity/scripts.pory"
	.string "I hope the Professor is safe,\n"
	.string "wherever she is.$"

RivetshoreCity_Assembly_Trigger_Text_15:
# 105 "data//maps/RivetshoreCity/scripts.pory"
	.string "Inger$"

RivetshoreCity_Assembly_Trigger_Text_16:
# 105 "data//maps/RivetshoreCity/scripts.pory"
	.string "Just you watch - I'm going to teach\n"
	.string "Team Somber a lesson!$"

RivetshoreCity_Assembly_Trigger_Text_17:
# 109 "data//maps/RivetshoreCity/scripts.pory"
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
# 113 "data//maps/RivetshoreCity/scripts.pory"
	.string "The location?$"

RivetshoreCity_Assembly_Trigger_Text_19:
# 114 "data//maps/RivetshoreCity/scripts.pory"
	.string "An uncharted island off the coast.\n"
	.string "Further east from here.$"

RivetshoreCity_Assembly_Trigger_Text_20:
# 118 "data//maps/RivetshoreCity/scripts.pory"
	.string "So that explains the heatwave\n"
	.string "we had here yesterday.\p"
	.string "It must have been Team Somber's doing.$"

RivetshoreCity_Assembly_Trigger_Text_21:
# 120 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla here has been working the case.\p"
	.string "He's handed over his Gym Leader duties\n"
	.string "to the next Ace Rookie, and is now\l"
	.string "pursuing Team Somber full-time.$"

RivetshoreCity_Assembly_Trigger_Text_22:
# 123 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla - go on and tell them about the\n"
	.string "Ancient Terror.$"

RivetshoreCity_Assembly_Trigger_Text_23:
# 126 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla$"

RivetshoreCity_Assembly_Trigger_Text_24:
# 126 "data//maps/RivetshoreCity/scripts.pory"
	.string "Right, yes, well.\p"
	.string "Ahem.\p"
	.string "So, well...they...they've captured the\n"
	.string "Ancient Terror.$"

RivetshoreCity_Assembly_Trigger_Text_25:
# 134 "data//maps/RivetshoreCity/scripts.pory"
	.string "What? How?$"

RivetshoreCity_Assembly_Trigger_Text_26:
# 138 "data//maps/RivetshoreCity/scripts.pory"
	.string "My...ex-colleague and I chased them\n"
	.string "into Ancient Cormoria through a\l"
	.string "dreamstone and Melea captured the\l"
	.string "Ancient Terror with a Master Ball!$"

RivetshoreCity_Assembly_Trigger_Text_27:
# 142 "data//maps/RivetshoreCity/scripts.pory"
	.string "They were strong enough without\n"
	.string "it...but with the Ancient Terror, they'll\l"
	.string "be unstoppable!$"

RivetshoreCity_Assembly_Trigger_Text_28:
# 146 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes...which is why we need the combined\n"
	.string "power of the eight strongest trainers\l"
	.string "in all of Cormoria.\p"
	.string "We think this heatwave has something\n"
	.string "to do with the Ancient Terror...and we\l"
	.string "also believe worse is on the way.\p"
	.string "That's why we need to get to this\n"
	.string "uncharted island ASAP!$"

RivetshoreCity_Assembly_Trigger_Text_29:
# 151 "data//maps/RivetshoreCity/scripts.pory"
	.string "We should wait for Viniel and Carona\n"
	.string "however. Without Medicham and\l"
	.string "Manectric, we'll lose a lot of firepower.$"

RivetshoreCity_Assembly_Trigger_Text_30:
# 154 "data//maps/RivetshoreCity/scripts.pory"
	.string "Time is of the essence, Raazi.\n"
	.string "We need someone to go now.$"

RivetshoreCity_Assembly_Trigger_Text_31:
# 155 "data//maps/RivetshoreCity/scripts.pory"
	.string "Then I propose Kohla.\p"
	.string "He's a star and I can personally\n"
	.string "vouch for his strength.$"

RivetshoreCity_Assembly_Trigger_Text_32:
# 158 "data//maps/RivetshoreCity/scripts.pory"
	.string "Did he beat you, Raazi?$"

RivetshoreCity_Assembly_Trigger_Text_33:
# 159 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes. He's a fearsome trainer.\p"
	.string "Not to mention - he's been fighting\n"
	.string "Team Somber from the start.\p"
	.string "His dedication to the cause is far\n"
	.string "beyond the rest of us combined.$"

RivetshoreCity_Assembly_Trigger_Text_34:
# 163 "data//maps/RivetshoreCity/scripts.pory"
	.string "Right then. Those in favour of sending\n"
	.string "Kohla ahead?$"

RivetshoreCity_Assembly_Trigger_Text_35:
# 165 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yeah!$"

RivetshoreCity_Assembly_Trigger_Text_36:
# 166 "data//maps/RivetshoreCity/scripts.pory"
	.string "Of course!$"

RivetshoreCity_Assembly_Trigger_Text_37:
# 167 "data//maps/RivetshoreCity/scripts.pory"
	.string "Without question.$"

RivetshoreCity_Assembly_Trigger_Text_38:
# 168 "data//maps/RivetshoreCity/scripts.pory"
	.string "He's the best choice.$"

RivetshoreCity_Assembly_Trigger_Text_39:
# 169 "data//maps/RivetshoreCity/scripts.pory"
	.string "Needless to say, detective,\n"
	.string "we're all in favour.\p"
	.string "Kohla, you have the respect of all the\n"
	.string "other leaders in Cormoria.\p"
	.string "We're counting on you.\p"
	.string "I'm not going to ask whether you're up\n"
	.string "to the task...because I know you are.$"

RivetshoreCity_Assembly_Trigger_Text_40:
# 173 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla - you're coming with us on the\n"
	.string "speedboat then.\p"
	.string "There's a cruise ship that's scheduled\n"
	.string "to leave soon. The other Gym Leaders\l"
	.string "can follow us on that.\p"
	.string "Let's get to it!$"

RivetshoreCity_Assembly_Trigger_Text_41:
# 204 "data//maps/RivetshoreCity/scripts.pory"
	.string "I'm heading back to the quarry.\n"
	.string "The rest of you - wait in the harbor.$"

RivetshoreCity_NPC_StorageBaySailor_Text_0:
# 257 "data//maps/RivetshoreCity/scripts.pory"
	.string "This is the storage bay. We're loading\n"
	.string "supplies for the S.S. Elegant!\p"
	.string "What - you trying to stow away?\p"
	.string "Scram!$"

RivetshoreCity_NPC_1_Text_0:
# 263 "data//maps/RivetshoreCity/scripts.pory"
	.string "Look! Look! My footprints stay on the\n"
	.string "sand.$"

RivetshoreCity_NPC_2_Text_0:
# 268 "data//maps/RivetshoreCity/scripts.pory"
	.string "They've turned this town into a\n"
	.string "monstrosity! It used to be a beautiful\l"
	.string "fishing spot until they built the quarry\l"
	.string "and drove all the Pokémon away.$"

RivetshoreCity_NPC_3_Text_0:
# 273 "data//maps/RivetshoreCity/scripts.pory"
	.string "I wanted to go on the SS Elegant cruise\n"
	.string "but I couldn't get a ticket!$"

RivetshoreCity_NPC_4_Text_0:
# 278 "data//maps/RivetshoreCity/scripts.pory"
	.string "My house has rickety stairs! I'm going\n"
	.string "to sue Rivetshore Construction.$"

RivetshoreCity_NPC_5_Text_0:
# 283 "data//maps/RivetshoreCity/scripts.pory"
	.string "I heard there was a secret shopkeeper\n"
	.string "selling rare items here!\p"
	.string "But these shopkeepers just have the\n"
	.string "regular stuff...was it just a rumour?$"

RivetshoreCity_NPC_6_Text_0:
# 288 "data//maps/RivetshoreCity/scripts.pory"
	.string "Whose boat is that floating over there?$"

RivetshoreCity_NPC_7_Text_0:
# 293 "data//maps/RivetshoreCity/scripts.pory"
	.string "Today's a great day to walk at the\n"
	.string "harbor, but yesterday was so hot!$"

RivetshoreCity_NPC_8_Text_0:
# 298 "data//maps/RivetshoreCity/scripts.pory"
	.string "Shoo, child! Don't disturb me.$"

RivetshoreCity_NPC_9_Text_0:
# 303 "data//maps/RivetshoreCity/scripts.pory"
	.string "What am I doing here? Enjoying the sea\n"
	.string "breeze, of course!\p"
	.string "...\p"
	.string "Fine. My boat drifted away so I'm\n"
	.string "waiting to get picked up.$"

RivetshoreCity_Market_Shop_Secret_Text_0:
# 343 "data//maps/RivetshoreCity/scripts.pory"
	.string "Greta$"

RivetshoreCity_Market_Shop_Secret_Text_1:
# 344 "data//maps/RivetshoreCity/scripts.pory"
	.string "Hello {PLAYER}! Surprised?\n"
	.string "I'm done traveling. I think a storefront\l"
	.string "is better for business. But I couldn't\l"
	.string "get a spot at the market!\p"
	.string "What'll you buy today?$"
