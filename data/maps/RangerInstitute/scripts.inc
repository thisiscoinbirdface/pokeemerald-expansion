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
# 30 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_0
# 31 "data//maps/RangerInstitute/scripts.pory"
	release
# 33 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_2
RangerInstitute_1F_ApplicationPC_1:
# 37 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_ApplicationPC_5
RangerInstitute_1F_ApplicationPC_4:
# 54 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_ApplicationPC_2:
# 34 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_1
	goto RangerInstitute_1F_ApplicationPC_1

RangerInstitute_1F_ApplicationPC_5:
# 38 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_2, MSGBOX_YESNO
# 39 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_7
	goto RangerInstitute_1F_ApplicationPC_4

RangerInstitute_1F_ApplicationPC_7:
# 40 "data//maps/RangerInstitute/scripts.pory"
	showmoneybox 0, 0
# 41 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_3, MSGBOX_YESNO
# 42 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_ApplicationPC_10
	goto RangerInstitute_1F_ApplicationPC_4

RangerInstitute_1F_ApplicationPC_10:
# 43 "data//maps/RangerInstitute/scripts.pory"
	hidemoneybox
# 44 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_ApplicationPC_Text_4
# 45 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 1
	goto RangerInstitute_1F_ApplicationPC_4


RangerInstitute_1F_Interviewer::
# 59 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 60 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 62 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_Interviewer_2
# 74 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_1
RangerInstitute_1F_Interviewer_1:
# 77 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	return

RangerInstitute_1F_Interviewer_2:
# 63 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_Interviewer_Text_0
# 64 "data//maps/RangerInstitute/scripts.pory"
	release
# 65 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_Interviewer_Movement_0
# 66 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 67 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_Interviewer_Movement_1
# 68 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 69 "data//maps/RangerInstitute/scripts.pory"
	delay 30
# 71 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ1
	goto RangerInstitute_1F_Interviewer_1


RangerInstitute_1F_InterviewFail::
# 81 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewFail_Text_0
# 82 "data//maps/RangerInstitute/scripts.pory"
	release
# 83 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 0
	return


RangerInstitute_1F_InterviewQ1::
# 88 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 89 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_0
# 90 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ1_Text_1, RangerInstitute_1F_InterviewQ1_Text_2, RangerInstitute_1F_InterviewQ1_Text_3, RangerInstitute_1F_InterviewQ1_Text_4
# 93 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RangerInstitute_1F_InterviewQ1_1
# 97 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ1_1:
# 94 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ1_Text_5
# 95 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ2
	return


RangerInstitute_1F_InterviewQ2::
# 103 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 104 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ2_Text_0
# 105 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ2_Text_1, RangerInstitute_1F_InterviewQ2_Text_2, RangerInstitute_1F_InterviewQ2_Text_3, RangerInstitute_1F_InterviewQ2_Text_4
# 108 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ2_1
# 112 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ2_1:
# 109 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ2_Text_5
# 110 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ3
	return


RangerInstitute_1F_InterviewQ3::
# 118 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 119 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ3_Text_0
# 120 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ3_Text_1, RangerInstitute_1F_InterviewQ3_Text_2, RangerInstitute_1F_InterviewQ3_Text_3, RangerInstitute_1F_InterviewQ3_Text_4
# 123 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RangerInstitute_1F_InterviewQ3_1
# 127 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ3_1:
# 124 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ3_Text_5
# 125 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ4
	return


RangerInstitute_1F_InterviewQ4::
# 133 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 134 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ4_Text_0
# 135 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_1, RangerInstitute_1F_InterviewQ4_Text_2, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ4_Text_4
# 138 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RangerInstitute_1F_InterviewQ4_1
# 142 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ4_1:
# 139 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ4_Text_5
# 140 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewQ5
	return


RangerInstitute_1F_InterviewQ5::
# 148 "data//maps/RangerInstitute/scripts.pory"
	applymovement 4, RangerInstitute_1F_InterviewQ1_Movement_0
# 149 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_0
# 150 "data//maps/RangerInstitute/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RangerInstitute_1F_InterviewQ4_Text_3, RangerInstitute_1F_InterviewQ5_Text_1, RangerInstitute_1F_InterviewQ5_Text_2, RangerInstitute_1F_InterviewQ5_Text_3
# 153 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RangerInstitute_1F_InterviewQ5_1
# 157 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewFail
	return

RangerInstitute_1F_InterviewQ5_1:
# 154 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewQ5_Text_4
# 155 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_1F_InterviewPass
	return


RangerInstitute_1F_InterviewPass::
# 162 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_InterviewPass_Text_0
# 163 "data//maps/RangerInstitute/scripts.pory"
	releaseall
# 164 "data//maps/RangerInstitute/scripts.pory"
	setvar VAR_RANGER_INSTITUTE, 2
	return


RangerInstitute_1F_NPC1::
# 169 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 170 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 171 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC1_Text_0
# 172 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC2::
# 176 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 177 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 178 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC2_Text_0
# 179 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_NPC3::
# 183 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 184 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 185 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_NPC3_Text_0
# 186 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerBasement::
# 192 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 193 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 194 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
# 195 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


RangerInstitute_1F_BlockerUpstairs::
# 199 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 200 "data//maps/RangerInstitute/scripts.pory"
	faceplayer
# 202 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 0
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_2
RangerInstitute_1F_BlockerUpstairs_1:
# 206 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_5
RangerInstitute_1F_BlockerUpstairs_4:
# 210 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 2
	goto_if_eq RangerInstitute_1F_BlockerUpstairs_8
RangerInstitute_1F_BlockerUpstairs_7:
# 213 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_BlockerUpstairs_2:
# 203 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_1

RangerInstitute_1F_BlockerUpstairs_5:
# 207 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_4

RangerInstitute_1F_BlockerUpstairs_8:
# 211 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerUpstairs_Text_0
	goto RangerInstitute_1F_BlockerUpstairs_7


RangerInstitute_1F_TriggerUpstairs::
# 218 "data//maps/RangerInstitute/scripts.pory"
	compare VAR_RANGER_INSTITUTE, 1
	goto_if_gt RangerInstitute_1F_TriggerUpstairs_2
# 220 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 221 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_0
# 222 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 223 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_1F_BlockerBasement_Text_0
# 224 "data//maps/RangerInstitute/scripts.pory"
	release
# 225 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_1F_TriggerUpstairs_Movement_1
# 226 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 227 "data//maps/RangerInstitute/scripts.pory"
	applymovement 6, RangerInstitute_1F_TriggerUpstairs_Movement_2
# 228 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 229 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end

RangerInstitute_1F_TriggerUpstairs_2:
	end


RangerInstitute_2F_Trigger0::
# 253 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 254 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_0
# 255 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 256 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 257 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 258 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger0_Text_0
# 259 "data//maps/RangerInstitute/scripts.pory"
	release
# 262 "data//maps/RangerInstitute/scripts.pory"
	applymovement 12, RangerInstitute_2F_Trigger0_Movement_2
# 263 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_3
# 264 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 266 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
# 268 "data//maps/RangerInstitute/scripts.pory"
	release
	return


RangerInstitute_2F_Trigger1::
# 272 "data//maps/RangerInstitute/scripts.pory"
	lockall
# 273 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_0
# 274 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 275 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger0_Movement_1
# 276 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 277 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_Trigger1_Text_0
# 278 "data//maps/RangerInstitute/scripts.pory"
	release
# 281 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_Trigger0_Movement_2
# 282 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_Trigger1_Movement_0
# 283 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 285 "data//maps/RangerInstitute/scripts.pory"
	goto RangerInstitute_2F_EventScript_Welcome
# 287 "data//maps/RangerInstitute/scripts.pory"
	release
	return


RangerInstitute_2F_EventScript_Welcome::
# 291 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 292 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 293 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_0
# 294 "data//maps/RangerInstitute/scripts.pory"
	release
# 295 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 296 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_1
# 297 "data//maps/RangerInstitute/scripts.pory"
	release
# 298 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_1
# 299 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 300 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_2
# 301 "data//maps/RangerInstitute/scripts.pory"
	release
# 302 "data//maps/RangerInstitute/scripts.pory"
	delay 60
# 303 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_3
# 304 "data//maps/RangerInstitute/scripts.pory"
	release
# 305 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_2
# 306 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 307 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_4
# 308 "data//maps/RangerInstitute/scripts.pory"
	release
# 309 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_3
# 310 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 311 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_5
# 312 "data//maps/RangerInstitute/scripts.pory"
	release
# 313 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_0
# 314 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 315 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_6
# 316 "data//maps/RangerInstitute/scripts.pory"
	release
# 317 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 318 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 319 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_7
# 320 "data//maps/RangerInstitute/scripts.pory"
	release
# 321 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RANGER1, RangerInstitute_2F_EventScript_Welcome_Movement_4
# 322 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 323 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_8
# 324 "data//maps/RangerInstitute/scripts.pory"
	release
# 325 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_Trigger0_Movement_0
# 326 "data//maps/RangerInstitute/scripts.pory"
	waitmovement 0
# 327 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_9
# 328 "data//maps/RangerInstitute/scripts.pory"
	release
# 329 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 330 "data//maps/RangerInstitute/scripts.pory"
	giveitem ITEM_RANGER_CARD
# 331 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_10
# 332 "data//maps/RangerInstitute/scripts.pory"
	release
# 333 "data//maps/RangerInstitute/scripts.pory"
	delay 32
# 334 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_11
# 335 "data//maps/RangerInstitute/scripts.pory"
	release
# 336 "data//maps/RangerInstitute/scripts.pory"
	delay 16
# 337 "data//maps/RangerInstitute/scripts.pory"
	applymovement LOCALID_RAVINE, RangerInstitute_2F_EventScript_Welcome_Movement_5
# 338 "data//maps/RangerInstitute/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RangerInstitute_2F_EventScript_Welcome_Movement_6
# 339 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_12
# 340 "data//maps/RangerInstitute/scripts.pory"
	release
# 341 "data//maps/RangerInstitute/scripts.pory"
	msgbox RangerInstitute_2F_EventScript_Welcome_Text_13
# 342 "data//maps/RangerInstitute/scripts.pory"
	release
# 344 "data//maps/RangerInstitute/scripts.pory"
	releaseall
	end


# 65 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_0:
# 65 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 65 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 65 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 65 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 65 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 65 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 67 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_Interviewer_Movement_1:
# 67 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 88 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_InterviewQ1_Movement_0:
# 88 "data//maps/RangerInstitute/scripts.pory"
	emote_question_mark
	step_end

# 221 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_0:
# 221 "data//maps/RangerInstitute/scripts.pory"
	face_left
# 221 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 225 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_1:
# 225 "data//maps/RangerInstitute/scripts.pory"
	walk_down
	step_end

# 227 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_1F_TriggerUpstairs_Movement_2:
# 227 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 254 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_0:
# 254 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
	step_end

# 256 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_1:
# 256 "data//maps/RangerInstitute/scripts.pory"
	face_up
	step_end

# 262 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_2:
# 262 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 262 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 262 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 262 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 262 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 262 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 262 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 262 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 262 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 262 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 262 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 262 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 262 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 263 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger0_Movement_3:
# 263 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 263 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 263 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 263 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 263 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 263 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 263 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 263 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 263 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 263 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 263 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 263 "data//maps/RangerInstitute/scripts.pory"
	walk_left
	step_end

# 282 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_Trigger1_Movement_0:
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_up
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 282 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 282 "data//maps/RangerInstitute/scripts.pory"
	face_left
	step_end

# 291 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_0:
# 291 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_down
	step_end

# 298 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_1:
# 298 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 305 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_2:
# 305 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 305 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 305 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
# 305 "data//maps/RangerInstitute/scripts.pory"
	jump_in_place_left
	step_end

# 309 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_3:
# 309 "data//maps/RangerInstitute/scripts.pory"
	emote_exclamation_mark
# 309 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 321 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_4:
# 321 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 321 "data//maps/RangerInstitute/scripts.pory"
	face_down
	step_end

# 337 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_5:
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 337 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 337 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

# 338 "data//maps/RangerInstitute/scripts.pory"
RangerInstitute_2F_EventScript_Welcome_Movement_6:
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_right
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_down
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 338 "data//maps/RangerInstitute/scripts.pory"
	walk_left
# 338 "data//maps/RangerInstitute/scripts.pory"
	face_right
	step_end

RangerInstitute_1F_ApplicationPC_Text_0:
# 30 "data//maps/RangerInstitute/scripts.pory"
	.string "{PLAYER} booted up the Application\n"
	.string "PC.$"

RangerInstitute_1F_ApplicationPC_Text_1:
# 34 "data//maps/RangerInstitute/scripts.pory"
	.string "YOU ALREADY HAVE AN APPLICATION IN\n"
	.string "PROGRESS.$"

RangerInstitute_1F_ApplicationPC_Text_2:
# 38 "data//maps/RangerInstitute/scripts.pory"
	.string "WOULD YOU LIKE TO PRINT AN\n"
	.string "APPLICATION FORM?$"

RangerInstitute_1F_ApplicationPC_Text_3:
# 41 "data//maps/RangerInstitute/scripts.pory"
	.string "IT WILL COST 500. PROCEED WITH\n"
	.string "PRINTING?$"

RangerInstitute_1F_ApplicationPC_Text_4:
# 44 "data//maps/RangerInstitute/scripts.pory"
	.string "...\p"
	.string "A peice of paper comes out of the PC!\p"
	.string "PLEASE BRING THIS FORM TO THE\n"
	.string "INTERVIEWER ON DUTY.$"

RangerInstitute_1F_Interviewer_Text_0:
# 63 "data//maps/RangerInstitute/scripts.pory"
	.string "Ah, very good! You have an application\n"
	.string "form. Come then, sit with me.$"

RangerInstitute_1F_Interviewer_Text_1:
# 74 "data//maps/RangerInstitute/scripts.pory"
	.string "I'm the interviewer on duty. We get so\n"
	.string "many applicants!$"

RangerInstitute_1F_InterviewFail_Text_0:
# 81 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry! That's the wrong answer. You\n"
	.string "have failed this interview.\p"
	.string "Please feel free to apply again!\p"
	.string "...\p"
	.string "...sigh, when will we ever get a decent\n"
	.string "candidate?$"

RangerInstitute_1F_InterviewQ1_Text_0:
# 89 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these types is\n"
	.string "super-effective against DEWPIDER?$"

RangerInstitute_1F_InterviewQ1_Text_1:
# 90 "data//maps/RangerInstitute/scripts.pory"
	.string "FAIRY$"

RangerInstitute_1F_InterviewQ1_Text_2:
# 90 "data//maps/RangerInstitute/scripts.pory"
	.string "GRASS$"

RangerInstitute_1F_InterviewQ1_Text_3:
# 90 "data//maps/RangerInstitute/scripts.pory"
	.string "FIRE$"

RangerInstitute_1F_InterviewQ1_Text_4:
# 90 "data//maps/RangerInstitute/scripts.pory"
	.string "ROCK$"

RangerInstitute_1F_InterviewQ1_Text_5:
# 94 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! DEWPIDER, a BUG/WATER type, is\n"
	.string "weak to ROCK-type attacks.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ2_Text_0:
# 104 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these {PKMN} does NOT have a\n"
	.string "normal evolution?$"

RangerInstitute_1F_InterviewQ2_Text_1:
# 105 "data//maps/RangerInstitute/scripts.pory"
	.string "TOXEL$"

RangerInstitute_1F_InterviewQ2_Text_2:
# 105 "data//maps/RangerInstitute/scripts.pory"
	.string "KOFFING$"

RangerInstitute_1F_InterviewQ2_Text_3:
# 105 "data//maps/RangerInstitute/scripts.pory"
	.string "ABSOL$"

RangerInstitute_1F_InterviewQ2_Text_4:
# 105 "data//maps/RangerInstitute/scripts.pory"
	.string "CYNDAQUIL$"

RangerInstitute_1F_InterviewQ2_Text_5:
# 109 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! ABSOL has no normal evolution,\n"
	.string "but it can MEGA EVOLVE.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ3_Text_0:
# 119 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: Which of these {PKMN} is GHOST type?$"

RangerInstitute_1F_InterviewQ3_Text_1:
# 120 "data//maps/RangerInstitute/scripts.pory"
	.string "DHELMISE$"

RangerInstitute_1F_InterviewQ3_Text_2:
# 120 "data//maps/RangerInstitute/scripts.pory"
	.string "ZIGZAGOON$"

RangerInstitute_1F_InterviewQ3_Text_3:
# 120 "data//maps/RangerInstitute/scripts.pory"
	.string "DELPHOX$"

RangerInstitute_1F_InterviewQ3_Text_4:
# 120 "data//maps/RangerInstitute/scripts.pory"
	.string "NINETALES$"

RangerInstitute_1F_InterviewQ3_Text_5:
# 124 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! DHELMISE is a GHOST/GRASS\n"
	.string "type {PKMN}, commonly found underwater.\p"
	.string "Onto the next question!$"

RangerInstitute_1F_InterviewQ4_Text_0:
# 134 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: What happens if you use BLACK\n"
	.string "AUGURITE on a SCYTHER?$"

RangerInstitute_1F_InterviewQ4_Text_1:
# 135 "data//maps/RangerInstitute/scripts.pory"
	.string "Full Heal$"

RangerInstitute_1F_InterviewQ4_Text_2:
# 135 "data//maps/RangerInstitute/scripts.pory"
	.string "Evolution$"

RangerInstitute_1F_InterviewQ4_Text_3:
# 135 "data//maps/RangerInstitute/scripts.pory"
	.string "Nothing$"

RangerInstitute_1F_InterviewQ4_Text_4:
# 135 "data//maps/RangerInstitute/scripts.pory"
	.string "Boost BUG power$"

RangerInstitute_1F_InterviewQ4_Text_5:
# 139 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! Using BLACK AUGURITE evolves\n"
	.string "SCYTHER into KLEAVOR.\p"
	.string "Onto the last question!$"

RangerInstitute_1F_InterviewQ5_Text_0:
# 149 "data//maps/RangerInstitute/scripts.pory"
	.string "Q: If you see a stranger in need of\n"
	.string "help, what do you do?$"

RangerInstitute_1F_InterviewQ5_Text_1:
# 150 "data//maps/RangerInstitute/scripts.pory"
	.string "Laugh$"

RangerInstitute_1F_InterviewQ5_Text_2:
# 150 "data//maps/RangerInstitute/scripts.pory"
	.string "Help them$"

RangerInstitute_1F_InterviewQ5_Text_3:
# 150 "data//maps/RangerInstitute/scripts.pory"
	.string "Take a video$"

RangerInstitute_1F_InterviewQ5_Text_4:
# 154 "data//maps/RangerInstitute/scripts.pory"
	.string "Correct! And with that, this interview\n"
	.string "is over.$"

RangerInstitute_1F_InterviewPass_Text_0:
# 162 "data//maps/RangerInstitute/scripts.pory"
	.string "Congratulations {PLAYER}! You've\n"
	.string "cleared the interview and we are now\l"
	.string "proud to call you a {PKMN} RANGER RECRUIT.\l"
	.string "Welcome to the CORMORIA {PKMN} Ranger\l"
	.string "Institute! Please head upstairs for\l"
	.string "your induction.$"

RangerInstitute_1F_NPC1_Text_0:
# 171 "data//maps/RangerInstitute/scripts.pory"
	.string "Should I become a {PKMN} Ranger? It's\n"
	.string "really hard to get in...I don't know if I\l"
	.string "can do it.$"

RangerInstitute_1F_NPC2_Text_0:
# 178 "data//maps/RangerInstitute/scripts.pory"
	.string "My interview is coming up. I'm nervous -\n"
	.string "I really want to become a {PKMN} Ranger so\l"
	.string "bad! Their {PKMN} are so cool! TAUROS!\l"
	.string "KANGASKHAN!$"

RangerInstitute_1F_NPC3_Text_0:
# 185 "data//maps/RangerInstitute/scripts.pory"
	.string "Not all Rangers are out on the field!\n"
	.string "Managing such a large organisation is\l"
	.string "no easy task, let me tell you.$"

RangerInstitute_1F_BlockerBasement_Text_0:
# 194 "data//maps/RangerInstitute/scripts.pory"
	.string "Sorry, only {PKMN} Rangers are allowed\n"
	.string "inside. If you'd like to apply, you can\l"
	.string "print an application form using the PC\l"
	.string "by the entrance.$"

RangerInstitute_1F_BlockerUpstairs_Text_0:
# 211 "data//maps/RangerInstitute/scripts.pory"
	.string "You're not a fully-fledged {PKMN} RANGER\n"
	.string "yet - just a RECRUIT! So I'll be keeping\l"
	.string "an eye on you.$"

RangerInstitute_2F_Trigger0_Text_0:
# 258 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Head.$"

RangerInstitute_2F_Trigger1_Text_0:
# 277 "data//maps/RangerInstitute/scripts.pory"
	.string "A new Ranger Recruit? Welcome to the\n"
	.string "Ranger Institute, recruit! It's been a\l"
	.string "while since someone passed our\l"
	.string "interview. You must be here for your\l"
	.string "induction. Follow me. I'll introduce you\l"
	.string "to RAVINE, the Institute Director.$"

RangerInstitute_2F_EventScript_Welcome_Text_0:
# 293 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE! Meet {PLAYER}, our\n"
	.string "newest RECRUIT.$"

RangerInstitute_2F_EventScript_Welcome_Text_1:
# 296 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Hmm...yes...\p"
	.string "...\p"
	.string "...yes this is -$"

RangerInstitute_2F_EventScript_Welcome_Text_2:
# 300 "data//maps/RangerInstitute/scripts.pory"
	.string "Director RAVINE!$"

RangerInstitute_2F_EventScript_Welcome_Text_3:
# 303 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE:...ahh...hmm...$"

RangerInstitute_2F_EventScript_Welcome_Text_4:
# 307 "data//maps/RangerInstitute/scripts.pory"
	.string "DIRECTOR RAVINE!!!$"

RangerInstitute_2F_EventScript_Welcome_Text_5:
# 311 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Yes! Yes! What is it!$"

RangerInstitute_2F_EventScript_Welcome_Text_6:
# 315 "data//maps/RangerInstitute/scripts.pory"
	.string "Sigh...\n"
	.string "Director RAVINE! Meet {PLAYER}, our\l"
	.string "newest RECRUIT.\p"
	.string "...\p"
	.string "Director, you were daydreaming again!$"

RangerInstitute_2F_EventScript_Welcome_Text_7:
# 319 "data//maps/RangerInstitute/scripts.pory"
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
# 323 "data//maps/RangerInstitute/scripts.pory"
	.string "Psst...Director, the bike and stuff.$"

RangerInstitute_2F_EventScript_Welcome_Text_9:
# 327 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Ah yes! As part of your welcome\n"
	.string "package, the RANGER INSTITUTE is\l"
	.string "pleased to provide you with these!$"

RangerInstitute_2F_EventScript_Welcome_Text_10:
# 331 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: The RANGER BIKE and RANGER\n"
	.string "CARD - the two emblems of a {PKMN} Ranger\l"
	.string "in CORMORIA! The RANGER BIKE will allow\l"
	.string "you to speedily traverse all of\l"
	.string "CORMORIA, and the RANGER CARD lets\l"
	.string "everyone know you're a proper {PKMN}\l"
	.string "Ranger! You can access the other\l"
	.string "RANGER INSTITUTES with this.$"

RangerInstitute_2F_EventScript_Welcome_Text_11:
# 334 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: Now, do you know what we {PKMN}\n"
	.string "Rangers do? No? Follow me.$"

RangerInstitute_2F_EventScript_Welcome_Text_12:
# 339 "data//maps/RangerInstitute/scripts.pory"
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
# 341 "data//maps/RangerInstitute/scripts.pory"
	.string "RAVINE: But none of that for you just\n"
	.string "yet! You have to earn your stripes here.\l"
	.string "As a Ranger Recruit, you'll have to\l"
	.string "complete missions to advance your\l"
	.string "ranking.$"
