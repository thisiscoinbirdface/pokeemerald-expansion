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
RangerInstitute_1F_ApplicationPC_1:
# 56 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_ApplicationPC_5
RangerInstitute_1F_ApplicationPC_4:
# 73 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_ApplicationPC_2:
# 53 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_1
	goto RangerInstitute_1F_ApplicationPC_1

RangerInstitute_1F_ApplicationPC_5:
# 57 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_2, MSGBOX_YESNO
# 58 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_7
	goto RangerInstitute_1F_ApplicationPC_4

RangerInstitute_1F_ApplicationPC_7:
# 59 "data//maps/RangerInstitute/scripts.pory"
	showmoneybox 0, 0
# 60 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_3, MSGBOX_YESNO
# 61 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_10
	goto RangerInstitute_1F_ApplicationPC_4

RangerInstitute_1F_ApplicationPC_10:
# 62 "data//maps/RangerInstitute/scripts.pory"
	hidemoneybox
# 63 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_4
# 64 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 1
	goto RangerInstitute_1F_ApplicationPC_4


RangerInstitute_1F_Interviewer::
# 78 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 79 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 81 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_Interviewer_2
# 93 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_1
RangerInstitute_1F_Interviewer_1:
# 96 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_Interviewer_2:
# 82 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_0
# 83 "data//maps/RangerInstitute/scripts.pory"
	release
# 84 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_Interviewer_Movement_0
# 85 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 86 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_Interviewer_Movement_1
# 87 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 88 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 90 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ1
	goto RangerInstitute_1F_Interviewer_1


RangerInstitute_1F_InterviewFail::
# 100 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewFail_Text_0
# 101 "data//maps/RangerInstitute/scripts.pory"
	release
# 102 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 0
	return


RangerInstitute_1F_InterviewQ1::
# 107 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 108 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_0
# 109 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ1_Text_1, RangerInstitute_1F_InterviewQ1_Text_2, RangerInstitute_1F_InterviewQ1_Text_3, RangerInstitute_1F_InterviewQ1_Text_4
# 112 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RangerInstitute_1F_InterviewQ1_1
# 116 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ1_1:
# 113 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_5
# 114 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ2
	return


RangerInstitute_1F_InterviewQ2::
# 122 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 123 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ2_Text_0
# 124 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ2_Text_1, RangerInstitute_1F_InterviewQ2_Text_2, RangerInstitute_1F_InterviewQ2_Text_3, RangerInstitute_1F_InterviewQ2_Text_4
# 127 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ2_1
# 131 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ2_1:
# 128 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ2_Text_5
# 129 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ3
	return


RangerInstitute_1F_InterviewQ3::
# 137 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 138 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ3_Text_0
# 139 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ3_Text_1, RangerInstitute_1F_InterviewQ3_Text_2, RangerInstitute_1F_InterviewQ3_Text_3, RangerInstitute_1F_InterviewQ3_Text_4
# 142 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RangerInstitute_1F_InterviewQ3_1
# 146 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ3_1:
# 143 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ3_Text_5
# 144 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ4
	return


RangerInstitute_1F_InterviewQ4::
# 152 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 153 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ4_Text_0
# 154 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_1, RangerInstitute_1F_InterviewQ4_Text_2, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ4_Text_4
# 157 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_InterviewQ4_1
# 161 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ4_1:
# 158 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ4_Text_5
# 159 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ5
	return


RangerInstitute_1F_InterviewQ5::
# 167 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 168 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_0
# 169 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ5_Text_1, RangerInstitute_1F_InterviewQ5_Text_2, RangerInstitute_1F_InterviewQ5_Text_3
# 172 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ5_1
# 176 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ5_1:
# 173 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_4
# 174 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewPass
	return


RangerInstitute_1F_InterviewPass::
# 181 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewPass_Text_0
# 182 "data//maps/RangerInstitute/scripts.pory"
	releaseall
# 183 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 2
	return


RangerInstitute_1F_NPC1::
# 188 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 189 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 190 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC1_Text_0
# 191 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC2::
# 195 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 196 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 197 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC2_Text_0
# 198 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC3::
# 202 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 203 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 204 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC3_Text_0
# 205 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerBasement::
# 211 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 212 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 213 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
# 215 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerUpstairs::
# 219 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 220 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 222 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_2
RangerInstitute_1F_BlockerUpstairs_1:
# 226 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_5
RangerInstitute_1F_BlockerUpstairs_4:
# 230 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_8
RangerInstitute_1F_BlockerUpstairs_7:
# 233 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_BlockerUpstairs_2:
# 223 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_1

RangerInstitute_1F_BlockerUpstairs_5:
# 227 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_4

RangerInstitute_1F_BlockerUpstairs_8:
# 231 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_1
	goto RangerInstitute_1F_BlockerUpstairs_7


RangerInstitute_1F_TriggerUpstairs::
# 238 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_gt RangerInstitute_1F_TriggerUpstairs_2
# 240 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 241 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_0
# 242 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 243 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
# 244 "data//maps/RangerInstitute/scripts.pory"
	release
# 245 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_TriggerUpstairs_Movement_1
# 246 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 247 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 248 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 249 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_TriggerUpstairs_2:
	end


RangerInstitute_2F_Trigger0::
# 273 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger0_2
	end

RangerInstitute_2F_Trigger0_1:
# 292 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger0_2:
# 274 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 275 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_0
# 276 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 277 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 278 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 279 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger0_Text_0
# 280 "data//maps/RangerInstitute/scripts.pory"
	release
# 283 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_2
# 284 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_3
# 285 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 287 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger0_1


RangerInstitute_2F_Trigger1::
# 297 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger1_2
	end

RangerInstitute_2F_Trigger1_1:
# 315 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger1_2:
# 298 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 299 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_0
# 300 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 301 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 302 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 303 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger1_Text_0
# 304 "data//maps/RangerInstitute/scripts.pory"
	release
# 307 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_2
# 308 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger1_Movement_0
# 309 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 311 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger1_1


RangerInstitute_2F_EventScript_Welcome::
# 320 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 321 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 322 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_0
# 323 "data//maps/RangerInstitute/scripts.pory"
	release
# 324 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 325 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_1
# 326 "data//maps/RangerInstitute/scripts.pory"
	release
# 327 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 328 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 329 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_2
# 330 "data//maps/RangerInstitute/scripts.pory"
	release
# 331 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 332 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_3
# 333 "data//maps/RangerInstitute/scripts.pory"
	release
# 334 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_2
# 335 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 336 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_4
# 337 "data//maps/RangerInstitute/scripts.pory"
	release
# 338 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_3
# 339 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 340 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_5
# 341 "data//maps/RangerInstitute/scripts.pory"
	release
# 342 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 343 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 344 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_6
# 345 "data//maps/RangerInstitute/scripts.pory"
	release
# 346 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 347 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 348 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_7
# 349 "data//maps/RangerInstitute/scripts.pory"
	release
# 350 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_4
# 351 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 352 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_8
# 353 "data//maps/RangerInstitute/scripts.pory"
	release
# 354 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 355 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 356 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_9
# 357 "data//maps/RangerInstitute/scripts.pory"
	release
# 358 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 359 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_CARD
# 360 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_10
# 361 "data//maps/RangerInstitute/scripts.pory"
	release
# 362 "data//maps/RangerInstitute/scripts.pory"
	delay 32
# 363 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_11
# 364 "data//maps/RangerInstitute/scripts.pory"
	release
# 365 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 366 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_5
# 367 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_EventScript_Welcome_Movement_6
# 368 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_12
# 369 "data//maps/RangerInstitute/scripts.pory"
	release
# 370 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_13
# 371 "data//maps/RangerInstitute/scripts.pory"
	release
# 372 "data//maps/RangerInstitute/scripts.pory"
	delay 24
# 373 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_14
# 374 "data//maps/RangerInstitute/scripts.pory"
	release
# 375 "data//maps/RangerInstitute/scripts.pory"
	removeobject LOCALID_PACKAGE
# 376 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_PACKAGE
# 377 "data//maps/RangerInstitute/scripts.pory"
	startquest QUEST_POKEMON_RANGER
# 378 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_GOT_FIRST_MISSION
# 379 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 3
# 380 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 381 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_15
# 382 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Ravine::
# 387 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 388 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 389 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq RangerInstitute_Ravine_1
	return

RangerInstitute_Ravine_1:
# 390 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_0
	return


RangerInstitute_2F_NPC_1::
# 395 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 396 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 397 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_1_Text_0
# 398 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_2::
# 402 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 403 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 404 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_2_Text_0
# 405 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_3::
# 409 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 410 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 411 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_3_Text_0
# 412 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_4::
# 416 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 417 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 418 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_4_Text_0
# 419 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Mon_Bayleef::
# 446 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 447 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 448 "data//maps/RangerInstitute/scripts.pory"
	goto_if_set FLAG_RANGER_INSTITUTE_BAYLEEF, RangerInstitute_Mon_Bayleef_2
# 451 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_BAYLEEF, CRY_MODE_NORMAL
# 452 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_1
# 453 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_POTION
# 454 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_INSTITUTE_BAYLEEF
# 455 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_2
RangerInstitute_Mon_Bayleef_1:
# 457 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Mon_Bayleef_2:
# 449 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_0
	goto RangerInstitute_Mon_Bayleef_1


RangerInstitute_Mon_Palpitoad::
# 461 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 462 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 463 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
# 464 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Palpitoad_Text_0
# 465 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Mon_Frogadier::
# 469 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 470 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 471 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_FROGADIER, CRY_MODE_NORMAL
# 472 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Frogadier_Text_0
# 473 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Mon_Scyther::
# 477 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 478 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 479 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
# 480 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Scyther_Text_0
# 481 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


# 84 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_0:
# 84 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 84 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 84 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 84 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 84 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 84 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 86 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_1:
# 86 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 107 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_InterviewQ1_Movement_0:
# 107 "data//maps/RangerInstitute/scripts.pory"
	emote_question_mark
	step_end

# 241 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_0:
# 241 "data//maps/RangerInstitute/scripts.pory"
	face_left
# 241 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 245 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_1:
# 245 "data//maps/RangerInstitute/scripts.pory"
	walk_down
	step_end

# 247 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_2:
# 247 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 275 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_0:
# 275 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 277 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_1:
# 277 "data//maps/RangerInstitute/scripts.pory"
	face_up
	step_end

# 283 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_2:
# 283 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 283 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 283 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 283 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 283 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 283 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 283 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 283 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 283 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 283 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 283 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 283 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 283 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 284 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_3:
# 284 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 284 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 284 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 284 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 284 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 284 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 284 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 284 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 284 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 284 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 284 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 284 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

# 308 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger1_Movement_0:
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 308 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 308 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 320 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_0:
# 320 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_down
	step_end

# 327 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_1:
# 327 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 334 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_2:
# 334 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 334 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 334 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 334 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 338 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_3:
# 338 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 338 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 350 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_4:
# 350 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 350 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 366 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_5:
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 366 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 366 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 367 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_6:
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 367 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 367 "data//maps/RangerInstitute/scripts.pory"
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
# 57 "data//maps/RangerInstitute/scripts.pory"
	.string "WOULD YOU LIKE TO PRINT AN\n"
	.string "APPLICATION FORM?$"

RangerInstitute_1F_ApplicationPC_Text_3:
# 60 "data//maps/RangerInstitute/scripts.pory"
	.string "IT WILL COST 500. PROCEED WITH\n"
	.string "PRINTING?$"

RangerInstitute_1F_ApplicationPC_Text_4:
# 63 "data//maps/RangerInstitute/scripts.pory"
	.string "...\p"
	.string "A peice of paper comes out of the PC!\p"
	.string "PLEASE BRING THIS FORM TO THE\n"
	.string "INTERVIEWER ON DUTY.$"

RangerInstitute_1F_Interviewer_Text_0:
# 82 "data//maps/RangerInstitute/scripts.pory"
	.string "Ah, very good! You have an application\n"
	.string "form. Come then, sit with me.$"

RangerInstitute_1F_Interviewer_Text_1:
# 93 "data//maps/RangerInstitute/scripts.pory"
	.string "I'm the interviewer on duty. We get so\n"
	.string "many applicants!$"

RangerInstitute_1F_InterviewFail_Text_0:
# 100 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry! That's the wrong answer. You\n"
	.string "have failed this interview.\p"
	.string "Please feel free to apply again!\p"
	.string "...\p"
	.string "...sigh, when will we ever get a decent\n"
	.string "candidate?$"

RangerInstitute_1F_InterviewQ1_Text_0:
# 108 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these types is\n"
	.string "super-effective against DEWPIDER?$"

RangerInstitute_1F_InterviewQ1_Text_1:
# 109 "data//maps/RangerInstitute/scripts.pory"
	.string "FAIRY$"

RangerInstitute_1F_InterviewQ1_Text_2:
# 109 "data//maps/RangerInstitute/scripts.pory"
	.string "GRASS$"

RangerInstitute_1F_InterviewQ1_Text_3:
# 109 "data//maps/RangerInstitute/scripts.pory"
	.string "FIRE$"

RangerInstitute_1F_InterviewQ1_Text_4:
# 109 "data//maps/RangerInstitute/scripts.pory"
	.string "ROCK$"

RangerInstitute_1F_InterviewQ1_Text_5:
# 113 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! DEWPIDER, a BUG/WATER type, is\n"
	.string "weak to ROCK-type attacks.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ2_Text_0:
# 123 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these Pokémon does NOT\n"
	.string "have a normal evolution?$"

RangerInstitute_1F_InterviewQ2_Text_1:
# 124 "data//maps/RangerInstitute/scripts.pory"
	.string "TOXEL$"

RangerInstitute_1F_InterviewQ2_Text_2:
# 124 "data//maps/RangerInstitute/scripts.pory"
	.string "KOFFING$"

RangerInstitute_1F_InterviewQ2_Text_3:
# 124 "data//maps/RangerInstitute/scripts.pory"
	.string "ABSOL$"

RangerInstitute_1F_InterviewQ2_Text_4:
# 124 "data//maps/RangerInstitute/scripts.pory"
	.string "CYNDAQUIL$"

RangerInstitute_1F_InterviewQ2_Text_5:
# 128 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! ABSOL has no normal evolution,\n"
	.string "but it can MEGA EVOLVE.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ3_Text_0:
# 138 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these Pokémon is GHOST\n"
	.string "type?$"

RangerInstitute_1F_InterviewQ3_Text_1:
# 139 "data//maps/RangerInstitute/scripts.pory"
	.string "DHELMISE$"

RangerInstitute_1F_InterviewQ3_Text_2:
# 139 "data//maps/RangerInstitute/scripts.pory"
	.string "ZIGZAGOON$"

RangerInstitute_1F_InterviewQ3_Text_3:
# 139 "data//maps/RangerInstitute/scripts.pory"
	.string "DELPHOX$"

RangerInstitute_1F_InterviewQ3_Text_4:
# 139 "data//maps/RangerInstitute/scripts.pory"
	.string "NINETALES$"

RangerInstitute_1F_InterviewQ3_Text_5:
# 143 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! DHELMISE is a GHOST/GRASS\n"
	.string "type Pokémon, commonly found\l"
	.string "underwater.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ4_Text_0:
# 153 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: What happens if you use BLACK\n"
	.string "AUGURITE on a SCYTHER?$"

RangerInstitute_1F_InterviewQ4_Text_1:
# 154 "data//maps/RangerInstitute/scripts.pory"
	.string "Full Heal$"

RangerInstitute_1F_InterviewQ4_Text_2:
# 154 "data//maps/RangerInstitute/scripts.pory"
	.string "Evolution$"

RangerInstitute_1F_InterviewQ4_Text_3:
# 154 "data//maps/RangerInstitute/scripts.pory"
	.string "Nothing$"

RangerInstitute_1F_InterviewQ4_Text_4:
# 154 "data//maps/RangerInstitute/scripts.pory"
	.string "Boost BUG power$"

RangerInstitute_1F_InterviewQ4_Text_5:
# 158 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Using BLACK AUGURITE evolves\n"
	.string "SCYTHER into KLEAVOR.\p"
	.string "Onto the last question!$"

RangerInstitute_1F_InterviewQ5_Text_0:
# 168 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: If you see a stranger in need of\n"
	.string "help, what do you do?$"

RangerInstitute_1F_InterviewQ5_Text_1:
# 169 "data//maps/RangerInstitute/scripts.pory"
	.string "Laugh$"

RangerInstitute_1F_InterviewQ5_Text_2:
# 169 "data//maps/RangerInstitute/scripts.pory"
	.string "Help them$"

RangerInstitute_1F_InterviewQ5_Text_3:
# 169 "data//maps/RangerInstitute/scripts.pory"
	.string "Take a video$"

RangerInstitute_1F_InterviewQ5_Text_4:
# 173 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! And with that, this interview\n"
	.string "is over.$"

RangerInstitute_1F_InterviewPass_Text_0:
# 181 "data//maps/RangerInstitute/scripts.pory"
	.string "Congratulations {PLAYER}! You've\n"
	.string "cleared the interview and we are now\l"
	.string "proud to call you a Pokémon Ranger\l"
	.string "Recruit. Welcome to the Cormoria\l"
	.string "Pokémon Ranger Institute! Please head\l"
	.string "upstairs for your induction.$"

RangerInstitute_1F_NPC1_Text_0:
# 190 "data//maps/RangerInstitute/scripts.pory"
	.string "Should I become a Pokémon Ranger? It's\n"
	.string "really hard to get in...I don't know if I\l"
	.string "can do it.$"

RangerInstitute_1F_NPC2_Text_0:
# 197 "data//maps/RangerInstitute/scripts.pory"
	.string "My interview is coming up. I'm nervous -\n"
	.string "I really want to become a Pokémon\l"
	.string "Ranger so bad! Their Pokémon are so\l"
	.string "cool! Tauros! Kangaskhan!\p"
	.string "...\p"
	.string "I don't know any others.$"

RangerInstitute_1F_NPC3_Text_0:
# 204 "data//maps/RangerInstitute/scripts.pory"
	.string "Not all Rangers are out on the field!\n"
	.string "Managing such a large organisation is\l"
	.string "no easy task, let me tell you.$"

RangerInstitute_1F_BlockerBasement_Text_0:
# 213 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, this area is closed off for\n"
	.string "repairs.$"

RangerInstitute_1F_BlockerUpstairs_Text_0:
# 223 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, only Pokémon Rangers are allowed\n"
	.string "inside. If you'd like to apply, you can\l"
	.string "print an application form using the PC\l"
	.string "by the entrance.$"

RangerInstitute_1F_BlockerUpstairs_Text_1:
# 231 "data//maps/RangerInstitute/scripts.pory"
	.string "You're not a fully-fledged Pokémon\n"
	.string "Ranger yet - just a Recruit! So I'll be\l"
	.string "keeping an eye on you.$"

RangerInstitute_2F_Trigger0_Text_0:
# 279 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Head.$"

RangerInstitute_2F_Trigger1_Text_0:
# 303 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Director.$"

RangerInstitute_2F_EventScript_Welcome_Text_0:
# 322 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE! Meet {PLAYER}, our\n"
	.string "newest Recruit.$"

RangerInstitute_2F_EventScript_Welcome_Text_1:
# 325 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Hmm...yes...\p"
	.string "...\p"
	.string "...yes this is -$"

RangerInstitute_2F_EventScript_Welcome_Text_2:
# 329 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE!$"

RangerInstitute_2F_EventScript_Welcome_Text_3:
# 332 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE:...ahh...hmm...$"

RangerInstitute_2F_EventScript_Welcome_Text_4:
# 336 "data//maps/RangerInstitute/scripts.pory"
	.string "DIRECTOR RAVINE!!!$"

RangerInstitute_2F_EventScript_Welcome_Text_5:
# 340 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Yes! Yes! What is it!$"

RangerInstitute_2F_EventScript_Welcome_Text_6:
# 344 "data//maps/RangerInstitute/scripts.pory"
	.string "Sigh...\n"
	.string "Director Ravine! Meet {PLAYER}, our\l"
	.string "newest recruit.\p"
	.string "...\p"
	.string "Director, you were daydreaming again!$"

RangerInstitute_2F_EventScript_Welcome_Text_7:
# 348 "data//maps/RangerInstitute/scripts.pory"
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
# 352 "data//maps/RangerInstitute/scripts.pory"
	.string "Psst...Director, the bike and stuff.$"

RangerInstitute_2F_EventScript_Welcome_Text_9:
# 356 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Ah yes! As part of your welcome\n"
	.string "package, the Ranger Institute is\l"
	.string "pleased to provide you with these!$"

RangerInstitute_2F_EventScript_Welcome_Text_10:
# 360 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: The Ranger Bike and Ranger\n"
	.string "Card - the two emblems of a Pokémon\l"
	.string "Ranger in Cormoria! The Ranger Bike will\l"
	.string "allow you to speedily traverse all of\l"
	.string "Cormoria, and the Ranger Card lets\l"
	.string "everyone know you're a proper Pokémon\l"
	.string "Ranger! You can access the other\l"
	.string "Ranger Institutes with this.$"

RangerInstitute_2F_EventScript_Welcome_Text_11:
# 363 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Now, do you know what we\n"
	.string "Pokémon Rangers do? No? Follow me.$"

RangerInstitute_2F_EventScript_Welcome_Text_12:
# 368 "data//maps/RangerInstitute/scripts.pory"
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
# 370 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: But none of that for you just\n"
	.string "yet! You have to earn your stripes here.\l"
	.string "As a Ranger Recruit, you'll have to\l"
	.string "complete missions to advance your\l"
	.string "ranking.$"

RangerInstitute_2F_EventScript_Welcome_Text_14:
# 373 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Now, I have some important\n"
	.string "items that the Ranger Institute at Ivy\l"
	.string "River wants. Your first mission will be\l"
	.string "to deliver this to them!$"

RangerInstitute_2F_EventScript_Welcome_Text_15:
# 381 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: If you complete this mission,\n"
	.string "you'll rank up from Recruit to\l"
	.string "Candidate. The Ranger Institute at Ivy\l"
	.string "River is a little hard to find. You'll\l"
	.string "have to surf down from Winterlily Hollow\l"
	.string "and explore the riverbank. Good\l"
	.string "training for a recruit, eh?$"

RangerInstitute_Ravine_Text_0:
# 390 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: How's my newest Recruit doing?\n"
	.string "Have you delivered the package yet?$"

RangerInstitute_2F_NPC_1_Text_0:
# 397 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine has a bad habit of\n"
	.string "daydreaming at work...$"

RangerInstitute_2F_NPC_2_Text_0:
# 404 "data//maps/RangerInstitute/scripts.pory"
	.string "Hello there, new recruit! Wanna see what\n"
	.string "I'm working on? I'm analysing the\l"
	.string "weather patterns in Cormoria. I stay on\l"
	.string "the lookout for any unnatural changes.$"

RangerInstitute_2F_NPC_3_Text_0:
# 411 "data//maps/RangerInstitute/scripts.pory"
	.string "Gah! I hate being on inventory duty. I\n"
	.string "miss the field!$"

RangerInstitute_2F_NPC_4_Text_0:
# 418 "data//maps/RangerInstitute/scripts.pory"
	.string "How's it going, {PLAYER}?$"

RangerInstitute_Mon_Bayleef_Text_0:
# 449 "data//maps/RangerInstitute/scripts.pory"
	.string "BAYLEEF is singing happily!$"

RangerInstitute_Mon_Bayleef_Text_1:
# 452 "data//maps/RangerInstitute/scripts.pory"
	.string "BAYLEEF is singing happily! It snuggles\n"
	.string "upto you and gives you something...$"

RangerInstitute_Mon_Bayleef_Text_2:
# 455 "data//maps/RangerInstitute/scripts.pory"
	.string "Thanks BAYLEEF!$"

RangerInstitute_Mon_Palpitoad_Text_0:
# 464 "data//maps/RangerInstitute/scripts.pory"
	.string "PALPITOAD grunts and waddles around.\n"
	.string "It seems upset...$"

RangerInstitute_Mon_Frogadier_Text_0:
# 472 "data//maps/RangerInstitute/scripts.pory"
	.string "$"

RangerInstitute_Mon_Scyther_Text_0:
# 480 "data//maps/RangerInstitute/scripts.pory"
	.string "SCYTHER looks as bummed out as its\n"
	.string "trainer!$"
