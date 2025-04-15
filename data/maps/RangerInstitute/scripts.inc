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
# 197 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerUpstairs::
# 201 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 202 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 204 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_2
RangerInstitute_1F_BlockerUpstairs_1:
# 208 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_5
RangerInstitute_1F_BlockerUpstairs_4:
# 212 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_8
RangerInstitute_1F_BlockerUpstairs_7:
# 215 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_BlockerUpstairs_2:
# 205 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_1

RangerInstitute_1F_BlockerUpstairs_5:
# 209 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_4

RangerInstitute_1F_BlockerUpstairs_8:
# 213 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_1
	goto RangerInstitute_1F_BlockerUpstairs_7


RangerInstitute_1F_TriggerUpstairs::
# 220 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_gt RangerInstitute_1F_TriggerUpstairs_2
# 222 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 223 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_0
# 224 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 225 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
# 226 "data//maps/RangerInstitute/scripts.pory"
	release
# 227 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_TriggerUpstairs_Movement_1
# 228 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 229 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 230 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 231 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_TriggerUpstairs_2:
	end


RangerInstitute_2F_Trigger0::
# 255 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger0_2
	end

RangerInstitute_2F_Trigger0_1:
# 274 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger0_2:
# 256 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 257 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_0
# 258 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 259 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 260 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 261 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger0_Text_0
# 262 "data//maps/RangerInstitute/scripts.pory"
	release
# 265 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_2
# 266 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_3
# 267 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 269 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger0_1


RangerInstitute_2F_Trigger1::
# 279 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_2F_Trigger1_2
	end

RangerInstitute_2F_Trigger1_1:
# 297 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_2F_Trigger1_2:
# 280 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 281 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_0
# 282 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 283 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 284 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 285 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger1_Text_0
# 286 "data//maps/RangerInstitute/scripts.pory"
	release
# 289 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_2
# 290 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger1_Movement_0
# 291 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 293 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
	goto RangerInstitute_2F_Trigger1_1


RangerInstitute_2F_EventScript_Welcome::
# 302 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 303 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 304 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_0
# 305 "data//maps/RangerInstitute/scripts.pory"
	release
# 306 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 307 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_1
# 308 "data//maps/RangerInstitute/scripts.pory"
	release
# 309 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 310 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 311 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_2
# 312 "data//maps/RangerInstitute/scripts.pory"
	release
# 313 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 314 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_3
# 315 "data//maps/RangerInstitute/scripts.pory"
	release
# 316 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_2
# 317 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 318 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_4
# 319 "data//maps/RangerInstitute/scripts.pory"
	release
# 320 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_3
# 321 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 322 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_5
# 323 "data//maps/RangerInstitute/scripts.pory"
	release
# 324 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 325 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 326 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_6
# 327 "data//maps/RangerInstitute/scripts.pory"
	release
# 328 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 329 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 330 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_7
# 331 "data//maps/RangerInstitute/scripts.pory"
	release
# 332 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_4
# 333 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 334 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_8
# 335 "data//maps/RangerInstitute/scripts.pory"
	release
# 336 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 337 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 338 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_9
# 339 "data//maps/RangerInstitute/scripts.pory"
	release
# 340 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 341 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_CARD
# 342 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_10
# 343 "data//maps/RangerInstitute/scripts.pory"
	release
# 344 "data//maps/RangerInstitute/scripts.pory"
	delay 32
# 345 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_11
# 346 "data//maps/RangerInstitute/scripts.pory"
	release
# 347 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 348 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_5
# 349 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_EventScript_Welcome_Movement_6
# 350 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_12
# 351 "data//maps/RangerInstitute/scripts.pory"
	release
# 352 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_13
# 353 "data//maps/RangerInstitute/scripts.pory"
	release
# 354 "data//maps/RangerInstitute/scripts.pory"
	delay 24
# 355 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_14
# 356 "data//maps/RangerInstitute/scripts.pory"
	release
# 357 "data//maps/RangerInstitute/scripts.pory"
	removeobject LOCALID_PACKAGE
# 358 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_PACKAGE
# 359 "data//maps/RangerInstitute/scripts.pory"
	startquest QUEST_POKEMON_RANGER
# 360 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_GOT_FIRST_MISSION
# 361 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 3
# 362 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 363 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_15
# 364 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Ravine::
# 369 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 370 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 371 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 3
	goto_if_eq RangerInstitute_Ravine_1
	return

RangerInstitute_Ravine_1:
# 372 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Ravine_Text_0
	return


RangerInstitute_2F_NPC_1::
# 377 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 378 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 379 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_1_Text_0
# 380 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_2::
# 384 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 385 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 386 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_2_Text_0
# 387 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_3::
# 391 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 392 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 393 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_3_Text_0
# 394 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_2F_NPC_4::
# 398 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 399 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 400 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_NPC_4_Text_0
# 401 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Mon_Bayleef::
# 428 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 429 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 430 "data//maps/RangerInstitute/scripts.pory"
	goto_if_set FLAG_RANGER_INSTITUTE_BAYLEEF, RangerInstitute_Mon_Bayleef_2
# 433 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_BAYLEEF, CRY_MODE_NORMAL
# 434 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_1
# 435 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_POTION
# 436 "data//maps/RangerInstitute/scripts.pory"
	setflag FLAG_RANGER_INSTITUTE_BAYLEEF
# 437 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_2
RangerInstitute_Mon_Bayleef_1:
# 439 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_Mon_Bayleef_2:
# 431 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Bayleef_Text_0
	goto RangerInstitute_Mon_Bayleef_1


RangerInstitute_Mon_Palpitoad::
# 443 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 444 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 445 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
# 446 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Palpitoad_Text_0
# 447 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Mon_Frogadier::
# 451 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 452 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 453 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_FROGADIER, CRY_MODE_NORMAL
# 454 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Frogadier_Text_0
# 455 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_Mon_Scyther::
# 459 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 460 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 461 "data//maps/RangerInstitute/scripts.pory"
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
# 462 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_Mon_Scyther_Text_0
# 463 "data//maps/RangerInstitute/scripts.pory"
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

# 223 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_0:
# 223 "data//maps/RangerInstitute/scripts.pory"
	face_left
# 223 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 227 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_1:
# 227 "data//maps/RangerInstitute/scripts.pory"
	walk_down
	step_end

# 229 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_2:
# 229 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 257 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_0:
# 257 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 259 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_1:
# 259 "data//maps/RangerInstitute/scripts.pory"
	face_up
	step_end

# 265 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_2:
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
# 265 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 265 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 266 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_3:
# 266 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 266 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 266 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 266 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 266 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 266 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 266 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 266 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 266 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 266 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 266 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 266 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

# 290 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger1_Movement_0:
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 290 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 290 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 302 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_0:
# 302 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_down
	step_end

# 309 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_1:
# 309 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 316 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_2:
# 316 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 316 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 316 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 316 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 320 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_3:
# 320 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 320 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 332 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_4:
# 332 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 332 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 348 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_5:
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
# 348 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 348 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 349 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_6:
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 349 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 349 "data//maps/RangerInstitute/scripts.pory"
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
	.string "Q: Which of these Pokémon does NOT\n"
	.string "have a normal evolution?$"

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
	.string "Q: Which of these Pokémon is GHOST\n"
	.string "type?$"

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
	.string "type Pokémon, commonly found\l"
	.string "underwater.\p"
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
	.string "proud to call you a Pokémon Ranger\l"
	.string "Recruit. Welcome to the Cormoria\l"
	.string "Pokémon Ranger Institute! Please head\l"
	.string "upstairs for your induction.$"

RangerInstitute_1F_NPC1_Text_0:
# 172 "data//maps/RangerInstitute/scripts.pory"
	.string "Should I become a Pokémon Ranger? It's\n"
	.string "really hard to get in...I don't know if I\l"
	.string "can do it.$"

RangerInstitute_1F_NPC2_Text_0:
# 179 "data//maps/RangerInstitute/scripts.pory"
	.string "My interview is coming up. I'm nervous -\n"
	.string "I really want to become a Pokémon\l"
	.string "Ranger so bad! Their Pokémon are so\l"
	.string "cool! Tauros! Kangaskhan!\p"
	.string "...\p"
	.string "I don't know any others.$"

RangerInstitute_1F_NPC3_Text_0:
# 186 "data//maps/RangerInstitute/scripts.pory"
	.string "Not all Rangers are out on the field!\n"
	.string "Managing such a large organisation is\l"
	.string "no easy task, let me tell you.$"

RangerInstitute_1F_BlockerBasement_Text_0:
# 195 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, this area is closed off for\n"
	.string "repairs.$"

RangerInstitute_1F_BlockerUpstairs_Text_0:
# 205 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, only Pokémon Rangers are allowed\n"
	.string "inside. If you'd like to apply, you can\l"
	.string "print an application form using the PC\l"
	.string "by the entrance.$"

RangerInstitute_1F_BlockerUpstairs_Text_1:
# 213 "data//maps/RangerInstitute/scripts.pory"
	.string "You're not a fully-fledged Pokémon\n"
	.string "Ranger yet - just a Recruit! So I'll be\l"
	.string "keeping an eye on you.$"

RangerInstitute_2F_Trigger0_Text_0:
# 261 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Head.$"

RangerInstitute_2F_Trigger1_Text_0:
# 285 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Director.$"

RangerInstitute_2F_EventScript_Welcome_Text_0:
# 304 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE! Meet {PLAYER}, our\n"
	.string "newest Recruit.$"

RangerInstitute_2F_EventScript_Welcome_Text_1:
# 307 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Hmm...yes...\p"
	.string "...\p"
	.string "...yes this is -$"

RangerInstitute_2F_EventScript_Welcome_Text_2:
# 311 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE!$"

RangerInstitute_2F_EventScript_Welcome_Text_3:
# 314 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE:...ahh...hmm...$"

RangerInstitute_2F_EventScript_Welcome_Text_4:
# 318 "data//maps/RangerInstitute/scripts.pory"
	.string "DIRECTOR RAVINE!!!$"

RangerInstitute_2F_EventScript_Welcome_Text_5:
# 322 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Yes! Yes! What is it!$"

RangerInstitute_2F_EventScript_Welcome_Text_6:
# 326 "data//maps/RangerInstitute/scripts.pory"
	.string "Sigh...\n"
	.string "Director Ravine! Meet {PLAYER}, our\l"
	.string "newest recruit.\p"
	.string "...\p"
	.string "Director, you were daydreaming again!$"

RangerInstitute_2F_EventScript_Welcome_Text_7:
# 330 "data//maps/RangerInstitute/scripts.pory"
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
# 334 "data//maps/RangerInstitute/scripts.pory"
	.string "Psst...Director, the bike and stuff.$"

RangerInstitute_2F_EventScript_Welcome_Text_9:
# 338 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Ah yes! As part of your welcome\n"
	.string "package, the Ranger Institute is\l"
	.string "pleased to provide you with these!$"

RangerInstitute_2F_EventScript_Welcome_Text_10:
# 342 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: The Ranger Bike and Ranger\n"
	.string "Card - the two emblems of a Pokémon\l"
	.string "Ranger in Cormoria! The Ranger Bike will\l"
	.string "allow you to speedily traverse all of\l"
	.string "Cormoria, and the Ranger Card lets\l"
	.string "everyone know you're a proper Pokémon\l"
	.string "Ranger! You can access the other\l"
	.string "Ranger Institutes with this.$"

RangerInstitute_2F_EventScript_Welcome_Text_11:
# 345 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Now, do you know what we\n"
	.string "Pokémon Rangers do? No? Follow me.$"

RangerInstitute_2F_EventScript_Welcome_Text_12:
# 350 "data//maps/RangerInstitute/scripts.pory"
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
# 352 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: But none of that for you just\n"
	.string "yet! You have to earn your stripes here.\l"
	.string "As a Ranger Recruit, you'll have to\l"
	.string "complete missions to advance your\l"
	.string "ranking.$"

RangerInstitute_2F_EventScript_Welcome_Text_14:
# 355 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Now, I have some important\n"
	.string "items that the Ranger Institute at Ivy\l"
	.string "River wants. Your first mission will be\l"
	.string "to deliver this to them!$"

RangerInstitute_2F_EventScript_Welcome_Text_15:
# 363 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: If you complete this mission,\n"
	.string "you'll rank up from Recruit to\l"
	.string "Candidate. The Ranger Institute at Ivy\l"
	.string "River is a little hard to find. You'll\l"
	.string "have to surf down from Winterlily Hollow\l"
	.string "and explore the riverbank. Good\l"
	.string "training for a recruit, eh?$"

RangerInstitute_Ravine_Text_0:
# 372 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: How's my newest Recruit doing?\n"
	.string "Have you delivered the package yet?$"

RangerInstitute_2F_NPC_1_Text_0:
# 379 "data//maps/RangerInstitute/scripts.pory"
	.string "Director Ravine has a bad habit of\n"
	.string "daydreaming at work...$"

RangerInstitute_2F_NPC_2_Text_0:
# 386 "data//maps/RangerInstitute/scripts.pory"
	.string "Hello there, new recruit! Wanna see what\n"
	.string "I'm working on? I'm analysing the\l"
	.string "weather patterns in Cormoria. I stay on\l"
	.string "the lookout for any unnatural changes.$"

RangerInstitute_2F_NPC_3_Text_0:
# 393 "data//maps/RangerInstitute/scripts.pory"
	.string "Gah! I hate being on inventory duty. I\n"
	.string "miss the field!$"

RangerInstitute_2F_NPC_4_Text_0:
# 400 "data//maps/RangerInstitute/scripts.pory"
	.string "How's it going, {PLAYER}?$"

RangerInstitute_Mon_Bayleef_Text_0:
# 431 "data//maps/RangerInstitute/scripts.pory"
	.string "BAYLEEF is singing happily!$"

RangerInstitute_Mon_Bayleef_Text_1:
# 434 "data//maps/RangerInstitute/scripts.pory"
	.string "BAYLEEF is singing happily! It snuggles\n"
	.string "upto you and gives you something...$"

RangerInstitute_Mon_Bayleef_Text_2:
# 437 "data//maps/RangerInstitute/scripts.pory"
	.string "Thanks BAYLEEF!$"

RangerInstitute_Mon_Palpitoad_Text_0:
# 446 "data//maps/RangerInstitute/scripts.pory"
	.string "PALPITOAD grunts and waddles around.\n"
	.string "It seems upset...$"

RangerInstitute_Mon_Frogadier_Text_0:
# 454 "data//maps/RangerInstitute/scripts.pory"
	.string "$"

RangerInstitute_Mon_Scyther_Text_0:
# 462 "data//maps/RangerInstitute/scripts.pory"
	.string "SCYTHER looks as bummed out as its\n"
	.string "trainer!$"
