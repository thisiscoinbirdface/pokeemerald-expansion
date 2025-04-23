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
# 49 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_0
# 50 "data//maps/RangerInstitute/scripts.pory"
	release
# 52 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_2
# 57 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_ApplicationPC_5
# 76 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_5, MSGBOX_SIGN
# 77 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_ApplicationPC_2:
# 53 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_1, MSGBOX_SIGN
	end

RangerInstitute_1F_ApplicationPC_5:
# 58 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_2, MSGBOX_YESNO
# 59 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_8
RangerInstitute_1F_ApplicationPC_7:
# 72 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_ApplicationPC_8:
# 60 "data//maps/RangerInstitute/scripts.pory"
	showmoneybox 0, 0
# 61 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_3, MSGBOX_YESNO
# 62 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_11
	goto RangerInstitute_1F_ApplicationPC_7

RangerInstitute_1F_ApplicationPC_11:
# 63 "data//maps/RangerInstitute/scripts.pory"
	hidemoneybox
# 64 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_4
# 65 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 1
	goto RangerInstitute_1F_ApplicationPC_7


RangerInstitute_1F_Interviewer::
# 83 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 84 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 86 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_Interviewer_2
# 98 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_1
RangerInstitute_1F_Interviewer_1:
# 101 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_Interviewer_2:
# 87 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_0
# 88 "data//maps/RangerInstitute/scripts.pory"
	release
# 89 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_Interviewer_Movement_0
# 90 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 91 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_Interviewer_Movement_1
# 92 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 93 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 95 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ1
	goto RangerInstitute_1F_Interviewer_1


RangerInstitute_1F_InterviewFail::
# 105 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewFail_Text_0
# 106 "data//maps/RangerInstitute/scripts.pory"
	release
# 107 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 0
	return


RangerInstitute_1F_InterviewQ1::
# 112 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 113 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_0
# 114 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ1_Text_1, RangerInstitute_1F_InterviewQ1_Text_2, RangerInstitute_1F_InterviewQ1_Text_3, RangerInstitute_1F_InterviewQ1_Text_4
# 117 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RangerInstitute_1F_InterviewQ1_1
# 121 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ1_1:
# 118 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_5
# 119 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ2
	return


RangerInstitute_1F_InterviewQ2::
# 127 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 128 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ2_Text_0
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
	msgbox RangerInstitute_1F_InterviewQ3_Text_0
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
	msgbox RangerInstitute_1F_InterviewQ4_Text_0
# 159 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_1, RangerInstitute_1F_InterviewQ4_Text_2, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ4_Text_4
# 162 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_InterviewQ4_1
# 166 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ4_1:
# 163 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ4_Text_5
# 164 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ5
	return


RangerInstitute_1F_InterviewQ5::
# 172 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 173 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_0
# 174 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ5_Text_1, RangerInstitute_1F_InterviewQ5_Text_2, RangerInstitute_1F_InterviewQ5_Text_3
# 177 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ5_1
# 181 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ5_1:
# 178 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_4
# 179 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewPass
	return


RangerInstitute_1F_InterviewPass::
# 186 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewPass_Text_0
# 187 "data//maps/RangerInstitute/scripts.pory"
	releaseall
# 188 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 2
# 189 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_ACCEPTED
	return


RangerInstitute_1F_NPC1::
# 194 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 195 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 196 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC1_Text_0
# 197 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC2::
# 201 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 202 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 203 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC2_Text_0
# 204 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC3::
# 208 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 209 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 210 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC3_Text_0
# 211 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerBasement::
# 217 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 218 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 219 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
# 221 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerUpstairs::
# 225 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_2
RangerInstitute_1F_BlockerUpstairs_1:
# 229 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_5
RangerInstitute_1F_BlockerUpstairs_4:
# 233 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_8
RangerInstitute_1F_BlockerUpstairs_7:
	end

RangerInstitute_1F_BlockerUpstairs_2:
# 226 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0, MSGBOX_NPC
	goto RangerInstitute_1F_BlockerUpstairs_1

RangerInstitute_1F_BlockerUpstairs_5:
# 230 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0, MSGBOX_NPC
	goto RangerInstitute_1F_BlockerUpstairs_4

RangerInstitute_1F_BlockerUpstairs_8:
# 234 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_1, MSGBOX_NPC
	goto RangerInstitute_1F_BlockerUpstairs_7


RangerInstitute_1F_TriggerUpstairs::
# 240 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_gt RangerInstitute_1F_TriggerUpstairs_2
# 242 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 243 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_0
# 244 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 245 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
# 246 "data//maps/RangerInstitute/scripts.pory"
	release
# 247 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_TriggerUpstairs_Movement_1
# 248 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 249 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 250 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 251 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_TriggerUpstairs_2:
	end


RangerInstitute_2F_Trigger0::
# 275 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger0_2
	end

RangerInstitute_2F_Trigger0_1:
# 294 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger0_2:
# 276 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 277 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_0
# 278 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 279 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 280 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 281 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger0_Text_0
# 282 "data//maps/RangerInstitute/scripts.pory"
	release
# 285 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_2
# 286 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_3
# 287 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 289 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger0_1


RangerInstitute_2F_Trigger1::
# 299 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger1_2
	end

RangerInstitute_2F_Trigger1_1:
# 317 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger1_2:
# 300 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 301 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_0
# 302 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 303 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 304 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 305 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger1_Text_0
# 306 "data//maps/RangerInstitute/scripts.pory"
	release
# 309 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_2
# 310 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger1_Movement_0
# 311 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 313 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger1_1


RangerInstitute_2F_EventScript_Welcome::
# 322 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 323 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 324 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_0
# 325 "data//maps/RangerInstitute/scripts.pory"
	release
# 326 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 327 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_1
# 328 "data//maps/RangerInstitute/scripts.pory"
	release
# 329 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 330 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 331 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_2
# 332 "data//maps/RangerInstitute/scripts.pory"
	release
# 333 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 334 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_3
# 335 "data//maps/RangerInstitute/scripts.pory"
	release
# 336 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_2
# 337 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 338 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_4
# 339 "data//maps/RangerInstitute/scripts.pory"
	release
# 340 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_3
# 341 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 342 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_5
# 343 "data//maps/RangerInstitute/scripts.pory"
	release
# 344 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 345 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 346 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_6
# 347 "data//maps/RangerInstitute/scripts.pory"
	release
# 348 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 349 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 350 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_7
# 351 "data//maps/RangerInstitute/scripts.pory"
	release
# 352 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_4
# 353 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 354 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_8
# 355 "data//maps/RangerInstitute/scripts.pory"
	release
# 356 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 357 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 358 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_9
# 359 "data//maps/RangerInstitute/scripts.pory"
	release
# 360 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 361 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_CARD
# 362 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_10
# 363 "data//maps/RangerInstitute/scripts.pory"
	release
# 364 "data//maps/RangerInstitute/scripts.pory"
	delay 32
# 365 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_11
# 366 "data//maps/RangerInstitute/scripts.pory"
	release
# 367 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 368 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_5
# 369 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_EventScript_Welcome_Movement_6
# 370 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_12
# 371 "data//maps/RangerInstitute/scripts.pory"
	release
# 372 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_13
# 373 "data//maps/RangerInstitute/scripts.pory"
	release
# 374 "data//maps/RangerInstitute/scripts.pory"
	delay 24
# 375 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_14
# 376 "data//maps/RangerInstitute/scripts.pory"
	release
# 377 "data//maps/RangerInstitute/scripts.pory"
	removeobject LOCALID_PACKAGE
# 378 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_PACKAGE
# 379 "data//maps/RangerInstitute/scripts.pory"
	startquest QUEST_POKEMON_RANGER
# 380 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_GOT_FIRST_MISSION
# 381 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 3
# 382 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 383 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_15
# 384 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Ravine::
# 401 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 402 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 403 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq RangerInstitute_Ravine_1
	return

RangerInstitute_Ravine_1:
# 404 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_0
	return


RangerInstitute_2F_NPC_1::
# 409 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 410 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 411 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_1_Text_0
# 412 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_2::
# 416 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 417 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 418 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_2_Text_0
# 419 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_3::
# 423 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 424 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 425 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_3_Text_0
# 426 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_4::
# 430 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 431 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 432 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_4_Text_0
# 433 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Mon_Bayleef::
# 460 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 461 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 462 "data//maps/RangerInstitute/scripts.pory"
	goto_if_set FLAG_RANGER_INSTITUTE_BAYLEEF, RangerInstitute_Mon_Bayleef_2
# 465 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_BAYLEEF, CRY_MODE_NORMAL
# 466 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_1
# 467 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_POTION
# 468 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_INSTITUTE_BAYLEEF
# 469 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_2
RangerInstitute_Mon_Bayleef_1:
# 471 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Mon_Bayleef_2:
# 463 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_0
	goto RangerInstitute_Mon_Bayleef_1


RangerInstitute_Mon_Palpitoad::
# 475 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 476 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 477 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
# 478 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Palpitoad_Text_0
# 479 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Mon_Frogadier::
# 483 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 484 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 485 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_FROGADIER, CRY_MODE_NORMAL
# 486 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Frogadier_Text_0
# 487 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Mon_Scyther::
# 491 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 492 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 493 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
# 494 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Scyther_Text_0
# 495 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


# 89 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_0:
# 89 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 89 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 89 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 89 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 89 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 89 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 91 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_1:
# 91 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 112 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_InterviewQ1_Movement_0:
# 112 "data//maps/RangerInstitute/scripts.pory"
	emote_question_mark
	step_end

# 243 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_0:
# 243 "data//maps/RangerInstitute/scripts.pory"
	face_left
# 243 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 247 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_1:
# 247 "data//maps/RangerInstitute/scripts.pory"
	walk_down
	step_end

# 249 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_2:
# 249 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 277 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_0:
# 277 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 279 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_1:
# 279 "data//maps/RangerInstitute/scripts.pory"
	face_up
	step_end

# 285 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_2:
# 285 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 285 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 285 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 285 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 285 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 285 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 285 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 285 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 285 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 285 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 285 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 285 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 285 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 286 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_3:
# 286 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 286 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 286 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 286 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 286 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 286 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 286 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 286 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 286 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 286 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 286 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 286 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

# 310 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger1_Movement_0:
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 310 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 310 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 322 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_0:
# 322 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_down
	step_end

# 329 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_1:
# 329 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 336 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_2:
# 336 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 336 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 336 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 336 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 340 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_3:
# 340 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 340 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 352 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_4:
# 352 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 352 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 368 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_5:
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 368 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 368 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 369 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_6:
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 369 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

RangerInstitute_1F_ApplicationPC_Text_0:
# 49 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} booted up the Application\n"
	.string "PC.$"

RangerInstitute_1F_ApplicationPC_Text_1:
# 53 "data//maps/RangerInstitute/scripts.pory"
	.string "YOU ALREADY HAVE AN APPLICATION IN\n"
	.string "PROGRESS.$"

RangerInstitute_1F_ApplicationPC_Text_2:
# 58 "data//maps/RangerInstitute/scripts.pory"
	.string "WOULD YOU LIKE TO PRINT AN\n"
	.string "APPLICATION FORM?$"

RangerInstitute_1F_ApplicationPC_Text_3:
# 61 "data//maps/RangerInstitute/scripts.pory"
	.string "IT WILL COST 500. PROCEED WITH\n"
	.string "PRINTING?$"

RangerInstitute_1F_ApplicationPC_Text_4:
# 64 "data//maps/RangerInstitute/scripts.pory"
	.string "...\p"
	.string "A peice of paper comes out of the PC!\p"
	.string "PLEASE BRING THIS FORM TO THE\n"
	.string "INTERVIEWER ON DUTY.$"

RangerInstitute_1F_ApplicationPC_Text_5:
# 76 "data//maps/RangerInstitute/scripts.pory"
	.string "YOU HAVE ALREADY CLEARED THE\n"
	.string "INTERVIEW.$"

RangerInstitute_1F_Interviewer_Text_0:
# 87 "data//maps/RangerInstitute/scripts.pory"
	.string "Ah, very good! You have an application\n"
	.string "form. Come then, sit with me.$"

RangerInstitute_1F_Interviewer_Text_1:
# 98 "data//maps/RangerInstitute/scripts.pory"
	.string "I'm the interviewer on duty. We get so\n"
	.string "many applicants!$"

RangerInstitute_1F_InterviewFail_Text_0:
# 105 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry! That's the wrong answer. You\n"
	.string "have failed this interview.\p"
	.string "Please feel free to apply again!\p"
	.string "...\p"
	.string "...sigh, when will we ever get a decent\n"
	.string "candidate?$"

RangerInstitute_1F_InterviewQ1_Text_0:
# 113 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these types is\n"
	.string "super-effective against DEWPIDER?$"

RangerInstitute_1F_InterviewQ1_Text_1:
# 114 "data//maps/RangerInstitute/scripts.pory"
	.string "FAIRY$"

RangerInstitute_1F_InterviewQ1_Text_2:
# 114 "data//maps/RangerInstitute/scripts.pory"
	.string "GRASS$"

RangerInstitute_1F_InterviewQ1_Text_3:
# 114 "data//maps/RangerInstitute/scripts.pory"
	.string "FIRE$"

RangerInstitute_1F_InterviewQ1_Text_4:
# 114 "data//maps/RangerInstitute/scripts.pory"
	.string "ROCK$"

RangerInstitute_1F_InterviewQ1_Text_5:
# 118 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! DEWPIDER, a BUG/WATER type, is\n"
	.string "weak to ROCK-type attacks.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ2_Text_0:
# 128 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these Pokémon does NOT\n"
	.string "have a normal evolution?$"

RangerInstitute_1F_InterviewQ2_Text_1:
# 129 "data//maps/RangerInstitute/scripts.pory"
	.string "TOXEL$"

RangerInstitute_1F_InterviewQ2_Text_2:
# 129 "data//maps/RangerInstitute/scripts.pory"
	.string "KOFFING$"

RangerInstitute_1F_InterviewQ2_Text_3:
# 129 "data//maps/RangerInstitute/scripts.pory"
	.string "ABSOL$"

RangerInstitute_1F_InterviewQ2_Text_4:
# 129 "data//maps/RangerInstitute/scripts.pory"
	.string "CYNDAQUIL$"

RangerInstitute_1F_InterviewQ2_Text_5:
# 133 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! ABSOL has no normal evolution,\n"
	.string "but it can MEGA EVOLVE.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ3_Text_0:
# 143 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these Pokémon is GHOST\n"
	.string "type?$"

RangerInstitute_1F_InterviewQ3_Text_1:
# 144 "data//maps/RangerInstitute/scripts.pory"
	.string "DHELMISE$"

RangerInstitute_1F_InterviewQ3_Text_2:
# 144 "data//maps/RangerInstitute/scripts.pory"
	.string "ZIGZAGOON$"

RangerInstitute_1F_InterviewQ3_Text_3:
# 144 "data//maps/RangerInstitute/scripts.pory"
	.string "DELPHOX$"

RangerInstitute_1F_InterviewQ3_Text_4:
# 144 "data//maps/RangerInstitute/scripts.pory"
	.string "NINETALES$"

RangerInstitute_1F_InterviewQ3_Text_5:
# 148 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! DHELMISE is a GHOST/GRASS\n"
	.string "type Pokémon, commonly found\l"
	.string "underwater.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ4_Text_0:
# 158 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: What happens if you use BLACK\n"
	.string "AUGURITE on a SCYTHER?$"

RangerInstitute_1F_InterviewQ4_Text_1:
# 159 "data//maps/RangerInstitute/scripts.pory"
	.string "Full Heal$"

RangerInstitute_1F_InterviewQ4_Text_2:
# 159 "data//maps/RangerInstitute/scripts.pory"
	.string "Evolution$"

RangerInstitute_1F_InterviewQ4_Text_3:
# 159 "data//maps/RangerInstitute/scripts.pory"
	.string "Nothing$"

RangerInstitute_1F_InterviewQ4_Text_4:
# 159 "data//maps/RangerInstitute/scripts.pory"
	.string "Boost BUG power$"

RangerInstitute_1F_InterviewQ4_Text_5:
# 163 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Using BLACK AUGURITE evolves\n"
	.string "SCYTHER into KLEAVOR.\p"
	.string "Onto the last question!$"

RangerInstitute_1F_InterviewQ5_Text_0:
# 173 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: If you see a stranger in need of\n"
	.string "help, what do you do?$"

RangerInstitute_1F_InterviewQ5_Text_1:
# 174 "data//maps/RangerInstitute/scripts.pory"
	.string "Laugh$"

RangerInstitute_1F_InterviewQ5_Text_2:
# 174 "data//maps/RangerInstitute/scripts.pory"
	.string "Help them$"

RangerInstitute_1F_InterviewQ5_Text_3:
# 174 "data//maps/RangerInstitute/scripts.pory"
	.string "Take a video$"

RangerInstitute_1F_InterviewQ5_Text_4:
# 178 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! And with that, this interview\n"
	.string "is over.$"

RangerInstitute_1F_InterviewPass_Text_0:
# 186 "data//maps/RangerInstitute/scripts.pory"
	.string "Congratulations {PLAYER}! You've\n"
	.string "cleared the interview and we are now\l"
	.string "proud to call you a Pokémon Ranger\l"
	.string "Recruit. Welcome to the Cormoria\l"
	.string "Pokémon Ranger Institute! Please head\l"
	.string "upstairs for your induction.$"

RangerInstitute_1F_NPC1_Text_0:
# 196 "data//maps/RangerInstitute/scripts.pory"
	.string "Should I become a Pokémon Ranger? It's\n"
	.string "really hard to get in...I don't know if I\l"
	.string "can do it.$"

RangerInstitute_1F_NPC2_Text_0:
# 203 "data//maps/RangerInstitute/scripts.pory"
	.string "My interview is coming up. I'm nervous -\n"
	.string "I really want to become a Pokémon\l"
	.string "Ranger so bad! Their Pokémon are so\l"
	.string "cool! Tauros! Kangaskhan!\p"
	.string "...\p"
	.string "I don't know any others.$"

RangerInstitute_1F_NPC3_Text_0:
# 210 "data//maps/RangerInstitute/scripts.pory"
	.string "Not all Rangers are out on the field!\n"
	.string "Managing such a large organisation is\l"
	.string "no easy task, let me tell you.$"

RangerInstitute_1F_BlockerBasement_Text_0:
# 219 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, this area is closed off for\n"
	.string "repairs.$"

RangerInstitute_1F_BlockerUpstairs_Text_0:
# 226 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, only Pokémon Rangers are allowed\n"
	.string "inside. If you'd like to apply, you can\l"
	.string "print an application form using the PC\l"
	.string "by the entrance.$"

RangerInstitute_1F_BlockerUpstairs_Text_1:
# 234 "data//maps/RangerInstitute/scripts.pory"
	.string "You're not a fully-fledged Pokémon\n"
	.string "Ranger yet - just a Recruit! So I'll be\l"
	.string "keeping an eye on you.$"

RangerInstitute_2F_Trigger0_Text_0:
# 281 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Head.$"

RangerInstitute_2F_Trigger1_Text_0:
# 305 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Director.$"

RangerInstitute_2F_EventScript_Welcome_Text_0:
# 324 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE! Meet {PLAYER}, our\n"
	.string "newest Recruit.$"

RangerInstitute_2F_EventScript_Welcome_Text_1:
# 327 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Hmm...yes...\p"
	.string "...\p"
	.string "...yes this is -$"

RangerInstitute_2F_EventScript_Welcome_Text_2:
# 331 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE!$"

RangerInstitute_2F_EventScript_Welcome_Text_3:
# 334 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE:...ahh...hmm...$"

RangerInstitute_2F_EventScript_Welcome_Text_4:
# 338 "data//maps/RangerInstitute/scripts.pory"
	.string "DIRECTOR RAVINE!!!$"

RangerInstitute_2F_EventScript_Welcome_Text_5:
# 342 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Yes! Yes! What is it!$"

RangerInstitute_2F_EventScript_Welcome_Text_6:
# 346 "data//maps/RangerInstitute/scripts.pory"
	.string "Sigh...\n"
	.string "Director Ravine! Meet {PLAYER}, our\l"
	.string "newest recruit.\p"
	.string "...\p"
	.string "Director, you were daydreaming again!$"

RangerInstitute_2F_EventScript_Welcome_Text_7:
# 350 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: No I was most definitely not,\n"
	.string "how dare you? I was -ahem- deep in my\l"
	.string "research.\p"
	.string "...\p"
	.string "RAVINE: Anyway. Yes. Welcome to the\n"
	.string "RANGER INSTITUTE, {PLAYER}!\l"
	.string "Congratulations on clearing the\l"
	.string "interview. I'm so pleased to see our\l"
	.string "family grow. Do you know what we\l"
	.string "Pokémon Rangers do?$"

RangerInstitute_2F_EventScript_Welcome_Text_8:
# 354 "data//maps/RangerInstitute/scripts.pory"
	.string "Psst...Director, the bike and stuff.$"

RangerInstitute_2F_EventScript_Welcome_Text_9:
# 358 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Ah yes! As part of your welcome\n"
	.string "package, the Ranger Institute is\l"
	.string "pleased to provide you with these!$"

RangerInstitute_2F_EventScript_Welcome_Text_10:
# 362 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: The Ranger Bike and Ranger\n"
	.string "Card - the two emblems of a Pokémon\l"
	.string "Ranger in Cormoria! The Ranger Bike will\l"
	.string "allow you to speedily traverse all of\l"
	.string "Cormoria, and the Ranger Card lets\l"
	.string "everyone know you're a proper Pokémon\l"
	.string "Ranger! You can access the other\l"
	.string "Ranger Institutes with this.$"

RangerInstitute_2F_EventScript_Welcome_Text_11:
# 365 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Now, do you know what we\n"
	.string "Pokémon Rangers do? No? Follow me.$"

RangerInstitute_2F_EventScript_Welcome_Text_12:
# 370 "data//maps/RangerInstitute/scripts.pory"
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
# 372 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: But none of that for you just\n"
	.string "yet! You have to earn your stripes here.\l"
	.string "As a Ranger Recruit, you'll have to\l"
	.string "complete missions to advance your\l"
	.string "ranking.$"

RangerInstitute_2F_EventScript_Welcome_Text_14:
# 375 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Now, I have some important\n"
	.string "items that the Ranger Institute at Ivy\l"
	.string "River wants. Your first mission will be\l"
	.string "to deliver this to them!$"

RangerInstitute_2F_EventScript_Welcome_Text_15:
# 383 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: If you complete this mission,\n"
	.string "you'll rank up from Recruit to\l"
	.string "Candidate. The Ranger Institute at Ivy\l"
	.string "River is a little hard to find. You'll\l"
	.string "have to surf down from Winterlily Hollow\l"
	.string "and explore the riverbank. Good\l"
	.string "training for a recruit, eh?$"

RangerInstitute_Ravine_Text_0:
# 404 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: How's my newest Recruit doing?\n"
	.string "Have you delivered the package yet?$"

RangerInstitute_2F_NPC_1_Text_0:
# 411 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine has a bad habit of\n"
	.string "daydreaming at work...$"

RangerInstitute_2F_NPC_2_Text_0:
# 418 "data//maps/RangerInstitute/scripts.pory"
	.string "Hello there, new recruit! Wanna see what\n"
	.string "I'm working on? I'm analysing the\l"
	.string "weather patterns in Cormoria. I stay on\l"
	.string "the lookout for any unnatural changes.$"

RangerInstitute_2F_NPC_3_Text_0:
# 425 "data//maps/RangerInstitute/scripts.pory"
	.string "Gah! I hate being on inventory duty. I\n"
	.string "miss the field!$"

RangerInstitute_2F_NPC_4_Text_0:
# 432 "data//maps/RangerInstitute/scripts.pory"
	.string "How's it going, {PLAYER}?$"

RangerInstitute_Mon_Bayleef_Text_0:
# 463 "data//maps/RangerInstitute/scripts.pory"
	.string "BAYLEEF is singing happily!$"

RangerInstitute_Mon_Bayleef_Text_1:
# 466 "data//maps/RangerInstitute/scripts.pory"
	.string "BAYLEEF is singing happily! It snuggles\n"
	.string "upto you and gives you something...$"

RangerInstitute_Mon_Bayleef_Text_2:
# 469 "data//maps/RangerInstitute/scripts.pory"
	.string "Thanks BAYLEEF!$"

RangerInstitute_Mon_Palpitoad_Text_0:
# 478 "data//maps/RangerInstitute/scripts.pory"
	.string "PALPITOAD grunts and waddles around.\n"
	.string "It seems upset...$"

RangerInstitute_Mon_Frogadier_Text_0:
# 486 "data//maps/RangerInstitute/scripts.pory"
	.string "$"

RangerInstitute_Mon_Scyther_Text_0:
# 494 "data//maps/RangerInstitute/scripts.pory"
	.string "SCYTHER looks as bummed out as its\n"
	.string "trainer!$"
