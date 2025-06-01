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
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_1
# 59 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_2
# 60 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 61 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_3
# 62 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_4
# 63 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 64 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 66 "data//maps/SSElegant/scripts.pory"
	delay 60
# 70 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_4
# 71 "data//maps/SSElegant/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVETSHORE_GYM_LEADER, SSElegant_Raazi_Text_5
# 72 "data//maps/SSElegant/scripts.pory"
	playbgm MUS_RG_GYM, FALSE
# 74 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_6
# 76 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 77 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_5
# 78 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_6
# 79 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_6
# 80 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 81 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 82 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_7
# 85 "data//maps/SSElegant/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 87 "data//maps/SSElegant/scripts.pory"
	speakername NULL
# 88 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_8
# 89 "data//maps/SSElegant/scripts.pory"
	release
# 90 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_BADGE08_GET
# 93 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 94 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_9
# 96 "data//maps/SSElegant/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 97 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 98 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_10
# 99 "data//maps/SSElegant/scripts.pory"
	release
# 101 "data//maps/SSElegant/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 102 "data//maps/SSElegant/scripts.pory"
	playse SE_CONTEST_PLACE
# 104 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_7
# 105 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_7
# 106 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 107 "data//maps/SSElegant/scripts.pory"
	delay 16
# 110 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_11, SSElegant_Raazi_Text_12
# 112 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_8
# 113 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_9
# 114 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 115 "data//maps/SSElegant/scripts.pory"
	delay 16
# 117 "data//maps/SSElegant/scripts.pory"
	fadedefaultbgm
# 118 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_13
# 121 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_10
# 122 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_10
# 123 "data//maps/SSElegant/scripts.pory"
	applymovement 4, SSElegant_Raazi_Movement_11
# 124 "data//maps/SSElegant/scripts.pory"
	applymovement 6, SSElegant_Raazi_Movement_11
# 125 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 127 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_RAAZI
# 128 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_AG
# 129 "data//maps/SSElegant/scripts.pory"
	removeobject 4
# 130 "data//maps/SSElegant/scripts.pory"
	removeobject 5
# 131 "data//maps/SSElegant/scripts.pory"
	removeobject 6
# 132 "data//maps/SSElegant/scripts.pory"
	removeobject 7
# 135 "data//maps/SSElegant/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 1
# 136 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_RAAZI_BEATEN
# 138 "data//maps/SSElegant/scripts.pory"
	releaseall
	end

SSElegant_Raazi_2:
	end


SSElegant_Gab_Breech_TeamUp_Trigger::
# 143 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_GAB_BREECH_TEAMUP, SSElegant_Gab_Breech_TeamUp_Trigger_2
# 145 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_RAAZI_BEATEN, SSElegant_Gab_Breech_TeamUp_Trigger_5
	end

SSElegant_Gab_Breech_TeamUp_Trigger_2:
	end

SSElegant_Gab_Breech_TeamUp_Trigger_5:
# 146 "data//maps/SSElegant/scripts.pory"
	lockall
# 147 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_1
# 148 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( ZOROARK_HISUI )
# 150 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_GAB
# 151 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 153 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 154 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 155 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 157 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_2
# 158 "data//maps/SSElegant/scripts.pory"
	delay 24
# 161 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_4
# 162 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1
# 163 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2
# 164 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 165 "data//maps/SSElegant/scripts.pory"
	delay 16
# 167 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_BREECH
# 168 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_CLEF
# 170 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 171 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3
# 172 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 174 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 175 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 176 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 178 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 179 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 180 "data//maps/SSElegant/scripts.pory"
	delay 16
# 181 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_5
# 183 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6
# 184 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 185 "data//maps/SSElegant/scripts.pory"
	delay 16
# 186 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_6
# 188 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 189 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 190 "data//maps/SSElegant/scripts.pory"
	delay 16
# 191 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_7
# 192 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_8
# 193 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_9
# 194 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_10
# 196 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_11
# 197 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_12
# 199 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7
# 200 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 201 "data//maps/SSElegant/scripts.pory"
	delay 16
# 202 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_13
# 203 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_14
# 204 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Raazi_Movement_8
# 205 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 206 "data//maps/SSElegant/scripts.pory"
	delay 16
# 207 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_15
# 209 "data//maps/SSElegant/scripts.pory"
	playse SE_EXIT
# 211 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEADER_RAAZI
# 212 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 213 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 214 "data//maps/SSElegant/scripts.pory"
	setobjectxy LOCALID_ZORO, 22, 14
# 215 "data//maps/SSElegant/scripts.pory"
	delay 16
# 217 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8
# 218 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 219 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 220 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 221 "data//maps/SSElegant/scripts.pory"
	delay 16
# 223 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_16
# 224 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_17
# 225 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10
# 226 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 227 "data//maps/SSElegant/scripts.pory"
	delay 16
# 228 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_18
# 231 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11
# 232 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12
# 233 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13
# 234 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14
# 235 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 237 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_BREECH
# 238 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_CLEF
# 239 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_GAB
# 240 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 242 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15
# 243 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 244 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 247 "data//maps/SSElegant/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 2
# 248 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_GAB_BREECH_TEAMUP
# 249 "data//maps/SSElegant/scripts.pory"
	clearflag FLAG_HIDE_GAB_BREECH_STORAGE
# 250 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Aggron::
# 285 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_NORMAL
# 286 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Aggron_Text_0, MSGBOX_NPC
	end


SSElegant_Jania::
# 291 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_JANIA, SSElegant_Jania_Text_0, SSElegant_Jania_Text_1
# 292 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Jania_Text_2
# 293 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Inger::
# 298 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_INGER, SSElegant_Inger_Text_0, SSElegant_Inger_Text_1
# 299 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Inger_Text_2
# 300 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Minior::
# 304 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 305 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_Ariana::
# 310 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_ARIANA, SSElegant_Ariana_Text_0, SSElegant_Ariana_Text_1
# 311 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Ariana_Text_2
# 312 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Tauros::
# 317 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 318 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Tauros_Text_0, MSGBOX_NPC
	end


SSElegant_NPC1::
# 324 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC1_Text_0, MSGBOX_NPC
	end


SSElegant_NPC2::
# 329 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC2_Text_0, MSGBOX_NPC
	end


SSElegant_NPC3::
# 334 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC3_Text_0, MSGBOX_NPC
	end


SSElegant_NPC4::
# 339 "data//maps/SSElegant/scripts.pory"
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
	walk_down
# 58 "data//maps/SSElegant/scripts.pory"
	walk_left
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
	walk_right
	step_end

# 61 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_3:
# 61 "data//maps/SSElegant/scripts.pory"
	walk_down
# 61 "data//maps/SSElegant/scripts.pory"
	walk_right
# 61 "data//maps/SSElegant/scripts.pory"
	walk_right
# 61 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 62 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_4:
# 62 "data//maps/SSElegant/scripts.pory"
	walk_right
# 62 "data//maps/SSElegant/scripts.pory"
	walk_right
# 62 "data//maps/SSElegant/scripts.pory"
	walk_down
# 62 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 77 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_5:
# 77 "data//maps/SSElegant/scripts.pory"
	walk_right
# 77 "data//maps/SSElegant/scripts.pory"
	walk_right
	step_end

# 78 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_6:
# 78 "data//maps/SSElegant/scripts.pory"
	walk_left
# 78 "data//maps/SSElegant/scripts.pory"
	walk_left
	step_end

# 104 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_7:
# 104 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
# 104 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 112 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_8:
# 112 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 113 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_9:
# 113 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 121 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_10:
# 121 "data//maps/SSElegant/scripts.pory"
	walk_down
# 121 "data//maps/SSElegant/scripts.pory"
	walk_down
# 121 "data//maps/SSElegant/scripts.pory"
	walk_down
# 121 "data//maps/SSElegant/scripts.pory"
	walk_down
# 121 "data//maps/SSElegant/scripts.pory"
	walk_down
# 121 "data//maps/SSElegant/scripts.pory"
	walk_down
# 121 "data//maps/SSElegant/scripts.pory"
	walk_down
# 121 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 123 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_11:
# 123 "data//maps/SSElegant/scripts.pory"
	walk_right
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

# 153 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0:
# 153 "data//maps/SSElegant/scripts.pory"
	walk_up
# 153 "data//maps/SSElegant/scripts.pory"
	walk_up
# 153 "data//maps/SSElegant/scripts.pory"
	walk_up
# 153 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 162 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1:
# 162 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
# 162 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 163 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2:
# 163 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 171 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3:
# 171 "data//maps/SSElegant/scripts.pory"
	walk_down
# 171 "data//maps/SSElegant/scripts.pory"
	walk_down
# 171 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 174 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4:
# 174 "data//maps/SSElegant/scripts.pory"
	walk_up
# 174 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 178 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5:
# 178 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 183 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6:
# 183 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
	step_end

# 199 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7:
# 199 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
	step_end

# 217 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8:
# 217 "data//maps/SSElegant/scripts.pory"
	jump_in_place_down
# 217 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 218 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9:
# 218 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
# 218 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 225 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10:
# 225 "data//maps/SSElegant/scripts.pory"
	face_up
	step_end

# 231 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11:
# 231 "data//maps/SSElegant/scripts.pory"
	walk_down
# 231 "data//maps/SSElegant/scripts.pory"
	walk_left
# 231 "data//maps/SSElegant/scripts.pory"
	walk_left
# 231 "data//maps/SSElegant/scripts.pory"
	walk_left
# 231 "data//maps/SSElegant/scripts.pory"
	walk_left
# 231 "data//maps/SSElegant/scripts.pory"
	walk_left
# 231 "data//maps/SSElegant/scripts.pory"
	walk_left
# 231 "data//maps/SSElegant/scripts.pory"
	walk_down
# 231 "data//maps/SSElegant/scripts.pory"
	walk_down
# 231 "data//maps/SSElegant/scripts.pory"
	walk_down
# 231 "data//maps/SSElegant/scripts.pory"
	walk_down
# 231 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 232 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12:
# 232 "data//maps/SSElegant/scripts.pory"
	walk_down
# 232 "data//maps/SSElegant/scripts.pory"
	walk_left
# 232 "data//maps/SSElegant/scripts.pory"
	walk_left
# 232 "data//maps/SSElegant/scripts.pory"
	walk_left
# 232 "data//maps/SSElegant/scripts.pory"
	walk_left
# 232 "data//maps/SSElegant/scripts.pory"
	walk_left
# 232 "data//maps/SSElegant/scripts.pory"
	walk_left
# 232 "data//maps/SSElegant/scripts.pory"
	walk_left
# 232 "data//maps/SSElegant/scripts.pory"
	walk_down
# 232 "data//maps/SSElegant/scripts.pory"
	walk_down
# 232 "data//maps/SSElegant/scripts.pory"
	walk_down
# 232 "data//maps/SSElegant/scripts.pory"
	walk_down
# 232 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 233 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13:
# 233 "data//maps/SSElegant/scripts.pory"
	walk_down
# 233 "data//maps/SSElegant/scripts.pory"
	walk_down
# 233 "data//maps/SSElegant/scripts.pory"
	walk_down
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
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14:
# 234 "data//maps/SSElegant/scripts.pory"
	walk_down
# 234 "data//maps/SSElegant/scripts.pory"
	walk_down
# 234 "data//maps/SSElegant/scripts.pory"
	walk_down
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

# 242 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15:
# 242 "data//maps/SSElegant/scripts.pory"
	walk_up
# 242 "data//maps/SSElegant/scripts.pory"
	walk_up
# 242 "data//maps/SSElegant/scripts.pory"
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
	.string "Ah, you're the trainer who challenged me\n"
	.string "at the quarry. My apologies for delaying\l"
	.string "the fight.\p"
	.string "What's your name?\p"
	.string "...\p"
	.string "{PLAYER}?\p"
	.string "Sounds familiar...\p"
	.string "Yes, yes. You must be from the Tenebris\n"
	.string "Lab. I've heard about you.\p"
	.string "Astonishing that they allowed someone\n"
	.string "with no experience to handle such an\l"
	.string "important case. Assistant Professor\l"
	.string "Rue's fault, really.\p"
	.string "But that's all in the past, isn't it?\n"
	.string "You're off the case now and looking to\l"
	.string "get your eight and last badge.$"

SSElegant_Raazi_Text_2:
# 50 "data//maps/SSElegant/scripts.pory"
	.string "Are you ready to battle me?$"

SSElegant_Raazi_Text_3:
# 53 "data//maps/SSElegant/scripts.pory"
	.string "Come, then. It's quiet on the upper deck\n"
	.string "and the sea breeze is pleasant.\p"
	.string "A fine place to battle, wouldn't you\n"
	.string "say?$"

SSElegant_Raazi_Text_4:
# 70 "data//maps/SSElegant/scripts.pory"
	.string "I am Raazi, the Gym Leader of\n"
	.string "Rivetshore City and the strongest\l"
	.string "Leader in all of Cormoria!\p"
	.string "The quarry has forged my heart into\n"
	.string "steel and my fists into granite.\p"
	.string "Can you break through?$"

SSElegant_Raazi_Text_5:
# 71 "data//maps/SSElegant/scripts.pory"
	.string "I can't believe I lost...$"

SSElegant_Raazi_Text_6:
# 74 "data//maps/SSElegant/scripts.pory"
	.string "Spectacular!$"

SSElegant_Raazi_Text_7:
# 82 "data//maps/SSElegant/scripts.pory"
	.string "You'd be of use in the quarry, I can tell\n"
	.string "you.\p"
	.string "For your tenacity and grit, I am pleased\n"
	.string "to award you with the Granite Badge.$"

SSElegant_Raazi_Text_8:
# 88 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER} received the Granite Badge\n"
	.string "from Raazi.$"

SSElegant_Raazi_Text_9:
# 94 "data//maps/SSElegant/scripts.pory"
	.string "The Granite Badge will let you use the\n"
	.string "HM Dive outside of battle. I'd also like\l"
	.string "to give you something we dug up in the\l"
	.string "quarry a while ago.$"

SSElegant_Raazi_Text_10:
# 98 "data//maps/SSElegant/scripts.pory"
	.string "And now you've collected all eight gym\n"
	.string "badges, {PLAYER}!\p"
	.string "The last mountain in your path is the\n"
	.string "Pokémon Championship. They're held\l"
	.string "every year at -$"

SSElegant_Raazi_Text_11:
# 110 "data//maps/SSElegant/scripts.pory"
	.string "S.S. Elegant$"

SSElegant_Raazi_Text_12:
# 110 "data//maps/SSElegant/scripts.pory"
	.string "ATTENTION ALL PASSENGERS.\p"
	.string "THE S.S. ELEGANT WILL NOW BE MAKING A\n"
	.string "BRIEF UNSCHEDULED STOP.\p"
	.string "ALL GYM LEADERS ARE REQUESTED TO MEET\n"
	.string "BY THE EXIT IMMEDIATELY.\p"
	.string "DUE TO SAFETY CONCERNS, PASSENGERS\n"
	.string "ARE NOT PERMITTED TO DEBOARD THE SHIP.$"

SSElegant_Raazi_Text_13:
# 118 "data//maps/SSElegant/scripts.pory"
	.string "You may be aware of where the Gym\n"
	.string "Leaders are going now.\p"
	.string "I must warn you, {PLAYER}.\p"
	.string "You're strong, but you're not equipped\n"
	.string "to deal with what's coming. Try not to\l"
	.string "get in our way. You'll do more harm than\l"
	.string "good.\p"
	.string "Stay on the ship.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_0:
# 147 "data//maps/SSElegant/scripts.pory"
	.string "Gabrielle$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_1:
# 147 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER}!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_2:
# 157 "data//maps/SSElegant/scripts.pory"
	.string "You heard the announcement, right?\n"
	.string "We've reached!\p"
	.string "The gym leaders are getting off, but\n"
	.string "the crew won't let the civilians leave!\p"
	.string "We've got to find a way past them\n"
	.string "somehow...but with just the two of us, I\l"
	.string "really don't know how we can do it...\p"
	.string "...$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_3:
# 161 "data//maps/SSElegant/scripts.pory"
	.string "Breech$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_4:
# 161 "data//maps/SSElegant/scripts.pory"
	.string "We'll help out!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_5:
# 181 "data//maps/SSElegant/scripts.pory"
	.string "It's you! The hiker with the Clefairy\n"
	.string "near Fennilahl Town!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_6:
# 186 "data//maps/SSElegant/scripts.pory"
	.string "You're the Team Somber grunt! You tried\n"
	.string "to take Clefable's everstone!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_7:
# 191 "data//maps/SSElegant/scripts.pory"
	.string "I-I uh...\p"
	.string "...\p"
	.string "Ahem.\p"
	.string "Zoroark and I are sorry for what we did\n"
	.string "to you two back there.\p"
	.string "We really are.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_8:
# 192 "data//maps/SSElegant/scripts.pory"
	.string "Why are you helping {PLAYER}? Are you\n"
	.string "still part of Team Somber?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_9:
# 193 "data//maps/SSElegant/scripts.pory"
	.string "No. I-uh...I got fired.\n"
	.string "For helping {PLAYER} sneak into our\l"
	.string "headquarters.\p"
	.string "And since then, Zoroark and I...we've\n"
	.string "been trying to do better. Trying to be\l"
	.string "more like {PLAYER}.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_10:
# 194 "data//maps/SSElegant/scripts.pory"
	.string "I guess both of us learned something\n"
	.string "from {PLAYER}.\p"
	.string "...\p"
	.string "What you did was really bad.\p"
	.string "But right now, we'd be bad for not\n"
	.string "helping you do a good thing!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_11:
# 196 "data//maps/SSElegant/scripts.pory"
	.string "So...we team up for now?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_12:
# 197 "data//maps/SSElegant/scripts.pory"
	.string "Yeah, we team up for now.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_13:
# 202 "data//maps/SSElegant/scripts.pory"
	.string "So what's the plan?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_14:
# 203 "data//maps/SSElegant/scripts.pory"
	.string "This is the plan!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_15:
# 207 "data//maps/SSElegant/scripts.pory"
	.string "Go on, Zoroark!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_16:
# 223 "data//maps/SSElegant/scripts.pory"
	.string "Zoroark and I will go down to the\n"
	.string "storage hold and distract the crew\l"
	.string "there!\p"
	.string "After that, you two try and find a way\n"
	.string "out through the hold.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_17:
# 224 "data//maps/SSElegant/scripts.pory"
	.string "Okay, we'll do what we can.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_18:
# 228 "data//maps/SSElegant/scripts.pory"
	.string "Got it, {PLAYER}?\n"
	.string "When you're ready, meet us at the\l"
	.string "storage hold. Make sure you have\l"
	.string "everything you need!$"

SSElegant_Aggron_Text_0:
# 286 "data//maps/SSElegant/scripts.pory"
	.string "Aggron glares at you.$"

SSElegant_Jania_Text_0:
# 291 "data//maps/SSElegant/scripts.pory"
	.string "What? A leader can't have any hobbies?$"

SSElegant_Jania_Text_1:
# 291 "data//maps/SSElegant/scripts.pory"
	.string "Back to drawing, Smeargle!$"

SSElegant_Jania_Text_2:
# 292 "data//maps/SSElegant/scripts.pory"
	.string "I don't get much free time, but when I\n"
	.string "do, I enjoy painting.$"

SSElegant_Inger_Text_0:
# 298 "data//maps/SSElegant/scripts.pory"
	.string "Alright, c'mon Ariana! This time I won't\n"
	.string "lose to you!\p"
	.string "Hey, {PLAYER}! I didn't know you were\n"
	.string "on the cruise.$"

SSElegant_Inger_Text_1:
# 298 "data//maps/SSElegant/scripts.pory"
	.string "This reminds of my first loss!$"

SSElegant_Inger_Text_2:
# 299 "data//maps/SSElegant/scripts.pory"
	.string "We're training to take down Team\n"
	.string "Somber! Yaaah!$"

SSElegant_Minior_Text_0:
# 305 "data//maps/SSElegant/scripts.pory"
	.string "Minior is glaring at Tauros...\n"
	.string "but it falters and cracks a smile!\p"
	.string "They must be good friends.$"

SSElegant_Ariana_Text_0:
# 310 "data//maps/SSElegant/scripts.pory"
	.string "Hey, since {PLAYER} is here...how\n"
	.string "about a double battle?$"

SSElegant_Ariana_Text_1:
# 310 "data//maps/SSElegant/scripts.pory"
	.string "Tough as ever!$"

SSElegant_Ariana_Text_2:
# 311 "data//maps/SSElegant/scripts.pory"
	.string "We heard you were off the case. Don't\n"
	.string "worry - we'll finish what you started!$"

SSElegant_Tauros_Text_0:
# 318 "data//maps/SSElegant/scripts.pory"
	.string "Tauros is huffing at Minior...\n"
	.string "and then flashes a grin!\p"
	.string "A wholesome rivalry.$"

SSElegant_NPC1_Text_0:
# 324 "data//maps/SSElegant/scripts.pory"
	.string "There's nothing like being out on the\n"
	.string "ocean, I tell you!$"

SSElegant_NPC2_Text_0:
# 329 "data//maps/SSElegant/scripts.pory"
	.string "These Gym Leaders are so intimidating!\n"
	.string "This was supposed to be a luxury cruise.$"

SSElegant_NPC3_Text_0:
# 334 "data//maps/SSElegant/scripts.pory"
	.string "Why did all the Gym Leaders board at the\n"
	.string "last minute?\p"
	.string "I'm somewhat of a natural detective\n"
	.string "myself...I think they're conspiring to\l"
	.string "take over Cormoria!$"

SSElegant_NPC4_Text_0:
# 339 "data//maps/SSElegant/scripts.pory"
	.string "The S.S. Elegant stops at Victory Cape.\n"
	.string "That's where this year's Pokemon\l"
	.string "Championships will be!$"
