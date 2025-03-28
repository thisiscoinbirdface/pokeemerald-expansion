RangerInstitute_MapScripts::
	.byte 0


RangerInstitute_1F_ApplicationPC::
# 24 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_0, MSGBOX_SIGN
# 25 "data//maps/RangerInstitute/scripts.pory"
	release
# 27 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_2
RangerInstitute_1F_ApplicationPC_1:
# 31 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_ApplicationPC_5
RangerInstitute_1F_ApplicationPC_4:
# 46 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_ApplicationPC_2:
# 28 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_1
	goto RangerInstitute_1F_ApplicationPC_1

RangerInstitute_1F_ApplicationPC_5:
# 32 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_2, MSGBOX_YESNO
# 33 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_7
	goto RangerInstitute_1F_ApplicationPC_4

RangerInstitute_1F_ApplicationPC_7:
# 34 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_3, MSGBOX_YESNO
# 35 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_10
	goto RangerInstitute_1F_ApplicationPC_4

RangerInstitute_1F_ApplicationPC_10:
# 36 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_4
# 37 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 1
	goto RangerInstitute_1F_ApplicationPC_4


RangerInstitute_1F_Interviewer::
# 51 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 52 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 54 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_Interviewer_2
# 66 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_1
RangerInstitute_1F_Interviewer_1:
# 69 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_Interviewer_2:
# 55 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_0
# 56 "data//maps/RangerInstitute/scripts.pory"
	release
# 57 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_Interviewer_Movement_0
# 58 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 59 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_Interviewer_Movement_1
# 60 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 61 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 63 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ1
	goto RangerInstitute_1F_Interviewer_1


RangerInstitute_1F_InterviewFail::
# 73 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewFail_Text_0
# 74 "data//maps/RangerInstitute/scripts.pory"
	release
# 75 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 0
	return


RangerInstitute_1F_InterviewQ1::
# 80 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 81 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_0
# 82 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ1_Text_1, RangerInstitute_1F_InterviewQ1_Text_2, RangerInstitute_1F_InterviewQ1_Text_3, RangerInstitute_1F_InterviewQ1_Text_4
# 85 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RangerInstitute_1F_InterviewQ1_1
# 89 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ1_1:
# 86 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_5
# 87 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ2
	return


RangerInstitute_1F_InterviewQ2::
# 95 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 96 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ2_Text_0
# 97 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ2_Text_1, RangerInstitute_1F_InterviewQ2_Text_2, RangerInstitute_1F_InterviewQ2_Text_3, RangerInstitute_1F_InterviewQ2_Text_4
# 100 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ2_1
# 104 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ2_1:
# 101 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ2_Text_5
# 102 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ3
	return


RangerInstitute_1F_InterviewQ3::
# 110 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 111 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ3_Text_0
# 112 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ3_Text_1, RangerInstitute_1F_InterviewQ3_Text_2, RangerInstitute_1F_InterviewQ3_Text_3, RangerInstitute_1F_InterviewQ3_Text_4
# 115 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RangerInstitute_1F_InterviewQ3_1
# 119 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ3_1:
# 116 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ3_Text_5
# 117 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ4
	return


RangerInstitute_1F_InterviewQ4::
# 125 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 126 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ4_Text_0
# 127 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_1, RangerInstitute_1F_InterviewQ4_Text_2, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ4_Text_4
# 130 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_InterviewQ4_1
# 134 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ4_1:
# 131 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ4_Text_5
# 132 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ5
	return


RangerInstitute_1F_InterviewQ5::
# 140 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 141 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_0
# 142 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ5_Text_1, RangerInstitute_1F_InterviewQ5_Text_2, RangerInstitute_1F_InterviewQ5_Text_3
# 145 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ5_1
# 149 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ5_1:
# 146 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_4
# 147 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewPass
	return


RangerInstitute_1F_InterviewPass::
# 154 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewPass_Text_0
# 155 "data//maps/RangerInstitute/scripts.pory"
	releaseall
# 156 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 2
	return


RangerInstitute_1F_NPC1::
# 161 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 162 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 163 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC1_Text_0
# 164 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC2::
# 168 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 169 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 170 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC2_Text_0
# 171 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC3::
# 175 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 176 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 177 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC3_Text_0
# 178 "data//maps/RangerInstitute/scripts.pory"
	special StartMining
# 179 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerBasement::
# 185 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 186 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 187 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
# 188 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerUpstairs::
# 192 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 193 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 195 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_2
RangerInstitute_1F_BlockerUpstairs_1:
# 199 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_5
RangerInstitute_1F_BlockerUpstairs_4:
# 203 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_8
RangerInstitute_1F_BlockerUpstairs_7:
# 206 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_BlockerUpstairs_2:
# 196 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_1

RangerInstitute_1F_BlockerUpstairs_5:
# 200 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_4

RangerInstitute_1F_BlockerUpstairs_8:
# 204 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_7


RangerInstitute_1F_TriggerUpstairs::
# 211 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_gt RangerInstitute_1F_TriggerUpstairs_2
# 213 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 214 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_0
# 215 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 216 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
# 217 "data//maps/RangerInstitute/scripts.pory"
	release
# 218 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_TriggerUpstairs_Movement_1
# 219 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 220 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 221 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 222 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_TriggerUpstairs_2:
	end


RangerInstitute_2F_Trigger0::
# 246 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 247 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_0
# 248 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 249 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 250 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 251 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger0_Text_0
# 252 "data//maps/RangerInstitute/scripts.pory"
	release
# 255 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_2
# 256 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_3
# 257 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 259 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
# 261 "data//maps/RangerInstitute/scripts.pory"
	release
	return


RangerInstitute_2F_Trigger1::
# 265 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 266 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_0
# 267 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 268 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 269 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 270 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger1_Text_0
# 271 "data//maps/RangerInstitute/scripts.pory"
	release
# 274 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_2
# 275 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger1_Movement_0
# 276 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 278 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
# 280 "data//maps/RangerInstitute/scripts.pory"
	release
	return


RangerInstitute_2F_EventScript_Welcome::
# 284 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 285 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 286 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_0
# 287 "data//maps/RangerInstitute/scripts.pory"
	release
# 288 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 289 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
	return


# 57 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_0:
# 57 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 57 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 57 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 57 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 57 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 57 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 59 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_1:
# 59 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 80 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_InterviewQ1_Movement_0:
# 80 "data//maps/RangerInstitute/scripts.pory"
	emote_question_mark
	step_end

# 214 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_0:
# 214 "data//maps/RangerInstitute/scripts.pory"
	face_left
# 214 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 218 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_1:
# 218 "data//maps/RangerInstitute/scripts.pory"
	walk_down
	step_end

# 220 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_2:
# 220 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 247 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_0:
# 247 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 249 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_1:
# 249 "data//maps/RangerInstitute/scripts.pory"
	face_up
	step_end

# 255 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_2:
# 255 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 255 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 255 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 255 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 255 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 255 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 255 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 255 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 255 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 255 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 255 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 255 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 255 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 256 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_3:
# 256 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 256 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 256 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 256 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 256 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 256 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 256 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 256 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 256 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 256 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 256 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 256 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

# 275 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger1_Movement_0:
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 275 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 275 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 284 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_0:
# 284 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_down
	step_end

RangerInstitute_1F_ApplicationPC_Text_0:
# 24 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} booted up the Application\n"
	.string "PC.$"

RangerInstitute_1F_ApplicationPC_Text_1:
# 28 "data//maps/RangerInstitute/scripts.pory"
	.string "YOU ALREADY HAVE AN APPLICATION IN\n"
	.string "PROGRESS.$"

RangerInstitute_1F_ApplicationPC_Text_2:
# 32 "data//maps/RangerInstitute/scripts.pory"
	.string "WOULD YOU LIKE TO PRINT AN\n"
	.string "APPLICATION FORM?$"

RangerInstitute_1F_ApplicationPC_Text_3:
# 34 "data//maps/RangerInstitute/scripts.pory"
	.string "IT WILL COST 500. PROCEED WITH\n"
	.string "PRINTING?$"

RangerInstitute_1F_ApplicationPC_Text_4:
# 36 "data//maps/RangerInstitute/scripts.pory"
	.string "...\p"
	.string "A peice of paper comes out of the PC!\p"
	.string "PLEASE BRING THIS FORM TO THE\n"
	.string "INTERVIEWER ON DUTY.$"

RangerInstitute_1F_Interviewer_Text_0:
# 55 "data//maps/RangerInstitute/scripts.pory"
	.string "Ah, very good! You have an application\n"
	.string "form. Come then, sit with me.$"

RangerInstitute_1F_Interviewer_Text_1:
# 66 "data//maps/RangerInstitute/scripts.pory"
	.string "I'm the interviewer on duty. We get so\n"
	.string "many applicants!$"

RangerInstitute_1F_InterviewFail_Text_0:
# 73 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry! That's the wrong answer. You\n"
	.string "have failed this interview.\p"
	.string "Please feel free to apply again!\p"
	.string "...\p"
	.string "...sigh, when will we ever get a decent\n"
	.string "candidate?$"

RangerInstitute_1F_InterviewQ1_Text_0:
# 81 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these types is\n"
	.string "super-effective against DEWPIDER?$"

RangerInstitute_1F_InterviewQ1_Text_1:
# 82 "data//maps/RangerInstitute/scripts.pory"
	.string "FAIRY$"

RangerInstitute_1F_InterviewQ1_Text_2:
# 82 "data//maps/RangerInstitute/scripts.pory"
	.string "GRASS$"

RangerInstitute_1F_InterviewQ1_Text_3:
# 82 "data//maps/RangerInstitute/scripts.pory"
	.string "FIRE$"

RangerInstitute_1F_InterviewQ1_Text_4:
# 82 "data//maps/RangerInstitute/scripts.pory"
	.string "ROCK$"

RangerInstitute_1F_InterviewQ1_Text_5:
# 86 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! DEWPIDER, a BUG/WATER type, is\n"
	.string "weak to ROCK-type attacks.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ2_Text_0:
# 96 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these {PKMN} does NOT normally\n"
	.string "evolve??$"

RangerInstitute_1F_InterviewQ2_Text_1:
# 97 "data//maps/RangerInstitute/scripts.pory"
	.string "TOXEL$"

RangerInstitute_1F_InterviewQ2_Text_2:
# 97 "data//maps/RangerInstitute/scripts.pory"
	.string "KOFFING$"

RangerInstitute_1F_InterviewQ2_Text_3:
# 97 "data//maps/RangerInstitute/scripts.pory"
	.string "ABSOL$"

RangerInstitute_1F_InterviewQ2_Text_4:
# 97 "data//maps/RangerInstitute/scripts.pory"
	.string "CYNDAQUIL$"

RangerInstitute_1F_InterviewQ2_Text_5:
# 101 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! ABSOL has no normal evolution,\n"
	.string "but can MEGA EVOLVE.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ3_Text_0:
# 111 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these {PKMN} is GHOST type?$"

RangerInstitute_1F_InterviewQ3_Text_1:
# 112 "data//maps/RangerInstitute/scripts.pory"
	.string "DHELMISE$"

RangerInstitute_1F_InterviewQ3_Text_2:
# 112 "data//maps/RangerInstitute/scripts.pory"
	.string "ZIGZAGOON$"

RangerInstitute_1F_InterviewQ3_Text_3:
# 112 "data//maps/RangerInstitute/scripts.pory"
	.string "DELPHOX$"

RangerInstitute_1F_InterviewQ3_Text_4:
# 112 "data//maps/RangerInstitute/scripts.pory"
	.string "NINETALES$"

RangerInstitute_1F_InterviewQ3_Text_5:
# 116 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! DHELMISE is a GHOST/GRASS\n"
	.string "type {PKMN}, commonly found underwater.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ4_Text_0:
# 126 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: What happens if you use BLACK\n"
	.string "AUGURITE on a SCYTHER?$"

RangerInstitute_1F_InterviewQ4_Text_1:
# 127 "data//maps/RangerInstitute/scripts.pory"
	.string "Full Heal$"

RangerInstitute_1F_InterviewQ4_Text_2:
# 127 "data//maps/RangerInstitute/scripts.pory"
	.string "Evolution$"

RangerInstitute_1F_InterviewQ4_Text_3:
# 127 "data//maps/RangerInstitute/scripts.pory"
	.string "Nothing$"

RangerInstitute_1F_InterviewQ4_Text_4:
# 127 "data//maps/RangerInstitute/scripts.pory"
	.string "Boost BUG power$"

RangerInstitute_1F_InterviewQ4_Text_5:
# 131 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Using BLACK AUGURITE evolves\n"
	.string "SCYTHER into KLEAVOR.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ5_Text_0:
# 141 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: If you see a stranger in need of\n"
	.string "help, what do you do?$"

RangerInstitute_1F_InterviewQ5_Text_1:
# 142 "data//maps/RangerInstitute/scripts.pory"
	.string "Laugh$"

RangerInstitute_1F_InterviewQ5_Text_2:
# 142 "data//maps/RangerInstitute/scripts.pory"
	.string "Help$"

RangerInstitute_1F_InterviewQ5_Text_3:
# 142 "data//maps/RangerInstitute/scripts.pory"
	.string "Take a video$"

RangerInstitute_1F_InterviewQ5_Text_4:
# 146 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! And with that, this interview\n"
	.string "is over.$"

RangerInstitute_1F_InterviewPass_Text_0:
# 154 "data//maps/RangerInstitute/scripts.pory"
	.string "Congratulations {PLAYER}! You've\n"
	.string "cleared the interview and we are now\l"
	.string "proud to call you a {PKMN} RANGER RECRUIT.\l"
	.string "Welcome to the CORMORIA {PKMN} Ranger\l"
	.string "Institute! Please head upstairs for\l"
	.string "your induction.$"

RangerInstitute_1F_NPC1_Text_0:
# 163 "data//maps/RangerInstitute/scripts.pory"
	.string "Should I become a {PKMN} Ranger? It's\n"
	.string "really hard to get in...I don't know if I\l"
	.string "can do it.$"

RangerInstitute_1F_NPC2_Text_0:
# 170 "data//maps/RangerInstitute/scripts.pory"
	.string "My interview is coming up. I'm nervous -\n"
	.string "I really want to become a {PKMN} Ranger so\l"
	.string "bad! Their {PKMN} are so cool! TAUROS!\l"
	.string "KANGASKHAN!$"

RangerInstitute_1F_NPC3_Text_0:
# 177 "data//maps/RangerInstitute/scripts.pory"
	.string "Not all Rangers are out on the field!\n"
	.string "Managing such a large organisation is\l"
	.string "no easy task, let me tell you.$"

RangerInstitute_1F_BlockerBasement_Text_0:
# 187 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, only {PKMN} Rangers are allowed\n"
	.string "inside. If you'd like to apply, you can\l"
	.string "print an application form using the PC\l"
	.string "by the entrance.$"

RangerInstitute_1F_BlockerUpstairs_Text_0:
# 204 "data//maps/RangerInstitute/scripts.pory"
	.string "You're not a fully-fledged {PKMN} RANGER\n"
	.string "yet - just a RECRUIT! So I'll be keeping\l"
	.string "an eye on you.$"

RangerInstitute_2F_Trigger0_Text_0:
# 251 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Head.$"

RangerInstitute_2F_Trigger1_Text_0:
# 270 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Director.$"

RangerInstitute_2F_EventScript_Welcome_Text_0:
# 286 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE! Meet {PLAYER}, our\n"
	.string "newest RECRUIT.$"
