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
	applymovement LOCALID_SPEEDBOAT, RivetshoreCity_Assembly_Trigger_Movement_12
# 196 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 198 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_13
# 199 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 201 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 202 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 203 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_41
# 205 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_14
# 206 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_15
# 207 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_16
# 208 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_17
# 209 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 210 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_GLORIA
# 212 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_10
# 213 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_18
# 214 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_9
# 215 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 216 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_INGER
# 218 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_9
# 219 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_9
# 220 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 221 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_ARIANA
# 223 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_15
# 224 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 225 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_JANIA
# 228 "data//maps/RivetshoreCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 229 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_RAAZI
# 230 "data//maps/RivetshoreCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 232 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Gabrielle_Trigger_Movement_2
# 233 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 234 "data//maps/RivetshoreCity/scripts.pory"
	special RemoveCameraObject
# 237 "data//maps/RivetshoreCity/scripts.pory"
	setflag FLAG_RIVETSHORE_ASSEMBLY
# 238 "data//maps/RivetshoreCity/scripts.pory"
	releaseall
	end

RivetshoreCity_Assembly_Trigger_2:
	end


RivetshoreCity_NPC_StorageBaySailor::
# 256 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_StorageBaySailor_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_1::
# 262 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_2::
# 267 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_2_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_3::
# 272 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_3_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_4::
# 277 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_4_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_5::
# 282 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_5_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_6::
# 287 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_6_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_7::
# 292 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_7_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_8::
# 297 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_8_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_9::
# 302 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_9_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Market_Shop_1::
# 315 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 316 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 317 "data//maps/RivetshoreCity/scripts.pory"
	message gText_HowMayIServeYou
# 318 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 319 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_1
# 320 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 321 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


RivetshoreCity_Market_Shop_2::
# 327 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 328 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 329 "data//maps/RivetshoreCity/scripts.pory"
	message gText_HowMayIServeYou
# 330 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 331 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_2
# 332 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 333 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


RivetshoreCity_Market_Shop_Secret::
# 340 "data//maps/RivetshoreCity/scripts.pory"
	lock
# 341 "data//maps/RivetshoreCity/scripts.pory"
	faceplayer
# 342 "data//maps/RivetshoreCity/scripts.pory"
	message gText_HowMayIServeYou
# 343 "data//maps/RivetshoreCity/scripts.pory"
	waitmessage
# 344 "data//maps/RivetshoreCity/scripts.pory"
	pokemart RivetshoreCity_Mart_Secret
# 345 "data//maps/RivetshoreCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 346 "data//maps/RivetshoreCity/scripts.pory"
	release
	end


	.align 2
# 350 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_1:
# 351 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 352 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 353 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 354 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_NONE

	.align 2
# 357 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_2:
# 358 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM04
# 359 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM15
# 360 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM24
# 361 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM30
# 362 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM35
# 363 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_TM38
	.2byte ITEM_NONE

	.align 2
# 366 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Mart_Secret:
# 367 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 368 "data//maps/RivetshoreCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
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

# 195 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_12:
# 195 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 195 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 195 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 195 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 195 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 195 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 195 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 195 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 195 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 195 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
	step_end

# 198 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_13:
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 198 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 205 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_14:
# 205 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 205 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 206 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_15:
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 206 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 207 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_16:
# 207 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 207 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 208 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_17:
# 208 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 208 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 213 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_18:
# 213 "data//maps/RivetshoreCity/scripts.pory"
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
	.string "I don't see all of you, though.\n"
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
	.string "Allow us to explain the situation as it\n"
	.string "stands.\p"
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
	.string "I hope the Professor is safe, wherever\n"
	.string "she is.$"

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
	.string "charts. According to the Ranger Head,\l"
	.string "it's like the beginning of a region-wide\l"
	.string "drought.$"

RivetshoreCity_Assembly_Trigger_Text_18:
# 113 "data//maps/RivetshoreCity/scripts.pory"
	.string "The location?$"

RivetshoreCity_Assembly_Trigger_Text_19:
# 114 "data//maps/RivetshoreCity/scripts.pory"
	.string "An uncharted island off the coast of\n"
	.string "Rivetshore City.$"

RivetshoreCity_Assembly_Trigger_Text_20:
# 118 "data//maps/RivetshoreCity/scripts.pory"
	.string "That explains the heatwave we had here\n"
	.string "yesterday.\p"
	.string "It must have been Team Somber's doing.$"

RivetshoreCity_Assembly_Trigger_Text_21:
# 120 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla here has been working the case.\p"
	.string "He's handed over his Gym Leader duties\n"
	.string "to the next Ace Rookie, and is now\l"
	.string "pursuing Team Somber.$"

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
	.string "We think heatwave has something to do\n"
	.string "with the Ancient Terror...and we also\l"
	.string "believe worse is on the way.\p"
	.string "So we need to get to this uncharted\n"
	.string "island ASAP!$"

RivetshoreCity_Assembly_Trigger_Text_29:
# 151 "data//maps/RivetshoreCity/scripts.pory"
	.string "We should wait for Viniel and Carona\n"
	.string "however. Without Medicham and\l"
	.string "Ampharos, we'll lose a lot of firepower.$"

RivetshoreCity_Assembly_Trigger_Text_30:
# 154 "data//maps/RivetshoreCity/scripts.pory"
	.string "Time is of the essence, Raazi.\n"
	.string "We need someone to go now.$"

RivetshoreCity_Assembly_Trigger_Text_31:
# 155 "data//maps/RivetshoreCity/scripts.pory"
	.string "Then I propose Kohla.\p"
	.string "He's a star and I can personally vouch\n"
	.string "for his strength.$"

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
	.string "Those in favour of sending Kohla\n"
	.string "ahead?$"

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
	.string "Needless to say, detective, we're all in\n"
	.string "favour.\p"
	.string "Kohla, you have the respect of all the\n"
	.string "other leaders in Cormoria. You're the\l"
	.string "one we're counting on.\p"
	.string "I'm not going to ask you whether you're\n"
	.string "upto the task...because I know you are.$"

RivetshoreCity_Assembly_Trigger_Text_40:
# 173 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla - you're coming with us on the\n"
	.string "speedboat then.\p"
	.string "There's a cruise ship that's scheduled\n"
	.string "to leave soon. The other Gym Leaders\l"
	.string "can come on that.\p"
	.string "Let's get to it!$"

RivetshoreCity_Assembly_Trigger_Text_41:
# 203 "data//maps/RivetshoreCity/scripts.pory"
	.string "I'm heading back to the quarry. The rest\n"
	.string "of you can wait in the harbor.$"

RivetshoreCity_NPC_StorageBaySailor_Text_0:
# 256 "data//maps/RivetshoreCity/scripts.pory"
	.string "This is the storage bay. We're busy\n"
	.string "loading up on supplies for the S.S.\l"
	.string "Elegant!\p"
	.string "What - you trying to stow away?\p"
	.string "Scram!$"

RivetshoreCity_NPC_1_Text_0:
# 262 "data//maps/RivetshoreCity/scripts.pory"
	.string "Look! Look! My footprints stay on the\n"
	.string "sand.$"

RivetshoreCity_NPC_2_Text_0:
# 267 "data//maps/RivetshoreCity/scripts.pory"
	.string "They've turned this town into a\n"
	.string "monstrosity! It used to be a beautiful\l"
	.string "fishing spot until they built the quarry\l"
	.string "and harbor and drove all the Pokemon\l"
	.string "away.$"

RivetshoreCity_NPC_3_Text_0:
# 272 "data//maps/RivetshoreCity/scripts.pory"
	.string "I wanted to go on the SS Elegant cruise\n"
	.string "but I couldn't get a ticket.$"

RivetshoreCity_NPC_4_Text_0:
# 277 "data//maps/RivetshoreCity/scripts.pory"
	.string "My house has rickety stairs! I'm going\n"
	.string "to sue Rivetshore Construction.$"

RivetshoreCity_NPC_5_Text_0:
# 282 "data//maps/RivetshoreCity/scripts.pory"
	.string "You won't find this stuff anywhere\n"
	.string "else!$"

RivetshoreCity_NPC_6_Text_0:
# 287 "data//maps/RivetshoreCity/scripts.pory"
	.string "Whose boat is that floating over there?$"

RivetshoreCity_NPC_7_Text_0:
# 292 "data//maps/RivetshoreCity/scripts.pory"
	.string "What a day for a walk at the harbor!$"

RivetshoreCity_NPC_8_Text_0:
# 297 "data//maps/RivetshoreCity/scripts.pory"
	.string "Shoo, child! Don't disturb me.$"

RivetshoreCity_NPC_9_Text_0:
# 302 "data//maps/RivetshoreCity/scripts.pory"
	.string "What am I doing here? Enjoying the sea\n"
	.string "breeze, of course!\p"
	.string "...\p"
	.string "Fine. My boat drifted away so I'm\n"
	.string "waiting to get picked up.$"
