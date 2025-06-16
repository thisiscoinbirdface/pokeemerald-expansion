# 1 "data//maps/SSElegant/scripts.pory"

# 2 "data//maps/SSElegant/scripts.pory"
    .set LOCALID_RAAZI, 1
# 3 "data//maps/SSElegant/scripts.pory"
    .set LOCALID_AG, 2
# 4 "data//maps/SSElegant/scripts.pory"
    .set LOCALID_GAB, 14
# 5 "data//maps/SSElegant/scripts.pory"
    .set LOCALID_ZORO, 15
# 6 "data//maps/SSElegant/scripts.pory"
    .set LOCALID_BREECH, 16
# 7 "data//maps/SSElegant/scripts.pory"
    .set LOCALID_CLEF, 17

SSElegant_MapScripts::
# 11 "data//maps/SSElegant/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SSElegant_OnTransition
	.byte 0


SSElegant_OnTransition::
# 17 "data//maps/SSElegant/scripts.pory"
	setrespawn HEAL_LOCATION_SSELEGANT
	end


SSElegant_SailorBlocker::
# 23 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_SailorBlocker_Text_0, MSGBOX_NPC
	end


SSElegant_Trigger_MonFromDown::
# 43 "data//maps/SSElegant/scripts.pory"
	setvar VAR_TEMP_4, 0
	end


SSElegant_Trigger_MonFromLeft::
# 47 "data//maps/SSElegant/scripts.pory"
	setvar VAR_TEMP_4, 1
	end


SSElegant_Trigger_MonFromRight::
# 51 "data//maps/SSElegant/scripts.pory"
	setvar VAR_TEMP_4, 2
	end


SSElegant_Raazi::
# 58 "data//maps/SSElegant/scripts.pory"
	lockall
# 59 "data//maps/SSElegant/scripts.pory"
	faceplayer
# 61 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_1
# 63 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_2, MSGBOX_YESNO
# 64 "data//maps/SSElegant/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SSElegant_Raazi_2
# 66 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_3
# 67 "data//maps/SSElegant/scripts.pory"
	fadenewbgm MUS_RG_GYM
# 71 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 72 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Raazi_Movement_0
# 75 "data//maps/SSElegant/scripts.pory"
	compare VAR_TEMP_4, 0
	goto_if_eq SSElegant_Raazi_5
SSElegant_Raazi_4:
# 78 "data//maps/SSElegant/scripts.pory"
	compare VAR_TEMP_4, 1
	goto_if_eq SSElegant_Raazi_8
SSElegant_Raazi_7:
# 81 "data//maps/SSElegant/scripts.pory"
	compare VAR_TEMP_4, 2
	goto_if_eq SSElegant_Raazi_11
SSElegant_Raazi_10:
# 86 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_4
# 87 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_5
# 88 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 89 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_6
# 90 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_7
# 91 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 92 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 94 "data//maps/SSElegant/scripts.pory"
	delay 60
# 97 "data//maps/SSElegant/scripts.pory"
	fadenewbgm MUS_RG_GYM
# 98 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_4
# 99 "data//maps/SSElegant/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVETSHORE_GYM_LEADER, SSElegant_Raazi_Text_5
# 100 "data//maps/SSElegant/scripts.pory"
	playbgm MUS_RG_GYM, FALSE
# 102 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_6
# 104 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 105 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SSElegant_Raazi_Movement_8
# 106 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_8
# 107 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_9
# 108 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_9
# 109 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 110 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 111 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_7
# 113 "data//maps/SSElegant/scripts.pory"
	speakername NULL
# 114 "data//maps/SSElegant/scripts.pory"
	message SSElegant_Raazi_Text_8
# 116 "data//maps/SSElegant/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 118 "data//maps/SSElegant/scripts.pory"
	release
# 119 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_BADGE08_GET
# 122 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 123 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_9
# 125 "data//maps/SSElegant/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 126 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 127 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_10
# 128 "data//maps/SSElegant/scripts.pory"
	release
# 130 "data//maps/SSElegant/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 131 "data//maps/SSElegant/scripts.pory"
	playse SE_DING_DONG
# 132 "data//maps/SSElegant/scripts.pory"
	waitse
# 134 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_10
# 135 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_10
# 136 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 137 "data//maps/SSElegant/scripts.pory"
	delay 16
# 140 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_11, SSElegant_Raazi_Text_12
# 142 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_11
# 143 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_12
# 144 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 145 "data//maps/SSElegant/scripts.pory"
	delay 16
# 147 "data//maps/SSElegant/scripts.pory"
	fadedefaultbgm
# 148 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_13
# 151 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_13
# 152 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_13
# 153 "data//maps/SSElegant/scripts.pory"
	applymovement 4, SSElegant_Raazi_Movement_14
# 154 "data//maps/SSElegant/scripts.pory"
	applymovement 6, SSElegant_Raazi_Movement_14
# 155 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 157 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_RAAZI
# 158 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_AG
# 159 "data//maps/SSElegant/scripts.pory"
	removeobject 4
# 160 "data//maps/SSElegant/scripts.pory"
	removeobject 5
# 161 "data//maps/SSElegant/scripts.pory"
	removeobject 6
# 162 "data//maps/SSElegant/scripts.pory"
	removeobject 7
# 165 "data//maps/SSElegant/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 1
# 166 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_RAAZI_BEATEN
# 168 "data//maps/SSElegant/scripts.pory"
	releaseall
	end

SSElegant_Raazi_2:
# 64 "data//maps/SSElegant/scripts.pory"
	releaseall
	end

SSElegant_Raazi_5:
# 76 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SSElegant_Raazi_Movement_1
	goto SSElegant_Raazi_4

SSElegant_Raazi_8:
# 79 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SSElegant_Raazi_Movement_2
	goto SSElegant_Raazi_7

SSElegant_Raazi_11:
# 82 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SSElegant_Raazi_Movement_3
	goto SSElegant_Raazi_10


SSElegant_Gab_Breech_TeamUp_Trigger::
# 173 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_GAB_BREECH_TEAMUP, SSElegant_Gab_Breech_TeamUp_Trigger_2
# 175 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_RAAZI_BEATEN, SSElegant_Gab_Breech_TeamUp_Trigger_5
	end

SSElegant_Gab_Breech_TeamUp_Trigger_2:
	end

SSElegant_Gab_Breech_TeamUp_Trigger_5:
# 176 "data//maps/SSElegant/scripts.pory"
	lockall
# 177 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_1
# 178 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( ZOROARK_HISUI )
# 180 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_GAB
# 181 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 183 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 184 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 185 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 187 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_2
# 188 "data//maps/SSElegant/scripts.pory"
	delay 24
# 191 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_4
# 192 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1
# 193 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2
# 194 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 195 "data//maps/SSElegant/scripts.pory"
	delay 16
# 197 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_BREECH
# 198 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_CLEF
# 200 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 201 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3
# 202 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 204 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 205 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 206 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 208 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 209 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 210 "data//maps/SSElegant/scripts.pory"
	delay 16
# 211 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_5
# 213 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6
# 214 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 215 "data//maps/SSElegant/scripts.pory"
	delay 16
# 216 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_6
# 218 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 219 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 220 "data//maps/SSElegant/scripts.pory"
	delay 16
# 221 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_7
# 222 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_8
# 223 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_9
# 224 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_10
# 226 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_11
# 227 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_12
# 229 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7
# 230 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 231 "data//maps/SSElegant/scripts.pory"
	delay 16
# 232 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_13
# 233 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_14
# 234 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Raazi_Movement_11
# 235 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 236 "data//maps/SSElegant/scripts.pory"
	delay 16
# 237 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_15
# 239 "data//maps/SSElegant/scripts.pory"
	playse SE_PIKE_CURTAIN_CLOSE
# 241 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEADER_RAAZI
# 242 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 243 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 244 "data//maps/SSElegant/scripts.pory"
	setobjectxy LOCALID_ZORO, 22, 14
# 245 "data//maps/SSElegant/scripts.pory"
	delay 16
# 247 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8
# 248 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 249 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 250 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 251 "data//maps/SSElegant/scripts.pory"
	delay 16
# 252 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_16
# 254 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_17
# 255 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_18
# 256 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10
# 257 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 258 "data//maps/SSElegant/scripts.pory"
	delay 16
# 259 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_19
# 262 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11
# 263 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12
# 264 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13
# 265 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14
# 266 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 268 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_BREECH
# 269 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_CLEF
# 270 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_GAB
# 271 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 273 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15
# 274 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 275 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 278 "data//maps/SSElegant/scripts.pory"
	completesubquest QUEST_STOP_TEAM_SOMBER, SUB_QUEST_3
# 279 "data//maps/SSElegant/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 2
# 280 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_GAB_BREECH_TEAMUP
# 281 "data//maps/SSElegant/scripts.pory"
	clearflag FLAG_HIDE_GAB_BREECH_STORAGE
# 282 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Aggron::
# 317 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_NORMAL
# 318 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Aggron_Text_0, MSGBOX_NPC
	end


SSElegant_Jania::
# 323 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_JANIA, SSElegant_Jania_Text_0, SSElegant_Jania_Text_1
# 324 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Jania_Text_2
# 325 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Inger::
# 330 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_INGER, SSElegant_Inger_Text_0, SSElegant_Inger_Text_1
# 331 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Inger_Text_2
# 332 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Minior::
# 336 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 337 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_Ariana::
# 342 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_ARIANA, SSElegant_Ariana_Text_0, SSElegant_Ariana_Text_1
# 343 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Ariana_Text_2
# 344 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Tauros::
# 349 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 350 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Tauros_Text_0, MSGBOX_NPC
	end


SSElegant_NPC1::
# 356 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC1_Text_0, MSGBOX_NPC
	end


SSElegant_NPC2::
# 361 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC2_Text_0, MSGBOX_NPC
	end


SSElegant_NPC3::
# 366 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC3_Text_0, MSGBOX_NPC
	end


SSElegant_NPC4::
# 371 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC4_Text_0, MSGBOX_NPC
	end


# 72 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_0:
# 72 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 76 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_1:
# 76 "data//maps/SSElegant/scripts.pory"
	walk_left
# 76 "data//maps/SSElegant/scripts.pory"
	walk_up
# 76 "data//maps/SSElegant/scripts.pory"
	walk_left
# 76 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 79 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_2:
# 79 "data//maps/SSElegant/scripts.pory"
	walk_left
# 79 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 82 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_3:
# 82 "data//maps/SSElegant/scripts.pory"
	walk_left
# 82 "data//maps/SSElegant/scripts.pory"
	walk_left
# 82 "data//maps/SSElegant/scripts.pory"
	walk_left
# 82 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 86 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_4:
# 86 "data//maps/SSElegant/scripts.pory"
	walk_down
# 86 "data//maps/SSElegant/scripts.pory"
	walk_left
# 86 "data//maps/SSElegant/scripts.pory"
	walk_left
# 86 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 87 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_5:
# 87 "data//maps/SSElegant/scripts.pory"
	walk_down
# 87 "data//maps/SSElegant/scripts.pory"
	walk_right
	step_end

# 89 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_6:
# 89 "data//maps/SSElegant/scripts.pory"
	walk_down
# 89 "data//maps/SSElegant/scripts.pory"
	walk_right
# 89 "data//maps/SSElegant/scripts.pory"
	walk_right
# 89 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 90 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_7:
# 90 "data//maps/SSElegant/scripts.pory"
	walk_right
# 90 "data//maps/SSElegant/scripts.pory"
	walk_right
# 90 "data//maps/SSElegant/scripts.pory"
	walk_down
# 90 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 105 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_8:
# 105 "data//maps/SSElegant/scripts.pory"
	walk_right
# 105 "data//maps/SSElegant/scripts.pory"
	walk_right
	step_end

# 107 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_9:
# 107 "data//maps/SSElegant/scripts.pory"
	walk_left
# 107 "data//maps/SSElegant/scripts.pory"
	walk_left
	step_end

# 134 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_10:
# 134 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
# 134 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 142 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_11:
# 142 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 143 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_12:
# 143 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 151 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_13:
# 151 "data//maps/SSElegant/scripts.pory"
	walk_down
# 151 "data//maps/SSElegant/scripts.pory"
	walk_down
# 151 "data//maps/SSElegant/scripts.pory"
	walk_down
# 151 "data//maps/SSElegant/scripts.pory"
	walk_down
# 151 "data//maps/SSElegant/scripts.pory"
	walk_down
# 151 "data//maps/SSElegant/scripts.pory"
	walk_down
# 151 "data//maps/SSElegant/scripts.pory"
	walk_down
# 151 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 153 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_14:
# 153 "data//maps/SSElegant/scripts.pory"
	walk_right
# 153 "data//maps/SSElegant/scripts.pory"
	walk_down
# 153 "data//maps/SSElegant/scripts.pory"
	walk_down
# 153 "data//maps/SSElegant/scripts.pory"
	walk_down
# 153 "data//maps/SSElegant/scripts.pory"
	walk_down
# 153 "data//maps/SSElegant/scripts.pory"
	walk_down
# 153 "data//maps/SSElegant/scripts.pory"
	walk_down
# 153 "data//maps/SSElegant/scripts.pory"
	walk_down
# 153 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 183 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0:
# 183 "data//maps/SSElegant/scripts.pory"
	walk_up
# 183 "data//maps/SSElegant/scripts.pory"
	walk_up
# 183 "data//maps/SSElegant/scripts.pory"
	walk_up
# 183 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 192 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1:
# 192 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
# 192 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 193 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2:
# 193 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 201 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3:
# 201 "data//maps/SSElegant/scripts.pory"
	walk_down
# 201 "data//maps/SSElegant/scripts.pory"
	walk_down
# 201 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 204 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4:
# 204 "data//maps/SSElegant/scripts.pory"
	walk_up
# 204 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 208 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5:
# 208 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 213 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6:
# 213 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
	step_end

# 229 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7:
# 229 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
	step_end

# 247 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8:
# 247 "data//maps/SSElegant/scripts.pory"
	jump_in_place_down
# 247 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 248 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9:
# 248 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
# 248 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 256 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10:
# 256 "data//maps/SSElegant/scripts.pory"
	face_up
	step_end

# 262 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11:
# 262 "data//maps/SSElegant/scripts.pory"
	walk_down
# 262 "data//maps/SSElegant/scripts.pory"
	walk_left
# 262 "data//maps/SSElegant/scripts.pory"
	walk_left
# 262 "data//maps/SSElegant/scripts.pory"
	walk_left
# 262 "data//maps/SSElegant/scripts.pory"
	walk_left
# 262 "data//maps/SSElegant/scripts.pory"
	walk_left
# 262 "data//maps/SSElegant/scripts.pory"
	walk_left
# 262 "data//maps/SSElegant/scripts.pory"
	walk_down
# 262 "data//maps/SSElegant/scripts.pory"
	walk_down
# 262 "data//maps/SSElegant/scripts.pory"
	walk_down
# 262 "data//maps/SSElegant/scripts.pory"
	walk_down
# 262 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 263 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12:
# 263 "data//maps/SSElegant/scripts.pory"
	walk_down
# 263 "data//maps/SSElegant/scripts.pory"
	walk_left
# 263 "data//maps/SSElegant/scripts.pory"
	walk_left
# 263 "data//maps/SSElegant/scripts.pory"
	walk_left
# 263 "data//maps/SSElegant/scripts.pory"
	walk_left
# 263 "data//maps/SSElegant/scripts.pory"
	walk_left
# 263 "data//maps/SSElegant/scripts.pory"
	walk_left
# 263 "data//maps/SSElegant/scripts.pory"
	walk_left
# 263 "data//maps/SSElegant/scripts.pory"
	walk_down
# 263 "data//maps/SSElegant/scripts.pory"
	walk_down
# 263 "data//maps/SSElegant/scripts.pory"
	walk_down
# 263 "data//maps/SSElegant/scripts.pory"
	walk_down
# 263 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 264 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13:
# 264 "data//maps/SSElegant/scripts.pory"
	walk_down
# 264 "data//maps/SSElegant/scripts.pory"
	walk_down
# 264 "data//maps/SSElegant/scripts.pory"
	walk_down
# 264 "data//maps/SSElegant/scripts.pory"
	walk_down
# 264 "data//maps/SSElegant/scripts.pory"
	walk_left
# 264 "data//maps/SSElegant/scripts.pory"
	walk_left
# 264 "data//maps/SSElegant/scripts.pory"
	walk_left
# 264 "data//maps/SSElegant/scripts.pory"
	walk_left
# 264 "data//maps/SSElegant/scripts.pory"
	walk_left
# 264 "data//maps/SSElegant/scripts.pory"
	walk_left
# 264 "data//maps/SSElegant/scripts.pory"
	walk_down
# 264 "data//maps/SSElegant/scripts.pory"
	walk_down
# 264 "data//maps/SSElegant/scripts.pory"
	walk_down
# 264 "data//maps/SSElegant/scripts.pory"
	walk_down
# 264 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 265 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14:
# 265 "data//maps/SSElegant/scripts.pory"
	walk_down
# 265 "data//maps/SSElegant/scripts.pory"
	walk_down
# 265 "data//maps/SSElegant/scripts.pory"
	walk_down
# 265 "data//maps/SSElegant/scripts.pory"
	walk_down
# 265 "data//maps/SSElegant/scripts.pory"
	walk_left
# 265 "data//maps/SSElegant/scripts.pory"
	walk_left
# 265 "data//maps/SSElegant/scripts.pory"
	walk_left
# 265 "data//maps/SSElegant/scripts.pory"
	walk_left
# 265 "data//maps/SSElegant/scripts.pory"
	walk_left
# 265 "data//maps/SSElegant/scripts.pory"
	walk_left
# 265 "data//maps/SSElegant/scripts.pory"
	walk_left
# 265 "data//maps/SSElegant/scripts.pory"
	walk_down
# 265 "data//maps/SSElegant/scripts.pory"
	walk_down
# 265 "data//maps/SSElegant/scripts.pory"
	walk_down
# 265 "data//maps/SSElegant/scripts.pory"
	walk_down
# 265 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 273 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15:
# 273 "data//maps/SSElegant/scripts.pory"
	walk_up
# 273 "data//maps/SSElegant/scripts.pory"
	walk_up
# 273 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

SSElegant_SailorBlocker_Text_0:
# 23 "data//maps/SSElegant/scripts.pory"
	.string "You can't get off now - are you crazy?\n"
	.string "We're in the middle of the ocean!$"

SSElegant_Raazi_Text_0:
# 61 "data//maps/SSElegant/scripts.pory"
	.string "Raazi$"

SSElegant_Raazi_Text_1:
# 61 "data//maps/SSElegant/scripts.pory"
	.string "Can I help you?\p"
	.string "...\p"
	.string "Ah, {PLAYER}. You challenged me back\n"
	.string "at the quarry.\p"
	.string "My apologies for delaying the fight.\p"
	.string "Your name sounds familiar...\p"
	.string "Yes, you must be from the Tenebris Lab.\n"
	.string "I've heard about you.\p"
	.string "Astonishing that they allowed someone\n"
	.string "with no experience to handle such an\l"
	.string "important case. Assistant Professor\l"
	.string "Rue's fault, really.\p"
	.string "But that's all in the past, isn't it?\n"
	.string "You're off the case now and looking to\l"
	.string "get your eighth and last badge...$"

SSElegant_Raazi_Text_2:
# 63 "data//maps/SSElegant/scripts.pory"
	.string "Are you ready to battle me?$"

SSElegant_Raazi_Text_3:
# 66 "data//maps/SSElegant/scripts.pory"
	.string "Come, then. It's quiet on the upper deck\n"
	.string "and the sea breeze is pleasant.\p"
	.string "A fine place to battle, isn't it?$"

SSElegant_Raazi_Text_4:
# 98 "data//maps/SSElegant/scripts.pory"
	.string "I am Raazi, the Gym Leader of\n"
	.string "Rivetshore City and the strongest\l"
	.string "Leader in all of Cormoria!\p"
	.string "The quarry has forged my heart into\n"
	.string "steel and my fists into granite.\p"
	.string "I am the final barrier between you\n"
	.string "and the Pokémon Championship!\p"
	.string "Can you break through?$"

SSElegant_Raazi_Text_5:
# 99 "data//maps/SSElegant/scripts.pory"
	.string "I can't believe I lost...$"

SSElegant_Raazi_Text_6:
# 102 "data//maps/SSElegant/scripts.pory"
	.string "Spectacular!$"

SSElegant_Raazi_Text_7:
# 111 "data//maps/SSElegant/scripts.pory"
	.string "Someone like you would be of use in the\n"
	.string "quarry, I can tell you.\p"
	.string "For your tenacity and grit, I am pleased\n"
	.string "to award you with the Granite Badge.$"

SSElegant_Raazi_Text_8:
# 114 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER} received the Granite Badge\n"
	.string "from Raazi.$"

SSElegant_Raazi_Text_9:
# 123 "data//maps/SSElegant/scripts.pory"
	.string "The Granite Badge will let you use any\n"
	.string "HM you have outside of battle.\p"
	.string "I'd also like to give you something we\n"
	.string "dug up in the quarry a while ago.$"

SSElegant_Raazi_Text_10:
# 127 "data//maps/SSElegant/scripts.pory"
	.string "And now you've collected all eight gym\n"
	.string "badges, {PLAYER}!\p"
	.string "The last mountain in your path is the\n"
	.string "Pokémon Championship. They're held\l"
	.string "every year at -$"

SSElegant_Raazi_Text_11:
# 140 "data//maps/SSElegant/scripts.pory"
	.string "S.S. Elegant$"

SSElegant_Raazi_Text_12:
# 140 "data//maps/SSElegant/scripts.pory"
	.string "ATTENTION ALL PASSENGERS.\p"
	.string "THE S.S. ELEGANT WILL NOW BE MAKING A\n"
	.string "BRIEF UNSCHEDULED STOP.\p"
	.string "ALL GYM LEADERS ARE REQUESTED TO MEET\n"
	.string "BY THE EXIT IMMEDIATELY.\p"
	.string "DUE TO SAFETY CONCERNS, PASSENGERS\n"
	.string "ARE NOT PERMITTED TO DEBOARD THE SHIP.$"

SSElegant_Raazi_Text_13:
# 148 "data//maps/SSElegant/scripts.pory"
	.string "You may be aware of where the Gym\n"
	.string "Leaders are going now.\p"
	.string "I must warn you, {PLAYER}.\p"
	.string "You're strong, but you're not equipped\n"
	.string "to deal with what's about to come.\l"
	.string "Try not to get in our way - you'll do\l"
	.string "more harm than good.\p"
	.string "Stay on the ship.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_0:
# 177 "data//maps/SSElegant/scripts.pory"
	.string "Gabrielle$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_1:
# 177 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER}!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_2:
# 187 "data//maps/SSElegant/scripts.pory"
	.string "You heard the announcement, right?\n"
	.string "We've reached!\p"
	.string "The gym leaders are getting off, but\n"
	.string "the crew won't let the civilians leave!\p"
	.string "We've got to find a way past them\n"
	.string "somehow...but with just the two of us,\l"
	.string "I don't know how we can do it...\p"
	.string "...$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_3:
# 191 "data//maps/SSElegant/scripts.pory"
	.string "Breech$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_4:
# 191 "data//maps/SSElegant/scripts.pory"
	.string "We'll help out!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_5:
# 211 "data//maps/SSElegant/scripts.pory"
	.string "It's you! The hiker with the Clefairy\n"
	.string "near Fennilahl Town!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_6:
# 216 "data//maps/SSElegant/scripts.pory"
	.string "You're the Team Somber grunt! You tried\n"
	.string "to take Clefable's everstone!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_7:
# 221 "data//maps/SSElegant/scripts.pory"
	.string "I-I uh...\p"
	.string "...\p"
	.string "Ahem.\p"
	.string "Zoroark and I are sorry for what we did\n"
	.string "to you two back there.\p"
	.string "We really are.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_8:
# 222 "data//maps/SSElegant/scripts.pory"
	.string "Why are you helping {PLAYER} now?\n"
	.string "Are you still part of Team Somber?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_9:
# 223 "data//maps/SSElegant/scripts.pory"
	.string "No. I-uh...I got fired. For helping\n"
	.string "{PLAYER} sneak into our\l"
	.string "headquarters.\l"
	.string "And since then, Zoroark and I...we've\l"
	.string "been trying to do better.\p"
	.string "Trying to be more like {PLAYER}.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_10:
# 224 "data//maps/SSElegant/scripts.pory"
	.string "I guess both of us learned something\n"
	.string "from {PLAYER}.\p"
	.string "...\p"
	.string "What you did was really bad.\p"
	.string "But right now, we'd be bad for not\n"
	.string "helping you do a good thing!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_11:
# 226 "data//maps/SSElegant/scripts.pory"
	.string "So...we team up for now?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_12:
# 227 "data//maps/SSElegant/scripts.pory"
	.string "We team up for now.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_13:
# 232 "data//maps/SSElegant/scripts.pory"
	.string "So what's the plan?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_14:
# 233 "data//maps/SSElegant/scripts.pory"
	.string "This is the plan!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_15:
# 237 "data//maps/SSElegant/scripts.pory"
	.string "Go on, Zoroark!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_16:
# 252 "data//maps/SSElegant/scripts.pory"
	.string "W-what! Zoroark transformed into\n"
	.string "Raazi!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_17:
# 254 "data//maps/SSElegant/scripts.pory"
	.string "Zoroark and I will go down to the\n"
	.string "storage hold and distract the crew!\p"
	.string "After that, you two try and find a way\n"
	.string "out through the hold.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_18:
# 255 "data//maps/SSElegant/scripts.pory"
	.string "Okay, we'll do what we can.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_19:
# 259 "data//maps/SSElegant/scripts.pory"
	.string "Got it, {PLAYER}?\p"
	.string "When you're ready, meet us at the\n"
	.string "storage hold. Make sure you have\l"
	.string "everything you need!$"

SSElegant_Aggron_Text_0:
# 318 "data//maps/SSElegant/scripts.pory"
	.string "Aggron glares at you.$"

SSElegant_Jania_Text_0:
# 323 "data//maps/SSElegant/scripts.pory"
	.string "What? A gym leader can't have hobbies?$"

SSElegant_Jania_Text_1:
# 323 "data//maps/SSElegant/scripts.pory"
	.string "Back to drawing, Smeargle!$"

SSElegant_Jania_Text_2:
# 324 "data//maps/SSElegant/scripts.pory"
	.string "I don't get much free time, but when I\n"
	.string "do, I enjoy painting.$"

SSElegant_Inger_Text_0:
# 330 "data//maps/SSElegant/scripts.pory"
	.string "Alright, c'mon Ariana! This time I won't\n"
	.string "lose to you!\p"
	.string "Hey, {PLAYER}! I didn't know you were\n"
	.string "on the cruise.$"

SSElegant_Inger_Text_1:
# 330 "data//maps/SSElegant/scripts.pory"
	.string "This reminds of my first loss!$"

SSElegant_Inger_Text_2:
# 331 "data//maps/SSElegant/scripts.pory"
	.string "We're training to take down Team\n"
	.string "Somber! Yaaah!$"

SSElegant_Minior_Text_0:
# 337 "data//maps/SSElegant/scripts.pory"
	.string "Minior is glaring at Tauros...\n"
	.string "but it falters and cracks a smile!\p"
	.string "They must be good friends.$"

SSElegant_Ariana_Text_0:
# 342 "data//maps/SSElegant/scripts.pory"
	.string "Hey, since {PLAYER} is here...how\n"
	.string "about a double battle?$"

SSElegant_Ariana_Text_1:
# 342 "data//maps/SSElegant/scripts.pory"
	.string "Tough as ever!$"

SSElegant_Ariana_Text_2:
# 343 "data//maps/SSElegant/scripts.pory"
	.string "We heard you were off the case. Don't\n"
	.string "worry - we'll finish what you started!$"

SSElegant_Tauros_Text_0:
# 350 "data//maps/SSElegant/scripts.pory"
	.string "Tauros is huffing at Minior...\n"
	.string "and then flashes a grin!\p"
	.string "A wholesome rivalry.$"

SSElegant_NPC1_Text_0:
# 356 "data//maps/SSElegant/scripts.pory"
	.string "There's nothing like being out on the\n"
	.string "ocean, I tell you!$"

SSElegant_NPC2_Text_0:
# 361 "data//maps/SSElegant/scripts.pory"
	.string "These Gym Leaders are so intimidating!\n"
	.string "This was supposed to be a luxury cruise.$"

SSElegant_NPC3_Text_0:
# 366 "data//maps/SSElegant/scripts.pory"
	.string "Why did all the Gym Leaders board at the\n"
	.string "last minute?\p"
	.string "I'm somewhat of a natural detective\n"
	.string "myself...I think they're conspiring to\l"
	.string "take over Cormoria!$"

SSElegant_NPC4_Text_0:
# 371 "data//maps/SSElegant/scripts.pory"
	.string "The S.S. Elegant stops at Victory Cape.\n"
	.string "That's where this year's Pokémon\l"
	.string "Championships will be!$"
