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
# 62 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_2
# 63 "data//maps/SSElegant/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVETSHORE_GYM_LEADER, SSElegant_Raazi_Text_3
# 66 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_4
# 68 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 69 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_5
# 70 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_6
# 71 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_6
# 72 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 73 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 74 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_5
# 77 "data//maps/SSElegant/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 79 "data//maps/SSElegant/scripts.pory"
	speakername NULL
# 80 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_6
# 81 "data//maps/SSElegant/scripts.pory"
	release
# 82 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_BADGE08_GET
# 85 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 86 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_7
# 88 "data//maps/SSElegant/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 89 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 90 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_8
# 91 "data//maps/SSElegant/scripts.pory"
	release
# 94 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_7
# 95 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_7
# 96 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 97 "data//maps/SSElegant/scripts.pory"
	delay 16
# 100 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_9, SSElegant_Raazi_Text_10
# 102 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_8
# 103 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_9
# 104 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 105 "data//maps/SSElegant/scripts.pory"
	delay 16
# 107 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_11
# 110 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_10
# 111 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_10
# 112 "data//maps/SSElegant/scripts.pory"
	applymovement 4, SSElegant_Raazi_Movement_11
# 113 "data//maps/SSElegant/scripts.pory"
	applymovement 6, SSElegant_Raazi_Movement_11
# 114 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 116 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_RAAZI
# 117 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_AG
# 118 "data//maps/SSElegant/scripts.pory"
	removeobject 4
# 119 "data//maps/SSElegant/scripts.pory"
	removeobject 5
# 120 "data//maps/SSElegant/scripts.pory"
	removeobject 6
# 121 "data//maps/SSElegant/scripts.pory"
	removeobject 7
# 124 "data//maps/SSElegant/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 1
# 125 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_RAAZI_BEATEN
# 127 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Gab_Breech_TeamUp_Trigger::
# 132 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_GAB_BREECH_TEAMUP, SSElegant_Gab_Breech_TeamUp_Trigger_2
# 134 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_RAAZI_BEATEN, SSElegant_Gab_Breech_TeamUp_Trigger_5
	end

SSElegant_Gab_Breech_TeamUp_Trigger_2:
	end

SSElegant_Gab_Breech_TeamUp_Trigger_5:
# 135 "data//maps/SSElegant/scripts.pory"
	lockall
# 136 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_1
# 137 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( ZOROARK_HISUI )
# 139 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_GAB
# 140 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 142 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 143 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 144 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 146 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_2
# 147 "data//maps/SSElegant/scripts.pory"
	delay 24
# 150 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_4
# 151 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1
# 152 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2
# 153 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 154 "data//maps/SSElegant/scripts.pory"
	delay 16
# 156 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_BREECH
# 157 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_CLEF
# 159 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 160 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3
# 161 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 163 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 164 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 165 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 167 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 168 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 169 "data//maps/SSElegant/scripts.pory"
	delay 16
# 170 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_5
# 172 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6
# 173 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 174 "data//maps/SSElegant/scripts.pory"
	delay 16
# 175 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_6
# 177 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 178 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 179 "data//maps/SSElegant/scripts.pory"
	delay 16
# 180 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_7
# 181 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_8
# 182 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_9
# 183 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_10
# 185 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_11
# 186 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_12
# 188 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7
# 189 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 190 "data//maps/SSElegant/scripts.pory"
	delay 16
# 191 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_13
# 192 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_14
# 193 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Raazi_Movement_8
# 194 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 195 "data//maps/SSElegant/scripts.pory"
	delay 16
# 196 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_15
# 198 "data//maps/SSElegant/scripts.pory"
	playse SE_EXIT
# 200 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEADER_RAAZI
# 201 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 202 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 203 "data//maps/SSElegant/scripts.pory"
	setobjectxy LOCALID_ZORO, 22, 14
# 204 "data//maps/SSElegant/scripts.pory"
	delay 16
# 206 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8
# 207 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 208 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 209 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 210 "data//maps/SSElegant/scripts.pory"
	delay 16
# 212 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_16
# 213 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_17
# 214 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10
# 215 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 216 "data//maps/SSElegant/scripts.pory"
	delay 16
# 217 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_18
# 220 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11
# 221 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12
# 222 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13
# 223 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14
# 224 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 226 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_BREECH
# 227 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_CLEF
# 228 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_GAB
# 229 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 231 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15
# 232 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 233 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 236 "data//maps/SSElegant/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 2
# 237 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_GAB_BREECH_TEAMUP
# 238 "data//maps/SSElegant/scripts.pory"
	clearflag FLAG_HIDE_GAB_BREECH_STORAGE
# 239 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Aggron::
# 274 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_NORMAL
# 275 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Aggron_Text_0, MSGBOX_NPC
	end


SSElegant_Jania::
# 280 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_JANIA, SSElegant_Jania_Text_0, SSElegant_Jania_Text_1
# 281 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Jania_Text_2
# 282 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Inger::
	return


SSElegant_Minior::
# 290 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 291 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_Ariana::
	return


SSElegant_Tauros::
# 299 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 300 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC1::
# 306 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC2::
# 311 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC3::
# 316 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC4::
# 321 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
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

# 69 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_5:
# 69 "data//maps/SSElegant/scripts.pory"
	walk_right
# 69 "data//maps/SSElegant/scripts.pory"
	walk_right
	step_end

# 70 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_6:
# 70 "data//maps/SSElegant/scripts.pory"
	walk_left
# 70 "data//maps/SSElegant/scripts.pory"
	walk_left
	step_end

# 94 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_7:
# 94 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
# 94 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 102 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_8:
# 102 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 103 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_9:
# 103 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 110 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_10:
# 110 "data//maps/SSElegant/scripts.pory"
	walk_down
# 110 "data//maps/SSElegant/scripts.pory"
	walk_down
# 110 "data//maps/SSElegant/scripts.pory"
	walk_down
# 110 "data//maps/SSElegant/scripts.pory"
	walk_down
# 110 "data//maps/SSElegant/scripts.pory"
	walk_down
# 110 "data//maps/SSElegant/scripts.pory"
	walk_down
# 110 "data//maps/SSElegant/scripts.pory"
	walk_down
# 110 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 112 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_11:
# 112 "data//maps/SSElegant/scripts.pory"
	walk_right
# 112 "data//maps/SSElegant/scripts.pory"
	walk_down
# 112 "data//maps/SSElegant/scripts.pory"
	walk_down
# 112 "data//maps/SSElegant/scripts.pory"
	walk_down
# 112 "data//maps/SSElegant/scripts.pory"
	walk_down
# 112 "data//maps/SSElegant/scripts.pory"
	walk_down
# 112 "data//maps/SSElegant/scripts.pory"
	walk_down
# 112 "data//maps/SSElegant/scripts.pory"
	walk_down
# 112 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 142 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0:
# 142 "data//maps/SSElegant/scripts.pory"
	walk_up
# 142 "data//maps/SSElegant/scripts.pory"
	walk_up
# 142 "data//maps/SSElegant/scripts.pory"
	walk_up
# 142 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 151 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1:
# 151 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
# 151 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 152 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2:
# 152 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 160 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3:
# 160 "data//maps/SSElegant/scripts.pory"
	walk_down
# 160 "data//maps/SSElegant/scripts.pory"
	walk_down
# 160 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 163 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4:
# 163 "data//maps/SSElegant/scripts.pory"
	walk_up
# 163 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 167 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5:
# 167 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 172 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6:
# 172 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
	step_end

# 188 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7:
# 188 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
	step_end

# 206 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8:
# 206 "data//maps/SSElegant/scripts.pory"
	jump_in_place_down
# 206 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 207 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9:
# 207 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
# 207 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 214 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10:
# 214 "data//maps/SSElegant/scripts.pory"
	face_up
	step_end

# 220 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11:
# 220 "data//maps/SSElegant/scripts.pory"
	walk_down
# 220 "data//maps/SSElegant/scripts.pory"
	walk_left
# 220 "data//maps/SSElegant/scripts.pory"
	walk_left
# 220 "data//maps/SSElegant/scripts.pory"
	walk_left
# 220 "data//maps/SSElegant/scripts.pory"
	walk_left
# 220 "data//maps/SSElegant/scripts.pory"
	walk_left
# 220 "data//maps/SSElegant/scripts.pory"
	walk_left
# 220 "data//maps/SSElegant/scripts.pory"
	walk_down
# 220 "data//maps/SSElegant/scripts.pory"
	walk_down
# 220 "data//maps/SSElegant/scripts.pory"
	walk_down
# 220 "data//maps/SSElegant/scripts.pory"
	walk_down
# 220 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 221 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12:
# 221 "data//maps/SSElegant/scripts.pory"
	walk_down
# 221 "data//maps/SSElegant/scripts.pory"
	walk_left
# 221 "data//maps/SSElegant/scripts.pory"
	walk_left
# 221 "data//maps/SSElegant/scripts.pory"
	walk_left
# 221 "data//maps/SSElegant/scripts.pory"
	walk_left
# 221 "data//maps/SSElegant/scripts.pory"
	walk_left
# 221 "data//maps/SSElegant/scripts.pory"
	walk_left
# 221 "data//maps/SSElegant/scripts.pory"
	walk_left
# 221 "data//maps/SSElegant/scripts.pory"
	walk_down
# 221 "data//maps/SSElegant/scripts.pory"
	walk_down
# 221 "data//maps/SSElegant/scripts.pory"
	walk_down
# 221 "data//maps/SSElegant/scripts.pory"
	walk_down
# 221 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 222 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13:
# 222 "data//maps/SSElegant/scripts.pory"
	walk_down
# 222 "data//maps/SSElegant/scripts.pory"
	walk_down
# 222 "data//maps/SSElegant/scripts.pory"
	walk_down
# 222 "data//maps/SSElegant/scripts.pory"
	walk_down
# 222 "data//maps/SSElegant/scripts.pory"
	walk_left
# 222 "data//maps/SSElegant/scripts.pory"
	walk_left
# 222 "data//maps/SSElegant/scripts.pory"
	walk_left
# 222 "data//maps/SSElegant/scripts.pory"
	walk_left
# 222 "data//maps/SSElegant/scripts.pory"
	walk_left
# 222 "data//maps/SSElegant/scripts.pory"
	walk_left
# 222 "data//maps/SSElegant/scripts.pory"
	walk_down
# 222 "data//maps/SSElegant/scripts.pory"
	walk_down
# 222 "data//maps/SSElegant/scripts.pory"
	walk_down
# 222 "data//maps/SSElegant/scripts.pory"
	walk_down
# 222 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 223 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14:
# 223 "data//maps/SSElegant/scripts.pory"
	walk_down
# 223 "data//maps/SSElegant/scripts.pory"
	walk_down
# 223 "data//maps/SSElegant/scripts.pory"
	walk_down
# 223 "data//maps/SSElegant/scripts.pory"
	walk_down
# 223 "data//maps/SSElegant/scripts.pory"
	walk_left
# 223 "data//maps/SSElegant/scripts.pory"
	walk_left
# 223 "data//maps/SSElegant/scripts.pory"
	walk_left
# 223 "data//maps/SSElegant/scripts.pory"
	walk_left
# 223 "data//maps/SSElegant/scripts.pory"
	walk_left
# 223 "data//maps/SSElegant/scripts.pory"
	walk_left
# 223 "data//maps/SSElegant/scripts.pory"
	walk_left
# 223 "data//maps/SSElegant/scripts.pory"
	walk_down
# 223 "data//maps/SSElegant/scripts.pory"
	walk_down
# 223 "data//maps/SSElegant/scripts.pory"
	walk_down
# 223 "data//maps/SSElegant/scripts.pory"
	walk_down
# 223 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 231 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15:
# 231 "data//maps/SSElegant/scripts.pory"
	walk_up
# 231 "data//maps/SSElegant/scripts.pory"
	walk_up
# 231 "data//maps/SSElegant/scripts.pory"
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
# 62 "data//maps/SSElegant/scripts.pory"
	.string "I am Raazi, the Gym Leader of\n"
	.string "Rivetshore City and the strongest\l"
	.string "Leader in all of Cormoria!\p"
	.string "The quarry has forged my heart into\n"
	.string "steel and my fists into granite.\p"
	.string "Can you break through?$"

SSElegant_Raazi_Text_3:
# 63 "data//maps/SSElegant/scripts.pory"
	.string "I can't believe I lost...$"

SSElegant_Raazi_Text_4:
# 66 "data//maps/SSElegant/scripts.pory"
	.string "Spectacular!$"

SSElegant_Raazi_Text_5:
# 74 "data//maps/SSElegant/scripts.pory"
	.string "You'd be of use in the quarry, I can tell\n"
	.string "you.\p"
	.string "For your tenacity and grit, I am pleased\n"
	.string "to award you with the Granite Badge.$"

SSElegant_Raazi_Text_6:
# 80 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER} received the Granite Badge\n"
	.string "from Raazi.$"

SSElegant_Raazi_Text_7:
# 86 "data//maps/SSElegant/scripts.pory"
	.string "The Granite Badge will let you use the\n"
	.string "HM Dive outside of battle. I'd also like\l"
	.string "to give you something we dug up in the\l"
	.string "quarry a while ago.$"

SSElegant_Raazi_Text_8:
# 90 "data//maps/SSElegant/scripts.pory"
	.string "And now you've collected all eight gym\n"
	.string "badges, {PLAYER}!\p"
	.string "The last mountain in your path is the\n"
	.string "Pokemon Championship. They're held\l"
	.string "every year at -$"

SSElegant_Raazi_Text_9:
# 100 "data//maps/SSElegant/scripts.pory"
	.string "S.S. Elegant$"

SSElegant_Raazi_Text_10:
# 100 "data//maps/SSElegant/scripts.pory"
	.string "ATTENTION ALL PASSENGERS.\p"
	.string "THE S.S. ELEGANT WILL NOW BE MAKING A\n"
	.string "BRIEF UNSCHEDULED STOP.\p"
	.string "ALL GYM LEADERS ARE REQUESTED TO MEET\n"
	.string "BY THE EXIT IMMEDIATELY.\p"
	.string "DUE TO SAFETY CONCERNS, PASSENGERS\n"
	.string "ARE NOT PERMITTED TO DEBOARD THE SHIP.$"

SSElegant_Raazi_Text_11:
# 107 "data//maps/SSElegant/scripts.pory"
	.string "You may be aware of where the Gym\n"
	.string "Leaders are going now.\p"
	.string "I must warn you, {PLAYER}.\p"
	.string "You're strong, but you're not equipped\n"
	.string "to deal with what's coming. Try not to\l"
	.string "get in our way. You'll do more harm than\l"
	.string "good.\p"
	.string "Stay on the ship.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_0:
# 136 "data//maps/SSElegant/scripts.pory"
	.string "Gabrielle$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_1:
# 136 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER}!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_2:
# 146 "data//maps/SSElegant/scripts.pory"
	.string "You heard the announcement, right?\n"
	.string "We've reached!\p"
	.string "The gym leaders are getting off, but\n"
	.string "the crew won't let the civilians leave!\p"
	.string "We've got to find a way past them\n"
	.string "somehow...but with just the two of us, I\l"
	.string "really don't know how we can do it...\p"
	.string "...$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_3:
# 150 "data//maps/SSElegant/scripts.pory"
	.string "Breech$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_4:
# 150 "data//maps/SSElegant/scripts.pory"
	.string "We'll help out!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_5:
# 170 "data//maps/SSElegant/scripts.pory"
	.string "It's you! The hiker with the Clefairy\n"
	.string "near Fennilahl Town!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_6:
# 175 "data//maps/SSElegant/scripts.pory"
	.string "You're the Team Somber grunt! You tried\n"
	.string "to take Clefable's everstone!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_7:
# 180 "data//maps/SSElegant/scripts.pory"
	.string "I-I uh...\p"
	.string "...\p"
	.string "Ahem.\p"
	.string "Zoroark and I are sorry for what we did\n"
	.string "to you two back there.\p"
	.string "We really are.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_8:
# 181 "data//maps/SSElegant/scripts.pory"
	.string "Why are you helping {PLAYER}? Are you\n"
	.string "still part of Team Somber?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_9:
# 182 "data//maps/SSElegant/scripts.pory"
	.string "No. I-uh...I got fired.\n"
	.string "For helping {PLAYER} sneak into our\l"
	.string "headquarters.\p"
	.string "And since then, Zoroark and I...we've\n"
	.string "been trying to do better. Trying to be\l"
	.string "more like {PLAYER}.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_10:
# 183 "data//maps/SSElegant/scripts.pory"
	.string "I guess both of us learned something\n"
	.string "from {PLAYER}.\p"
	.string "...\p"
	.string "What you did was really bad.\p"
	.string "But right now, we'd be bad for not\n"
	.string "helping you do a good thing!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_11:
# 185 "data//maps/SSElegant/scripts.pory"
	.string "So...we team up for now?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_12:
# 186 "data//maps/SSElegant/scripts.pory"
	.string "Yeah, we team up for now.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_13:
# 191 "data//maps/SSElegant/scripts.pory"
	.string "So what's the plan?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_14:
# 192 "data//maps/SSElegant/scripts.pory"
	.string "This is the plan!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_15:
# 196 "data//maps/SSElegant/scripts.pory"
	.string "Go on, Zoroark!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_16:
# 212 "data//maps/SSElegant/scripts.pory"
	.string "Zoroark and I will go down to the\n"
	.string "storage hold and distract the crew\l"
	.string "there!\p"
	.string "After that, you two try and find a way\n"
	.string "out through the hold.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_17:
# 213 "data//maps/SSElegant/scripts.pory"
	.string "Okay, we'll do what we can.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_18:
# 217 "data//maps/SSElegant/scripts.pory"
	.string "Got it, {PLAYER}?\n"
	.string "When you're ready, meet us at the\l"
	.string "storage hold. Make sure you have\l"
	.string "everything you need!$"

SSElegant_Aggron_Text_0:
# 275 "data//maps/SSElegant/scripts.pory"
	.string "Aggron glares at you.$"

SSElegant_Jania_Text_0:
# 280 "data//maps/SSElegant/scripts.pory"
	.string "What? A leader can't have any hobbies?$"

SSElegant_Jania_Text_1:
# 280 "data//maps/SSElegant/scripts.pory"
	.string "Back to drawing, Smeargle!$"

SSElegant_Jania_Text_2:
# 281 "data//maps/SSElegant/scripts.pory"
	.string "I don't get much free time, but when I\n"
	.string "do, I enjoy painting.$"

SSElegant_Minior_Text_0:
# 291 "data//maps/SSElegant/scripts.pory"
	.string "$"
