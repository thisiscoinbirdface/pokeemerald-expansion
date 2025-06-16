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
	hidemoneybox
# 60 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_11
	goto RangerInstitute_1F_ApplicationPC_7

RangerInstitute_1F_ApplicationPC_11:
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
# 96 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_2
RangerInstitute_1F_Interviewer_1:
# 99 "data//maps/RangerInstitute/scripts.pory"
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
# 91 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_1
# 92 "data//maps/RangerInstitute/scripts.pory"
	release
# 93 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ1
	goto RangerInstitute_1F_Interviewer_1


RangerInstitute_1F_InterviewFail::
# 103 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewFail_Text_0
# 104 "data//maps/RangerInstitute/scripts.pory"
	release
# 105 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 0
	return


RangerInstitute_1F_InterviewQ1::
# 110 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 111 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ1_Text_0
# 112 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 113 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ1_Text_1, RangerInstitute_1F_InterviewQ1_Text_2, RangerInstitute_1F_InterviewQ1_Text_3, RangerInstitute_1F_InterviewQ1_Text_4
# 116 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RangerInstitute_1F_InterviewQ1_1
# 120 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ1_1:
# 117 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_5
# 118 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ2
	return


RangerInstitute_1F_InterviewQ2::
# 126 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 127 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ2_Text_0
# 128 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 129 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ2_Text_1, RangerInstitute_1F_InterviewQ2_Text_2, RangerInstitute_1F_InterviewQ2_Text_3, RangerInstitute_1F_InterviewQ2_Text_4
# 132 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ2_1
# 136 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ2_1:
# 133 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ2_Text_5
# 134 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ3
	return


RangerInstitute_1F_InterviewQ3::
# 142 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 143 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ3_Text_0
# 144 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 145 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ3_Text_1, RangerInstitute_1F_InterviewQ3_Text_2, RangerInstitute_1F_InterviewQ3_Text_3, RangerInstitute_1F_InterviewQ3_Text_4
# 148 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RangerInstitute_1F_InterviewQ3_1
# 152 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ3_1:
# 149 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ3_Text_5
# 150 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ4
	return


RangerInstitute_1F_InterviewQ4::
# 158 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 159 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ4_Text_0
# 160 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 161 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_1, RangerInstitute_1F_InterviewQ4_Text_2, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ4_Text_4
# 164 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_InterviewQ4_1
# 168 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ4_1:
# 165 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ4_Text_5
# 166 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ5
	return


RangerInstitute_1F_InterviewQ5::
# 174 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 175 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewQ5_Text_0
# 176 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 177 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ5_Text_1, RangerInstitute_1F_InterviewQ5_Text_2, RangerInstitute_1F_InterviewQ5_Text_3
# 180 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ5_1
# 184 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ5_1:
# 181 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_4
# 182 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewPass
	return


RangerInstitute_1F_InterviewPass::
# 189 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewPass_Text_0
# 190 "data//maps/RangerInstitute/scripts.pory"
	release
# 191 "data//maps/RangerInstitute/scripts.pory"
	delay 8
# 194 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_InterviewPass_Text_1
# 195 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 196 "data//maps/RangerInstitute/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 198 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewPass_Text_2
# 199 "data//maps/RangerInstitute/scripts.pory"
	releaseall
# 200 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 2
# 201 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_ACCEPTED
	return


RangerInstitute_1F_NPC1::
# 206 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 207 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 208 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC1_Text_0
# 209 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC2::
# 213 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 214 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 215 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC2_Text_0
# 216 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC3::
# 220 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 221 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 222 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC3_Text_0
# 223 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC4::
# 227 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 228 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 229 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC4_Text_0
# 230 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerBasement::
# 236 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0, MSGBOX_NPC
	end


RangerInstitute_1F_BlockerUpstairs::
# 270 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_2
# 275 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_5
# 280 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_1, MSGBOX_NPC
	end

RangerInstitute_1F_BlockerUpstairs_2:
# 271 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0, MSGBOX_NPC
	end

RangerInstitute_1F_BlockerUpstairs_5:
# 276 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0, MSGBOX_NPC
	end


RangerInstitute_1F_TriggerUpstairs::
# 285 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_gt RangerInstitute_1F_TriggerUpstairs_2
# 287 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 288 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_0
# 289 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 290 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
# 291 "data//maps/RangerInstitute/scripts.pory"
	release
# 292 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_TriggerUpstairs_Movement_1
# 293 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 294 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 295 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 296 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_TriggerUpstairs_2:
	end


RangerInstitute_2F_Trigger0::
# 320 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger0_2
	end

RangerInstitute_2F_Trigger0_1:
# 339 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger0_2:
# 321 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 322 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_0
# 323 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 324 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 325 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 326 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger0_Text_0
# 327 "data//maps/RangerInstitute/scripts.pory"
	release
# 330 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_2
# 331 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_3
# 332 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 334 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger0_1


RangerInstitute_2F_Trigger1::
# 344 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger1_2
	end

RangerInstitute_2F_Trigger1_1:
# 362 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger1_2:
# 345 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 346 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_0
# 347 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 348 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 349 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 350 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger1_Text_0
# 351 "data//maps/RangerInstitute/scripts.pory"
	release
# 354 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_2
# 355 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger1_Movement_0
# 356 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 358 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger1_1


RangerInstitute_2F_EventScript_Welcome::
# 367 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 368 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 369 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_0
# 370 "data//maps/RangerInstitute/scripts.pory"
	release
# 371 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 372 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_2
# 373 "data//maps/RangerInstitute/scripts.pory"
	release
# 374 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 375 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 376 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_3
# 377 "data//maps/RangerInstitute/scripts.pory"
	release
# 378 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 379 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_4
# 380 "data//maps/RangerInstitute/scripts.pory"
	release
# 381 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_2
# 382 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 383 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_5
# 384 "data//maps/RangerInstitute/scripts.pory"
	release
# 385 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_3
# 386 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 387 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_6
# 388 "data//maps/RangerInstitute/scripts.pory"
	release
# 389 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 390 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 391 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_7
# 392 "data//maps/RangerInstitute/scripts.pory"
	release
# 393 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 394 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 395 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_8
# 396 "data//maps/RangerInstitute/scripts.pory"
	release
# 397 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_4
# 398 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 399 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 400 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_9
# 401 "data//maps/RangerInstitute/scripts.pory"
	release
# 402 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 403 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 404 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 405 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 406 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_10
# 407 "data//maps/RangerInstitute/scripts.pory"
	release
# 408 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 409 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_CARD
# 410 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_11
# 411 "data//maps/RangerInstitute/scripts.pory"
	release
# 412 "data//maps/RangerInstitute/scripts.pory"
	delay 32
# 413 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_12
# 414 "data//maps/RangerInstitute/scripts.pory"
	release
# 415 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 416 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_5
# 417 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_EventScript_Welcome_Movement_6
# 418 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_13
# 419 "data//maps/RangerInstitute/scripts.pory"
	release
# 420 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_14
# 421 "data//maps/RangerInstitute/scripts.pory"
	release
# 422 "data//maps/RangerInstitute/scripts.pory"
	delay 24
# 423 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_15
# 424 "data//maps/RangerInstitute/scripts.pory"
	release
# 425 "data//maps/RangerInstitute/scripts.pory"
	removeobject LOCALID_PACKAGE
# 426 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_PACKAGE
# 427 "data//maps/RangerInstitute/scripts.pory"
	startquest QUEST_POKEMON_RANGER
# 428 "data//maps/RangerInstitute/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_RANGER, SUB_QUEST_1
# 429 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_GOT_FIRST_MISSION
# 430 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 3
# 431 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 432 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_16
# 433 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Ravine::
# 451 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 11
	goto_if_eq RangerInstitute_Ravine_2
# 460 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 10
	goto_if_eq RangerInstitute_Ravine_5
# 664 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 9
	goto_if_eq RangerInstitute_Ravine_8
# 670 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 8
	goto_if_eq RangerInstitute_Ravine_15
# 681 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_2F_EventScript_Welcome_Text_1
# 682 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_23, MSGBOX_NPC
	end

RangerInstitute_Ravine_2:
# 452 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 453 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 454 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_2F_EventScript_Welcome_Text_1
# 455 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_0, MSGBOX_YESNO
# 456 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Ravine_5:
# 461 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 462 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 463 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_2F_EventScript_Welcome_Text_1
# 464 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_1, MSGBOX_YESNO
# 465 "data//maps/RangerInstitute/scripts.pory"
	release
# 466 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RangerInstitute_Ravine_11
# 472 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_2F_EventScript_Welcome_Text_1
# 473 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_3
# 474 "data//maps/RangerInstitute/scripts.pory"
	release
# 475 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 479 "data//maps/RangerInstitute/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 481 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
	goto_if_eq RangerInstitute_Ravine_18
RangerInstitute_Ravine_17:
# 484 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, DIR_WEST
	goto_if_eq RangerInstitute_Ravine_21
RangerInstitute_Ravine_20:
# 487 "data//maps/RangerInstitute/scripts.pory"
	applymovement VAR_LAST_TALKED, RangerInstitute_Ravine_Movement_2
# 488 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 490 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_3
# 491 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 493 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_2F_EventScript_Welcome_Text_1
# 494 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_4
# 495 "data//maps/RangerInstitute/scripts.pory"
	release
# 496 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 499 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_4
# 500 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 501 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 502 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_5
# 503 "data//maps/RangerInstitute/scripts.pory"
	release
# 504 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 505 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 506 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 507 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 508 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_5
# 509 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 510 "data//maps/RangerInstitute/scripts.pory"
	delay 24
# 511 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_3
# 512 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 513 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 514 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_6
# 515 "data//maps/RangerInstitute/scripts.pory"
	release
# 517 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 518 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 519 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 520 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_2F_EventScript_Welcome_Text_1
# 521 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_7
# 522 "data//maps/RangerInstitute/scripts.pory"
	release
# 523 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 524 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_3
# 525 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 526 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 527 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_8
# 528 "data//maps/RangerInstitute/scripts.pory"
	release
# 529 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 530 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 531 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 532 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_9
# 533 "data//maps/RangerInstitute/scripts.pory"
	release
# 535 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 537 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_6
# 538 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 539 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_Ravine_Movement_7
# 540 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 542 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 544 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_10
# 545 "data//maps/RangerInstitute/scripts.pory"
	release
# 546 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 548 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_10
# 549 "data//maps/RangerInstitute/scripts.pory"
	release
# 550 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 552 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_10
# 553 "data//maps/RangerInstitute/scripts.pory"
	release
# 554 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 556 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_1F_InterviewQ1_Movement_0
# 557 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 558 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 559 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_11
# 560 "data//maps/RangerInstitute/scripts.pory"
	release
# 561 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 563 "data//maps/RangerInstitute/scripts.pory"
	playse SE_M_THUNDER_WAVE
# 564 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_0x8004, 2
# 565 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_0x8005, 2
# 566 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_0x8006, 8
# 567 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_0x8007, 5
# 568 "data//maps/RangerInstitute/scripts.pory"
	special ShakeCamera
# 569 "data//maps/RangerInstitute/scripts.pory"
	waitstate
# 571 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_2F_Trigger0_Movement_0
# 572 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 573 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 574 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_12
# 575 "data//maps/RangerInstitute/scripts.pory"
	release
# 577 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 578 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 579 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 581 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_2F_EventScript_Welcome_Text_1
# 582 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_13
# 583 "data//maps/RangerInstitute/scripts.pory"
	release
# 584 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 586 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_4
# 587 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 588 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 590 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_14
# 591 "data//maps/RangerInstitute/scripts.pory"
	release
# 592 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 594 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 595 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 596 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 598 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_2F_EventScript_Welcome_Text_1
# 599 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_15
# 600 "data//maps/RangerInstitute/scripts.pory"
	release
# 601 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 603 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_4
# 604 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 605 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 607 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_16
# 608 "data//maps/RangerInstitute/scripts.pory"
	release
# 609 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 611 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_2F_EventScript_Welcome_Text_1
# 612 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_17
# 613 "data//maps/RangerInstitute/scripts.pory"
	release
# 614 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 616 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_4
# 617 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 618 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 620 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_18
# 621 "data//maps/RangerInstitute/scripts.pory"
	release
# 622 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 624 "data//maps/RangerInstitute/scripts.pory"
	completesubquest QUEST_POKEMON_RANGER, SUB_QUEST_3
# 625 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 11
# 627 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_Ravine_Movement_8
# 628 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 630 "data//maps/RangerInstitute/scripts.pory"
	special SpawnCameraObject
# 631 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RangerInstitute_Ravine_Movement_9
# 632 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 633 "data//maps/RangerInstitute/scripts.pory"
	special RemoveCameraObject
# 635 "data//maps/RangerInstitute/scripts.pory"
	applymovement 21, RangerInstitute_Ravine_Movement_10
# 636 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 637 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 639 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_19
# 640 "data//maps/RangerInstitute/scripts.pory"
	release
# 641 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 643 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 644 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 645 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 647 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_20
# 648 "data//maps/RangerInstitute/scripts.pory"
	release
# 649 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 651 "data//maps/RangerInstitute/scripts.pory"
	special SpawnCameraObject
# 652 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RangerInstitute_Ravine_Movement_8
# 653 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 654 "data//maps/RangerInstitute/scripts.pory"
	special RemoveCameraObject
# 656 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Ravine_8:
# 665 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_2F_EventScript_Welcome_Text_1
# 666 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_21, MSGBOX_NPC
	end

# 660 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Ravine_11:
# 467 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_2F_EventScript_Welcome_Text_1
# 468 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_2
# 469 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Ravine_15:
# 671 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 672 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 673 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_Ravine_Text_22
# 674 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 9
# 675 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Ravine_18:
# 482 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_Ravine_Movement_0
	goto RangerInstitute_Ravine_17

RangerInstitute_Ravine_21:
# 485 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_Ravine_Movement_1
	goto RangerInstitute_Ravine_20


RangerInstitute_2F_NPC_1::
# 687 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 688 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 689 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_1_Text_0
# 690 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_2::
# 694 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 695 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 696 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_2_Text_0
# 697 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_3::
# 701 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 702 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 703 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_3_Text_0
# 704 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_4::
# 708 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 709 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 710 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_4_Text_0
# 711 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_5::
# 715 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 716 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 717 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_5_Text_0
# 718 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Pokeball_One::
# 735 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 737 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 9
	goto_if_eq RangerInstitute_Pokeball_One_2
# 764 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_One_Text_3
RangerInstitute_Pokeball_One_1:
# 766 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Pokeball_One_2:
# 739 "data//maps/RangerInstitute/scripts.pory"
	showmonpic SPECIES_TAUROS_PALDEA_BLAZE, 10, 3
# 740 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 741 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_One_Text_0, MSGBOX_YESNO
# 742 "data//maps/RangerInstitute/scripts.pory"
	release
# 743 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RangerInstitute_Pokeball_One_5
# 761 "data//maps/RangerInstitute/scripts.pory"
	hidemonpic
	goto RangerInstitute_Pokeball_One_1

RangerInstitute_Pokeball_One_5:
# 744 "data//maps/RangerInstitute/scripts.pory"
	removeobject 4
# 745 "data//maps/RangerInstitute/scripts.pory"
	givemon SPECIES_TAUROS_PALDEA_BLAZE, 45, ITEM_SITRUS_BERRY
# 746 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 748 "data//maps/RangerInstitute/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 749 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_Pokeball_One_Text_1
# 750 "data//maps/RangerInstitute/scripts.pory"
	waitfanfare
# 751 "data//maps/RangerInstitute/scripts.pory"
	release
# 752 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RangerInstitute_Pokeball_One_9
RangerInstitute_Pokeball_One_8:
# 756 "data//maps/RangerInstitute/scripts.pory"
	hidemonpic
# 757 "data//maps/RangerInstitute/scripts.pory"
	removeobject 1
# 758 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_SELECTED_MON_ONE
# 759 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 10
	goto RangerInstitute_Pokeball_One_1

RangerInstitute_Pokeball_One_9:
# 753 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_One_Text_2
# 754 "data//maps/RangerInstitute/scripts.pory"
	release
	goto RangerInstitute_Pokeball_One_8


RangerInstitute_Pokeball_Two::
# 772 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 774 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 9
	goto_if_eq RangerInstitute_Pokeball_Two_2
# 801 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_One_Text_3
RangerInstitute_Pokeball_Two_1:
# 803 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Pokeball_Two_2:
# 776 "data//maps/RangerInstitute/scripts.pory"
	showmonpic SPECIES_KANGASKHAN, 10, 3
# 777 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_KANGASKHAN, CRY_MODE_NORMAL
# 778 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_Two_Text_0, MSGBOX_YESNO
# 779 "data//maps/RangerInstitute/scripts.pory"
	release
# 780 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RangerInstitute_Pokeball_Two_5
# 798 "data//maps/RangerInstitute/scripts.pory"
	hidemonpic
	goto RangerInstitute_Pokeball_Two_1

RangerInstitute_Pokeball_Two_5:
# 781 "data//maps/RangerInstitute/scripts.pory"
	removeobject 4
# 782 "data//maps/RangerInstitute/scripts.pory"
	givemon SPECIES_KANGASKHAN, 45, ITEM_SITRUS_BERRY
# 783 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 785 "data//maps/RangerInstitute/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 786 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_Pokeball_Two_Text_1
# 787 "data//maps/RangerInstitute/scripts.pory"
	waitfanfare
# 788 "data//maps/RangerInstitute/scripts.pory"
	release
# 789 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RangerInstitute_Pokeball_Two_9
RangerInstitute_Pokeball_Two_8:
# 793 "data//maps/RangerInstitute/scripts.pory"
	hidemonpic
# 794 "data//maps/RangerInstitute/scripts.pory"
	removeobject 2
# 795 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_SELECTED_MON_TWO
# 796 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 10
	goto RangerInstitute_Pokeball_Two_1

RangerInstitute_Pokeball_Two_9:
# 790 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_Two_Text_2
# 791 "data//maps/RangerInstitute/scripts.pory"
	release
	goto RangerInstitute_Pokeball_Two_8


RangerInstitute_Pokeball_Three::
# 808 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 810 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 9
	goto_if_eq RangerInstitute_Pokeball_Three_2
# 836 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_One_Text_3
RangerInstitute_Pokeball_Three_1:
# 838 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Pokeball_Three_2:
# 812 "data//maps/RangerInstitute/scripts.pory"
	showmonpic SPECIES_MANECTRIC, 10, 3
# 813 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
# 814 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_Three_Text_0, MSGBOX_YESNO
# 815 "data//maps/RangerInstitute/scripts.pory"
	release
# 816 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RangerInstitute_Pokeball_Three_5
# 833 "data//maps/RangerInstitute/scripts.pory"
	hidemonpic
	goto RangerInstitute_Pokeball_Three_1

RangerInstitute_Pokeball_Three_5:
# 817 "data//maps/RangerInstitute/scripts.pory"
	removeobject 4
# 818 "data//maps/RangerInstitute/scripts.pory"
	givemon SPECIES_MANECTRIC, 45, ITEM_SITRUS_BERRY
# 819 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 820 "data//maps/RangerInstitute/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 821 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_Pokeball_Three_Text_1
# 822 "data//maps/RangerInstitute/scripts.pory"
	waitfanfare
# 823 "data//maps/RangerInstitute/scripts.pory"
	release
# 824 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq RangerInstitute_Pokeball_Three_9
RangerInstitute_Pokeball_Three_8:
# 828 "data//maps/RangerInstitute/scripts.pory"
	hidemonpic
# 829 "data//maps/RangerInstitute/scripts.pory"
	removeobject 3
# 830 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_SELECTED_MON_THREE
# 831 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 10
	goto RangerInstitute_Pokeball_Three_1

RangerInstitute_Pokeball_Three_9:
# 825 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Pokeball_Three_Text_2
# 826 "data//maps/RangerInstitute/scripts.pory"
	release
	goto RangerInstitute_Pokeball_Three_8


RangerInstitute_Mon_Bayleef::
# 857 "data//maps/RangerInstitute/scripts.pory"
	goto_if_set FLAG_RANGER_INSTITUTE_BAYLEEF, RangerInstitute_Mon_Bayleef_2
# 860 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 861 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 862 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_BAYLEEF, CRY_MODE_NORMAL
# 863 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_1
# 864 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MAX_REVIVE
# 865 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_INSTITUTE_BAYLEEF
# 866 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_2
# 867 "data//maps/RangerInstitute/scripts.pory"
	releaseall
RangerInstitute_Mon_Bayleef_1:
	end

RangerInstitute_Mon_Bayleef_2:
# 858 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_0, MSGBOX_NPC
	goto RangerInstitute_Mon_Bayleef_1


RangerInstitute_Mon_Palpitoad::
# 872 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
# 873 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Palpitoad_Text_0, MSGBOX_NPC
	end


RangerInstitute_Mon_Surskit::
# 877 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_MASQUERAIN, CRY_MODE_NORMAL
# 878 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Surskit_Text_0, MSGBOX_NPC
	end


RangerInstitute_Mon_Scyther::
# 882 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
# 883 "data//maps/RangerInstitute/scripts.pory"
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

# 110 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_InterviewQ1_Movement_0:
# 110 "data//maps/RangerInstitute/scripts.pory"
	emote_question_mark
	step_end

# 288 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_0:
# 288 "data//maps/RangerInstitute/scripts.pory"
	face_left
# 288 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 292 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_1:
# 292 "data//maps/RangerInstitute/scripts.pory"
	walk_down
	step_end

# 294 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_2:
# 294 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 322 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_0:
# 322 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 324 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_1:
# 324 "data//maps/RangerInstitute/scripts.pory"
	face_up
	step_end

# 330 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_2:
# 330 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 330 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 330 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 330 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 330 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 330 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 330 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 330 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 330 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 330 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 330 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 330 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 330 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 331 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_3:
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

# 355 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger1_Movement_0:
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 355 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 355 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 367 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_0:
# 367 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_down
	step_end

# 374 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_1:
# 374 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 381 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_2:
# 381 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 381 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 381 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 381 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 385 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_3:
# 385 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 385 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 397 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_4:
# 397 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 397 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 416 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_5:
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 416 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 416 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 417 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_6:
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 417 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

# 482 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_0:
# 482 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 482 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 482 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 482 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 482 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 482 "data//maps/RangerInstitute/scripts.pory"
	walk_up
	step_end

# 485 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_1:
# 485 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 485 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 485 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 485 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 485 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 485 "data//maps/RangerInstitute/scripts.pory"
	walk_up
	step_end

# 487 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_2:
# 487 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 487 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 487 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 487 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 487 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 487 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 487 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 487 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 490 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_3:
# 490 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 499 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_4:
# 499 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_right
	step_end

# 508 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_5:
# 508 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 508 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_down
	step_end

# 537 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_6:
# 537 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 537 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 539 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_7:
# 539 "data//maps/RangerInstitute/scripts.pory"
	walk_up
	step_end

# 627 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_8:
# 627 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 627 "data//maps/RangerInstitute/scripts.pory"
	walk_down
	step_end

# 631 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_9:
# 631 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 631 "data//maps/RangerInstitute/scripts.pory"
	walk_up
	step_end

# 635 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_Ravine_Movement_10:
# 635 "data//maps/RangerInstitute/scripts.pory"
	walk_right
	step_end

RangerInstitute_1F_ApplicationPC_Text_0:
# 46 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} booted up the Pokémon\n"
	.string "Ranger Application PC.$"

RangerInstitute_1F_ApplicationPC_Text_1:
# 50 "data//maps/RangerInstitute/scripts.pory"
	.string "ERROR: YOU ALREADY HAVE AN\n"
	.string "APPLICATION IN PROGRESS.$"

RangerInstitute_1F_ApplicationPC_Text_2:
# 55 "data//maps/RangerInstitute/scripts.pory"
	.string "WOULD YOU LIKE TO PRINT AN\n"
	.string "APPLICATION FORM?$"

RangerInstitute_1F_ApplicationPC_Text_3:
# 58 "data//maps/RangerInstitute/scripts.pory"
	.string "IT WILL COST ¥500.\n"
	.string "PROCEED WITH PRINTING?$"

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
# 91 "data//maps/RangerInstitute/scripts.pory"
	.string "This interview will consist of five\n"
	.string "questions. You are expected to answer\l"
	.string "all of them correctly. If even one\l"
	.string "question is wrong, you'll fail.\p"
	.string "Got it?\p"
	.string "Good, let's start.$"

RangerInstitute_1F_Interviewer_Text_2:
# 96 "data//maps/RangerInstitute/scripts.pory"
	.string "I'm the interviewer on duty.\p"
	.string "We get so many applicants!$"

RangerInstitute_1F_InterviewFail_Text_0:
# 103 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry! That's the wrong answer. You\n"
	.string "have failed this interview.\p"
	.string "Please feel free to apply again!\p"
	.string "...\p"
	.string "...sigh, when will we ever get a\n"
	.string "decent candidate?$"

RangerInstitute_1F_InterviewQ1_Text_0:
# 111 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these types is\n"
	.string "super-effective against Dewpider?$"

RangerInstitute_1F_InterviewQ1_Text_1:
# 113 "data//maps/RangerInstitute/scripts.pory"
	.string "FAIRY$"

RangerInstitute_1F_InterviewQ1_Text_2:
# 113 "data//maps/RangerInstitute/scripts.pory"
	.string "GRASS$"

RangerInstitute_1F_InterviewQ1_Text_3:
# 113 "data//maps/RangerInstitute/scripts.pory"
	.string "FIRE$"

RangerInstitute_1F_InterviewQ1_Text_4:
# 113 "data//maps/RangerInstitute/scripts.pory"
	.string "ROCK$"

RangerInstitute_1F_InterviewQ1_Text_5:
# 117 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Dewpider, a BUG and WATER\n"
	.string "type, is weak to ROCK-type attacks.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ2_Text_0:
# 127 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these Pokémon does NOT\n"
	.string "have a normal evolution?$"

RangerInstitute_1F_InterviewQ2_Text_1:
# 129 "data//maps/RangerInstitute/scripts.pory"
	.string "Toxel$"

RangerInstitute_1F_InterviewQ2_Text_2:
# 129 "data//maps/RangerInstitute/scripts.pory"
	.string "Koffing$"

RangerInstitute_1F_InterviewQ2_Text_3:
# 129 "data//maps/RangerInstitute/scripts.pory"
	.string "Absol$"

RangerInstitute_1F_InterviewQ2_Text_4:
# 129 "data//maps/RangerInstitute/scripts.pory"
	.string "Cyndaquil$"

RangerInstitute_1F_InterviewQ2_Text_5:
# 133 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Absol has no normal evolution,\n"
	.string "but it can Mega Evolve.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ3_Text_0:
# 143 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of the following is a GHOST\n"
	.string "type Pokémon?$"

RangerInstitute_1F_InterviewQ3_Text_1:
# 145 "data//maps/RangerInstitute/scripts.pory"
	.string "Dhelmise$"

RangerInstitute_1F_InterviewQ3_Text_2:
# 145 "data//maps/RangerInstitute/scripts.pory"
	.string "Zigzagoon$"

RangerInstitute_1F_InterviewQ3_Text_3:
# 145 "data//maps/RangerInstitute/scripts.pory"
	.string "Delphox$"

RangerInstitute_1F_InterviewQ3_Text_4:
# 145 "data//maps/RangerInstitute/scripts.pory"
	.string "Ninetales$"

RangerInstitute_1F_InterviewQ3_Text_5:
# 149 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Dhelmise is a GHOST and GRASS\n"
	.string "type Pokémon found underwater.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ4_Text_0:
# 159 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: What happens if you use Black\n"
	.string "Augurite on a Scyther?$"

RangerInstitute_1F_InterviewQ4_Text_1:
# 161 "data//maps/RangerInstitute/scripts.pory"
	.string "Full Heal$"

RangerInstitute_1F_InterviewQ4_Text_2:
# 161 "data//maps/RangerInstitute/scripts.pory"
	.string "Evolution$"

RangerInstitute_1F_InterviewQ4_Text_3:
# 161 "data//maps/RangerInstitute/scripts.pory"
	.string "Nothing$"

RangerInstitute_1F_InterviewQ4_Text_4:
# 161 "data//maps/RangerInstitute/scripts.pory"
	.string "Boost BUG power$"

RangerInstitute_1F_InterviewQ4_Text_5:
# 165 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Using Black Augurite evolves\n"
	.string "Scyther into Kleavor.\p"
	.string "Onto the last question!$"

RangerInstitute_1F_InterviewQ5_Text_0:
# 175 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: If you see a stranger in need of\n"
	.string "help, what do you do?$"

RangerInstitute_1F_InterviewQ5_Text_1:
# 177 "data//maps/RangerInstitute/scripts.pory"
	.string "Laugh$"

RangerInstitute_1F_InterviewQ5_Text_2:
# 177 "data//maps/RangerInstitute/scripts.pory"
	.string "Help them$"

RangerInstitute_1F_InterviewQ5_Text_3:
# 177 "data//maps/RangerInstitute/scripts.pory"
	.string "Take a video$"

RangerInstitute_1F_InterviewQ5_Text_4:
# 181 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! And that's the final question!\n"
	.string "This interview is over.$"

RangerInstitute_1F_InterviewPass_Text_0:
# 189 "data//maps/RangerInstitute/scripts.pory"
	.string "Congratulations {PLAYER}! You've\n"
	.string "cleared the interview. We're now proud\l"
	.string "to call you a Pokémon Ranger Recruit.\p"
	.string "Welcome to the Cormoria Pokémon\n"
	.string "Ranger Institute!$"

RangerInstitute_1F_InterviewPass_Text_1:
# 194 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} is now an official Pokémon\n"
	.string "Ranger Recruit!$"

RangerInstitute_1F_InterviewPass_Text_2:
# 198 "data//maps/RangerInstitute/scripts.pory"
	.string "Please head upstairs for your\n"
	.string "induction. All the best, Recruit!$"

RangerInstitute_1F_NPC1_Text_0:
# 208 "data//maps/RangerInstitute/scripts.pory"
	.string "Should I become a Pokémon Ranger?\n"
	.string "It's really hard to get in...I don't\l"
	.string "know if I can do it.$"

RangerInstitute_1F_NPC2_Text_0:
# 215 "data//maps/RangerInstitute/scripts.pory"
	.string "My interview is coming up. I'm nervous -\n"
	.string "I want to become a Pokémon Ranger so\l"
	.string "bad! Their Pokémon are so cool!\p"
	.string "Tauros!\p"
	.string "Kangaskhan!\p"
	.string "...\p"
	.string "I don't know any others.$"

RangerInstitute_1F_NPC3_Text_0:
# 222 "data//maps/RangerInstitute/scripts.pory"
	.string "Not all Rangers are out on the field!\n"
	.string "Managing such a large organisation is\l"
	.string "no easy task, let me tell you.$"

RangerInstitute_1F_NPC4_Text_0:
# 229 "data//maps/RangerInstitute/scripts.pory"
	.string "You heard about the Mega Sharpedo in\n"
	.string "the Hoya River, right?\p"
	.string "We're tracking it on our scanners -\n"
	.string "it's headed straight to Pelluca City.\l"
	.string "I hope it doesn't cause any damage...$"

RangerInstitute_1F_BlockerBasement_Text_0:
# 236 "data//maps/RangerInstitute/scripts.pory"
	.string "It's so hectic these days, what with\n"
	.string "the Mega Sharpedo and everything!$"

RangerInstitute_1F_BlockerUpstairs_Text_0:
# 271 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, only Pokémon Rangers are allowed\n"
	.string "inside. If you'd like to apply, you can\l"
	.string "print an application form using the PC\l"
	.string "by the entrance.$"

RangerInstitute_1F_BlockerUpstairs_Text_1:
# 280 "data//maps/RangerInstitute/scripts.pory"
	.string "You're not a fully-fledged Pokémon\n"
	.string "Ranger yet - just a Recruit!\l"
	.string "So I'll be keeping an eye on you.$"

RangerInstitute_2F_Trigger0_Text_0:
# 326 "data//maps/RangerInstitute/scripts.pory"
	.string "Hey wait - oh, a new Ranger Recruit?\n"
	.string "Welcome to the Ranger Institute,\l"
	.string "recruit! It's been a while since someone\l"
	.string "passed our interview. You must be here\l"
	.string "for your induction.\p"
	.string "Follow me. I'll introduce you to Ravine,\n"
	.string "the Ranger Institute Head.$"

RangerInstitute_2F_Trigger1_Text_0:
# 350 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Director.$"

RangerInstitute_2F_EventScript_Welcome_Text_0:
# 369 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine! Meet {PLAYER}, our\n"
	.string "newest Recruit.$"

RangerInstitute_2F_EventScript_Welcome_Text_1:
# 372 "data//maps/RangerInstitute/scripts.pory"
	.string "Ravine$"

RangerInstitute_2F_EventScript_Welcome_Text_2:
# 372 "data//maps/RangerInstitute/scripts.pory"
	.string "Hmm...yes...\p"
	.string "...\p"
	.string "...yes this is -$"

RangerInstitute_2F_EventScript_Welcome_Text_3:
# 376 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine!$"

RangerInstitute_2F_EventScript_Welcome_Text_4:
# 379 "data//maps/RangerInstitute/scripts.pory"
	.string "...ahh...hmm...$"

RangerInstitute_2F_EventScript_Welcome_Text_5:
# 383 "data//maps/RangerInstitute/scripts.pory"
	.string "DIRECTOR RAVINE!!!$"

RangerInstitute_2F_EventScript_Welcome_Text_6:
# 387 "data//maps/RangerInstitute/scripts.pory"
	.string "Yes! Yes! What is it?$"

RangerInstitute_2F_EventScript_Welcome_Text_7:
# 391 "data//maps/RangerInstitute/scripts.pory"
	.string "Sigh...\p"
	.string "Director Ravine! Meet {PLAYER}, our\n"
	.string "newest recruit.\p"
	.string "...\p"
	.string "Director, you were daydreaming again!$"

RangerInstitute_2F_EventScript_Welcome_Text_8:
# 395 "data//maps/RangerInstitute/scripts.pory"
	.string "No I was most definitely not, how dare\n"
	.string "you? I was -ahem- deep in my research.\p"
	.string "...\p"
	.string "Now. Yes. Welcome to the Ranger\n"
	.string "Institute, {PLAYER}! Congratulations\l"
	.string "on clearing the interview. I'm so\l"
	.string "pleased to see our family grow. Do you\l"
	.string "know what we Pokémon Rangers do?$"

RangerInstitute_2F_EventScript_Welcome_Text_9:
# 400 "data//maps/RangerInstitute/scripts.pory"
	.string "Psst...Director, the bike and stuff.$"

RangerInstitute_2F_EventScript_Welcome_Text_10:
# 406 "data//maps/RangerInstitute/scripts.pory"
	.string "Ah yes! As part of your welcome\n"
	.string "package, the Ranger Institute is\l"
	.string "pleased to provide you with these!$"

RangerInstitute_2F_EventScript_Welcome_Text_11:
# 410 "data//maps/RangerInstitute/scripts.pory"
	.string "The Ranger Bike and Ranger Card - the\n"
	.string "two emblems of a Pokémon Ranger in\l"
	.string "Cormoria! The Ranger Bike will allow you\l"
	.string "to speedily traverse all of Cormoria,\l"
	.string "and the Ranger Card lets everyone know\l"
	.string "you're a proper Pokémon Ranger!\p"
	.string "You can access the other Ranger\n"
	.string "Institutes with this.\p"
	.string "We have a branch up north by the Ivy\n"
	.string "River, and down south by the sea near\l"
	.string "Rivetshore City.$"

RangerInstitute_2F_EventScript_Welcome_Text_12:
# 413 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER}, do you know what we\n"
	.string "Pokémon Rangers are tasked with doing?\p"
	.string "No?\p"
	.string "Follow me.$"

RangerInstitute_2F_EventScript_Welcome_Text_13:
# 418 "data//maps/RangerInstitute/scripts.pory"
	.string "As Pokémon Rangers, our job is to\n"
	.string "protect nature and maintain harmony\l"
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

RangerInstitute_2F_EventScript_Welcome_Text_14:
# 420 "data//maps/RangerInstitute/scripts.pory"
	.string "But none of that for you just yet! You\n"
	.string "have to earn your stripes here. As a\l"
	.string "Ranger Recruit, you'll have to complete\l"
	.string "missions to advance your ranking.$"

RangerInstitute_2F_EventScript_Welcome_Text_15:
# 423 "data//maps/RangerInstitute/scripts.pory"
	.string "Now, I have some important items that\n"
	.string "the Ranger Institute at Ivy River\l"
	.string "wants. Your first mission will be to\l"
	.string "deliver this to them!$"

RangerInstitute_2F_EventScript_Welcome_Text_16:
# 432 "data//maps/RangerInstitute/scripts.pory"
	.string "If you complete this mission, you'll\n"
	.string "rank up from Recruit to Candidate.\p"
	.string "The Ranger Institute at Ivy River is a\n"
	.string "little hard to find. You'll have to surf\l"
	.string "down from Winterlily Hollow and explore\l"
	.string "Lily Pond.\p"
	.string "Good training for a recruit, eh?$"

RangerInstitute_Ravine_Text_0:
# 455 "data//maps/RangerInstitute/scripts.pory"
	.string "I've already told everyone that you'll\n"
	.string "clear the final mission with flying\l"
	.string "colours, so don't let me down!$"

RangerInstitute_Ravine_Text_1:
# 464 "data//maps/RangerInstitute/scripts.pory"
	.string "How do you feel about your new Pokémon,\n"
	.string "{PLAYER}?\p"
	.string "Good?\p"
	.string "Haha! It's the first of many.\p"
	.string "You ready to become a fully-fledged\n"
	.string "Pokémon Ranger?$"

RangerInstitute_Ravine_Text_2:
# 468 "data//maps/RangerInstitute/scripts.pory"
	.string "Haha! Heard horror stories about the\n"
	.string "final mission, did you?\p"
	.string "Come back when you're ready!$"

RangerInstitute_Ravine_Text_3:
# 473 "data//maps/RangerInstitute/scripts.pory"
	.string "Haha! That's it - that's the Pokémon\n"
	.string "Ranger spirit within you, {PLAYER}!\l"
	.string "Come then, shall I brief you on your\l"
	.string "final mission?$"

RangerInstitute_Ravine_Text_4:
# 494 "data//maps/RangerInstitute/scripts.pory"
	.string "We've got one ready to go!\n"
	.string "Can you debrief {PLAYER}?$"

RangerInstitute_Ravine_Text_5:
# 502 "data//maps/RangerInstitute/scripts.pory"
	.string "Excellent! Right away, Director.$"

RangerInstitute_Ravine_Text_6:
# 514 "data//maps/RangerInstitute/scripts.pory"
	.string "Director, I must warn you - this is\n"
	.string "a rather...involved assignment.$"

RangerInstitute_Ravine_Text_7:
# 521 "data//maps/RangerInstitute/scripts.pory"
	.string "Hahaha! Doubting {PLAYER} will be\n"
	.string "your biggest mistake!\l"
	.string "{PLAYER}'s ready. Director's approval!\l"
	.string "This is the final mission before\l"
	.string "becoming a Cormoria Pokémon Ranger.\l"
	.string "It's got to be a tough one! Only the\l"
	.string "very best can become a Pokémon Ranger\l"
	.string "after all.$"

RangerInstitute_Ravine_Text_8:
# 527 "data//maps/RangerInstitute/scripts.pory"
	.string "Right...yes, well.$"

RangerInstitute_Ravine_Text_9:
# 532 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER}, was it?\p"
	.string "My job with the Ranger Institute is to\n"
	.string "research the existence of rare Pokémon\l"
	.string "only spoken of in myths. We believe\l"
	.string "there's one right here on Route 6!\p"
	.string "Based on reported sightings, we've come\n"
	.string "up with an artist recreation.\p"
	.string "Come and take a look.$"

RangerInstitute_Ravine_Text_10:
# 544 "data//maps/RangerInstitute/scripts.pory"
	.string "...$"

RangerInstitute_Ravine_Text_11:
# 559 "data//maps/RangerInstitute/scripts.pory"
	.string "That's strange...why isn't the drawing\n"
	.string "showing up on screen?$"

RangerInstitute_Ravine_Text_12:
# 574 "data//maps/RangerInstitute/scripts.pory"
	.string "The computer short-circuited!\n"
	.string "How bizarre...\p"
	.string "Director Ravine! This is precisely why\n"
	.string "I keep telling you that we need to\l"
	.string "upgrade our hardware!$"

RangerInstitute_Ravine_Text_13:
# 582 "data//maps/RangerInstitute/scripts.pory"
	.string "Nonsense! I've never even heard of\n"
	.string "such a request.$"

RangerInstitute_Ravine_Text_14:
# 590 "data//maps/RangerInstitute/scripts.pory"
	.string "Sigh...Director, you can just admit that\n"
	.string "you were daydreaming.$"

RangerInstitute_Ravine_Text_15:
# 599 "data//maps/RangerInstitute/scripts.pory"
	.string "Such accusations!\p"
	.string "...ahem.\p"
	.string "Forget the computer. Listen to me\n"
	.string "carefully, {PLAYER}.\p"
	.string "What we know is that there is a yellow,\n"
	.string "catlike Pokémon somewhere on Route 6.$"

RangerInstitute_Ravine_Text_16:
# 607 "data//maps/RangerInstitute/scripts.pory"
	.string "Believe, not know.$"

RangerInstitute_Ravine_Text_17:
# 612 "data//maps/RangerInstitute/scripts.pory"
	.string "Yes, believe.\p"
	.string "Now for your last mission, {PLAYER},\n"
	.string "you are tasked with tracking down the\l"
	.string "whereabouts of this Pokémon!\p"
	.string "All we have is the description - it's\n"
	.string "yellow and catlike. Nothing else!\l"
	.string "This won't be easy, {PLAYER}. This will\l"
	.string "put all your skills to the test.\p"
	.string "But a true Pokémon Ranger doesn't back\n"
	.string "down in the face of a challenge!\p"
	.string "So buckle up, set off, and come back\n"
	.string "with an answer, one way or another.\p"
	.string "Now get going!$"

RangerInstitute_Ravine_Text_18:
# 620 "data//maps/RangerInstitute/scripts.pory"
	.string "Good luck, {PLAYER}!$"

RangerInstitute_Ravine_Text_19:
# 639 "data//maps/RangerInstitute/scripts.pory"
	.string "But seriously, why would there be an\n"
	.string "electrical overcharge here?\l"
	.string "Director, I don't think this was an\l"
	.string "accident...$"

RangerInstitute_Ravine_Text_20:
# 647 "data//maps/RangerInstitute/scripts.pory"
	.string "Shh! {PLAYER} will overhear us!\n"
	.string "It's already an important mission -\l"
	.string "let's not add any more tension!$"

RangerInstitute_Ravine_Text_21:
# 666 "data//maps/RangerInstitute/scripts.pory"
	.string "Don't be shy - pick a Pokémon!\n"
	.string "It's your reward for ranking up.$"

RangerInstitute_Ravine_Text_22:
# 673 "data//maps/RangerInstitute/scripts.pory"
	.string "My newest Associate arrives!\n"
	.string "How does it feel, being just one more\l"
	.string "step away from being a fully-fledged\l"
	.string "Ranger?\p"
	.string "As an Associate, you are entitled to\n"
	.string "one of our very rare Ranger-exclusive\l"
	.string "Pokémon! See the table down there? Any\l"
	.string "of those Pokémon is yours! But choose\l"
	.string "carefully - you can only pick one.\p"
	.string "Talk to me once you've chosen one.$"

RangerInstitute_Ravine_Text_23:
# 682 "data//maps/RangerInstitute/scripts.pory"
	.string "How's my newest member doing?$"

RangerInstitute_2F_NPC_1_Text_0:
# 689 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine has a bad habit of\n"
	.string "daydreaming at work...$"

RangerInstitute_2F_NPC_2_Text_0:
# 696 "data//maps/RangerInstitute/scripts.pory"
	.string "Hello there, new recruit!\n"
	.string "Wanna see what I'm working on?\p"
	.string "I'm analysing the weather patterns in\n"
	.string "Cormoria. I stay on the lookout for any\l"
	.string "unnatural changes.$"

RangerInstitute_2F_NPC_3_Text_0:
# 703 "data//maps/RangerInstitute/scripts.pory"
	.string "Gah! I hate being on inventory duty.\n"
	.string "I miss the field!$"

RangerInstitute_2F_NPC_4_Text_0:
# 710 "data//maps/RangerInstitute/scripts.pory"
	.string "How's it going, {PLAYER}?$"

RangerInstitute_2F_NPC_5_Text_0:
# 717 "data//maps/RangerInstitute/scripts.pory"
	.string "Hello there, new recruit!\n"
	.string "Wanna see what I'm working on?\p"
	.string "I'm researching the existence of a\n"
	.string "Mythical Pokémon right here in Route 6!\l"
	.string "We've sent two Rangers out to search\l"
	.string "for it, but they've had no luck.$"

RangerInstitute_Pokeball_One_Text_0:
# 741 "data//maps/RangerInstitute/scripts.pory"
	.string "Do you want to choose the\n"
	.string "fiery Tauros?$"

RangerInstitute_Pokeball_One_Text_1:
# 749 "data//maps/RangerInstitute/scripts.pory"
	.string "The Ranger Institute has gifted you\n"
	.string "a Tauros!$"

RangerInstitute_Pokeball_One_Text_2:
# 753 "data//maps/RangerInstitute/scripts.pory"
	.string "Tauros was sent to your PC.$"

RangerInstitute_Pokeball_One_Text_3:
# 764 "data//maps/RangerInstitute/scripts.pory"
	.string "One of the Institute's Pokémon.\n"
	.string "Better not touch it!$"

RangerInstitute_Pokeball_Two_Text_0:
# 778 "data//maps/RangerInstitute/scripts.pory"
	.string "Do you want to choose the\n"
	.string "dominating Kangaskhan?$"

RangerInstitute_Pokeball_Two_Text_1:
# 786 "data//maps/RangerInstitute/scripts.pory"
	.string "The Ranger Institute has gifted you\n"
	.string "a Kangaskhan!$"

RangerInstitute_Pokeball_Two_Text_2:
# 790 "data//maps/RangerInstitute/scripts.pory"
	.string "Kangaskhan was sent to your PC.$"

RangerInstitute_Pokeball_Three_Text_0:
# 814 "data//maps/RangerInstitute/scripts.pory"
	.string "Do you want to choose the\n"
	.string "proud Manectric?$"

RangerInstitute_Pokeball_Three_Text_1:
# 821 "data//maps/RangerInstitute/scripts.pory"
	.string "The Ranger Institute has gifted you\n"
	.string "a Manectric!$"

RangerInstitute_Pokeball_Three_Text_2:
# 825 "data//maps/RangerInstitute/scripts.pory"
	.string "Manectric was sent to your PC.$"

RangerInstitute_Mon_Bayleef_Text_0:
# 858 "data//maps/RangerInstitute/scripts.pory"
	.string "Bayleef is singing happily!$"

RangerInstitute_Mon_Bayleef_Text_1:
# 863 "data//maps/RangerInstitute/scripts.pory"
	.string "Bayleef is singing happily! It snuggles\n"
	.string "upto you and gives you something...$"

RangerInstitute_Mon_Bayleef_Text_2:
# 866 "data//maps/RangerInstitute/scripts.pory"
	.string "Thanks Bayleef!$"

RangerInstitute_Mon_Palpitoad_Text_0:
# 873 "data//maps/RangerInstitute/scripts.pory"
	.string "Palpitoad grunts and waddles around.\n"
	.string "It seems upset...$"

RangerInstitute_Mon_Surskit_Text_0:
# 878 "data//maps/RangerInstitute/scripts.pory"
	.string "Masquerain wants to be in the water!$"

RangerInstitute_Mon_Scyther_Text_0:
# 883 "data//maps/RangerInstitute/scripts.pory"
	.string "Scyther looks bummed out!\p"
	.string "It probably wants to be out on the\n"
	.string "field, just like its trainer.$"
