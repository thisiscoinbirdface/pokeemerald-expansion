# 1 "data//maps/RivetshoreCity/scripts.pory"

# 2 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_SPEEDBOAT, 1
# 3 "data//maps/RivetshoreCity/scripts.pory"

# 4 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_KOHLA, 21
# 5 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_DET1, 22
# 6 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_DET2, 23
# 7 "data//maps/RivetshoreCity/scripts.pory"

# 8 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_INGER, 15
# 9 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_ARIANA, 14
# 10 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_GLORIA, 16
# 11 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_CARONA, 17
# 12 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_VINIEL, 18
# 13 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_JANIA, 19
# 14 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_RAAZI, 20

RivetshoreCity_MapScripts::
	.byte 0


RivetshoreCity_Assembly_Trigger::
# 28 "data//maps/RivetshoreCity/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreCity_Assembly_Trigger_2
# 32 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_VINIEL
# 33 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_CARONA
# 36 "data//maps/RivetshoreCity/scripts.pory"
	special SpawnCameraObject
# 37 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_0
# 38 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 42 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 43 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 44 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_1
# 46 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 47 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 48 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_2, RivetshoreCity_Assembly_Trigger_Text_3
# 49 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_3
# 50 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 51 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_4, RivetshoreCity_Assembly_Trigger_Text_5
# 52 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_7
# 55 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 56 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 57 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_8
# 58 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_4
# 59 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 60 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_10
# 65 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 66 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 67 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_11
# 68 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 69 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 70 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_12
# 71 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 72 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 73 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_14
# 74 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_5
# 75 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 76 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_16
# 78 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 79 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 80 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_17
# 82 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_6
# 83 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 84 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_18
# 85 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_19
# 87 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 88 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 89 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_20
# 91 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_21
# 92 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_7
# 93 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 94 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_22
# 95 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_1
# 96 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 97 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_23, RivetshoreCity_Assembly_Trigger_Text_24
# 99 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 100 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_5
# 101 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_5
# 102 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_5
# 103 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_5
# 104 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 105 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_25
# 107 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_1
# 108 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 109 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_23, RivetshoreCity_Assembly_Trigger_Text_26
# 111 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_5
# 112 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 113 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_27
# 115 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_8
# 116 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 117 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_28
# 120 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 121 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 122 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_29
# 123 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_5
# 124 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 125 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_30
# 126 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_31
# 127 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_6
# 128 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 129 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_32
# 130 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_33
# 132 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_6
# 133 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 134 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_34
# 136 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_35
# 137 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_4, RivetshoreCity_Assembly_Trigger_Text_36
# 138 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_37
# 139 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_38
# 140 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_39
# 142 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_8
# 143 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 144 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_40
# 147 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_9
# 148 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_10
# 149 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_10
# 150 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 151 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_KOHLA
# 153 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_9
# 154 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_10
# 155 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 156 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_DET1
# 158 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET2, RivetshoreCity_Assembly_Trigger_Movement_9
# 159 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 160 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_DET2
# 162 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_11
# 163 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 166 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_SPEEDBOAT, RivetshoreCity_Assembly_Trigger_Movement_12
# 167 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 169 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_13
# 170 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 172 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 173 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 174 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_41
# 176 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_14
# 177 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_15
# 178 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_16
# 179 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_17
# 180 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 181 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_GLORIA
# 183 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_10
# 184 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_18
# 185 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_9
# 186 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 187 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_INGER
# 189 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_9
# 190 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_9
# 191 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 192 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_ARIANA
# 194 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_15
# 195 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 196 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_JANIA
# 199 "data//maps/RivetshoreCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 200 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_RAAZI
# 201 "data//maps/RivetshoreCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 203 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_19
# 204 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 205 "data//maps/RivetshoreCity/scripts.pory"
	special RemoveCameraObject
# 208 "data//maps/RivetshoreCity/scripts.pory"
	setflag FLAG_RIVETSHORE_ASSEMBLY
# 209 "data//maps/RivetshoreCity/scripts.pory"
	releaseall
	end

RivetshoreCity_Assembly_Trigger_2:
	end


RivetshoreCity_NPC_StorageBaySailor::
# 227 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_StorageBaySailor_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_1::
# 232 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_2::
# 236 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_3::
# 240 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_4::
# 244 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_5::
# 248 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_6::
# 252 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_7::
# 256 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_NPC_8::
# 260 "data//maps/RivetshoreCity/scripts.pory"
	msgbox RivetshoreCity_NPC_1_Text_0, MSGBOX_NPC
	end


# 37 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_0:
# 37 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 37 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 37 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 37 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 37 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 37 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 37 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 37 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 42 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_1:
# 42 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_down
	step_end

# 46 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_2:
# 46 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_right
	step_end

# 49 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_3:
# 49 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_left
# 49 "data//maps/RivetshoreCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 58 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_4:
# 58 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_left
	step_end

# 68 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_5:
# 68 "data//maps/RivetshoreCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 82 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_6:
# 82 "data//maps/RivetshoreCity/scripts.pory"
	emote_question_mark
	step_end

# 92 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_7:
# 92 "data//maps/RivetshoreCity/scripts.pory"
	face_right
	step_end

# 115 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_8:
# 115 "data//maps/RivetshoreCity/scripts.pory"
	face_down
	step_end

# 147 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_9:
# 147 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 148 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_10:
# 148 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 162 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_11:
# 162 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 162 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 162 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 162 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 162 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 162 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 162 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 162 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 162 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 162 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 166 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_12:
# 166 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 166 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 166 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 166 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 166 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 166 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 166 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 166 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 166 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
# 166 "data//maps/RivetshoreCity/scripts.pory"
	walk_fast_right
	step_end

# 169 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_13:
# 169 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 169 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 169 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 169 "data//maps/RivetshoreCity/scripts.pory"
	walk_down
# 169 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 169 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 169 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 169 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 169 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 169 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 176 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_14:
# 176 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 176 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 177 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_15:
# 177 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 177 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 178 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_16:
# 178 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
# 178 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 179 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_17:
# 179 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 179 "data//maps/RivetshoreCity/scripts.pory"
	walk_up
	step_end

# 184 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_18:
# 184 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

# 203 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_19:
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
# 203 "data//maps/RivetshoreCity/scripts.pory"
	walk_left
	step_end

RivetshoreCity_Assembly_Trigger_Text_0:
# 44 "data//maps/RivetshoreCity/scripts.pory"
	.string "Detective$"

RivetshoreCity_Assembly_Trigger_Text_1:
# 44 "data//maps/RivetshoreCity/scripts.pory"
	.string "Thank you gym leaders for assembling\n"
	.string "here on such short notice.$"

RivetshoreCity_Assembly_Trigger_Text_2:
# 48 "data//maps/RivetshoreCity/scripts.pory"
	.string "???$"

RivetshoreCity_Assembly_Trigger_Text_3:
# 48 "data//maps/RivetshoreCity/scripts.pory"
	.string "It's our duty, detectives.\n"
	.string "No need to thank us.$"

RivetshoreCity_Assembly_Trigger_Text_4:
# 51 "data//maps/RivetshoreCity/scripts.pory"
	.string "Ariana$"

RivetshoreCity_Assembly_Trigger_Text_5:
# 51 "data//maps/RivetshoreCity/scripts.pory"
	.string "Easy for you to say, Raazi!\p"
	.string "You live here. Inger and I came all the\n"
	.string "way from the other side of Cormoria!$"

RivetshoreCity_Assembly_Trigger_Text_6:
# 52 "data//maps/RivetshoreCity/scripts.pory"
	.string "Raazi$"

RivetshoreCity_Assembly_Trigger_Text_7:
# 52 "data//maps/RivetshoreCity/scripts.pory"
	.string "Which is also your duty.$"

RivetshoreCity_Assembly_Trigger_Text_8:
# 57 "data//maps/RivetshoreCity/scripts.pory"
	.string "I don't see all of you, though.\n"
	.string "Who's missing?$"

RivetshoreCity_Assembly_Trigger_Text_9:
# 60 "data//maps/RivetshoreCity/scripts.pory"
	.string "Gloria$"

RivetshoreCity_Assembly_Trigger_Text_10:
# 60 "data//maps/RivetshoreCity/scripts.pory"
	.string "Viniel and Carona sent word - they're on\n"
	.string "their way. They'll take some time,\l"
	.string "considering how remote they are.$"

RivetshoreCity_Assembly_Trigger_Text_11:
# 67 "data//maps/RivetshoreCity/scripts.pory"
	.string "Unfortunately we don't have time to\n"
	.string "wait for them.\p"
	.string "Allow us to explain the situation as it\n"
	.string "stands.\p"
	.string "You all know about the disappearance\n"
	.string "of Professor Tenebris in connection\l"
	.string "with the dreamstones and Team Somber's\l"
	.string "involvement in this case.$"

RivetshoreCity_Assembly_Trigger_Text_12:
# 70 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes.$"

RivetshoreCity_Assembly_Trigger_Text_13:
# 73 "data//maps/RivetshoreCity/scripts.pory"
	.string "Jania$"

RivetshoreCity_Assembly_Trigger_Text_14:
# 73 "data//maps/RivetshoreCity/scripts.pory"
	.string "I hope the Professor is safe, wherever\n"
	.string "she is.$"

RivetshoreCity_Assembly_Trigger_Text_15:
# 76 "data//maps/RivetshoreCity/scripts.pory"
	.string "Inger$"

RivetshoreCity_Assembly_Trigger_Text_16:
# 76 "data//maps/RivetshoreCity/scripts.pory"
	.string "Just you watch - I'm going to teach\n"
	.string "Team Somber a lesson!$"

RivetshoreCity_Assembly_Trigger_Text_17:
# 80 "data//maps/RivetshoreCity/scripts.pory"
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
# 84 "data//maps/RivetshoreCity/scripts.pory"
	.string "The location?$"

RivetshoreCity_Assembly_Trigger_Text_19:
# 85 "data//maps/RivetshoreCity/scripts.pory"
	.string "An uncharted island off the coast of\n"
	.string "Rivetshore City.$"

RivetshoreCity_Assembly_Trigger_Text_20:
# 89 "data//maps/RivetshoreCity/scripts.pory"
	.string "That explains the heatwave we had here\n"
	.string "yesterday.\p"
	.string "It must have been Team Somber's doing.$"

RivetshoreCity_Assembly_Trigger_Text_21:
# 91 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla here has been working the case.\p"
	.string "He's handed over his Gym Leader duties\n"
	.string "to the next Ace Rookie, and is now\l"
	.string "pursuing Team Somber.$"

RivetshoreCity_Assembly_Trigger_Text_22:
# 94 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla - go on and tell them about the\n"
	.string "Ancient Terror.$"

RivetshoreCity_Assembly_Trigger_Text_23:
# 97 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla$"

RivetshoreCity_Assembly_Trigger_Text_24:
# 97 "data//maps/RivetshoreCity/scripts.pory"
	.string "Right, yes, well.\p"
	.string "Ahem.\p"
	.string "So, well...they...they've captured the\n"
	.string "Ancient Terror.$"

RivetshoreCity_Assembly_Trigger_Text_25:
# 105 "data//maps/RivetshoreCity/scripts.pory"
	.string "What? How?$"

RivetshoreCity_Assembly_Trigger_Text_26:
# 109 "data//maps/RivetshoreCity/scripts.pory"
	.string "My...ex-colleague and I chased them\n"
	.string "into Ancient Cormoria through a\l"
	.string "dreamstone and Melea captured the\l"
	.string "Ancient Terror with a Master Ball!$"

RivetshoreCity_Assembly_Trigger_Text_27:
# 113 "data//maps/RivetshoreCity/scripts.pory"
	.string "They were strong enough without\n"
	.string "it...but with the Ancient Terror, they'll\l"
	.string "be unstoppable!$"

RivetshoreCity_Assembly_Trigger_Text_28:
# 117 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes...which is why we need the combined\n"
	.string "power of the eight strongest trainers\l"
	.string "in all of Cormoria.\p"
	.string "We think heatwave has something to do\n"
	.string "with the Ancient Terror...and we also\l"
	.string "believe worse is on the way.\p"
	.string "So we need to get to this uncharted\n"
	.string "island ASAP!$"

RivetshoreCity_Assembly_Trigger_Text_29:
# 122 "data//maps/RivetshoreCity/scripts.pory"
	.string "We should wait for Viniel and Carona\n"
	.string "however. Without Medicham and\l"
	.string "Ampharos, we'll lose a lot of firepower.$"

RivetshoreCity_Assembly_Trigger_Text_30:
# 125 "data//maps/RivetshoreCity/scripts.pory"
	.string "Time is of the essence, Raazi.\n"
	.string "We need someone to go now.$"

RivetshoreCity_Assembly_Trigger_Text_31:
# 126 "data//maps/RivetshoreCity/scripts.pory"
	.string "Then I propose Kohla.\p"
	.string "He's a star and I can personally vouch\n"
	.string "for his strength.$"

RivetshoreCity_Assembly_Trigger_Text_32:
# 129 "data//maps/RivetshoreCity/scripts.pory"
	.string "Did he beat you, Raazi?$"

RivetshoreCity_Assembly_Trigger_Text_33:
# 130 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes. He's a fearsome trainer.\p"
	.string "Not to mention - he's been fighting\n"
	.string "Team Somber from the start.\p"
	.string "His dedication to the cause is far\n"
	.string "beyond the rest of us combined.$"

RivetshoreCity_Assembly_Trigger_Text_34:
# 134 "data//maps/RivetshoreCity/scripts.pory"
	.string "Those in favour of sending Kohla\n"
	.string "ahead?$"

RivetshoreCity_Assembly_Trigger_Text_35:
# 136 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yeah!$"

RivetshoreCity_Assembly_Trigger_Text_36:
# 137 "data//maps/RivetshoreCity/scripts.pory"
	.string "Of course!$"

RivetshoreCity_Assembly_Trigger_Text_37:
# 138 "data//maps/RivetshoreCity/scripts.pory"
	.string "Without question.$"

RivetshoreCity_Assembly_Trigger_Text_38:
# 139 "data//maps/RivetshoreCity/scripts.pory"
	.string "He's the best choice.$"

RivetshoreCity_Assembly_Trigger_Text_39:
# 140 "data//maps/RivetshoreCity/scripts.pory"
	.string "Needless to say, detective, we're all in\n"
	.string "favour.\p"
	.string "Kohla, you have the respect of all the\n"
	.string "other leaders in Cormoria. You're the\l"
	.string "one we're counting on.\p"
	.string "I'm not going to ask you whether you're\n"
	.string "upto the task...because I know you are.$"

RivetshoreCity_Assembly_Trigger_Text_40:
# 144 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla - you're coming with us on the\n"
	.string "speedboat then.\p"
	.string "There's a cruise ship that's scheduled\n"
	.string "to leave soon. The other Gym Leaders\l"
	.string "can come on that.\p"
	.string "Let's get to it!$"

RivetshoreCity_Assembly_Trigger_Text_41:
# 174 "data//maps/RivetshoreCity/scripts.pory"
	.string "I'm heading back to the quarry. The rest\n"
	.string "of you can wait in the harbor.$"

RivetshoreCity_NPC_StorageBaySailor_Text_0:
# 227 "data//maps/RivetshoreCity/scripts.pory"
	.string "This is the storage bay. We're busy\n"
	.string "loading up on supplies for the S.S.\l"
	.string "Elegant! I'm on guard duty and I'm not\l"
	.string "leaving until we're ready to depart!$"

RivetshoreCity_NPC_1_Text_0:
# 232 "data//maps/RivetshoreCity/scripts.pory"
	.string "$"
