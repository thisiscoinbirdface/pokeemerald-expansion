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
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_BlockerBasement_2
# 240 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_BlockerBasement_5
# 245 "data//maps/RangerInstitute/scripts.pory"
	lock
# 246 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 247 "data//maps/RangerInstitute/scripts.pory"
	message RangerInstitute_1F_BlockerBasement_Text_1
# 248 "data//maps/RangerInstitute/scripts.pory"
	waitmessage
# 249 "data//maps/RangerInstitute/scripts.pory"
	pokemart RangerInstitute_1F_TM_Mart
# 250 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_2, MSGBOX_DEFAULT
# 251 "data//maps/RangerInstitute/scripts.pory"
	release
	end

RangerInstitute_1F_BlockerBasement_2:
# 237 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0, MSGBOX_NPC
	end

RangerInstitute_1F_BlockerBasement_5:
# 241 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0, MSGBOX_NPC
	end


	.align 2
# 255 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TM_Mart:
# 256 "data//maps/RangerInstitute/scripts.pory"
	.2byte ITEM_TM10
# 257 "data//maps/RangerInstitute/scripts.pory"
	.2byte ITEM_TM27
# 258 "data//maps/RangerInstitute/scripts.pory"
	.2byte ITEM_TM28
# 259 "data//maps/RangerInstitute/scripts.pory"
	.2byte ITEM_TM32
# 260 "data//maps/RangerInstitute/scripts.pory"
	.2byte ITEM_TM36
# 261 "data//maps/RangerInstitute/scripts.pory"
	.2byte ITEM_TM42
	.2byte ITEM_NONE

RangerInstitute_1F_BlockerUpstairs::
# 266 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_2
# 271 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_5
# 276 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_1, MSGBOX_NPC
	end

RangerInstitute_1F_BlockerUpstairs_2:
# 267 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0, MSGBOX_NPC
	end

RangerInstitute_1F_BlockerUpstairs_5:
# 272 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0, MSGBOX_NPC
	end


RangerInstitute_1F_TriggerUpstairs::
# 281 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_gt RangerInstitute_1F_TriggerUpstairs_2
# 283 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 284 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_0
# 285 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 286 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
# 287 "data//maps/RangerInstitute/scripts.pory"
	release
# 288 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_TriggerUpstairs_Movement_1
# 289 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 290 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 291 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 292 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_TriggerUpstairs_2:
	end


RangerInstitute_2F_Trigger0::
# 316 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger0_2
	end

RangerInstitute_2F_Trigger0_1:
# 335 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger0_2:
# 317 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 318 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_0
# 319 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 320 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 321 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 322 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger0_Text_0
# 323 "data//maps/RangerInstitute/scripts.pory"
	release
# 326 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_2
# 327 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_3
# 328 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 330 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger0_1


RangerInstitute_2F_Trigger1::
# 340 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger1_2
	end

RangerInstitute_2F_Trigger1_1:
# 358 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger1_2:
# 341 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 342 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_0
# 343 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 344 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 345 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 346 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger1_Text_0
# 347 "data//maps/RangerInstitute/scripts.pory"
	release
# 350 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_2
# 351 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger1_Movement_0
# 352 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 354 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger1_1


RangerInstitute_2F_EventScript_Welcome::
# 363 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 364 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 365 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_0
# 366 "data//maps/RangerInstitute/scripts.pory"
	release
# 367 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 368 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_2
# 369 "data//maps/RangerInstitute/scripts.pory"
	release
# 370 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 371 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 372 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_3
# 373 "data//maps/RangerInstitute/scripts.pory"
	release
# 374 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 375 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_4
# 376 "data//maps/RangerInstitute/scripts.pory"
	release
# 377 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_2
# 378 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 379 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_5
# 380 "data//maps/RangerInstitute/scripts.pory"
	release
# 381 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_3
# 382 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 383 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_6
# 384 "data//maps/RangerInstitute/scripts.pory"
	release
# 385 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 386 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 387 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_7
# 388 "data//maps/RangerInstitute/scripts.pory"
	release
# 389 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 390 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 391 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_8
# 392 "data//maps/RangerInstitute/scripts.pory"
	release
# 393 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_4
# 394 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 395 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 396 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_9
# 397 "data//maps/RangerInstitute/scripts.pory"
	release
# 398 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 399 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 400 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 401 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 402 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_10
# 403 "data//maps/RangerInstitute/scripts.pory"
	release
# 404 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 405 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_CARD
# 406 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_11
# 407 "data//maps/RangerInstitute/scripts.pory"
	release
# 408 "data//maps/RangerInstitute/scripts.pory"
	delay 32
# 409 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_12
# 410 "data//maps/RangerInstitute/scripts.pory"
	release
# 411 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 412 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_5
# 413 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_EventScript_Welcome_Movement_6
# 414 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_13
# 415 "data//maps/RangerInstitute/scripts.pory"
	release
# 416 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_14
# 417 "data//maps/RangerInstitute/scripts.pory"
	release
# 418 "data//maps/RangerInstitute/scripts.pory"
	delay 24
# 419 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_15
# 420 "data//maps/RangerInstitute/scripts.pory"
	release
# 421 "data//maps/RangerInstitute/scripts.pory"
	removeobject LOCALID_PACKAGE
# 422 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_PACKAGE
# 423 "data//maps/RangerInstitute/scripts.pory"
	startquest QUEST_POKEMON_RANGER
# 424 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_GOT_FIRST_MISSION
# 425 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 3
# 426 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 427 "data//maps/RangerInstitute/scripts.pory"
	msgbox_delay RangerInstitute_2F_EventScript_Welcome_Text_1, RangerInstitute_2F_EventScript_Welcome_Text_16
# 428 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Ravine::
# 445 "data//maps/RangerInstitute/scripts.pory"
	speakername RangerInstitute_2F_EventScript_Welcome_Text_1
# 446 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_0
	end


RangerInstitute_2F_NPC_1::
# 451 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 452 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 453 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_1_Text_0
# 454 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_2::
# 458 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 459 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 460 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_2_Text_0
# 461 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_3::
# 465 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 466 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 467 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_3_Text_0
# 468 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_4::
# 472 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 473 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 474 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_4_Text_0
# 475 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Mon_Bayleef::
# 502 "data//maps/RangerInstitute/scripts.pory"
	goto_if_set FLAG_RANGER_INSTITUTE_BAYLEEF, RangerInstitute_Mon_Bayleef_2
# 505 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 506 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 507 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_BAYLEEF, CRY_MODE_NORMAL
# 508 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_1
# 509 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MAX_REVIVE
# 510 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_INSTITUTE_BAYLEEF
# 511 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_2
# 512 "data//maps/RangerInstitute/scripts.pory"
	releaseall
RangerInstitute_Mon_Bayleef_1:
	end

RangerInstitute_Mon_Bayleef_2:
# 503 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_0, MSGBOX_NPC
	goto RangerInstitute_Mon_Bayleef_1


RangerInstitute_Mon_Palpitoad::
# 517 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
# 518 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Palpitoad_Text_0, MSGBOX_NPC
	end


RangerInstitute_Mon_Surskit::
# 522 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_MASQUERAIN, CRY_MODE_NORMAL
# 523 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Surskit_Text_0, MSGBOX_NPC
	end


RangerInstitute_Mon_Scyther::
# 527 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
# 528 "data//maps/RangerInstitute/scripts.pory"
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

# 284 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_0:
# 284 "data//maps/RangerInstitute/scripts.pory"
	face_left
# 284 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 288 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_1:
# 288 "data//maps/RangerInstitute/scripts.pory"
	walk_down
	step_end

# 290 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_2:
# 290 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 318 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_0:
# 318 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 320 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_1:
# 320 "data//maps/RangerInstitute/scripts.pory"
	face_up
	step_end

# 326 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_2:
# 326 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 326 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 326 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 326 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 326 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 326 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 326 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 326 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 326 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 326 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 326 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 326 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 326 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 327 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_3:
# 327 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 327 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 327 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 327 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 327 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 327 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 327 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 327 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 327 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 327 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 327 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 327 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

# 351 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger1_Movement_0:
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 351 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 351 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 363 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_0:
# 363 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_down
	step_end

# 370 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_1:
# 370 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 377 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_2:
# 377 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 377 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 377 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 377 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 381 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_3:
# 381 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 381 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 393 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_4:
# 393 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 393 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 412 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_5:
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 412 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 413 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_6:
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 413 "data//maps/RangerInstitute/scripts.pory"
	walk_left
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
	.string "IT WILL COST 500.\n"
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
	.string "Should I become a Pokémon Ranger? It's\n"
	.string "really hard to get in...I don't know if I\l"
	.string "can do it.$"

RangerInstitute_1F_NPC2_Text_0:
# 215 "data//maps/RangerInstitute/scripts.pory"
	.string "My interview is coming up. I'm nervous -\n"
	.string "I really want to become a Pokémon\l"
	.string "Ranger so bad! Their Pokémon are so\l"
	.string "cool! Tauros! Kangaskhan!\p"
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
	.string "We're tracking it on our scanners - it's\n"
	.string "headed to Pelluca City. I hope it\l"
	.string "doesn't cause any damage...$"

RangerInstitute_1F_BlockerBasement_Text_0:
# 237 "data//maps/RangerInstitute/scripts.pory"
	.string "Welcome to the Ranger TM Store!\p"
	.string "...\p"
	.string "You're not a Ranger?\p"
	.string "Sorry, this for Pokémon Rangers only.$"

RangerInstitute_1F_BlockerBasement_Text_1:
# 247 "data//maps/RangerInstitute/scripts.pory"
	.string "Welcome to the Ranger TM Store!$"

RangerInstitute_1F_BlockerBasement_Text_2:
# 250 "data//maps/RangerInstitute/scripts.pory"
	.string "See you another time, Ranger!$"

RangerInstitute_1F_BlockerUpstairs_Text_0:
# 267 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, only Pokémon Rangers are allowed\n"
	.string "inside. If you'd like to apply, you can\l"
	.string "print an application form using the PC\l"
	.string "by the entrance.$"

RangerInstitute_1F_BlockerUpstairs_Text_1:
# 276 "data//maps/RangerInstitute/scripts.pory"
	.string "You're not a fully-fledged Pokémon\n"
	.string "Ranger yet - just a Recruit!\l"
	.string "So I'll be keeping an eye on you.$"

RangerInstitute_2F_Trigger0_Text_0:
# 322 "data//maps/RangerInstitute/scripts.pory"
	.string "Hey wait- oh, a new Ranger Recruit?\n"
	.string "Welcome to the Ranger Institute,\l"
	.string "recruit! It's been a while since someone\l"
	.string "passed our interview. You must be here\l"
	.string "for your induction.\p"
	.string "Follow me. I'll introduce you to Ravine,\n"
	.string "the Ranger Institute Head.$"

RangerInstitute_2F_Trigger1_Text_0:
# 346 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Director.$"

RangerInstitute_2F_EventScript_Welcome_Text_0:
# 365 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine! Meet {PLAYER}, our\n"
	.string "newest Recruit.$"

RangerInstitute_2F_EventScript_Welcome_Text_1:
# 368 "data//maps/RangerInstitute/scripts.pory"
	.string "Ravine$"

RangerInstitute_2F_EventScript_Welcome_Text_2:
# 368 "data//maps/RangerInstitute/scripts.pory"
	.string "Hmm...yes...\p"
	.string "...\p"
	.string "...yes this is -$"

RangerInstitute_2F_EventScript_Welcome_Text_3:
# 372 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine!$"

RangerInstitute_2F_EventScript_Welcome_Text_4:
# 375 "data//maps/RangerInstitute/scripts.pory"
	.string "...ahh...hmm...$"

RangerInstitute_2F_EventScript_Welcome_Text_5:
# 379 "data//maps/RangerInstitute/scripts.pory"
	.string "DIRECTOR RAVINE!!!$"

RangerInstitute_2F_EventScript_Welcome_Text_6:
# 383 "data//maps/RangerInstitute/scripts.pory"
	.string "Yes! Yes! What is it?$"

RangerInstitute_2F_EventScript_Welcome_Text_7:
# 387 "data//maps/RangerInstitute/scripts.pory"
	.string "Sigh...\p"
	.string "Director Ravine! Meet {PLAYER}, our\n"
	.string "newest recruit.\p"
	.string "...\p"
	.string "Director, you were daydreaming again!$"

RangerInstitute_2F_EventScript_Welcome_Text_8:
# 391 "data//maps/RangerInstitute/scripts.pory"
	.string "No I was most definitely not, how dare\n"
	.string "you? I was -ahem- deep in my research.\p"
	.string "...\p"
	.string "Now. Yes. Welcome to the Ranger\n"
	.string "Institute, {PLAYER}! Congratulations\l"
	.string "on clearing the interview. I'm so\l"
	.string "pleased to see our family grow. Do you\l"
	.string "know what we Pokémon Rangers do?$"

RangerInstitute_2F_EventScript_Welcome_Text_9:
# 396 "data//maps/RangerInstitute/scripts.pory"
	.string "Psst...Director, the bike and stuff.$"

RangerInstitute_2F_EventScript_Welcome_Text_10:
# 402 "data//maps/RangerInstitute/scripts.pory"
	.string "Ah yes! As part of your welcome\n"
	.string "package, the Ranger Institute is\l"
	.string "pleased to provide you with these!$"

RangerInstitute_2F_EventScript_Welcome_Text_11:
# 406 "data//maps/RangerInstitute/scripts.pory"
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
# 409 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER}, do you know what we\n"
	.string "Pokémon Rangers are tasked with doing?\p"
	.string "No?\p"
	.string "Follow me.$"

RangerInstitute_2F_EventScript_Welcome_Text_13:
# 414 "data//maps/RangerInstitute/scripts.pory"
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
# 416 "data//maps/RangerInstitute/scripts.pory"
	.string "But none of that for you just yet! You\n"
	.string "have to earn your stripes here. As a\l"
	.string "Ranger Recruit, you'll have to complete\l"
	.string "missions to advance your ranking.$"

RangerInstitute_2F_EventScript_Welcome_Text_15:
# 419 "data//maps/RangerInstitute/scripts.pory"
	.string "Now, I have some important items that\n"
	.string "the Ranger Institute at Ivy River\l"
	.string "wants. Your first mission will be to\l"
	.string "deliver this to them!$"

RangerInstitute_2F_EventScript_Welcome_Text_16:
# 427 "data//maps/RangerInstitute/scripts.pory"
	.string "If you complete this mission, you'll\n"
	.string "rank up from Recruit to Candidate.\p"
	.string "The Ranger Institute at Ivy River is a\n"
	.string "little hard to find. You'll have to surf\l"
	.string "down from Winterlily Hollow and explore\l"
	.string "Lily Pond.\p"
	.string "Good training for a recruit, eh?$"

RangerInstitute_Ravine_Text_0:
# 446 "data//maps/RangerInstitute/scripts.pory"
	.string "How's my newest member doing?$"

RangerInstitute_2F_NPC_1_Text_0:
# 453 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine has a bad habit of\n"
	.string "daydreaming at work...$"

RangerInstitute_2F_NPC_2_Text_0:
# 460 "data//maps/RangerInstitute/scripts.pory"
	.string "Hello there, new recruit!\n"
	.string "Wanna see what I'm working on?\p"
	.string "I'm analysing the weather patterns in\n"
	.string "Cormoria. I stay on the lookout for any\l"
	.string "unnatural changes.$"

RangerInstitute_2F_NPC_3_Text_0:
# 467 "data//maps/RangerInstitute/scripts.pory"
	.string "Gah! I hate being on inventory duty.\n"
	.string "I miss the field!$"

RangerInstitute_2F_NPC_4_Text_0:
# 474 "data//maps/RangerInstitute/scripts.pory"
	.string "How's it going, {PLAYER}?$"

RangerInstitute_Mon_Bayleef_Text_0:
# 503 "data//maps/RangerInstitute/scripts.pory"
	.string "Bayleef is singing happily!$"

RangerInstitute_Mon_Bayleef_Text_1:
# 508 "data//maps/RangerInstitute/scripts.pory"
	.string "Bayleef is singing happily! It snuggles\n"
	.string "upto you and gives you something...$"

RangerInstitute_Mon_Bayleef_Text_2:
# 511 "data//maps/RangerInstitute/scripts.pory"
	.string "Thanks Bayleef!$"

RangerInstitute_Mon_Palpitoad_Text_0:
# 518 "data//maps/RangerInstitute/scripts.pory"
	.string "Palpitoad grunts and waddles around.\n"
	.string "It seems upset...$"

RangerInstitute_Mon_Surskit_Text_0:
# 523 "data//maps/RangerInstitute/scripts.pory"
	.string "Masquerain wants to be in the water!$"

RangerInstitute_Mon_Scyther_Text_0:
# 528 "data//maps/RangerInstitute/scripts.pory"
	.string "Scyther looks bummed out!\p"
	.string "It probably wants to be out on the\n"
	.string "field, just like its trainer.$"
