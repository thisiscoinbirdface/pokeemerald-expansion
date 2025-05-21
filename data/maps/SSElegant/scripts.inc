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
	.byte 0


SSElegant_SailorBlocker::
# 14 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_SailorBlocker_Text_0, MSGBOX_NPC
	end


SSElegant_Raazi::
# 36 "data//maps/SSElegant/scripts.pory"
	lockall
# 37 "data//maps/SSElegant/scripts.pory"
	faceplayer
# 39 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_1
# 42 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 43 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Raazi_Movement_0
# 44 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_1
# 45 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_2
# 46 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 47 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_3
# 48 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_4
# 49 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 50 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 53 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_2
# 54 "data//maps/SSElegant/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVETSHORE_GYM_LEADER, SSElegant_Raazi_Text_3
# 57 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_4
# 59 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 60 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_5
# 61 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_6
# 62 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_6
# 63 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 64 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 65 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_5
# 68 "data//maps/SSElegant/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 70 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_6
# 71 "data//maps/SSElegant/scripts.pory"
	release
# 72 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_BADGE08_GET
# 75 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 76 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_7
# 78 "data//maps/SSElegant/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 79 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 80 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_8
# 83 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_7
# 84 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_7
# 85 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 86 "data//maps/SSElegant/scripts.pory"
	delay 16
# 89 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_9, SSElegant_Raazi_Text_10
# 90 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_11
# 93 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_8
# 94 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_8
# 95 "data//maps/SSElegant/scripts.pory"
	applymovement 4, SSElegant_Raazi_Movement_9
# 96 "data//maps/SSElegant/scripts.pory"
	applymovement 6, SSElegant_Raazi_Movement_9
# 97 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 99 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_RAAZI
# 100 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_AG
# 101 "data//maps/SSElegant/scripts.pory"
	removeobject 4
# 102 "data//maps/SSElegant/scripts.pory"
	removeobject 6
# 104 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_RAAZI_BEATEN
# 106 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Gab_Breech_TeamUp_Trigger::
# 111 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_GAB_BREECH_TEAMUP, SSElegant_Gab_Breech_TeamUp_Trigger_2
# 113 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_RAAZI_BEATEN, SSElegant_Gab_Breech_TeamUp_Trigger_5
	end

SSElegant_Gab_Breech_TeamUp_Trigger_2:
	end

SSElegant_Gab_Breech_TeamUp_Trigger_5:
# 114 "data//maps/SSElegant/scripts.pory"
	lockall
# 115 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_1
# 116 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( ZOROARK_HISUI )
# 118 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_GAB
# 119 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 121 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 122 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 123 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 125 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_2
# 126 "data//maps/SSElegant/scripts.pory"
	delay 48
# 129 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_4
# 130 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1
# 131 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2
# 132 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 133 "data//maps/SSElegant/scripts.pory"
	delay 16
# 135 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_BREECH
# 136 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_CLEF
# 138 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 139 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3
# 140 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 142 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 143 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 144 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 146 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 147 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 148 "data//maps/SSElegant/scripts.pory"
	delay 16
# 149 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_5
# 151 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6
# 152 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 153 "data//maps/SSElegant/scripts.pory"
	delay 16
# 154 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_6
# 156 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 157 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 158 "data//maps/SSElegant/scripts.pory"
	delay 16
# 159 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_7
# 160 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_8
# 161 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_9
# 162 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_10
# 164 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_11
# 165 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_12
# 167 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7
# 168 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 169 "data//maps/SSElegant/scripts.pory"
	delay 16
# 170 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_13
# 171 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_14
# 172 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8
# 173 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 174 "data//maps/SSElegant/scripts.pory"
	delay 16
# 175 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_15
# 177 "data//maps/SSElegant/scripts.pory"
	playse SE_EXIT
# 179 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEADER_RAAZI
# 180 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 181 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 182 "data//maps/SSElegant/scripts.pory"
	setobjectxy LOCALID_ZORO, 22, 14
# 183 "data//maps/SSElegant/scripts.pory"
	delay 16
# 185 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 186 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10
# 187 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10
# 188 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 189 "data//maps/SSElegant/scripts.pory"
	delay 16
# 191 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_16
# 192 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_17
# 193 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11
# 194 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 195 "data//maps/SSElegant/scripts.pory"
	delay 16
# 196 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_18
# 199 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12
# 200 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13
# 201 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14
# 202 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15
# 203 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 205 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_BREECH
# 206 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_CLEF
# 207 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_GAB
# 208 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 210 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_16
# 211 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 212 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 215 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_GAB_BREECH_TEAMUP
# 216 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Aggron::
# 251 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_NORMAL
# 252 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Aggron_Text_0, MSGBOX_NPC
	end


SSElegant_Jania::
# 257 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_JANIA, SSElegant_Jania_Text_0, SSElegant_Jania_Text_1
# 258 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Jania_Text_2
# 259 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Inger::
	return


SSElegant_Minior::
# 267 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 268 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_Ariana::
	return


SSElegant_Tauros::
# 276 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 277 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC1::
# 283 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC2::
# 288 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC3::
# 293 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC4::
# 298 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


# 43 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_0:
# 43 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 44 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_1:
# 44 "data//maps/SSElegant/scripts.pory"
	walk_down
# 44 "data//maps/SSElegant/scripts.pory"
	walk_left
# 44 "data//maps/SSElegant/scripts.pory"
	walk_left
# 44 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 45 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_2:
# 45 "data//maps/SSElegant/scripts.pory"
	walk_down
# 45 "data//maps/SSElegant/scripts.pory"
	walk_right
	step_end

# 47 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_3:
# 47 "data//maps/SSElegant/scripts.pory"
	walk_down
# 47 "data//maps/SSElegant/scripts.pory"
	walk_right
# 47 "data//maps/SSElegant/scripts.pory"
	walk_right
# 47 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 48 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_4:
# 48 "data//maps/SSElegant/scripts.pory"
	walk_right
# 48 "data//maps/SSElegant/scripts.pory"
	walk_right
# 48 "data//maps/SSElegant/scripts.pory"
	walk_down
# 48 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 60 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_5:
# 60 "data//maps/SSElegant/scripts.pory"
	walk_right
# 60 "data//maps/SSElegant/scripts.pory"
	walk_right
	step_end

# 61 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_6:
# 61 "data//maps/SSElegant/scripts.pory"
	walk_left
# 61 "data//maps/SSElegant/scripts.pory"
	walk_left
	step_end

# 83 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_7:
# 83 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
# 83 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 93 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_8:
# 93 "data//maps/SSElegant/scripts.pory"
	walk_down
# 93 "data//maps/SSElegant/scripts.pory"
	walk_down
# 93 "data//maps/SSElegant/scripts.pory"
	walk_down
# 93 "data//maps/SSElegant/scripts.pory"
	walk_down
# 93 "data//maps/SSElegant/scripts.pory"
	walk_down
# 93 "data//maps/SSElegant/scripts.pory"
	walk_down
# 93 "data//maps/SSElegant/scripts.pory"
	walk_down
# 93 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 95 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_9:
# 95 "data//maps/SSElegant/scripts.pory"
	walk_right
# 95 "data//maps/SSElegant/scripts.pory"
	walk_down
# 95 "data//maps/SSElegant/scripts.pory"
	walk_down
# 95 "data//maps/SSElegant/scripts.pory"
	walk_down
# 95 "data//maps/SSElegant/scripts.pory"
	walk_down
# 95 "data//maps/SSElegant/scripts.pory"
	walk_down
# 95 "data//maps/SSElegant/scripts.pory"
	walk_down
# 95 "data//maps/SSElegant/scripts.pory"
	walk_down
# 95 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 121 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0:
# 121 "data//maps/SSElegant/scripts.pory"
	walk_up
# 121 "data//maps/SSElegant/scripts.pory"
	walk_up
# 121 "data//maps/SSElegant/scripts.pory"
	walk_up
# 121 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 130 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1:
# 130 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
# 130 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 131 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2:
# 131 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 139 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3:
# 139 "data//maps/SSElegant/scripts.pory"
	walk_down
# 139 "data//maps/SSElegant/scripts.pory"
	walk_down
# 139 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 142 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4:
# 142 "data//maps/SSElegant/scripts.pory"
	walk_up
# 142 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 146 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5:
# 146 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 151 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6:
# 151 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
	step_end

# 167 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7:
# 167 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
	step_end

# 172 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8:
# 172 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 185 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9:
# 185 "data//maps/SSElegant/scripts.pory"
	jump_in_place_down
# 185 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 186 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10:
# 186 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
# 186 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 193 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11:
# 193 "data//maps/SSElegant/scripts.pory"
	face_up
	step_end

# 199 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12:
# 199 "data//maps/SSElegant/scripts.pory"
	walk_down
# 199 "data//maps/SSElegant/scripts.pory"
	walk_left
# 199 "data//maps/SSElegant/scripts.pory"
	walk_left
# 199 "data//maps/SSElegant/scripts.pory"
	walk_left
# 199 "data//maps/SSElegant/scripts.pory"
	walk_left
# 199 "data//maps/SSElegant/scripts.pory"
	walk_left
# 199 "data//maps/SSElegant/scripts.pory"
	walk_left
# 199 "data//maps/SSElegant/scripts.pory"
	walk_down
# 199 "data//maps/SSElegant/scripts.pory"
	walk_down
# 199 "data//maps/SSElegant/scripts.pory"
	walk_down
# 199 "data//maps/SSElegant/scripts.pory"
	walk_down
# 199 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 200 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13:
# 200 "data//maps/SSElegant/scripts.pory"
	walk_down
# 200 "data//maps/SSElegant/scripts.pory"
	walk_left
# 200 "data//maps/SSElegant/scripts.pory"
	walk_left
# 200 "data//maps/SSElegant/scripts.pory"
	walk_left
# 200 "data//maps/SSElegant/scripts.pory"
	walk_left
# 200 "data//maps/SSElegant/scripts.pory"
	walk_left
# 200 "data//maps/SSElegant/scripts.pory"
	walk_left
# 200 "data//maps/SSElegant/scripts.pory"
	walk_left
# 200 "data//maps/SSElegant/scripts.pory"
	walk_down
# 200 "data//maps/SSElegant/scripts.pory"
	walk_down
# 200 "data//maps/SSElegant/scripts.pory"
	walk_down
# 200 "data//maps/SSElegant/scripts.pory"
	walk_down
# 200 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 201 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14:
# 201 "data//maps/SSElegant/scripts.pory"
	walk_down
# 201 "data//maps/SSElegant/scripts.pory"
	walk_down
# 201 "data//maps/SSElegant/scripts.pory"
	walk_down
# 201 "data//maps/SSElegant/scripts.pory"
	walk_down
# 201 "data//maps/SSElegant/scripts.pory"
	walk_left
# 201 "data//maps/SSElegant/scripts.pory"
	walk_left
# 201 "data//maps/SSElegant/scripts.pory"
	walk_left
# 201 "data//maps/SSElegant/scripts.pory"
	walk_left
# 201 "data//maps/SSElegant/scripts.pory"
	walk_left
# 201 "data//maps/SSElegant/scripts.pory"
	walk_left
# 201 "data//maps/SSElegant/scripts.pory"
	walk_down
# 201 "data//maps/SSElegant/scripts.pory"
	walk_down
# 201 "data//maps/SSElegant/scripts.pory"
	walk_down
# 201 "data//maps/SSElegant/scripts.pory"
	walk_down
# 201 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 202 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15:
# 202 "data//maps/SSElegant/scripts.pory"
	walk_down
# 202 "data//maps/SSElegant/scripts.pory"
	walk_down
# 202 "data//maps/SSElegant/scripts.pory"
	walk_down
# 202 "data//maps/SSElegant/scripts.pory"
	walk_down
# 202 "data//maps/SSElegant/scripts.pory"
	walk_left
# 202 "data//maps/SSElegant/scripts.pory"
	walk_left
# 202 "data//maps/SSElegant/scripts.pory"
	walk_left
# 202 "data//maps/SSElegant/scripts.pory"
	walk_left
# 202 "data//maps/SSElegant/scripts.pory"
	walk_left
# 202 "data//maps/SSElegant/scripts.pory"
	walk_left
# 202 "data//maps/SSElegant/scripts.pory"
	walk_left
# 202 "data//maps/SSElegant/scripts.pory"
	walk_down
# 202 "data//maps/SSElegant/scripts.pory"
	walk_down
# 202 "data//maps/SSElegant/scripts.pory"
	walk_down
# 202 "data//maps/SSElegant/scripts.pory"
	walk_down
# 202 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 210 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_16:
# 210 "data//maps/SSElegant/scripts.pory"
	walk_up
# 210 "data//maps/SSElegant/scripts.pory"
	walk_up
# 210 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

SSElegant_SailorBlocker_Text_0:
# 14 "data//maps/SSElegant/scripts.pory"
	.string "You can't get off now - are you crazy?\n"
	.string "We're in the middle of the ocean!$"

SSElegant_Raazi_Text_0:
# 39 "data//maps/SSElegant/scripts.pory"
	.string "Raazi$"

SSElegant_Raazi_Text_1:
# 39 "data//maps/SSElegant/scripts.pory"
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
# 53 "data//maps/SSElegant/scripts.pory"
	.string "I am Raazi, the Gym Leader of\n"
	.string "Rivetshore City and the strongest\l"
	.string "Leader in all of Cormoria!\p"
	.string "The quarry has forged my heart into\n"
	.string "steel and my fists into granite.\p"
	.string "Can you break through?$"

SSElegant_Raazi_Text_3:
# 54 "data//maps/SSElegant/scripts.pory"
	.string "I can't believe I lost...$"

SSElegant_Raazi_Text_4:
# 57 "data//maps/SSElegant/scripts.pory"
	.string "Spectacular!$"

SSElegant_Raazi_Text_5:
# 65 "data//maps/SSElegant/scripts.pory"
	.string "You'd be of use in the quarry, I can tell\n"
	.string "you.\p"
	.string "For your tenacity and grit, I am pleased\n"
	.string "to award you with the Granite Badge.$"

SSElegant_Raazi_Text_6:
# 70 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER} received the Granite Badge\n"
	.string "from Raazi.$"

SSElegant_Raazi_Text_7:
# 76 "data//maps/SSElegant/scripts.pory"
	.string "The Drama Badge will let you use the HM\n"
	.string "Dive outside of battle. I'd also like to\l"
	.string "give you something we dug up in the\l"
	.string "quarry a while ago.$"

SSElegant_Raazi_Text_8:
# 80 "data//maps/SSElegant/scripts.pory"
	.string "And now you've collected all eight gym\n"
	.string "badges, {PLAYER}!\p"
	.string "The last mountain in your path is the\n"
	.string "Pokemon Championship, held every year\l"
	.string "at -$"

SSElegant_Raazi_Text_9:
# 89 "data//maps/SSElegant/scripts.pory"
	.string "S.S. Elegant$"

SSElegant_Raazi_Text_10:
# 89 "data//maps/SSElegant/scripts.pory"
	.string "ATTENTION ALL PASSENGERS.\p"
	.string "THE S.S. ELEGANT WILL NOW BE MAKING A\n"
	.string "BRIEF UNSCHEDULED STOP.\p"
	.string "ALL GYM LEADERS ARE REQUESTED TO MEET\n"
	.string "BY THE EXIT IMMEDIATELY.\p"
	.string "DUE TO SAFETY CONCERNS, PASSENGERS\n"
	.string "ARE NOT PERMITTED TO DEBOARD THE SHIP.$"

SSElegant_Raazi_Text_11:
# 90 "data//maps/SSElegant/scripts.pory"
	.string "You may be aware of where the Gym\n"
	.string "Leaders are going now.\p"
	.string "I must warn you, {PLAYER}.\p"
	.string "You're strong, but you're not equipped\n"
	.string "to deal with what's coming. Try not to\l"
	.string "get in our way. You'll do more harm than\l"
	.string "good.\p"
	.string "Stay on the ship.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_0:
# 115 "data//maps/SSElegant/scripts.pory"
	.string "Gabrielle$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_1:
# 115 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER}!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_2:
# 125 "data//maps/SSElegant/scripts.pory"
	.string "You heard the announcement, right?\n"
	.string "We've reached!\p"
	.string "The gym leaders are getting off, but\n"
	.string "the crew won't let the civilians leave!\p"
	.string "We've got to find a way past them\n"
	.string "somehow...but with just the two of us, I\l"
	.string "really don't know how we can do it...\p"
	.string "...$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_3:
# 129 "data//maps/SSElegant/scripts.pory"
	.string "Breech$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_4:
# 129 "data//maps/SSElegant/scripts.pory"
	.string "We'll help out!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_5:
# 149 "data//maps/SSElegant/scripts.pory"
	.string "It's you! The hiker with the Clefairy\n"
	.string "near Fennilahl Town!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_6:
# 154 "data//maps/SSElegant/scripts.pory"
	.string "You're the Team Somber grunt! You tried\n"
	.string "to take Clefable's everstone!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_7:
# 159 "data//maps/SSElegant/scripts.pory"
	.string "I-I uh...\p"
	.string "...\p"
	.string "Ahem.\p"
	.string "Zoroark and I are sorry for what we did\n"
	.string "to you two back there.\p"
	.string "We really are.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_8:
# 160 "data//maps/SSElegant/scripts.pory"
	.string "Why are you helping {PLAYER}? Are you\n"
	.string "still part of Team Somber?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_9:
# 161 "data//maps/SSElegant/scripts.pory"
	.string "No. I-uh...I got fired.\n"
	.string "For helping {PLAYER} sneak into our\l"
	.string "headquarters.\p"
	.string "And since then, Zoroark and I...we've\n"
	.string "been trying to do better. Trying to be\l"
	.string "more like {PLAYER}.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_10:
# 162 "data//maps/SSElegant/scripts.pory"
	.string "I guess both of us learned something\n"
	.string "from {PLAYER}.\p"
	.string "...\p"
	.string "What you did was really bad.\p"
	.string "But right now, we'd be bad for not\n"
	.string "helping you do a good thing!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_11:
# 164 "data//maps/SSElegant/scripts.pory"
	.string "So...we team up for now?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_12:
# 165 "data//maps/SSElegant/scripts.pory"
	.string "Yeah, we team up for now.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_13:
# 170 "data//maps/SSElegant/scripts.pory"
	.string "So what's the plan?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_14:
# 171 "data//maps/SSElegant/scripts.pory"
	.string "This is the plan!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_15:
# 175 "data//maps/SSElegant/scripts.pory"
	.string "Go on, Zoroark!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_16:
# 191 "data//maps/SSElegant/scripts.pory"
	.string "Zoroark and I will go down to the\n"
	.string "storage hold and distract the crew\l"
	.string "there!\p"
	.string "After that, you two try and find a way\n"
	.string "out through the hold.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_17:
# 192 "data//maps/SSElegant/scripts.pory"
	.string "Okay, we'll do what we can.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_18:
# 196 "data//maps/SSElegant/scripts.pory"
	.string "Got it, {PLAYER}?\n"
	.string "When you're ready, meet us at the\l"
	.string "storage hold. Make sure you have\l"
	.string "everything you need!$"

SSElegant_Aggron_Text_0:
# 252 "data//maps/SSElegant/scripts.pory"
	.string "Aggron glares at you.$"

SSElegant_Jania_Text_0:
# 257 "data//maps/SSElegant/scripts.pory"
	.string "What? A leader can't have any hobbies?$"

SSElegant_Jania_Text_1:
# 257 "data//maps/SSElegant/scripts.pory"
	.string "Back to drawing, Smeargle!$"

SSElegant_Jania_Text_2:
# 258 "data//maps/SSElegant/scripts.pory"
	.string "I don't get much free time, but when I\n"
	.string "do, I enjoy painting.$"

SSElegant_Minior_Text_0:
# 268 "data//maps/SSElegant/scripts.pory"
	.string "$"
