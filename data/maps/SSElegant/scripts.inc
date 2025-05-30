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
# 49 "data//maps/SSElegant/scripts.pory"
	fadenewbgm MUS_RG_GYM
# 51 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 52 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Raazi_Movement_0
# 53 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_1
# 54 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_2
# 55 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 56 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_3
# 57 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_4
# 58 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 59 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 61 "data//maps/SSElegant/scripts.pory"
	delay 60
# 65 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_2
# 66 "data//maps/SSElegant/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVETSHORE_GYM_LEADER, SSElegant_Raazi_Text_3
# 67 "data//maps/SSElegant/scripts.pory"
	playbgm MUS_RG_GYM, FALSE
# 69 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_4
# 71 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 72 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_5
# 73 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_6
# 74 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_6
# 75 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 76 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 77 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_5
# 80 "data//maps/SSElegant/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 82 "data//maps/SSElegant/scripts.pory"
	speakername NULL
# 83 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_6
# 84 "data//maps/SSElegant/scripts.pory"
	release
# 85 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_BADGE08_GET
# 88 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 89 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_7
# 91 "data//maps/SSElegant/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 92 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 93 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_8
# 94 "data//maps/SSElegant/scripts.pory"
	release
# 96 "data//maps/SSElegant/scripts.pory"
	playbgm MUS_DUMMY, FALSE
# 97 "data//maps/SSElegant/scripts.pory"
	playse SE_CONTEST_PLACE
# 99 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_7
# 100 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_7
# 101 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 102 "data//maps/SSElegant/scripts.pory"
	delay 16
# 105 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_9, SSElegant_Raazi_Text_10
# 107 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_8
# 108 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_9
# 109 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 110 "data//maps/SSElegant/scripts.pory"
	delay 16
# 112 "data//maps/SSElegant/scripts.pory"
	fadedefaultbgm
# 113 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_11
# 116 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_10
# 117 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_10
# 118 "data//maps/SSElegant/scripts.pory"
	applymovement 4, SSElegant_Raazi_Movement_11
# 119 "data//maps/SSElegant/scripts.pory"
	applymovement 6, SSElegant_Raazi_Movement_11
# 120 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 122 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_RAAZI
# 123 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_AG
# 124 "data//maps/SSElegant/scripts.pory"
	removeobject 4
# 125 "data//maps/SSElegant/scripts.pory"
	removeobject 5
# 126 "data//maps/SSElegant/scripts.pory"
	removeobject 6
# 127 "data//maps/SSElegant/scripts.pory"
	removeobject 7
# 130 "data//maps/SSElegant/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 1
# 131 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_RAAZI_BEATEN
# 133 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Gab_Breech_TeamUp_Trigger::
# 138 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_GAB_BREECH_TEAMUP, SSElegant_Gab_Breech_TeamUp_Trigger_2
# 140 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_RAAZI_BEATEN, SSElegant_Gab_Breech_TeamUp_Trigger_5
	end

SSElegant_Gab_Breech_TeamUp_Trigger_2:
	end

SSElegant_Gab_Breech_TeamUp_Trigger_5:
# 141 "data//maps/SSElegant/scripts.pory"
	lockall
# 142 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_1
# 143 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( ZOROARK_HISUI )
# 145 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_GAB
# 146 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 148 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 149 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 150 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 152 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_2
# 153 "data//maps/SSElegant/scripts.pory"
	delay 24
# 156 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_4
# 157 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1
# 158 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2
# 159 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 160 "data//maps/SSElegant/scripts.pory"
	delay 16
# 162 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_BREECH
# 163 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_CLEF
# 165 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 166 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3
# 167 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 169 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 170 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 171 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 173 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 174 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 175 "data//maps/SSElegant/scripts.pory"
	delay 16
# 176 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_5
# 178 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6
# 179 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 180 "data//maps/SSElegant/scripts.pory"
	delay 16
# 181 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_6
# 183 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 184 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 185 "data//maps/SSElegant/scripts.pory"
	delay 16
# 186 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_7
# 187 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_8
# 188 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_9
# 189 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_10
# 191 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_11
# 192 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_12
# 194 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7
# 195 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 196 "data//maps/SSElegant/scripts.pory"
	delay 16
# 197 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_13
# 198 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_14
# 199 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Raazi_Movement_8
# 200 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 201 "data//maps/SSElegant/scripts.pory"
	delay 16
# 202 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_15
# 204 "data//maps/SSElegant/scripts.pory"
	playse SE_EXIT
# 206 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEADER_RAAZI
# 207 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 208 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 209 "data//maps/SSElegant/scripts.pory"
	setobjectxy LOCALID_ZORO, 22, 14
# 210 "data//maps/SSElegant/scripts.pory"
	delay 16
# 212 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8
# 213 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 214 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 215 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 216 "data//maps/SSElegant/scripts.pory"
	delay 16
# 218 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_16
# 219 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_17
# 220 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10
# 221 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 222 "data//maps/SSElegant/scripts.pory"
	delay 16
# 223 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_18
# 226 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11
# 227 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12
# 228 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13
# 229 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14
# 230 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 232 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_BREECH
# 233 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_CLEF
# 234 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_GAB
# 235 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 237 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15
# 238 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 239 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 242 "data//maps/SSElegant/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 2
# 243 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_GAB_BREECH_TEAMUP
# 244 "data//maps/SSElegant/scripts.pory"
	clearflag FLAG_HIDE_GAB_BREECH_STORAGE
# 245 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Aggron::
# 280 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_NORMAL
# 281 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Aggron_Text_0, MSGBOX_NPC
	end


SSElegant_Jania::
# 286 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_JANIA, SSElegant_Jania_Text_0, SSElegant_Jania_Text_1
# 287 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Jania_Text_2
# 288 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Inger::
# 293 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_INGER, SSElegant_Inger_Text_0, SSElegant_Inger_Text_1
# 294 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Inger_Text_2
# 295 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Minior::
# 299 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 300 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_Ariana::
# 305 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_INGER, SSElegant_Ariana_Text_0, SSElegant_Ariana_Text_1
# 306 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Ariana_Text_2
# 307 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Tauros::
# 312 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 313 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Tauros_Text_0, MSGBOX_NPC
	end


SSElegant_NPC1::
# 319 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC1_Text_0, MSGBOX_NPC
	end


SSElegant_NPC2::
# 324 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC2_Text_0, MSGBOX_NPC
	end


SSElegant_NPC3::
# 329 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC3_Text_0, MSGBOX_NPC
	end


SSElegant_NPC4::
# 334 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_NPC4_Text_0, MSGBOX_NPC
	end


# 52 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_0:
# 52 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 53 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_1:
# 53 "data//maps/SSElegant/scripts.pory"
	walk_down
# 53 "data//maps/SSElegant/scripts.pory"
	walk_left
# 53 "data//maps/SSElegant/scripts.pory"
	walk_left
# 53 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 54 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_2:
# 54 "data//maps/SSElegant/scripts.pory"
	walk_down
# 54 "data//maps/SSElegant/scripts.pory"
	walk_right
	step_end

# 56 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_3:
# 56 "data//maps/SSElegant/scripts.pory"
	walk_down
# 56 "data//maps/SSElegant/scripts.pory"
	walk_right
# 56 "data//maps/SSElegant/scripts.pory"
	walk_right
# 56 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 57 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_4:
# 57 "data//maps/SSElegant/scripts.pory"
	walk_right
# 57 "data//maps/SSElegant/scripts.pory"
	walk_right
# 57 "data//maps/SSElegant/scripts.pory"
	walk_down
# 57 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 72 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_5:
# 72 "data//maps/SSElegant/scripts.pory"
	walk_right
# 72 "data//maps/SSElegant/scripts.pory"
	walk_right
	step_end

# 73 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_6:
# 73 "data//maps/SSElegant/scripts.pory"
	walk_left
# 73 "data//maps/SSElegant/scripts.pory"
	walk_left
	step_end

# 99 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_7:
# 99 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
# 99 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 107 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_8:
# 107 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 108 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_9:
# 108 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 116 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_10:
# 116 "data//maps/SSElegant/scripts.pory"
	walk_down
# 116 "data//maps/SSElegant/scripts.pory"
	walk_down
# 116 "data//maps/SSElegant/scripts.pory"
	walk_down
# 116 "data//maps/SSElegant/scripts.pory"
	walk_down
# 116 "data//maps/SSElegant/scripts.pory"
	walk_down
# 116 "data//maps/SSElegant/scripts.pory"
	walk_down
# 116 "data//maps/SSElegant/scripts.pory"
	walk_down
# 116 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 118 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_11:
# 118 "data//maps/SSElegant/scripts.pory"
	walk_right
# 118 "data//maps/SSElegant/scripts.pory"
	walk_down
# 118 "data//maps/SSElegant/scripts.pory"
	walk_down
# 118 "data//maps/SSElegant/scripts.pory"
	walk_down
# 118 "data//maps/SSElegant/scripts.pory"
	walk_down
# 118 "data//maps/SSElegant/scripts.pory"
	walk_down
# 118 "data//maps/SSElegant/scripts.pory"
	walk_down
# 118 "data//maps/SSElegant/scripts.pory"
	walk_down
# 118 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 148 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0:
# 148 "data//maps/SSElegant/scripts.pory"
	walk_up
# 148 "data//maps/SSElegant/scripts.pory"
	walk_up
# 148 "data//maps/SSElegant/scripts.pory"
	walk_up
# 148 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 157 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1:
# 157 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
# 157 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 158 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2:
# 158 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 166 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3:
# 166 "data//maps/SSElegant/scripts.pory"
	walk_down
# 166 "data//maps/SSElegant/scripts.pory"
	walk_down
# 166 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 169 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4:
# 169 "data//maps/SSElegant/scripts.pory"
	walk_up
# 169 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 173 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5:
# 173 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 178 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6:
# 178 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
	step_end

# 194 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7:
# 194 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
	step_end

# 212 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8:
# 212 "data//maps/SSElegant/scripts.pory"
	jump_in_place_down
# 212 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 213 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9:
# 213 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
# 213 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 220 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10:
# 220 "data//maps/SSElegant/scripts.pory"
	face_up
	step_end

# 226 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11:
# 226 "data//maps/SSElegant/scripts.pory"
	walk_down
# 226 "data//maps/SSElegant/scripts.pory"
	walk_left
# 226 "data//maps/SSElegant/scripts.pory"
	walk_left
# 226 "data//maps/SSElegant/scripts.pory"
	walk_left
# 226 "data//maps/SSElegant/scripts.pory"
	walk_left
# 226 "data//maps/SSElegant/scripts.pory"
	walk_left
# 226 "data//maps/SSElegant/scripts.pory"
	walk_left
# 226 "data//maps/SSElegant/scripts.pory"
	walk_down
# 226 "data//maps/SSElegant/scripts.pory"
	walk_down
# 226 "data//maps/SSElegant/scripts.pory"
	walk_down
# 226 "data//maps/SSElegant/scripts.pory"
	walk_down
# 226 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 227 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12:
# 227 "data//maps/SSElegant/scripts.pory"
	walk_down
# 227 "data//maps/SSElegant/scripts.pory"
	walk_left
# 227 "data//maps/SSElegant/scripts.pory"
	walk_left
# 227 "data//maps/SSElegant/scripts.pory"
	walk_left
# 227 "data//maps/SSElegant/scripts.pory"
	walk_left
# 227 "data//maps/SSElegant/scripts.pory"
	walk_left
# 227 "data//maps/SSElegant/scripts.pory"
	walk_left
# 227 "data//maps/SSElegant/scripts.pory"
	walk_left
# 227 "data//maps/SSElegant/scripts.pory"
	walk_down
# 227 "data//maps/SSElegant/scripts.pory"
	walk_down
# 227 "data//maps/SSElegant/scripts.pory"
	walk_down
# 227 "data//maps/SSElegant/scripts.pory"
	walk_down
# 227 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 228 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13:
# 228 "data//maps/SSElegant/scripts.pory"
	walk_down
# 228 "data//maps/SSElegant/scripts.pory"
	walk_down
# 228 "data//maps/SSElegant/scripts.pory"
	walk_down
# 228 "data//maps/SSElegant/scripts.pory"
	walk_down
# 228 "data//maps/SSElegant/scripts.pory"
	walk_left
# 228 "data//maps/SSElegant/scripts.pory"
	walk_left
# 228 "data//maps/SSElegant/scripts.pory"
	walk_left
# 228 "data//maps/SSElegant/scripts.pory"
	walk_left
# 228 "data//maps/SSElegant/scripts.pory"
	walk_left
# 228 "data//maps/SSElegant/scripts.pory"
	walk_left
# 228 "data//maps/SSElegant/scripts.pory"
	walk_down
# 228 "data//maps/SSElegant/scripts.pory"
	walk_down
# 228 "data//maps/SSElegant/scripts.pory"
	walk_down
# 228 "data//maps/SSElegant/scripts.pory"
	walk_down
# 228 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 229 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14:
# 229 "data//maps/SSElegant/scripts.pory"
	walk_down
# 229 "data//maps/SSElegant/scripts.pory"
	walk_down
# 229 "data//maps/SSElegant/scripts.pory"
	walk_down
# 229 "data//maps/SSElegant/scripts.pory"
	walk_down
# 229 "data//maps/SSElegant/scripts.pory"
	walk_left
# 229 "data//maps/SSElegant/scripts.pory"
	walk_left
# 229 "data//maps/SSElegant/scripts.pory"
	walk_left
# 229 "data//maps/SSElegant/scripts.pory"
	walk_left
# 229 "data//maps/SSElegant/scripts.pory"
	walk_left
# 229 "data//maps/SSElegant/scripts.pory"
	walk_left
# 229 "data//maps/SSElegant/scripts.pory"
	walk_left
# 229 "data//maps/SSElegant/scripts.pory"
	walk_down
# 229 "data//maps/SSElegant/scripts.pory"
	walk_down
# 229 "data//maps/SSElegant/scripts.pory"
	walk_down
# 229 "data//maps/SSElegant/scripts.pory"
	walk_down
# 229 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 237 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15:
# 237 "data//maps/SSElegant/scripts.pory"
	walk_up
# 237 "data//maps/SSElegant/scripts.pory"
	walk_up
# 237 "data//maps/SSElegant/scripts.pory"
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
	.string "get your eight and last badge.\p"
	.string "Come, then. It's quiet on the upper deck\n"
	.string "and the sea breeze is pleasant.\p"
	.string "A fine place to battle, wouldn't you\n"
	.string "say?$"

SSElegant_Raazi_Text_2:
# 65 "data//maps/SSElegant/scripts.pory"
	.string "I am Raazi, the Gym Leader of\n"
	.string "Rivetshore City and the strongest\l"
	.string "Leader in all of Cormoria!\p"
	.string "The quarry has forged my heart into\n"
	.string "steel and my fists into granite.\p"
	.string "Can you break through?$"

SSElegant_Raazi_Text_3:
# 66 "data//maps/SSElegant/scripts.pory"
	.string "I can't believe I lost...$"

SSElegant_Raazi_Text_4:
# 69 "data//maps/SSElegant/scripts.pory"
	.string "Spectacular!$"

SSElegant_Raazi_Text_5:
# 77 "data//maps/SSElegant/scripts.pory"
	.string "You'd be of use in the quarry, I can tell\n"
	.string "you.\p"
	.string "For your tenacity and grit, I am pleased\n"
	.string "to award you with the Granite Badge.$"

SSElegant_Raazi_Text_6:
# 83 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER} received the Granite Badge\n"
	.string "from Raazi.$"

SSElegant_Raazi_Text_7:
# 89 "data//maps/SSElegant/scripts.pory"
	.string "The Granite Badge will let you use the\n"
	.string "HM Dive outside of battle. I'd also like\l"
	.string "to give you something we dug up in the\l"
	.string "quarry a while ago.$"

SSElegant_Raazi_Text_8:
# 93 "data//maps/SSElegant/scripts.pory"
	.string "And now you've collected all eight gym\n"
	.string "badges, {PLAYER}!\p"
	.string "The last mountain in your path is the\n"
	.string "Pokémon Championship. They're held\l"
	.string "every year at -$"

SSElegant_Raazi_Text_9:
# 105 "data//maps/SSElegant/scripts.pory"
	.string "S.S. Elegant$"

SSElegant_Raazi_Text_10:
# 105 "data//maps/SSElegant/scripts.pory"
	.string "ATTENTION ALL PASSENGERS.\p"
	.string "THE S.S. ELEGANT WILL NOW BE MAKING A\n"
	.string "BRIEF UNSCHEDULED STOP.\p"
	.string "ALL GYM LEADERS ARE REQUESTED TO MEET\n"
	.string "BY THE EXIT IMMEDIATELY.\p"
	.string "DUE TO SAFETY CONCERNS, PASSENGERS\n"
	.string "ARE NOT PERMITTED TO DEBOARD THE SHIP.$"

SSElegant_Raazi_Text_11:
# 113 "data//maps/SSElegant/scripts.pory"
	.string "You may be aware of where the Gym\n"
	.string "Leaders are going now.\p"
	.string "I must warn you, {PLAYER}.\p"
	.string "You're strong, but you're not equipped\n"
	.string "to deal with what's coming. Try not to\l"
	.string "get in our way. You'll do more harm than\l"
	.string "good.\p"
	.string "Stay on the ship.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_0:
# 142 "data//maps/SSElegant/scripts.pory"
	.string "Gabrielle$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_1:
# 142 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER}!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_2:
# 152 "data//maps/SSElegant/scripts.pory"
	.string "You heard the announcement, right?\n"
	.string "We've reached!\p"
	.string "The gym leaders are getting off, but\n"
	.string "the crew won't let the civilians leave!\p"
	.string "We've got to find a way past them\n"
	.string "somehow...but with just the two of us, I\l"
	.string "really don't know how we can do it...\p"
	.string "...$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_3:
# 156 "data//maps/SSElegant/scripts.pory"
	.string "Breech$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_4:
# 156 "data//maps/SSElegant/scripts.pory"
	.string "We'll help out!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_5:
# 176 "data//maps/SSElegant/scripts.pory"
	.string "It's you! The hiker with the Clefairy\n"
	.string "near Fennilahl Town!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_6:
# 181 "data//maps/SSElegant/scripts.pory"
	.string "You're the Team Somber grunt! You tried\n"
	.string "to take Clefable's everstone!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_7:
# 186 "data//maps/SSElegant/scripts.pory"
	.string "I-I uh...\p"
	.string "...\p"
	.string "Ahem.\p"
	.string "Zoroark and I are sorry for what we did\n"
	.string "to you two back there.\p"
	.string "We really are.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_8:
# 187 "data//maps/SSElegant/scripts.pory"
	.string "Why are you helping {PLAYER}? Are you\n"
	.string "still part of Team Somber?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_9:
# 188 "data//maps/SSElegant/scripts.pory"
	.string "No. I-uh...I got fired.\n"
	.string "For helping {PLAYER} sneak into our\l"
	.string "headquarters.\p"
	.string "And since then, Zoroark and I...we've\n"
	.string "been trying to do better. Trying to be\l"
	.string "more like {PLAYER}.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_10:
# 189 "data//maps/SSElegant/scripts.pory"
	.string "I guess both of us learned something\n"
	.string "from {PLAYER}.\p"
	.string "...\p"
	.string "What you did was really bad.\p"
	.string "But right now, we'd be bad for not\n"
	.string "helping you do a good thing!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_11:
# 191 "data//maps/SSElegant/scripts.pory"
	.string "So...we team up for now?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_12:
# 192 "data//maps/SSElegant/scripts.pory"
	.string "Yeah, we team up for now.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_13:
# 197 "data//maps/SSElegant/scripts.pory"
	.string "So what's the plan?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_14:
# 198 "data//maps/SSElegant/scripts.pory"
	.string "This is the plan!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_15:
# 202 "data//maps/SSElegant/scripts.pory"
	.string "Go on, Zoroark!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_16:
# 218 "data//maps/SSElegant/scripts.pory"
	.string "Zoroark and I will go down to the\n"
	.string "storage hold and distract the crew\l"
	.string "there!\p"
	.string "After that, you two try and find a way\n"
	.string "out through the hold.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_17:
# 219 "data//maps/SSElegant/scripts.pory"
	.string "Okay, we'll do what we can.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_18:
# 223 "data//maps/SSElegant/scripts.pory"
	.string "Got it, {PLAYER}?\n"
	.string "When you're ready, meet us at the\l"
	.string "storage hold. Make sure you have\l"
	.string "everything you need!$"

SSElegant_Aggron_Text_0:
# 281 "data//maps/SSElegant/scripts.pory"
	.string "Aggron glares at you.$"

SSElegant_Jania_Text_0:
# 286 "data//maps/SSElegant/scripts.pory"
	.string "What? A leader can't have any hobbies?$"

SSElegant_Jania_Text_1:
# 286 "data//maps/SSElegant/scripts.pory"
	.string "Back to drawing, Smeargle!$"

SSElegant_Jania_Text_2:
# 287 "data//maps/SSElegant/scripts.pory"
	.string "I don't get much free time, but when I\n"
	.string "do, I enjoy painting.$"

SSElegant_Inger_Text_0:
# 293 "data//maps/SSElegant/scripts.pory"
	.string "Alright, c'mon Ariana! This time I won't\n"
	.string "lose to you!\p"
	.string "Hey, {PLAYER}! I didn't know you were\n"
	.string "on the cruise.$"

SSElegant_Inger_Text_1:
# 293 "data//maps/SSElegant/scripts.pory"
	.string "This reminds of my first loss!$"

SSElegant_Inger_Text_2:
# 294 "data//maps/SSElegant/scripts.pory"
	.string "We're training to take down Team\n"
	.string "Somber! Yaaah!$"

SSElegant_Minior_Text_0:
# 300 "data//maps/SSElegant/scripts.pory"
	.string "Minior is glaring at Tauros...\n"
	.string "but it falters and cracks a smile!\p"
	.string "They must be good friends.$"

SSElegant_Ariana_Text_0:
# 305 "data//maps/SSElegant/scripts.pory"
	.string "Hey, since {PLAYER} is here...how\n"
	.string "about a double battle?$"

SSElegant_Ariana_Text_1:
# 305 "data//maps/SSElegant/scripts.pory"
	.string "Tough as ever!$"

SSElegant_Ariana_Text_2:
# 306 "data//maps/SSElegant/scripts.pory"
	.string "We heard you were off the case. Don't\n"
	.string "worry - we'll finish what you started!$"

SSElegant_Tauros_Text_0:
# 313 "data//maps/SSElegant/scripts.pory"
	.string "Tauros is huffing at Minior...\n"
	.string "and then flashes a grin!\p"
	.string "A wholesome rivalry.$"

SSElegant_NPC1_Text_0:
# 319 "data//maps/SSElegant/scripts.pory"
	.string "There's nothing like being out on the\n"
	.string "ocean, I tell you!$"

SSElegant_NPC2_Text_0:
# 324 "data//maps/SSElegant/scripts.pory"
	.string "These Gym Leaders are so intimidating!\n"
	.string "This was supposed to be a luxury cruise.$"

SSElegant_NPC3_Text_0:
# 329 "data//maps/SSElegant/scripts.pory"
	.string "Why did all the Gym Leaders board at the\n"
	.string "last minute?\p"
	.string "I'm somewhat of a natural detective\n"
	.string "myself...I think they're conspiring to\l"
	.string "take over Cormoria!$"

SSElegant_NPC4_Text_0:
# 334 "data//maps/SSElegant/scripts.pory"
	.string "The S.S. Elegant stops at Victory Cape.\n"
	.string "That's where this year's Pokemon\l"
	.string "Championships will be!$"
