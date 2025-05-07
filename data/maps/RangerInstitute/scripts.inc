# 1 "data//maps/RangerInstitute/scripts.pory"

# 2 "data//maps/RangerInstitute/scripts.pory"
    .set LOCALID_RAVINE, 14
# 3 "data//maps/RangerInstitute/scripts.pory"
    .set LOCALID_RANGER1, 12
# 4 "data//maps/RangerInstitute/scripts.pory"
    .set LOCALID_PACKAGE, 15

RangerInstitute_MapScripts::
	.byte 0


RangerInstitute_1F_ApplicationPC::
# 46 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_0
# 47 "data//maps/RangerInstitute/scripts.pory"
	release
# 49 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_2
# 54 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_ApplicationPC_5
# 73 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_5, MSGBOX_SIGN
# 74 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_ApplicationPC_2:
# 50 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_1, MSGBOX_SIGN
	end

RangerInstitute_1F_ApplicationPC_5:
# 55 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_2, MSGBOX_YESNO
# 56 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_8
RangerInstitute_1F_ApplicationPC_7:
# 69 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_ApplicationPC_8:
# 57 "data//maps/RangerInstitute/scripts.pory"
	showmoneybox 0, 0
# 58 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_3, MSGBOX_YESNO
# 59 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_11
	goto RangerInstitute_1F_ApplicationPC_7

RangerInstitute_1F_ApplicationPC_11:
# 60 "data//maps/RangerInstitute/scripts.pory"
	hidemoneybox
# 61 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_4
# 62 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 1
	goto RangerInstitute_1F_ApplicationPC_7


RangerInstitute_1F_Interviewer::
# 80 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 81 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 83 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_Interviewer_2
# 95 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_1
RangerInstitute_1F_Interviewer_1:
# 98 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_Interviewer_2:
# 84 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_0
# 85 "data//maps/RangerInstitute/scripts.pory"
	release
# 86 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_Interviewer_Movement_0
# 87 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 88 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_Interviewer_Movement_1
# 89 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 90 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 92 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ1
	goto RangerInstitute_1F_Interviewer_1


RangerInstitute_1F_InterviewFail::
# 102 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewFail_Text_0
# 103 "data//maps/RangerInstitute/scripts.pory"
	release
# 104 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 0
	return


RangerInstitute_1F_InterviewQ1::
# 109 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 110 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ1_Text_0
# 111 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 112 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ1_Text_1, RangerInstitute_1F_InterviewQ1_Text_2, RangerInstitute_1F_InterviewQ1_Text_3, RangerInstitute_1F_InterviewQ1_Text_4
# 115 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RangerInstitute_1F_InterviewQ1_1
# 119 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ1_1:
# 116 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_5
# 117 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ2
	return


RangerInstitute_1F_InterviewQ2::
# 125 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 126 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ2_Text_0
# 127 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 128 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ2_Text_1, RangerInstitute_1F_InterviewQ2_Text_2, RangerInstitute_1F_InterviewQ2_Text_3, RangerInstitute_1F_InterviewQ2_Text_4
# 131 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ2_1
# 135 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ2_1:
# 132 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ2_Text_5
# 133 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ3
	return


RangerInstitute_1F_InterviewQ3::
# 141 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 142 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ3_Text_0
# 143 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 144 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ3_Text_1, RangerInstitute_1F_InterviewQ3_Text_2, RangerInstitute_1F_InterviewQ3_Text_3, RangerInstitute_1F_InterviewQ3_Text_4
# 147 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RangerInstitute_1F_InterviewQ3_1
# 151 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ3_1:
# 148 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ3_Text_5
# 149 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ4
	return


RangerInstitute_1F_InterviewQ4::
# 157 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 158 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ4_Text_0
# 159 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 160 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_1, RangerInstitute_1F_InterviewQ4_Text_2, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ4_Text_4
# 163 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_InterviewQ4_1
# 167 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ4_1:
# 164 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ4_Text_5
# 165 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ5
	return


RangerInstitute_1F_InterviewQ5::
# 173 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 174 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ5_Text_0
# 175 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 176 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ5_Text_1, RangerInstitute_1F_InterviewQ5_Text_2, RangerInstitute_1F_InterviewQ5_Text_3
# 179 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ5_1
# 183 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ5_1:
# 180 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_4
# 181 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewPass
	return


RangerInstitute_1F_InterviewPass::
# 188 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewPass_Text_0
# 189 "data//maps/RangerInstitute/scripts.pory"
	release
# 190 "data//maps/RangerInstitute/scripts.pory"
	delay 8
# 193 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewPass_Text_1
# 194 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 195 "data//maps/RangerInstitute/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 197 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewPass_Text_2
# 198 "data//maps/RangerInstitute/scripts.pory"
	releaseall
# 199 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 2
# 200 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_ACCEPTED
	return


RangerInstitute_1F_NPC1::
# 205 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 206 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 207 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC1_Text_0
# 208 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC2::
# 212 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 213 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 214 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC2_Text_0
# 215 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC3::
# 219 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 220 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 221 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC3_Text_0
# 222 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerBasement::
# 228 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 229 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 230 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
# 232 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerUpstairs::
# 236 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_2
RangerInstitute_1F_BlockerUpstairs_1:
# 240 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_5
RangerInstitute_1F_BlockerUpstairs_4:
# 244 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_8
RangerInstitute_1F_BlockerUpstairs_7:
	end

RangerInstitute_1F_BlockerUpstairs_2:
# 237 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0, MSGBOX_NPC
	goto RangerInstitute_1F_BlockerUpstairs_1

RangerInstitute_1F_BlockerUpstairs_5:
# 241 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0, MSGBOX_NPC
	goto RangerInstitute_1F_BlockerUpstairs_4

RangerInstitute_1F_BlockerUpstairs_8:
# 245 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_1, MSGBOX_NPC
	goto RangerInstitute_1F_BlockerUpstairs_7


RangerInstitute_1F_TriggerUpstairs::
# 251 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_gt RangerInstitute_1F_TriggerUpstairs_2
# 253 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 254 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_0
# 255 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 256 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
# 257 "data//maps/RangerInstitute/scripts.pory"
	release
# 258 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_TriggerUpstairs_Movement_1
# 259 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 260 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 261 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 262 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_TriggerUpstairs_2:
	end


RangerInstitute_2F_Trigger0::
# 286 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger0_2
	end

RangerInstitute_2F_Trigger0_1:
# 305 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger0_2:
# 287 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 288 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_0
# 289 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 290 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 291 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 292 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger0_Text_0
# 293 "data//maps/RangerInstitute/scripts.pory"
	release
# 296 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_2
# 297 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_3
# 298 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 300 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger0_1


RangerInstitute_2F_Trigger1::
# 310 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger1_2
	end

RangerInstitute_2F_Trigger1_1:
# 328 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger1_2:
# 311 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 312 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_0
# 313 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 314 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 315 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 316 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger1_Text_0
# 317 "data//maps/RangerInstitute/scripts.pory"
	release
# 320 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_2
# 321 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger1_Movement_0
# 322 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 324 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger1_1


RangerInstitute_2F_EventScript_Welcome::
# 333 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 334 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 335 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_0
# 336 "data//maps/RangerInstitute/scripts.pory"
	release
# 337 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 338 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_1
# 339 "data//maps/RangerInstitute/scripts.pory"
	release
# 340 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 341 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 342 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_2
# 343 "data//maps/RangerInstitute/scripts.pory"
	release
# 344 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 345 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_3
# 346 "data//maps/RangerInstitute/scripts.pory"
	release
# 347 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_2
# 348 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 349 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_4
# 350 "data//maps/RangerInstitute/scripts.pory"
	release
# 351 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_3
# 352 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 353 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_5
# 354 "data//maps/RangerInstitute/scripts.pory"
	release
# 355 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 356 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 357 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_6
# 358 "data//maps/RangerInstitute/scripts.pory"
	release
# 359 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 360 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 361 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_7
# 362 "data//maps/RangerInstitute/scripts.pory"
	release
# 363 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_4
# 364 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 365 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_8
# 366 "data//maps/RangerInstitute/scripts.pory"
	release
# 367 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 368 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 369 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_9
# 370 "data//maps/RangerInstitute/scripts.pory"
	release
# 371 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 372 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_CARD
# 373 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_10
# 374 "data//maps/RangerInstitute/scripts.pory"
	release
# 375 "data//maps/RangerInstitute/scripts.pory"
	delay 32
# 376 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_11
# 377 "data//maps/RangerInstitute/scripts.pory"
	release
# 378 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 379 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_5
# 380 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_EventScript_Welcome_Movement_6
# 381 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_12
# 382 "data//maps/RangerInstitute/scripts.pory"
	release
# 383 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_13
# 384 "data//maps/RangerInstitute/scripts.pory"
	release
# 385 "data//maps/RangerInstitute/scripts.pory"
	delay 24
# 386 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_14
# 387 "data//maps/RangerInstitute/scripts.pory"
	release
# 388 "data//maps/RangerInstitute/scripts.pory"
	removeobject LOCALID_PACKAGE
# 389 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_PACKAGE
# 390 "data//maps/RangerInstitute/scripts.pory"
	startquest QUEST_POKEMON_RANGER
# 391 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_GOT_FIRST_MISSION
# 392 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 3
# 393 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 394 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_15
# 395 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Ravine::
# 412 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 413 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 414 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq RangerInstitute_Ravine_1
	return

RangerInstitute_Ravine_1:
# 415 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_0, MSGBOX_NPC
	end


RangerInstitute_2F_NPC_1::
# 421 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 422 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 423 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_1_Text_0
# 424 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_2::
# 428 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 429 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 430 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_2_Text_0
# 431 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_3::
# 435 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 436 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 437 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_3_Text_0
# 438 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_4::
# 442 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 443 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 444 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_4_Text_0
# 445 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Mon_Bayleef::
# 472 "data//maps/RangerInstitute/scripts.pory"
	goto_if_set FLAG_RANGER_INSTITUTE_BAYLEEF, RangerInstitute_Mon_Bayleef_2
# 475 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 476 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 477 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_BAYLEEF, CRY_MODE_NORMAL
# 478 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_1
# 479 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MAX_REVIVE
# 480 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_INSTITUTE_BAYLEEF
# 481 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_2
# 482 "data//maps/RangerInstitute/scripts.pory"
	releaseall
RangerInstitute_Mon_Bayleef_1:
	end

RangerInstitute_Mon_Bayleef_2:
# 473 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_0, MSGBOX_NPC
	goto RangerInstitute_Mon_Bayleef_1


RangerInstitute_Mon_Palpitoad::
# 487 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
# 488 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Palpitoad_Text_0, MSGBOX_NPC
	end


RangerInstitute_Mon_Surskit::
# 492 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_MASQUERAIN, CRY_MODE_NORMAL
# 493 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Surskit_Text_0, MSGBOX_NPC
	end


RangerInstitute_Mon_Scyther::
# 497 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
# 498 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Scyther_Text_0, MSGBOX_NPC
	end


# 86 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_0:
# 86 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 86 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 86 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 86 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 86 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 86 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 88 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_1:
# 88 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 109 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_InterviewQ1_Movement_0:
# 109 "data//maps/RangerInstitute/scripts.pory"
	emote_question_mark
	step_end

# 254 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_0:
# 254 "data//maps/RangerInstitute/scripts.pory"
	face_left
# 254 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 258 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_1:
# 258 "data//maps/RangerInstitute/scripts.pory"
	walk_down
	step_end

# 260 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_2:
# 260 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 288 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_0:
# 288 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 290 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_1:
# 290 "data//maps/RangerInstitute/scripts.pory"
	face_up
	step_end

# 296 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_2:
# 296 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 296 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 296 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 296 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 296 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 296 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 296 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 296 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 296 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 296 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 296 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 296 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 296 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 297 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_3:
# 297 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 297 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 297 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 297 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 297 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 297 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 297 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 297 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 297 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 297 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 297 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 297 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

# 321 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger1_Movement_0:
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 321 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 333 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_0:
# 333 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_down
	step_end

# 340 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_1:
# 340 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 347 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_2:
# 347 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 347 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 347 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 347 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 351 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_3:
# 351 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 351 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 363 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_4:
# 363 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 363 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 379 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_5:
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 379 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 379 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 380 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_6:
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 380 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

RangerInstitute_1F_ApplicationPC_Text_0:
# 46 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} booted up the Application\n"
	.string "PC.$"

RangerInstitute_1F_ApplicationPC_Text_1:
# 50 "data//maps/RangerInstitute/scripts.pory"
	.string "YOU ALREADY HAVE AN APPLICATION IN\n"
	.string "PROGRESS.$"

RangerInstitute_1F_ApplicationPC_Text_2:
# 55 "data//maps/RangerInstitute/scripts.pory"
	.string "WOULD YOU LIKE TO PRINT AN\n"
	.string "APPLICATION FORM?$"

RangerInstitute_1F_ApplicationPC_Text_3:
# 58 "data//maps/RangerInstitute/scripts.pory"
	.string "IT WILL COST 500. PROCEED WITH\n"
	.string "PRINTING?$"

RangerInstitute_1F_ApplicationPC_Text_4:
# 61 "data//maps/RangerInstitute/scripts.pory"
	.string "...\p"
	.string "A piece of paper comes out of the PC!\p"
	.string "PLEASE BRING THIS FORM TO THE\n"
	.string "INTERVIEWER ON DUTY.$"

RangerInstitute_1F_ApplicationPC_Text_5:
# 73 "data//maps/RangerInstitute/scripts.pory"
	.string "YOU HAVE ALREADY CLEARED THE\n"
	.string "INTERVIEW.$"

RangerInstitute_1F_Interviewer_Text_0:
# 84 "data//maps/RangerInstitute/scripts.pory"
	.string "Ah, very good! You have an application\n"
	.string "form. Come then, sit with me.$"

RangerInstitute_1F_Interviewer_Text_1:
# 95 "data//maps/RangerInstitute/scripts.pory"
	.string "I'm the interviewer on duty. We get so\n"
	.string "many applicants!$"

RangerInstitute_1F_InterviewFail_Text_0:
# 102 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry! That's the wrong answer. You\n"
	.string "have failed this interview.\p"
	.string "Please feel free to apply again!\p"
	.string "...\p"
	.string "...sigh, when will we ever get a decent\n"
	.string "candidate?$"

RangerInstitute_1F_InterviewQ1_Text_0:
# 110 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these types is\n"
	.string "super-effective against Dewpider?$"

RangerInstitute_1F_InterviewQ1_Text_1:
# 112 "data//maps/RangerInstitute/scripts.pory"
	.string "FAIRY$"

RangerInstitute_1F_InterviewQ1_Text_2:
# 112 "data//maps/RangerInstitute/scripts.pory"
	.string "GRASS$"

RangerInstitute_1F_InterviewQ1_Text_3:
# 112 "data//maps/RangerInstitute/scripts.pory"
	.string "FIRE$"

RangerInstitute_1F_InterviewQ1_Text_4:
# 112 "data//maps/RangerInstitute/scripts.pory"
	.string "ROCK$"

RangerInstitute_1F_InterviewQ1_Text_5:
# 116 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Dewpider, a BUG and WATER\n"
	.string "type, is weak to ROCK-type attacks.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ2_Text_0:
# 126 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these Pokémon does NOT\n"
	.string "have a normal evolution?$"

RangerInstitute_1F_InterviewQ2_Text_1:
# 128 "data//maps/RangerInstitute/scripts.pory"
	.string "Toxel$"

RangerInstitute_1F_InterviewQ2_Text_2:
# 128 "data//maps/RangerInstitute/scripts.pory"
	.string "Koffing$"

RangerInstitute_1F_InterviewQ2_Text_3:
# 128 "data//maps/RangerInstitute/scripts.pory"
	.string "Absol$"

RangerInstitute_1F_InterviewQ2_Text_4:
# 128 "data//maps/RangerInstitute/scripts.pory"
	.string "Cyndaquil$"

RangerInstitute_1F_InterviewQ2_Text_5:
# 132 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Absol has no normal evolution,\n"
	.string "but it can Mega Evolve.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ3_Text_0:
# 142 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these Pokémon is GHOST\n"
	.string "type?$"

RangerInstitute_1F_InterviewQ3_Text_1:
# 144 "data//maps/RangerInstitute/scripts.pory"
	.string "Dhelmise$"

RangerInstitute_1F_InterviewQ3_Text_2:
# 144 "data//maps/RangerInstitute/scripts.pory"
	.string "Zigzagoon$"

RangerInstitute_1F_InterviewQ3_Text_3:
# 144 "data//maps/RangerInstitute/scripts.pory"
	.string "Delphox$"

RangerInstitute_1F_InterviewQ3_Text_4:
# 144 "data//maps/RangerInstitute/scripts.pory"
	.string "Ninetales$"

RangerInstitute_1F_InterviewQ3_Text_5:
# 148 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Dhelmise is a GHOST and GRASS\n"
	.string "type Pokémon found underwater.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ4_Text_0:
# 158 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: What happens if you use Black\n"
	.string "Augurite on a Scyther?$"

RangerInstitute_1F_InterviewQ4_Text_1:
# 160 "data//maps/RangerInstitute/scripts.pory"
	.string "Full Heal$"

RangerInstitute_1F_InterviewQ4_Text_2:
# 160 "data//maps/RangerInstitute/scripts.pory"
	.string "Evolution$"

RangerInstitute_1F_InterviewQ4_Text_3:
# 160 "data//maps/RangerInstitute/scripts.pory"
	.string "Nothing$"

RangerInstitute_1F_InterviewQ4_Text_4:
# 160 "data//maps/RangerInstitute/scripts.pory"
	.string "Boost BUG power$"

RangerInstitute_1F_InterviewQ4_Text_5:
# 164 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Using Black Augurite evolves\n"
	.string "Scyther into Kleavor.\p"
	.string "Onto the last question!$"

RangerInstitute_1F_InterviewQ5_Text_0:
# 174 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: If you see a stranger in need of\n"
	.string "help, what do you do?$"

RangerInstitute_1F_InterviewQ5_Text_1:
# 176 "data//maps/RangerInstitute/scripts.pory"
	.string "Laugh$"

RangerInstitute_1F_InterviewQ5_Text_2:
# 176 "data//maps/RangerInstitute/scripts.pory"
	.string "Help them$"

RangerInstitute_1F_InterviewQ5_Text_3:
# 176 "data//maps/RangerInstitute/scripts.pory"
	.string "Take a video$"

RangerInstitute_1F_InterviewQ5_Text_4:
# 180 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! And with that, this interview\n"
	.string "is over.$"

RangerInstitute_1F_InterviewPass_Text_0:
# 188 "data//maps/RangerInstitute/scripts.pory"
	.string "Congratulations {PLAYER}! You've\n"
	.string "cleared the interview and we are now\l"
	.string "proud to call you a Pokémon Ranger\l"
	.string "Recruit. Welcome to the Cormoria\l"
	.string "Pokémon Ranger Institute!$"

RangerInstitute_1F_InterviewPass_Text_1:
# 193 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} is now a Recruit!$"

RangerInstitute_1F_InterviewPass_Text_2:
# 197 "data//maps/RangerInstitute/scripts.pory"
	.string "Please head upstairs for your\n"
	.string "induction. All the best, Recruit!$"

RangerInstitute_1F_NPC1_Text_0:
# 207 "data//maps/RangerInstitute/scripts.pory"
	.string "Should I become a Pokémon Ranger? It's\n"
	.string "really hard to get in...I don't know if I\l"
	.string "can do it.$"

RangerInstitute_1F_NPC2_Text_0:
# 214 "data//maps/RangerInstitute/scripts.pory"
	.string "My interview is coming up. I'm nervous -\n"
	.string "I really want to become a Pokémon\l"
	.string "Ranger so bad! Their Pokémon are so\l"
	.string "cool! Tauros! Kangaskhan!\p"
	.string "...\p"
	.string "I don't know any others.$"

RangerInstitute_1F_NPC3_Text_0:
# 221 "data//maps/RangerInstitute/scripts.pory"
	.string "Not all Rangers are out on the field!\n"
	.string "Managing such a large organisation is\l"
	.string "no easy task, let me tell you.$"

RangerInstitute_1F_BlockerBasement_Text_0:
# 230 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, this area is closed off for\n"
	.string "repairs.$"

RangerInstitute_1F_BlockerUpstairs_Text_0:
# 237 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, only Pokémon Rangers are allowed\n"
	.string "inside. If you'd like to apply, you can\l"
	.string "print an application form using the PC\l"
	.string "by the entrance.$"

RangerInstitute_1F_BlockerUpstairs_Text_1:
# 245 "data//maps/RangerInstitute/scripts.pory"
	.string "You're not a fully-fledged Pokémon\n"
	.string "Ranger yet - just a Recruit! So I'll be\l"
	.string "keeping an eye on you.$"

RangerInstitute_2F_Trigger0_Text_0:
# 292 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to Ravine, the Institute Head.$"

RangerInstitute_2F_Trigger1_Text_0:
# 316 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Director.$"

RangerInstitute_2F_EventScript_Welcome_Text_0:
# 335 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE! Meet {PLAYER}, our\n"
	.string "newest Recruit.$"

RangerInstitute_2F_EventScript_Welcome_Text_1:
# 338 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Hmm...yes...\p"
	.string "...\p"
	.string "...yes this is -$"

RangerInstitute_2F_EventScript_Welcome_Text_2:
# 342 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE!$"

RangerInstitute_2F_EventScript_Welcome_Text_3:
# 345 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE:...ahh...hmm...$"

RangerInstitute_2F_EventScript_Welcome_Text_4:
# 349 "data//maps/RangerInstitute/scripts.pory"
	.string "DIRECTOR RAVINE!!!$"

RangerInstitute_2F_EventScript_Welcome_Text_5:
# 353 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Yes! Yes! What is it!$"

RangerInstitute_2F_EventScript_Welcome_Text_6:
# 357 "data//maps/RangerInstitute/scripts.pory"
	.string "Sigh...\n"
	.string "Director Ravine! Meet {PLAYER}, our\l"
	.string "newest recruit.\p"
	.string "...\p"
	.string "Director, you were daydreaming again!$"

RangerInstitute_2F_EventScript_Welcome_Text_7:
# 361 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: No I was most definitely not,\n"
	.string "how dare you? I was -ahem- deep in my\l"
	.string "research.\p"
	.string "...\p"
	.string "RAVINE: Anyway. Yes. Welcome to the\n"
	.string "Ranger Institute, {PLAYER}!\l"
	.string "Congratulations on clearing the\l"
	.string "interview. I'm so pleased to see our\l"
	.string "family grow. Do you know what we\l"
	.string "Pokémon Rangers do?$"

RangerInstitute_2F_EventScript_Welcome_Text_8:
# 365 "data//maps/RangerInstitute/scripts.pory"
	.string "Psst...Director, the bike and stuff.$"

RangerInstitute_2F_EventScript_Welcome_Text_9:
# 369 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Ah yes! As part of your welcome\n"
	.string "package, the Ranger Institute is\l"
	.string "pleased to provide you with these!$"

RangerInstitute_2F_EventScript_Welcome_Text_10:
# 373 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: The Ranger Bike and Ranger\n"
	.string "Card - the two emblems of a Pokémon\l"
	.string "Ranger in Cormoria! The Ranger Bike will\l"
	.string "allow you to speedily traverse all of\l"
	.string "Cormoria, and the Ranger Card lets\l"
	.string "everyone know you're a proper Pokémon\l"
	.string "Ranger! You can access the other\l"
	.string "Ranger Institutes with this.$"

RangerInstitute_2F_EventScript_Welcome_Text_11:
# 376 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Now, do you know what we\n"
	.string "Pokémon Rangers do? No? Follow me.$"

RangerInstitute_2F_EventScript_Welcome_Text_12:
# 381 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: As Pokémon Rangers, our job is\n"
	.string "to protect nature and maintain harmony\l"
	.string "between people, Pokémon, and the\l"
	.string "environment. Whether it's rescuing\l"
	.string "Pokémon in danger, resolving conflicts,\l"
	.string "or stopping threats to the ecosystem,\l"
	.string "we're always out in the field, ensuring\l"
	.string "the wild stays safe and balanced. It's\l"
	.string "challenging work, but knowing we're\l"
	.string "making a difference for both Pokémon\l"
	.string "and the world around us makes it all\l"
	.string "worthwhile.$"

RangerInstitute_2F_EventScript_Welcome_Text_13:
# 383 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: But none of that for you just\n"
	.string "yet! You have to earn your stripes here.\l"
	.string "As a Ranger Recruit, you'll have to\l"
	.string "complete missions to advance your\l"
	.string "ranking.$"

RangerInstitute_2F_EventScript_Welcome_Text_14:
# 386 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Now, I have some important\n"
	.string "items that the Ranger Institute at Ivy\l"
	.string "River wants. Your first mission will be\l"
	.string "to deliver this to them!$"

RangerInstitute_2F_EventScript_Welcome_Text_15:
# 394 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: If you complete this mission,\n"
	.string "you'll rank up from Recruit to\l"
	.string "Candidate. The Ranger Institute at Ivy\l"
	.string "River is a little hard to find. You'll\l"
	.string "have to surf down from Winterlily Hollow\l"
	.string "and explore the riverbank. Good\l"
	.string "training for a recruit, eh?$"

RangerInstitute_Ravine_Text_0:
# 415 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: How's my newest Recruit doing?\n"
	.string "Have you delivered the package yet?$"

RangerInstitute_2F_NPC_1_Text_0:
# 423 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine has a bad habit of\n"
	.string "daydreaming at work...$"

RangerInstitute_2F_NPC_2_Text_0:
# 430 "data//maps/RangerInstitute/scripts.pory"
	.string "Hello there, new recruit! Wanna see what\n"
	.string "I'm working on? I'm analysing the\l"
	.string "weather patterns in Cormoria. I stay on\l"
	.string "the lookout for any unnatural changes.$"

RangerInstitute_2F_NPC_3_Text_0:
# 437 "data//maps/RangerInstitute/scripts.pory"
	.string "Gah! I hate being on inventory duty. I\n"
	.string "miss the field!$"

RangerInstitute_2F_NPC_4_Text_0:
# 444 "data//maps/RangerInstitute/scripts.pory"
	.string "How's it going, {PLAYER}?$"

RangerInstitute_Mon_Bayleef_Text_0:
# 473 "data//maps/RangerInstitute/scripts.pory"
	.string "Bayleef is singing happily!$"

RangerInstitute_Mon_Bayleef_Text_1:
# 478 "data//maps/RangerInstitute/scripts.pory"
	.string "Bayleef is singing happily! It snuggles\n"
	.string "upto you and gives you something...$"

RangerInstitute_Mon_Bayleef_Text_2:
# 481 "data//maps/RangerInstitute/scripts.pory"
	.string "Thanks Bayleef!$"

RangerInstitute_Mon_Palpitoad_Text_0:
# 488 "data//maps/RangerInstitute/scripts.pory"
	.string "Palpitoad grunts and waddles around. It\n"
	.string "seems upset...$"

RangerInstitute_Mon_Surskit_Text_0:
# 493 "data//maps/RangerInstitute/scripts.pory"
	.string "Masquerain wants to be in the water!$"

RangerInstitute_Mon_Scyther_Text_0:
# 498 "data//maps/RangerInstitute/scripts.pory"
	.string "Scyther looks as bummed out as its\n"
	.string "trainer!$"
