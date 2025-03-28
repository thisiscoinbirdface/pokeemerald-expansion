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
# 31 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_0
# 32 "data//maps/RangerInstitute/scripts.pory"
	release
# 34 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_2
RangerInstitute_1F_ApplicationPC_1:
# 38 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_ApplicationPC_5
RangerInstitute_1F_ApplicationPC_4:
# 55 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_ApplicationPC_2:
# 35 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_1
	goto RangerInstitute_1F_ApplicationPC_1

RangerInstitute_1F_ApplicationPC_5:
# 39 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_2, MSGBOX_YESNO
# 40 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_7
	goto RangerInstitute_1F_ApplicationPC_4

RangerInstitute_1F_ApplicationPC_7:
# 41 "data//maps/RangerInstitute/scripts.pory"
	showmoneybox 0, 0
# 42 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_3, MSGBOX_YESNO
# 43 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_10
	goto RangerInstitute_1F_ApplicationPC_4

RangerInstitute_1F_ApplicationPC_10:
# 44 "data//maps/RangerInstitute/scripts.pory"
	hidemoneybox
# 45 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_4
# 46 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 1
	goto RangerInstitute_1F_ApplicationPC_4


RangerInstitute_1F_Interviewer::
# 60 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 61 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 63 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_Interviewer_2
# 75 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_1
RangerInstitute_1F_Interviewer_1:
# 78 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_Interviewer_2:
# 64 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_0
# 65 "data//maps/RangerInstitute/scripts.pory"
	release
# 66 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_Interviewer_Movement_0
# 67 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 68 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_Interviewer_Movement_1
# 69 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 70 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 72 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ1
	goto RangerInstitute_1F_Interviewer_1


RangerInstitute_1F_InterviewFail::
# 82 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewFail_Text_0
# 83 "data//maps/RangerInstitute/scripts.pory"
	release
# 84 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 0
	return


RangerInstitute_1F_InterviewQ1::
# 89 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 90 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_0
# 91 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ1_Text_1, RangerInstitute_1F_InterviewQ1_Text_2, RangerInstitute_1F_InterviewQ1_Text_3, RangerInstitute_1F_InterviewQ1_Text_4
# 94 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RangerInstitute_1F_InterviewQ1_1
# 98 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ1_1:
# 95 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_5
# 96 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ2
	return


RangerInstitute_1F_InterviewQ2::
# 104 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 105 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ2_Text_0
# 106 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ2_Text_1, RangerInstitute_1F_InterviewQ2_Text_2, RangerInstitute_1F_InterviewQ2_Text_3, RangerInstitute_1F_InterviewQ2_Text_4
# 109 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ2_1
# 113 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ2_1:
# 110 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ2_Text_5
# 111 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ3
	return


RangerInstitute_1F_InterviewQ3::
# 119 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 120 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ3_Text_0
# 121 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ3_Text_1, RangerInstitute_1F_InterviewQ3_Text_2, RangerInstitute_1F_InterviewQ3_Text_3, RangerInstitute_1F_InterviewQ3_Text_4
# 124 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RangerInstitute_1F_InterviewQ3_1
# 128 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ3_1:
# 125 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ3_Text_5
# 126 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ4
	return


RangerInstitute_1F_InterviewQ4::
# 134 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 135 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ4_Text_0
# 136 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_1, RangerInstitute_1F_InterviewQ4_Text_2, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ4_Text_4
# 139 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_InterviewQ4_1
# 143 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ4_1:
# 140 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ4_Text_5
# 141 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ5
	return


RangerInstitute_1F_InterviewQ5::
# 149 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 150 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_0
# 151 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ5_Text_1, RangerInstitute_1F_InterviewQ5_Text_2, RangerInstitute_1F_InterviewQ5_Text_3
# 154 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ5_1
# 158 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ5_1:
# 155 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_4
# 156 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewPass
	return


RangerInstitute_1F_InterviewPass::
# 163 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewPass_Text_0
# 164 "data//maps/RangerInstitute/scripts.pory"
	releaseall
# 165 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 2
	return


RangerInstitute_1F_NPC1::
# 170 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 171 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 172 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC1_Text_0
# 173 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC2::
# 177 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 178 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 179 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC2_Text_0
# 180 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC3::
# 184 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 185 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 186 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC3_Text_0
# 187 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerBasement::
# 193 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 194 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 195 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
# 196 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerUpstairs::
# 200 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 201 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 203 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_2
RangerInstitute_1F_BlockerUpstairs_1:
# 207 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_5
RangerInstitute_1F_BlockerUpstairs_4:
# 211 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_8
RangerInstitute_1F_BlockerUpstairs_7:
# 214 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_BlockerUpstairs_2:
# 204 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_1

RangerInstitute_1F_BlockerUpstairs_5:
# 208 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_4

RangerInstitute_1F_BlockerUpstairs_8:
# 212 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_7


RangerInstitute_1F_TriggerUpstairs::
# 219 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_gt RangerInstitute_1F_TriggerUpstairs_2
# 221 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 222 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_0
# 223 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 224 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
# 225 "data//maps/RangerInstitute/scripts.pory"
	release
# 226 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_TriggerUpstairs_Movement_1
# 227 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 228 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 229 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 230 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_TriggerUpstairs_2:
	end


RangerInstitute_2F_Trigger0::
# 254 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger0_2
	end

RangerInstitute_2F_Trigger0_1:
# 273 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger0_2:
# 255 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 256 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_0
# 257 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 258 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 259 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 260 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger0_Text_0
# 261 "data//maps/RangerInstitute/scripts.pory"
	release
# 264 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_2
# 265 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_3
# 266 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 268 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger0_1


RangerInstitute_2F_Trigger1::
# 278 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger1_2
	end

RangerInstitute_2F_Trigger1_1:
# 296 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger1_2:
# 279 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 280 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_0
# 281 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 282 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 283 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 284 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger1_Text_0
# 285 "data//maps/RangerInstitute/scripts.pory"
	release
# 288 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_2
# 289 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger1_Movement_0
# 290 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 292 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger1_1


RangerInstitute_2F_EventScript_Welcome::
# 301 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 302 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 303 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_0
# 304 "data//maps/RangerInstitute/scripts.pory"
	release
# 305 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 306 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_1
# 307 "data//maps/RangerInstitute/scripts.pory"
	release
# 308 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 309 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 310 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_2
# 311 "data//maps/RangerInstitute/scripts.pory"
	release
# 312 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 313 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_3
# 314 "data//maps/RangerInstitute/scripts.pory"
	release
# 315 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_2
# 316 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 317 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_4
# 318 "data//maps/RangerInstitute/scripts.pory"
	release
# 319 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_3
# 320 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 321 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_5
# 322 "data//maps/RangerInstitute/scripts.pory"
	release
# 323 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 324 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 325 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_6
# 326 "data//maps/RangerInstitute/scripts.pory"
	release
# 327 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 328 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 329 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_7
# 330 "data//maps/RangerInstitute/scripts.pory"
	release
# 331 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_4
# 332 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 333 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_8
# 334 "data//maps/RangerInstitute/scripts.pory"
	release
# 335 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 336 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 337 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_9
# 338 "data//maps/RangerInstitute/scripts.pory"
	release
# 339 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 340 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_CARD
# 341 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_10
# 342 "data//maps/RangerInstitute/scripts.pory"
	release
# 343 "data//maps/RangerInstitute/scripts.pory"
	delay 32
# 344 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_11
# 345 "data//maps/RangerInstitute/scripts.pory"
	release
# 346 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 347 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_5
# 348 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_EventScript_Welcome_Movement_6
# 349 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_12
# 350 "data//maps/RangerInstitute/scripts.pory"
	release
# 351 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_13
# 352 "data//maps/RangerInstitute/scripts.pory"
	release
# 353 "data//maps/RangerInstitute/scripts.pory"
	delay 24
# 354 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_14
# 355 "data//maps/RangerInstitute/scripts.pory"
	release
# 356 "data//maps/RangerInstitute/scripts.pory"
	startquest QUEST_POKEMON_RANGER
# 357 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 2
# 358 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 359 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_15
# 360 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Ravine::
# 365 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 366 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 368 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq RangerInstitute_Ravine_1
	return

RangerInstitute_Ravine_1:
# 369 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_0
	return


RangerInstitute_2F_NPC_1::
# 374 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 375 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 376 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_1_Text_0
# 377 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_2::
# 381 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 382 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 383 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_2_Text_0
# 384 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_3::
# 388 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 389 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 390 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_3_Text_0
# 391 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_4::
# 395 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 396 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 397 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_4_Text_0
# 398 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


# 66 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_0:
# 66 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 66 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 66 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 66 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 66 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 66 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 68 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_1:
# 68 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 89 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_InterviewQ1_Movement_0:
# 89 "data//maps/RangerInstitute/scripts.pory"
	emote_question_mark
	step_end

# 222 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_0:
# 222 "data//maps/RangerInstitute/scripts.pory"
	face_left
# 222 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 226 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_1:
# 226 "data//maps/RangerInstitute/scripts.pory"
	walk_down
	step_end

# 228 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_2:
# 228 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 256 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_0:
# 256 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 258 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_1:
# 258 "data//maps/RangerInstitute/scripts.pory"
	face_up
	step_end

# 264 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_2:
# 264 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 264 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 264 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 264 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 264 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 264 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 264 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 264 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 264 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 264 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 264 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 264 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 264 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 265 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_3:
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

# 289 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger1_Movement_0:
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 289 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 289 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 301 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_0:
# 301 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_down
	step_end

# 308 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_1:
# 308 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 315 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_2:
# 315 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 315 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 315 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 315 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 319 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_3:
# 319 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 319 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 331 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_4:
# 331 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 331 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 347 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_5:
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 347 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 347 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 348 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_6:
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

RangerInstitute_1F_ApplicationPC_Text_0:
# 31 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} booted up the Application\n"
	.string "PC.$"

RangerInstitute_1F_ApplicationPC_Text_1:
# 35 "data//maps/RangerInstitute/scripts.pory"
	.string "YOU ALREADY HAVE AN APPLICATION IN\n"
	.string "PROGRESS.$"

RangerInstitute_1F_ApplicationPC_Text_2:
# 39 "data//maps/RangerInstitute/scripts.pory"
	.string "WOULD YOU LIKE TO PRINT AN\n"
	.string "APPLICATION FORM?$"

RangerInstitute_1F_ApplicationPC_Text_3:
# 42 "data//maps/RangerInstitute/scripts.pory"
	.string "IT WILL COST 500. PROCEED WITH\n"
	.string "PRINTING?$"

RangerInstitute_1F_ApplicationPC_Text_4:
# 45 "data//maps/RangerInstitute/scripts.pory"
	.string "...\p"
	.string "A peice of paper comes out of the PC!\p"
	.string "PLEASE BRING THIS FORM TO THE\n"
	.string "INTERVIEWER ON DUTY.$"

RangerInstitute_1F_Interviewer_Text_0:
# 64 "data//maps/RangerInstitute/scripts.pory"
	.string "Ah, very good! You have an application\n"
	.string "form. Come then, sit with me.$"

RangerInstitute_1F_Interviewer_Text_1:
# 75 "data//maps/RangerInstitute/scripts.pory"
	.string "I'm the interviewer on duty. We get so\n"
	.string "many applicants!$"

RangerInstitute_1F_InterviewFail_Text_0:
# 82 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry! That's the wrong answer. You\n"
	.string "have failed this interview.\p"
	.string "Please feel free to apply again!\p"
	.string "...\p"
	.string "...sigh, when will we ever get a decent\n"
	.string "candidate?$"

RangerInstitute_1F_InterviewQ1_Text_0:
# 90 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these types is\n"
	.string "super-effective against DEWPIDER?$"

RangerInstitute_1F_InterviewQ1_Text_1:
# 91 "data//maps/RangerInstitute/scripts.pory"
	.string "FAIRY$"

RangerInstitute_1F_InterviewQ1_Text_2:
# 91 "data//maps/RangerInstitute/scripts.pory"
	.string "GRASS$"

RangerInstitute_1F_InterviewQ1_Text_3:
# 91 "data//maps/RangerInstitute/scripts.pory"
	.string "FIRE$"

RangerInstitute_1F_InterviewQ1_Text_4:
# 91 "data//maps/RangerInstitute/scripts.pory"
	.string "ROCK$"

RangerInstitute_1F_InterviewQ1_Text_5:
# 95 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! DEWPIDER, a BUG/WATER type, is\n"
	.string "weak to ROCK-type attacks.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ2_Text_0:
# 105 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these {PKMN} does NOT have a\n"
	.string "normal evolution?$"

RangerInstitute_1F_InterviewQ2_Text_1:
# 106 "data//maps/RangerInstitute/scripts.pory"
	.string "TOXEL$"

RangerInstitute_1F_InterviewQ2_Text_2:
# 106 "data//maps/RangerInstitute/scripts.pory"
	.string "KOFFING$"

RangerInstitute_1F_InterviewQ2_Text_3:
# 106 "data//maps/RangerInstitute/scripts.pory"
	.string "ABSOL$"

RangerInstitute_1F_InterviewQ2_Text_4:
# 106 "data//maps/RangerInstitute/scripts.pory"
	.string "CYNDAQUIL$"

RangerInstitute_1F_InterviewQ2_Text_5:
# 110 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! ABSOL has no normal evolution,\n"
	.string "but it can MEGA EVOLVE.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ3_Text_0:
# 120 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these {PKMN} is GHOST type?$"

RangerInstitute_1F_InterviewQ3_Text_1:
# 121 "data//maps/RangerInstitute/scripts.pory"
	.string "DHELMISE$"

RangerInstitute_1F_InterviewQ3_Text_2:
# 121 "data//maps/RangerInstitute/scripts.pory"
	.string "ZIGZAGOON$"

RangerInstitute_1F_InterviewQ3_Text_3:
# 121 "data//maps/RangerInstitute/scripts.pory"
	.string "DELPHOX$"

RangerInstitute_1F_InterviewQ3_Text_4:
# 121 "data//maps/RangerInstitute/scripts.pory"
	.string "NINETALES$"

RangerInstitute_1F_InterviewQ3_Text_5:
# 125 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! DHELMISE is a GHOST/GRASS\n"
	.string "type {PKMN}, commonly found underwater.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ4_Text_0:
# 135 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: What happens if you use BLACK\n"
	.string "AUGURITE on a SCYTHER?$"

RangerInstitute_1F_InterviewQ4_Text_1:
# 136 "data//maps/RangerInstitute/scripts.pory"
	.string "Full Heal$"

RangerInstitute_1F_InterviewQ4_Text_2:
# 136 "data//maps/RangerInstitute/scripts.pory"
	.string "Evolution$"

RangerInstitute_1F_InterviewQ4_Text_3:
# 136 "data//maps/RangerInstitute/scripts.pory"
	.string "Nothing$"

RangerInstitute_1F_InterviewQ4_Text_4:
# 136 "data//maps/RangerInstitute/scripts.pory"
	.string "Boost BUG power$"

RangerInstitute_1F_InterviewQ4_Text_5:
# 140 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Using BLACK AUGURITE evolves\n"
	.string "SCYTHER into KLEAVOR.\p"
	.string "Onto the last question!$"

RangerInstitute_1F_InterviewQ5_Text_0:
# 150 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: If you see a stranger in need of\n"
	.string "help, what do you do?$"

RangerInstitute_1F_InterviewQ5_Text_1:
# 151 "data//maps/RangerInstitute/scripts.pory"
	.string "Laugh$"

RangerInstitute_1F_InterviewQ5_Text_2:
# 151 "data//maps/RangerInstitute/scripts.pory"
	.string "Help them$"

RangerInstitute_1F_InterviewQ5_Text_3:
# 151 "data//maps/RangerInstitute/scripts.pory"
	.string "Take a video$"

RangerInstitute_1F_InterviewQ5_Text_4:
# 155 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! And with that, this interview\n"
	.string "is over.$"

RangerInstitute_1F_InterviewPass_Text_0:
# 163 "data//maps/RangerInstitute/scripts.pory"
	.string "Congratulations {PLAYER}! You've\n"
	.string "cleared the interview and we are now\l"
	.string "proud to call you a {PKMN} RANGER RECRUIT.\l"
	.string "Welcome to the CORMORIA {PKMN} Ranger\l"
	.string "Institute! Please head upstairs for\l"
	.string "your induction.$"

RangerInstitute_1F_NPC1_Text_0:
# 172 "data//maps/RangerInstitute/scripts.pory"
	.string "Should I become a {PKMN} Ranger? It's\n"
	.string "really hard to get in...I don't know if I\l"
	.string "can do it.$"

RangerInstitute_1F_NPC2_Text_0:
# 179 "data//maps/RangerInstitute/scripts.pory"
	.string "My interview is coming up. I'm nervous -\n"
	.string "I really want to become a {PKMN} Ranger so\l"
	.string "bad! Their {PKMN} are so cool! TAUROS!\l"
	.string "KANGASKHAN!$"

RangerInstitute_1F_NPC3_Text_0:
# 186 "data//maps/RangerInstitute/scripts.pory"
	.string "Not all Rangers are out on the field!\n"
	.string "Managing such a large organisation is\l"
	.string "no easy task, let me tell you.$"

RangerInstitute_1F_BlockerBasement_Text_0:
# 195 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, only {PKMN} Rangers are allowed\n"
	.string "inside. If you'd like to apply, you can\l"
	.string "print an application form using the PC\l"
	.string "by the entrance.$"

RangerInstitute_1F_BlockerUpstairs_Text_0:
# 212 "data//maps/RangerInstitute/scripts.pory"
	.string "You're not a fully-fledged {PKMN} RANGER\n"
	.string "yet - just a RECRUIT! So I'll be keeping\l"
	.string "an eye on you.$"

RangerInstitute_2F_Trigger0_Text_0:
# 260 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Head.$"

RangerInstitute_2F_Trigger1_Text_0:
# 284 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Director.$"

RangerInstitute_2F_EventScript_Welcome_Text_0:
# 303 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE! Meet {PLAYER}, our\n"
	.string "newest RECRUIT.$"

RangerInstitute_2F_EventScript_Welcome_Text_1:
# 306 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Hmm...yes...\p"
	.string "...\p"
	.string "...yes this is -$"

RangerInstitute_2F_EventScript_Welcome_Text_2:
# 310 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE!$"

RangerInstitute_2F_EventScript_Welcome_Text_3:
# 313 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE:...ahh...hmm...$"

RangerInstitute_2F_EventScript_Welcome_Text_4:
# 317 "data//maps/RangerInstitute/scripts.pory"
	.string "DIRECTOR RAVINE!!!$"

RangerInstitute_2F_EventScript_Welcome_Text_5:
# 321 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Yes! Yes! What is it!$"

RangerInstitute_2F_EventScript_Welcome_Text_6:
# 325 "data//maps/RangerInstitute/scripts.pory"
	.string "Sigh...\n"
	.string "Director RAVINE! Meet {PLAYER}, our\l"
	.string "newest RECRUIT.\p"
	.string "...\p"
	.string "Director, you were daydreaming again!$"

RangerInstitute_2F_EventScript_Welcome_Text_7:
# 329 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: No I was most definitely not,\n"
	.string "how dare you? I was -ahem- deep in my\l"
	.string "research.\p"
	.string "...\p"
	.string "RAVINE: Anyway. Yes. Welcome to the\n"
	.string "RANGER INSTITUTE, {PLAYER}!\l"
	.string "Congratulations on clearing the\l"
	.string "interview. I'm so pleased to see our\l"
	.string "family grow. Do you know what we {PKMN}\l"
	.string "Rangers do?$"

RangerInstitute_2F_EventScript_Welcome_Text_8:
# 333 "data//maps/RangerInstitute/scripts.pory"
	.string "Psst...Director, the bike and stuff.$"

RangerInstitute_2F_EventScript_Welcome_Text_9:
# 337 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Ah yes! As part of your welcome\n"
	.string "package, the RANGER INSTITUTE is\l"
	.string "pleased to provide you with these!$"

RangerInstitute_2F_EventScript_Welcome_Text_10:
# 341 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: The RANGER BIKE and RANGER\n"
	.string "CARD - the two emblems of a {PKMN} Ranger\l"
	.string "in CORMORIA! The RANGER BIKE will allow\l"
	.string "you to speedily traverse all of\l"
	.string "CORMORIA, and the RANGER CARD lets\l"
	.string "everyone know you're a proper {PKMN}\l"
	.string "Ranger! You can access the other\l"
	.string "RANGER INSTITUTES with this.$"

RangerInstitute_2F_EventScript_Welcome_Text_11:
# 344 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Now, do you know what we {PKMN}\n"
	.string "Rangers do? No? Follow me.$"

RangerInstitute_2F_EventScript_Welcome_Text_12:
# 349 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: As {PKMN} Rangers, our job is to\n"
	.string "protect nature and maintain harmony\l"
	.string "between people, {PKMN}, and the\l"
	.string "environment. Whether it's rescuing {PKMN}\l"
	.string "in danger, resolving conflicts, or\l"
	.string "stopping threats to the ecosystem,\l"
	.string "we're always out in the field, ensuring\l"
	.string "the wild stays safe and balanced. It's\l"
	.string "challenging work, but knowing we're\l"
	.string "making a difference for both {PKMN} and\l"
	.string "the world around us makes it all\l"
	.string "worthwhile.$"

RangerInstitute_2F_EventScript_Welcome_Text_13:
# 351 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: But none of that for you just\n"
	.string "yet! You have to earn your stripes here.\l"
	.string "As a Ranger Recruit, you'll have to\l"
	.string "complete missions to advance your\l"
	.string "ranking.$"

RangerInstitute_2F_EventScript_Welcome_Text_14:
# 354 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Inside this box behind me are\n"
	.string "some important items that the RANGER\l"
	.string "INSTITUTE at IVY RIVER wants. Your\l"
	.string "first mission will be to deliver this to\l"
	.string "them!$"

RangerInstitute_2F_EventScript_Welcome_Text_15:
# 359 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: If you complete this mission,\n"
	.string "you'll rank up from Recruit to\l"
	.string "Candidate. The RANGER INSTITUTE at IVY\l"
	.string "RIVER is a little hard to find. You'll\l"
	.string "have to surf down from WINTERLILY\l"
	.string "HOLLOW and explore the riverbank. Good\l"
	.string "training for a recruit, eh?$"

RangerInstitute_Ravine_Text_0:
# 369 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: How's my newest Recruit doing?\n"
	.string "Have you delivered the package yet?$"

RangerInstitute_2F_NPC_1_Text_0:
# 376 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE has a bad habit of\n"
	.string "daydreaming at work...$"

RangerInstitute_2F_NPC_2_Text_0:
# 383 "data//maps/RangerInstitute/scripts.pory"
	.string "Hello there, new recruit! Wanna see what\n"
	.string "I'm working on? I'm analysing the\l"
	.string "weather patterns in CORMORIA. I stay\l"
	.string "on the lookout for any unnatural\l"
	.string "changes.$"

RangerInstitute_2F_NPC_3_Text_0:
# 390 "data//maps/RangerInstitute/scripts.pory"
	.string "Gah! I hate being on inventory duty. I\n"
	.string "miss the field!$"

RangerInstitute_2F_NPC_4_Text_0:
# 397 "data//maps/RangerInstitute/scripts.pory"
	.string "How's it going, {PLAYER}?$"
