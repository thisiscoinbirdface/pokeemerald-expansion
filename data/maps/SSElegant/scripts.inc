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


SSElegant_Raazi::
# 45 "data//maps/SSElegant/scripts.pory"
	lockall
# 46 "data//maps/SSElegant/scripts.pory"
	faceplayer
# 48 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_1
# 50 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_2, MSGBOX_YESNO
# 51 "data//maps/SSElegant/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SSElegant_Raazi_2
# 53 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_3
# 54 "data//maps/SSElegant/scripts.pory"
	fadenewbgm MUS_RG_GYM
# 56 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 57 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Raazi_Movement_0
# 58 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, SSElegant_Raazi_Movement_1
# 59 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_2
# 60 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_3
# 61 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 62 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_4
# 63 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_5
# 64 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 65 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 67 "data//maps/SSElegant/scripts.pory"
	delay 60
# 71 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_4
# 72 "data//maps/SSElegant/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVETSHORE_GYM_LEADER, SSElegant_Raazi_Text_5
# 73 "data//maps/SSElegant/scripts.pory"
	playbgm MUS_RG_GYM, FALSE
# 75 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_6
# 77 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 78 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_6
# 79 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_7
# 80 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_7
# 81 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 82 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 83 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_7
# 86 "data//maps/SSElegant/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 88 "data//maps/SSElegant/scripts.pory"
	speakername NULL
# 89 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_8
# 90 "data//maps/SSElegant/scripts.pory"
	release
# 91 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_BADGE08_GET
# 94 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 95 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_9
# 97 "data//maps/SSElegant/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 98 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 99 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_10
# 100 "data//maps/SSElegant/scripts.pory"
	release
# 102 "data//maps/SSElegant/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 103 "data//maps/SSElegant/scripts.pory"
	playse SE_DING_DONG
# 104 "data//maps/SSElegant/scripts.pory"
	waitse
# 106 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_8
# 107 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_8
# 108 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 109 "data//maps/SSElegant/scripts.pory"
	delay 16
# 112 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_11, SSElegant_Raazi_Text_12
# 114 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_9
# 115 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_10
# 116 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 117 "data//maps/SSElegant/scripts.pory"
	delay 16
# 119 "data//maps/SSElegant/scripts.pory"
	fadedefaultbgm
# 120 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_13
# 123 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_11
# 124 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_11
# 125 "data//maps/SSElegant/scripts.pory"
	applymovement 4, SSElegant_Raazi_Movement_12
# 126 "data//maps/SSElegant/scripts.pory"
	applymovement 6, SSElegant_Raazi_Movement_12
# 127 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 129 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_RAAZI
# 130 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_AG
# 131 "data//maps/SSElegant/scripts.pory"
	removeobject 4
# 132 "data//maps/SSElegant/scripts.pory"
	removeobject 5
# 133 "data//maps/SSElegant/scripts.pory"
	removeobject 6
# 134 "data//maps/SSElegant/scripts.pory"
	removeobject 7
# 137 "data//maps/SSElegant/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 1
# 138 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_RAAZI_BEATEN
# 140 "data//maps/SSElegant/scripts.pory"
	releaseall
	end

SSElegant_Raazi_2:
# 51 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Gab_Breech_TeamUp_Trigger::
# 145 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_GAB_BREECH_TEAMUP, SSElegant_Gab_Breech_TeamUp_Trigger_2
# 147 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_RAAZI_BEATEN, SSElegant_Gab_Breech_TeamUp_Trigger_5
	end

SSElegant_Gab_Breech_TeamUp_Trigger_2:
	end

SSElegant_Gab_Breech_TeamUp_Trigger_5:
# 148 "data//maps/SSElegant/scripts.pory"
	lockall
# 149 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_1
# 150 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( ZOROARK_HISUI )
# 152 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_GAB
# 153 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 155 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 156 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 157 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 159 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_2
# 160 "data//maps/SSElegant/scripts.pory"
	delay 24
# 163 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_4
# 164 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1
# 165 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2
# 166 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 167 "data//maps/SSElegant/scripts.pory"
	delay 16
# 169 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_BREECH
# 170 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_CLEF
# 172 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 173 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3
# 174 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 176 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 177 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 178 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 180 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 181 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 182 "data//maps/SSElegant/scripts.pory"
	delay 16
# 183 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_5
# 185 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6
# 186 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 187 "data//maps/SSElegant/scripts.pory"
	delay 16
# 188 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_6
# 190 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 191 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 192 "data//maps/SSElegant/scripts.pory"
	delay 16
# 193 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_7
# 194 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_8
# 195 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_9
# 196 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_10
# 198 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_11
# 199 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_12
# 201 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7
# 202 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 203 "data//maps/SSElegant/scripts.pory"
	delay 16
# 204 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_13
# 205 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_14
# 206 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Raazi_Movement_9
# 207 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 208 "data//maps/SSElegant/scripts.pory"
	delay 16
# 209 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_15
# 211 "data//maps/SSElegant/scripts.pory"
	playse SE_EXIT
# 213 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEADER_RAAZI
# 214 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 215 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 216 "data//maps/SSElegant/scripts.pory"
	setobjectxy LOCALID_ZORO, 22, 14
# 217 "data//maps/SSElegant/scripts.pory"
	delay 16
# 219 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8
# 220 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 221 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 222 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 223 "data//maps/SSElegant/scripts.pory"
	delay 16
# 225 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_16
# 226 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_17
# 227 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10
# 228 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 229 "data//maps/SSElegant/scripts.pory"
	delay 16
# 230 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_18
# 233 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11
# 234 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12
# 235 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13
# 236 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14
# 237 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 239 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_BREECH
# 240 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_CLEF
# 241 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_GAB
# 242 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 244 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15
# 245 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 246 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 249 "data//maps/SSElegant/scripts.pory"
	completesubquest QUEST_STOP_TEAM_SOMBER, SUB_QUEST_3
# 250 "data//maps/SSElegant/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 2
# 251 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_GAB_BREECH_TEAMUP
# 252 "data//maps/SSElegant/scripts.pory"
	clearflag FLAG_HIDE_GAB_BREECH_STORAGE
# 253 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Aggron::
# 288 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_NORMAL
# 289 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Aggron_Text_0, MSGBOX_NPC
	end


SSElegant_Jania::
# 294 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_JANIA, SSElegant_Jania_Text_0, SSElegant_Jania_Text_1
# 295 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Jania_Text_2
# 296 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Inger::
# 301 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_INGER, SSElegant_Inger_Text_0, SSElegant_Inger_Text_1
# 302 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Inger_Text_2
# 303 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Minior::
# 307 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 308 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_Ariana::
# 313 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_ARIANA, SSElegant_Ariana_Text_0, SSElegant_Ariana_Text_1
# 314 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Ariana_Text_2
# 315 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Tauros::
# 320 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 321 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Tauros_Text_0, MSGBOX_NPC
	end


SSElegant_NPC1::
# 327 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC1_Text_0, MSGBOX_NPC
	end


SSElegant_NPC2::
# 332 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC2_Text_0, MSGBOX_NPC
	end


SSElegant_NPC3::
# 337 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC3_Text_0, MSGBOX_NPC
	end


SSElegant_NPC4::
# 342 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC4_Text_0, MSGBOX_NPC
	end


# 57 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_0:
# 57 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 58 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_1:
# 58 "data//maps/SSElegant/scripts.pory"
	walk_left
# 58 "data//maps/SSElegant/scripts.pory"
	walk_up
# 58 "data//maps/SSElegant/scripts.pory"
	walk_left
# 58 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 59 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_2:
# 59 "data//maps/SSElegant/scripts.pory"
	walk_down
# 59 "data//maps/SSElegant/scripts.pory"
	walk_left
# 59 "data//maps/SSElegant/scripts.pory"
	walk_left
# 59 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 60 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_3:
# 60 "data//maps/SSElegant/scripts.pory"
	walk_down
# 60 "data//maps/SSElegant/scripts.pory"
	walk_right
	step_end

# 62 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_4:
# 62 "data//maps/SSElegant/scripts.pory"
	walk_down
# 62 "data//maps/SSElegant/scripts.pory"
	walk_right
# 62 "data//maps/SSElegant/scripts.pory"
	walk_right
# 62 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 63 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_5:
# 63 "data//maps/SSElegant/scripts.pory"
	walk_right
# 63 "data//maps/SSElegant/scripts.pory"
	walk_right
# 63 "data//maps/SSElegant/scripts.pory"
	walk_down
# 63 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 78 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_6:
# 78 "data//maps/SSElegant/scripts.pory"
	walk_right
# 78 "data//maps/SSElegant/scripts.pory"
	walk_right
	step_end

# 79 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_7:
# 79 "data//maps/SSElegant/scripts.pory"
	walk_left
# 79 "data//maps/SSElegant/scripts.pory"
	walk_left
	step_end

# 106 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_8:
# 106 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
# 106 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 114 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_9:
# 114 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 115 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_10:
# 115 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 123 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_11:
# 123 "data//maps/SSElegant/scripts.pory"
	walk_down
# 123 "data//maps/SSElegant/scripts.pory"
	walk_down
# 123 "data//maps/SSElegant/scripts.pory"
	walk_down
# 123 "data//maps/SSElegant/scripts.pory"
	walk_down
# 123 "data//maps/SSElegant/scripts.pory"
	walk_down
# 123 "data//maps/SSElegant/scripts.pory"
	walk_down
# 123 "data//maps/SSElegant/scripts.pory"
	walk_down
# 123 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 125 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_12:
# 125 "data//maps/SSElegant/scripts.pory"
	walk_right
# 125 "data//maps/SSElegant/scripts.pory"
	walk_down
# 125 "data//maps/SSElegant/scripts.pory"
	walk_down
# 125 "data//maps/SSElegant/scripts.pory"
	walk_down
# 125 "data//maps/SSElegant/scripts.pory"
	walk_down
# 125 "data//maps/SSElegant/scripts.pory"
	walk_down
# 125 "data//maps/SSElegant/scripts.pory"
	walk_down
# 125 "data//maps/SSElegant/scripts.pory"
	walk_down
# 125 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 155 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0:
# 155 "data//maps/SSElegant/scripts.pory"
	walk_up
# 155 "data//maps/SSElegant/scripts.pory"
	walk_up
# 155 "data//maps/SSElegant/scripts.pory"
	walk_up
# 155 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 164 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1:
# 164 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
# 164 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 165 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2:
# 165 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 173 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3:
# 173 "data//maps/SSElegant/scripts.pory"
	walk_down
# 173 "data//maps/SSElegant/scripts.pory"
	walk_down
# 173 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 176 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4:
# 176 "data//maps/SSElegant/scripts.pory"
	walk_up
# 176 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 180 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5:
# 180 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 185 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6:
# 185 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
	step_end

# 201 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7:
# 201 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
	step_end

# 219 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8:
# 219 "data//maps/SSElegant/scripts.pory"
	jump_in_place_down
# 219 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 220 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9:
# 220 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
# 220 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 227 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10:
# 227 "data//maps/SSElegant/scripts.pory"
	face_up
	step_end

# 233 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11:
# 233 "data//maps/SSElegant/scripts.pory"
	walk_down
# 233 "data//maps/SSElegant/scripts.pory"
	walk_left
# 233 "data//maps/SSElegant/scripts.pory"
	walk_left
# 233 "data//maps/SSElegant/scripts.pory"
	walk_left
# 233 "data//maps/SSElegant/scripts.pory"
	walk_left
# 233 "data//maps/SSElegant/scripts.pory"
	walk_left
# 233 "data//maps/SSElegant/scripts.pory"
	walk_left
# 233 "data//maps/SSElegant/scripts.pory"
	walk_down
# 233 "data//maps/SSElegant/scripts.pory"
	walk_down
# 233 "data//maps/SSElegant/scripts.pory"
	walk_down
# 233 "data//maps/SSElegant/scripts.pory"
	walk_down
# 233 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 234 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12:
# 234 "data//maps/SSElegant/scripts.pory"
	walk_down
# 234 "data//maps/SSElegant/scripts.pory"
	walk_left
# 234 "data//maps/SSElegant/scripts.pory"
	walk_left
# 234 "data//maps/SSElegant/scripts.pory"
	walk_left
# 234 "data//maps/SSElegant/scripts.pory"
	walk_left
# 234 "data//maps/SSElegant/scripts.pory"
	walk_left
# 234 "data//maps/SSElegant/scripts.pory"
	walk_left
# 234 "data//maps/SSElegant/scripts.pory"
	walk_left
# 234 "data//maps/SSElegant/scripts.pory"
	walk_down
# 234 "data//maps/SSElegant/scripts.pory"
	walk_down
# 234 "data//maps/SSElegant/scripts.pory"
	walk_down
# 234 "data//maps/SSElegant/scripts.pory"
	walk_down
# 234 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 235 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13:
# 235 "data//maps/SSElegant/scripts.pory"
	walk_down
# 235 "data//maps/SSElegant/scripts.pory"
	walk_down
# 235 "data//maps/SSElegant/scripts.pory"
	walk_down
# 235 "data//maps/SSElegant/scripts.pory"
	walk_down
# 235 "data//maps/SSElegant/scripts.pory"
	walk_left
# 235 "data//maps/SSElegant/scripts.pory"
	walk_left
# 235 "data//maps/SSElegant/scripts.pory"
	walk_left
# 235 "data//maps/SSElegant/scripts.pory"
	walk_left
# 235 "data//maps/SSElegant/scripts.pory"
	walk_left
# 235 "data//maps/SSElegant/scripts.pory"
	walk_left
# 235 "data//maps/SSElegant/scripts.pory"
	walk_down
# 235 "data//maps/SSElegant/scripts.pory"
	walk_down
# 235 "data//maps/SSElegant/scripts.pory"
	walk_down
# 235 "data//maps/SSElegant/scripts.pory"
	walk_down
# 235 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 236 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14:
# 236 "data//maps/SSElegant/scripts.pory"
	walk_down
# 236 "data//maps/SSElegant/scripts.pory"
	walk_down
# 236 "data//maps/SSElegant/scripts.pory"
	walk_down
# 236 "data//maps/SSElegant/scripts.pory"
	walk_down
# 236 "data//maps/SSElegant/scripts.pory"
	walk_left
# 236 "data//maps/SSElegant/scripts.pory"
	walk_left
# 236 "data//maps/SSElegant/scripts.pory"
	walk_left
# 236 "data//maps/SSElegant/scripts.pory"
	walk_left
# 236 "data//maps/SSElegant/scripts.pory"
	walk_left
# 236 "data//maps/SSElegant/scripts.pory"
	walk_left
# 236 "data//maps/SSElegant/scripts.pory"
	walk_left
# 236 "data//maps/SSElegant/scripts.pory"
	walk_down
# 236 "data//maps/SSElegant/scripts.pory"
	walk_down
# 236 "data//maps/SSElegant/scripts.pory"
	walk_down
# 236 "data//maps/SSElegant/scripts.pory"
	walk_down
# 236 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 244 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15:
# 244 "data//maps/SSElegant/scripts.pory"
	walk_up
# 244 "data//maps/SSElegant/scripts.pory"
	walk_up
# 244 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

SSElegant_SailorBlocker_Text_0:
# 23 "data//maps/SSElegant/scripts.pory"
	.string "You can't get off now - are you crazy?\n"
	.string "We're in the middle of the ocean!$"

SSElegant_Raazi_Text_0:
# 48 "data//maps/SSElegant/scripts.pory"
	.string "Raazi$"

SSElegant_Raazi_Text_1:
# 48 "data//maps/SSElegant/scripts.pory"
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
# 50 "data//maps/SSElegant/scripts.pory"
	.string "Are you ready to battle me?$"

SSElegant_Raazi_Text_3:
# 53 "data//maps/SSElegant/scripts.pory"
	.string "Come, then. It's quiet on the upper deck\n"
	.string "and the sea breeze is pleasant.\p"
	.string "A fine place to battle, isn't it?$"

SSElegant_Raazi_Text_4:
# 71 "data//maps/SSElegant/scripts.pory"
	.string "I am Raazi, the Gym Leader of\n"
	.string "Rivetshore City and the strongest\l"
	.string "Leader in all of Cormoria!\p"
	.string "The quarry has forged my heart into\n"
	.string "steel and my fists into granite.\p"
	.string "I am the final barrier between you\n"
	.string "and the Pokémon Championship!\p"
	.string "Can you break through?$"

SSElegant_Raazi_Text_5:
# 72 "data//maps/SSElegant/scripts.pory"
	.string "I can't believe I lost...$"

SSElegant_Raazi_Text_6:
# 75 "data//maps/SSElegant/scripts.pory"
	.string "Spectacular!$"

SSElegant_Raazi_Text_7:
# 83 "data//maps/SSElegant/scripts.pory"
	.string "You'd be of use in the quarry, I can tell\n"
	.string "you.\p"
	.string "For your tenacity and grit, I am pleased\n"
	.string "to award you with the Granite Badge.$"

SSElegant_Raazi_Text_8:
# 89 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER} received the Granite Badge\n"
	.string "from Raazi.$"

SSElegant_Raazi_Text_9:
# 95 "data//maps/SSElegant/scripts.pory"
	.string "The Granite Badge will let you use the\n"
	.string "HM Dive outside of battle. I'd also like\l"
	.string "to give you something we dug up in the\l"
	.string "quarry a while ago.$"

SSElegant_Raazi_Text_10:
# 99 "data//maps/SSElegant/scripts.pory"
	.string "And now you've collected all eight gym\n"
	.string "badges, {PLAYER}!\p"
	.string "The last mountain in your path is the\n"
	.string "Pokémon Championship. They're held\l"
	.string "every year at -$"

SSElegant_Raazi_Text_11:
# 112 "data//maps/SSElegant/scripts.pory"
	.string "S.S. Elegant$"

SSElegant_Raazi_Text_12:
# 112 "data//maps/SSElegant/scripts.pory"
	.string "ATTENTION ALL PASSENGERS.\p"
	.string "THE S.S. ELEGANT WILL NOW BE MAKING A\n"
	.string "BRIEF UNSCHEDULED STOP.\p"
	.string "ALL GYM LEADERS ARE REQUESTED TO MEET\n"
	.string "BY THE EXIT IMMEDIATELY.\p"
	.string "DUE TO SAFETY CONCERNS, PASSENGERS\n"
	.string "ARE NOT PERMITTED TO DEBOARD THE SHIP.$"

SSElegant_Raazi_Text_13:
# 120 "data//maps/SSElegant/scripts.pory"
	.string "You may be aware of where the Gym\n"
	.string "Leaders are going now.\p"
	.string "I must warn you, {PLAYER}.\p"
	.string "You're strong, but you're not equipped\n"
	.string "to deal with what's coming. Try not to\l"
	.string "get in our way. You'll do more harm than\l"
	.string "good.\p"
	.string "Stay on the ship.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_0:
# 149 "data//maps/SSElegant/scripts.pory"
	.string "Gabrielle$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_1:
# 149 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER}!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_2:
# 159 "data//maps/SSElegant/scripts.pory"
	.string "You heard the announcement, right?\n"
	.string "We've reached!\p"
	.string "The gym leaders are getting off, but\n"
	.string "the crew won't let the civilians leave!\p"
	.string "We've got to find a way past them\n"
	.string "somehow...but with just the two of us, I\l"
	.string "really don't know how we can do it...\p"
	.string "...$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_3:
# 163 "data//maps/SSElegant/scripts.pory"
	.string "Breech$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_4:
# 163 "data//maps/SSElegant/scripts.pory"
	.string "We'll help out!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_5:
# 183 "data//maps/SSElegant/scripts.pory"
	.string "It's you! The hiker with the Clefairy\n"
	.string "near Fennilahl Town!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_6:
# 188 "data//maps/SSElegant/scripts.pory"
	.string "You're the Team Somber grunt! You tried\n"
	.string "to take Clefable's everstone!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_7:
# 193 "data//maps/SSElegant/scripts.pory"
	.string "I-I uh...\p"
	.string "...\p"
	.string "Ahem.\p"
	.string "Zoroark and I are sorry for what we did\n"
	.string "to you two back there.\p"
	.string "We really are.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_8:
# 194 "data//maps/SSElegant/scripts.pory"
	.string "Why are you helping {PLAYER}? Are you\n"
	.string "still part of Team Somber?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_9:
# 195 "data//maps/SSElegant/scripts.pory"
	.string "No. I-uh...I got fired.\n"
	.string "For helping {PLAYER} sneak into our\l"
	.string "headquarters.\p"
	.string "And since then, Zoroark and I...we've\n"
	.string "been trying to do better. Trying to be\l"
	.string "more like {PLAYER}.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_10:
# 196 "data//maps/SSElegant/scripts.pory"
	.string "I guess both of us learned something\n"
	.string "from {PLAYER}.\p"
	.string "...\p"
	.string "What you did was really bad.\p"
	.string "But right now, we'd be bad for not\n"
	.string "helping you do a good thing!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_11:
# 198 "data//maps/SSElegant/scripts.pory"
	.string "So...we team up for now?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_12:
# 199 "data//maps/SSElegant/scripts.pory"
	.string "Yeah, we team up for now.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_13:
# 204 "data//maps/SSElegant/scripts.pory"
	.string "So what's the plan?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_14:
# 205 "data//maps/SSElegant/scripts.pory"
	.string "This is the plan!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_15:
# 209 "data//maps/SSElegant/scripts.pory"
	.string "Go on, Zoroark!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_16:
# 225 "data//maps/SSElegant/scripts.pory"
	.string "Zoroark and I will go down to the\n"
	.string "storage hold and distract the crew!\p"
	.string "After that, you two try and find a way\n"
	.string "out through the hold.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_17:
# 226 "data//maps/SSElegant/scripts.pory"
	.string "Okay, we'll do what we can.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_18:
# 230 "data//maps/SSElegant/scripts.pory"
	.string "Got it, {PLAYER}?\n"
	.string "When you're ready, meet us at the\l"
	.string "storage hold. Make sure you have\l"
	.string "everything you need!$"

SSElegant_Aggron_Text_0:
# 289 "data//maps/SSElegant/scripts.pory"
	.string "Aggron glares at you.$"

SSElegant_Jania_Text_0:
# 294 "data//maps/SSElegant/scripts.pory"
	.string "What? A gym leader can't have hobbies?$"

SSElegant_Jania_Text_1:
# 294 "data//maps/SSElegant/scripts.pory"
	.string "Back to drawing, Smeargle!$"

SSElegant_Jania_Text_2:
# 295 "data//maps/SSElegant/scripts.pory"
	.string "I don't get much free time, but when I\n"
	.string "do, I enjoy painting.$"

SSElegant_Inger_Text_0:
# 301 "data//maps/SSElegant/scripts.pory"
	.string "Alright, c'mon Ariana! This time I won't\n"
	.string "lose to you!\p"
	.string "Hey, {PLAYER}! I didn't know you were\n"
	.string "on the cruise.$"

SSElegant_Inger_Text_1:
# 301 "data//maps/SSElegant/scripts.pory"
	.string "This reminds of my first loss!$"

SSElegant_Inger_Text_2:
# 302 "data//maps/SSElegant/scripts.pory"
	.string "We're training to take down Team\n"
	.string "Somber! Yaaah!$"

SSElegant_Minior_Text_0:
# 308 "data//maps/SSElegant/scripts.pory"
	.string "Minior is glaring at Tauros...\n"
	.string "but it falters and cracks a smile!\p"
	.string "They must be good friends.$"

SSElegant_Ariana_Text_0:
# 313 "data//maps/SSElegant/scripts.pory"
	.string "Hey, since {PLAYER} is here...how\n"
	.string "about a double battle?$"

SSElegant_Ariana_Text_1:
# 313 "data//maps/SSElegant/scripts.pory"
	.string "Tough as ever!$"

SSElegant_Ariana_Text_2:
# 314 "data//maps/SSElegant/scripts.pory"
	.string "We heard you were off the case. Don't\n"
	.string "worry - we'll finish what you started!$"

SSElegant_Tauros_Text_0:
# 321 "data//maps/SSElegant/scripts.pory"
	.string "Tauros is huffing at Minior...\n"
	.string "and then flashes a grin!\p"
	.string "A wholesome rivalry.$"

SSElegant_NPC1_Text_0:
# 327 "data//maps/SSElegant/scripts.pory"
	.string "There's nothing like being out on the\n"
	.string "ocean, I tell you!$"

SSElegant_NPC2_Text_0:
# 332 "data//maps/SSElegant/scripts.pory"
	.string "These Gym Leaders are so intimidating!\n"
	.string "This was supposed to be a luxury cruise.$"

SSElegant_NPC3_Text_0:
# 337 "data//maps/SSElegant/scripts.pory"
	.string "Why did all the Gym Leaders board at the\n"
	.string "last minute?\p"
	.string "I'm somewhat of a natural detective\n"
	.string "myself...I think they're conspiring to\l"
	.string "take over Cormoria!$"

SSElegant_NPC4_Text_0:
# 342 "data//maps/SSElegant/scripts.pory"
	.string "The S.S. Elegant stops at Victory Cape.\n"
	.string "That's where this year's Pokémon\l"
	.string "Championships will be!$"
