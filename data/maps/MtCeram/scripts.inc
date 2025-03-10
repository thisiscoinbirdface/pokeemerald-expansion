# 1 "data//maps/MtCeram/scripts.pory"

# 2 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTKOHLA, 19
# 3 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTGRUNT1, 20
# 4 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_FOOTGRUNT2, 21
# 5 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_TOPGRUNT1, 10
# 6 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_TOPGRUNT2, 9
# 7 "data//maps/MtCeram/scripts.pory"
    .set LOCALID_TOPKOHLA, 22

MtCeram_MapScripts::
	.byte 0


MtCeram_Eavesdrop_Trigger0::
# 24 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger0_2
# 26 "data//maps/MtCeram/scripts.pory"
	lockall
# 27 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 28 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 29 "data//maps/MtCeram/scripts.pory"
	release
# 31 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger0_Movement_1
# 32 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 34 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger0_2:
	end


MtCeram_Eavesdrop_Trigger1::
# 39 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger1_2
# 41 "data//maps/MtCeram/scripts.pory"
	lockall
# 42 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 43 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 44 "data//maps/MtCeram/scripts.pory"
	release
# 46 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger1_Movement_0
# 47 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 49 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger1_2:
	end


MtCeram_Eavesdrop_Trigger2::
# 54 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger2_2
# 56 "data//maps/MtCeram/scripts.pory"
	lockall
# 57 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 58 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 59 "data//maps/MtCeram/scripts.pory"
	release
# 61 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger2_Movement_0
# 62 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 64 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger2_2:
	end


MtCeram_Eavesdrop_Trigger3::
# 69 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_FOOT, MtCeram_Eavesdrop_Trigger3_2
# 71 "data//maps/MtCeram/scripts.pory"
	lockall
# 72 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 73 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_Eavesdrop_Trigger0_Text_0
# 74 "data//maps/MtCeram/scripts.pory"
	release
# 76 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_Eavesdrop_Trigger3_Movement_0
# 77 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 79 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_Eavesdrop
	end

MtCeram_Eavesdrop_Trigger3_2:
	end


MtCeram_EventScript_Eavesdrop::
# 85 "data//maps/MtCeram/scripts.pory"
	lockall
# 86 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_0
# 88 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_0
# 89 "data//maps/MtCeram/scripts.pory"
	release
# 92 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_1
# 93 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_1
# 94 "data//maps/MtCeram/scripts.pory"
	release
# 95 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 96 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_2
# 97 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_1
# 98 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_3
# 99 "data//maps/MtCeram/scripts.pory"
	release
# 100 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_4
# 101 "data//maps/MtCeram/scripts.pory"
	release
# 104 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_3
# 105 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_3
# 106 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 109 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT1
# 110 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTGRUNT2
# 113 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_4
# 114 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_Eavesdrop_Text_5
# 115 "data//maps/MtCeram/scripts.pory"
	release
# 118 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_FOOTKOHLA, MtCeram_EventScript_Eavesdrop_Movement_5
# 119 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 120 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_FOOTKOHLA
# 123 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_FOOT
# 126 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


MtCeram_BeforePeak_Trigger0::
# 155 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger0_2
# 157 "data//maps/MtCeram/scripts.pory"
	lockall
# 158 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger0_Movement_0
# 159 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 160 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger0_2:
	end


MtCeram_BeforePeak_Trigger1::
# 165 "data//maps/MtCeram/scripts.pory"
	goto_if_set FLAG_MT_CERAM_SOMBER_PEAK, MtCeram_BeforePeak_Trigger1_2
# 167 "data//maps/MtCeram/scripts.pory"
	lockall
# 168 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_BeforePeak_Trigger1_Movement_0
# 169 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 170 "data//maps/MtCeram/scripts.pory"
	call MtCeram_EventScript_BeforePeakBattle
	end

MtCeram_BeforePeak_Trigger1_2:
	end


MtCeram_EventScript_BeforePeakBattle::
# 177 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_0
# 178 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 179 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_0
# 180 "data//maps/MtCeram/scripts.pory"
	release
# 181 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 182 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 183 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 184 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_1
# 185 "data//maps/MtCeram/scripts.pory"
	release
# 186 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 187 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 188 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_2
# 189 "data//maps/MtCeram/scripts.pory"
	release
# 190 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 191 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 192 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 193 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_3
# 194 "data//maps/MtCeram/scripts.pory"
	release
# 197 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_Eavesdrop_Trigger0_Movement_0
# 198 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 199 "data//maps/MtCeram/scripts.pory"
	delay 16
# 200 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 201 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 202 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_1
# 203 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 204 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_4
# 205 "data//maps/MtCeram/scripts.pory"
	release
# 208 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_5
# 209 "data//maps/MtCeram/scripts.pory"
	release
# 210 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_2
# 211 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 212 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_6
# 213 "data//maps/MtCeram/scripts.pory"
	release
# 216 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_TO_BLACK
# 217 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_7
# 218 "data//maps/MtCeram/scripts.pory"
	release
# 219 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 220 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_3
# 221 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 225 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_8
# 226 "data//maps/MtCeram/scripts.pory"
	release
# 227 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPKOHLA, MtCeram_EventScript_BeforePeakBattle_Movement_4
# 228 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPKOHLA
# 231 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT1, MtCeram_EventScript_Eavesdrop_Movement_2
# 232 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_Eavesdrop_Movement_2
# 233 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 234 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_9
# 235 "data//maps/MtCeram/scripts.pory"
	applymovement LOCALID_TOPGRUNT2, MtCeram_EventScript_BeforePeakBattle_Movement_5
# 236 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 237 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_10
# 238 "data//maps/MtCeram/scripts.pory"
	release
# 240 "data//maps/MtCeram/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtCeram_EventScript_BeforePeakBattle_Movement_6
# 241 "data//maps/MtCeram/scripts.pory"
	waitmovement 0
# 248 "data//maps/MtCeram/scripts.pory"
	msgbox MtCeram_EventScript_BeforePeakBattle_Text_11
# 249 "data//maps/MtCeram/scripts.pory"
	release
# 253 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_TO_BLACK
# 254 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT1
# 255 "data//maps/MtCeram/scripts.pory"
	removeobject LOCALID_TOPGRUNT2
# 256 "data//maps/MtCeram/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 260 "data//maps/MtCeram/scripts.pory"
	setflag FLAG_MT_CERAM_SOMBER_PEAK
# 262 "data//maps/MtCeram/scripts.pory"
	releaseall
	return


# 27 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_0:
# 27 "data//maps/MtCeram/scripts.pory"
	face_down
	step_end

# 31 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger0_Movement_1:
# 31 "data//maps/MtCeram/scripts.pory"
	walk_up
# 31 "data//maps/MtCeram/scripts.pory"
	walk_left
# 31 "data//maps/MtCeram/scripts.pory"
	walk_left
# 31 "data//maps/MtCeram/scripts.pory"
	walk_up
# 31 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 46 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger1_Movement_0:
# 46 "data//maps/MtCeram/scripts.pory"
	walk_up
# 46 "data//maps/MtCeram/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram/scripts.pory"
	walk_left
# 46 "data//maps/MtCeram/scripts.pory"
	walk_up
# 46 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 61 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger2_Movement_0:
# 61 "data//maps/MtCeram/scripts.pory"
	walk_up
# 61 "data//maps/MtCeram/scripts.pory"
	walk_left
# 61 "data//maps/MtCeram/scripts.pory"
	walk_left
# 61 "data//maps/MtCeram/scripts.pory"
	walk_left
# 61 "data//maps/MtCeram/scripts.pory"
	walk_left
# 61 "data//maps/MtCeram/scripts.pory"
	walk_up
# 61 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 76 "data//maps/MtCeram/scripts.pory"
MtCeram_Eavesdrop_Trigger3_Movement_0:
# 76 "data//maps/MtCeram/scripts.pory"
	walk_up
# 76 "data//maps/MtCeram/scripts.pory"
	walk_left
# 76 "data//maps/MtCeram/scripts.pory"
	walk_left
# 76 "data//maps/MtCeram/scripts.pory"
	walk_left
# 76 "data//maps/MtCeram/scripts.pory"
	walk_left
# 76 "data//maps/MtCeram/scripts.pory"
	walk_left
# 76 "data//maps/MtCeram/scripts.pory"
	walk_up
# 76 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 86 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_0:
# 86 "data//maps/MtCeram/scripts.pory"
	face_right
	step_end

# 92 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_1:
# 92 "data//maps/MtCeram/scripts.pory"
	jump_in_place_right
	step_end

# 95 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_2:
# 95 "data//maps/MtCeram/scripts.pory"
	emote_question_mark
	step_end

# 104 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_3:
# 104 "data//maps/MtCeram/scripts.pory"
	walk_right
# 104 "data//maps/MtCeram/scripts.pory"
	walk_right
# 104 "data//maps/MtCeram/scripts.pory"
	walk_right
# 104 "data//maps/MtCeram/scripts.pory"
	walk_right
# 104 "data//maps/MtCeram/scripts.pory"
	walk_right
# 104 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 113 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_4:
# 113 "data//maps/MtCeram/scripts.pory"
	face_left
	step_end

# 118 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_Eavesdrop_Movement_5:
# 118 "data//maps/MtCeram/scripts.pory"
	walk_down
# 118 "data//maps/MtCeram/scripts.pory"
	walk_right
# 118 "data//maps/MtCeram/scripts.pory"
	walk_right
# 118 "data//maps/MtCeram/scripts.pory"
	walk_right
# 118 "data//maps/MtCeram/scripts.pory"
	walk_right
# 118 "data//maps/MtCeram/scripts.pory"
	walk_up
# 118 "data//maps/MtCeram/scripts.pory"
	walk_up
# 118 "data//maps/MtCeram/scripts.pory"
	walk_right
# 118 "data//maps/MtCeram/scripts.pory"
	walk_right
# 118 "data//maps/MtCeram/scripts.pory"
	walk_right
# 118 "data//maps/MtCeram/scripts.pory"
	walk_right
	step_end

# 158 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger0_Movement_0:
# 158 "data//maps/MtCeram/scripts.pory"
	walk_up
# 158 "data//maps/MtCeram/scripts.pory"
	walk_up
# 158 "data//maps/MtCeram/scripts.pory"
	walk_up
# 158 "data//maps/MtCeram/scripts.pory"
	walk_left
# 158 "data//maps/MtCeram/scripts.pory"
	walk_left
# 158 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 168 "data//maps/MtCeram/scripts.pory"
MtCeram_BeforePeak_Trigger1_Movement_0:
# 168 "data//maps/MtCeram/scripts.pory"
	walk_up
# 168 "data//maps/MtCeram/scripts.pory"
	walk_up
# 168 "data//maps/MtCeram/scripts.pory"
	walk_up
# 168 "data//maps/MtCeram/scripts.pory"
	walk_left
# 168 "data//maps/MtCeram/scripts.pory"
	walk_left
# 168 "data//maps/MtCeram/scripts.pory"
	walk_left
# 168 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 177 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_0:
# 177 "data//maps/MtCeram/scripts.pory"
	jump_in_place_up
	step_end

# 186 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_1:
# 186 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 210 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_2:
# 210 "data//maps/MtCeram/scripts.pory"
	face_up
	step_end

# 220 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_3:
# 220 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 227 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_4:
# 227 "data//maps/MtCeram/scripts.pory"
	walk_down
# 227 "data//maps/MtCeram/scripts.pory"
	walk_right
# 227 "data//maps/MtCeram/scripts.pory"
	walk_right
# 227 "data//maps/MtCeram/scripts.pory"
	walk_down
# 227 "data//maps/MtCeram/scripts.pory"
	walk_down
# 227 "data//maps/MtCeram/scripts.pory"
	walk_down
# 227 "data//maps/MtCeram/scripts.pory"
	walk_down
# 227 "data//maps/MtCeram/scripts.pory"
	walk_down
	step_end

# 235 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_5:
# 235 "data//maps/MtCeram/scripts.pory"
	jump_in_place_down
# 235 "data//maps/MtCeram/scripts.pory"
	emote_exclamation_mark
	step_end

# 240 "data//maps/MtCeram/scripts.pory"
MtCeram_EventScript_BeforePeakBattle_Movement_6:
# 240 "data//maps/MtCeram/scripts.pory"
	walk_up
	step_end

MtCeram_Eavesdrop_Trigger0_Text_0:
# 28 "data//maps/MtCeram/scripts.pory"
	.string "{PLAYER} - what are you doing? Come\n"
	.string "here, you idiot!$"

MtCeram_EventScript_Eavesdrop_Text_0:
# 88 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I've been spying on those two\n"
	.string "Team Somber Grunts. Don't make a sound!$"

MtCeram_EventScript_Eavesdrop_Text_1:
# 93 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: ...so the boss told us\n"
	.string "to be EXTRA careful not to let anyone\l"
	.string "up the mountain.$"

MtCeram_EventScript_Eavesdrop_Text_2:
# 96 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: But where is the boss?\n"
	.string "And GABRIELLE?$"

MtCeram_EventScript_Eavesdrop_Text_3:
# 98 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: The boss found the\n"
	.string "dreamstone on top of the mountain!\l"
	.string "She's trying to climb it right now.\p"
	.string "As for GABRIELLE...well, after her\n"
	.string "punishment for losing to that Tenebris\l"
	.string "Lab trainer twice...she's been a little\l"
	.string "down.$"

MtCeram_EventScript_Eavesdrop_Text_4:
# 100 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: Serves her right for\n"
	.string "losing! TEAM SOMBER doesn't need any\l"
	.string "losers!\p"
	.string "SOMBER GRUNT 1: Yeah what a loser she\n"
	.string "is! Now lets go stand guard. We can't let\l"
	.string "anyone pass until the boss gets the\l"
	.string "dreamstone at the peak!$"

MtCeram_EventScript_Eavesdrop_Text_5:
# 114 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: Heard that? I've got to get that\n"
	.string "dreamstone before Team Somber! That's\l"
	.string "called responsibility, {PLAYER} -\l"
	.string "something you wouldn't know about.\p"
	.string "What? You're coming too? Hah! We're not\n"
	.string "buddies, {PLAYER}. I'm the one and\l"
	.string "only ACE ROOKIE, and I've told you\l"
	.string "before - I don't need your help, chum!$"

MtCeram_EventScript_BeforePeakBattle_Text_0:
# 179 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: That's enough of your mischief\n"
	.string "Team Somber! You're getting in the way\l"
	.string "of police business!$"

MtCeram_EventScript_BeforePeakBattle_Text_1:
# 184 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: You're just a kid.\n"
	.string "Where's the police?$"

MtCeram_EventScript_BeforePeakBattle_Text_2:
# 188 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I'm not a kid! I'm the ACE ROOKIE\n"
	.string "of the detective school, and I'm not\l"
	.string "going to let you steal the dreamstone!$"

MtCeram_EventScript_BeforePeakBattle_Text_3:
# 193 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: You alone against the\n"
	.string "two of us?$"

MtCeram_EventScript_BeforePeakBattle_Text_4:
# 204 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: The help arrives. But\n"
	.string "you're both just kids! Hahaha!$"

MtCeram_EventScript_BeforePeakBattle_Text_5:
# 208 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: I told you I don't need your\n"
	.string "help! You'll just get in the way.$"

MtCeram_EventScript_BeforePeakBattle_Text_6:
# 212 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: Now come on TEAM SOMBER! Bring\n"
	.string "it on!$"

MtCeram_EventScript_BeforePeakBattle_Text_7:
# 217 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: No! FENNEKIN!!\p"
	.string "SOMBER GRUNT 1: Hahaha! Your ace was a\n"
	.string "pushover, ACE ROOKE!$"

MtCeram_EventScript_BeforePeakBattle_Text_8:
# 225 "data//maps/MtCeram/scripts.pory"
	.string "KOHLA: My {PKMN}...I have to go and heal\n"
	.string "them...I couldn't stop Team Somber...$"

MtCeram_EventScript_BeforePeakBattle_Text_9:
# 234 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: And you? You want a\n"
	.string "beating too?$"

MtCeram_EventScript_BeforePeakBattle_Text_10:
# 237 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 2: Hey, aren't you the\n"
	.string "trainer that beat GABRIELLE?\p"
	.string "SOMBER GRUNT 1: Yes you are! Let's see\n"
	.string "what you've got!$"

MtCeram_EventScript_BeforePeakBattle_Text_11:
# 248 "data//maps/MtCeram/scripts.pory"
	.string "SOMBER GRUNT 1: How could you beat us?\p"
	.string "SOMBER GRUNT 2: We-we've got to tell\n"
	.string "the boss...SOMBER GRUNT 1: Yeah...c'mon\l"
	.string "let's hurry. {PLAYER} - you may have\l"
	.string "beaten us but you can't stop Team\l"
	.string "Somber from achieving our goal!$"
