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
	speakername NULL
# 71 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_6
# 72 "data//maps/SSElegant/scripts.pory"
	release
# 73 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_BADGE08_GET
# 76 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 77 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_7
# 79 "data//maps/SSElegant/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 80 "data//maps/SSElegant/scripts.pory"
	speakername SSElegant_Raazi_Text_0
# 81 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Raazi_Text_8
# 82 "data//maps/SSElegant/scripts.pory"
	release
# 85 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_7
# 86 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_7
# 87 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 88 "data//maps/SSElegant/scripts.pory"
	delay 16
# 91 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_9, SSElegant_Raazi_Text_10
# 93 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Raazi_Movement_8
# 94 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_9
# 95 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 96 "data//maps/SSElegant/scripts.pory"
	delay 16
# 98 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Raazi_Text_0, SSElegant_Raazi_Text_11
# 101 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_10
# 102 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_10
# 103 "data//maps/SSElegant/scripts.pory"
	applymovement 4, SSElegant_Raazi_Movement_11
# 104 "data//maps/SSElegant/scripts.pory"
	applymovement 6, SSElegant_Raazi_Movement_11
# 105 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 107 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_RAAZI
# 108 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_AG
# 109 "data//maps/SSElegant/scripts.pory"
	removeobject 4
# 110 "data//maps/SSElegant/scripts.pory"
	removeobject 5
# 111 "data//maps/SSElegant/scripts.pory"
	removeobject 6
# 112 "data//maps/SSElegant/scripts.pory"
	removeobject 7
# 115 "data//maps/SSElegant/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 1
# 116 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_RAAZI_BEATEN
# 118 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Gab_Breech_TeamUp_Trigger::
# 123 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_GAB_BREECH_TEAMUP, SSElegant_Gab_Breech_TeamUp_Trigger_2
# 125 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_RAAZI_BEATEN, SSElegant_Gab_Breech_TeamUp_Trigger_5
	end

SSElegant_Gab_Breech_TeamUp_Trigger_2:
	end

SSElegant_Gab_Breech_TeamUp_Trigger_5:
# 126 "data//maps/SSElegant/scripts.pory"
	lockall
# 127 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_1
# 128 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( ZOROARK_HISUI )
# 130 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_GAB
# 131 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 133 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 134 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 135 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 137 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_2
# 138 "data//maps/SSElegant/scripts.pory"
	delay 24
# 141 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_4
# 142 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1
# 143 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2
# 144 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 145 "data//maps/SSElegant/scripts.pory"
	delay 16
# 147 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_BREECH
# 148 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_CLEF
# 150 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 151 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3
# 152 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 154 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 155 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 156 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 158 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 159 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 160 "data//maps/SSElegant/scripts.pory"
	delay 16
# 161 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_5
# 163 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6
# 164 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 165 "data//maps/SSElegant/scripts.pory"
	delay 16
# 166 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_6
# 168 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 169 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 170 "data//maps/SSElegant/scripts.pory"
	delay 16
# 171 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_7
# 172 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_8
# 173 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_9
# 174 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_10
# 176 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_11
# 177 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_12
# 179 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7
# 180 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 181 "data//maps/SSElegant/scripts.pory"
	delay 16
# 182 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_13
# 183 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_14
# 184 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Raazi_Movement_8
# 185 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 186 "data//maps/SSElegant/scripts.pory"
	delay 16
# 187 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_15
# 189 "data//maps/SSElegant/scripts.pory"
	playse SE_EXIT
# 191 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEADER_RAAZI
# 192 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 193 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 194 "data//maps/SSElegant/scripts.pory"
	setobjectxy LOCALID_ZORO, 22, 14
# 195 "data//maps/SSElegant/scripts.pory"
	delay 16
# 197 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8
# 198 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 199 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 200 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 201 "data//maps/SSElegant/scripts.pory"
	delay 16
# 203 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_16
# 204 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_17
# 205 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10
# 206 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 207 "data//maps/SSElegant/scripts.pory"
	delay 16
# 208 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_18
# 211 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11
# 212 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12
# 213 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13
# 214 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14
# 215 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 217 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_BREECH
# 218 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_CLEF
# 219 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_GAB
# 220 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 222 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15
# 223 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 224 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 227 "data//maps/SSElegant/scripts.pory"
	setvar VAR_SSELEGANT_CUTSCENES, 2
# 228 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_GAB_BREECH_TEAMUP
# 229 "data//maps/SSElegant/scripts.pory"
	clearflag FLAG_HIDE_GAB_BREECH_STORAGE
# 230 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Aggron::
# 265 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_NORMAL
# 266 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Aggron_Text_0, MSGBOX_NPC
	end


SSElegant_Jania::
# 271 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_JANIA, SSElegant_Jania_Text_0, SSElegant_Jania_Text_1
# 272 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Jania_Text_2
# 273 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Inger::
	return


SSElegant_Minior::
# 281 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 282 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_Ariana::
	return


SSElegant_Tauros::
# 290 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 291 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC1::
# 297 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC2::
# 302 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC3::
# 307 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC4::
# 312 "data//maps/SSElegant/scripts.pory"
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

# 85 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_7:
# 85 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
# 85 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 93 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_8:
# 93 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 94 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_9:
# 94 "data//maps/SSElegant/scripts.pory"
	face_left
	step_end

# 101 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_10:
# 101 "data//maps/SSElegant/scripts.pory"
	walk_down
# 101 "data//maps/SSElegant/scripts.pory"
	walk_down
# 101 "data//maps/SSElegant/scripts.pory"
	walk_down
# 101 "data//maps/SSElegant/scripts.pory"
	walk_down
# 101 "data//maps/SSElegant/scripts.pory"
	walk_down
# 101 "data//maps/SSElegant/scripts.pory"
	walk_down
# 101 "data//maps/SSElegant/scripts.pory"
	walk_down
# 101 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 103 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_11:
# 103 "data//maps/SSElegant/scripts.pory"
	walk_right
# 103 "data//maps/SSElegant/scripts.pory"
	walk_down
# 103 "data//maps/SSElegant/scripts.pory"
	walk_down
# 103 "data//maps/SSElegant/scripts.pory"
	walk_down
# 103 "data//maps/SSElegant/scripts.pory"
	walk_down
# 103 "data//maps/SSElegant/scripts.pory"
	walk_down
# 103 "data//maps/SSElegant/scripts.pory"
	walk_down
# 103 "data//maps/SSElegant/scripts.pory"
	walk_down
# 103 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 133 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0:
# 133 "data//maps/SSElegant/scripts.pory"
	walk_up
# 133 "data//maps/SSElegant/scripts.pory"
	walk_up
# 133 "data//maps/SSElegant/scripts.pory"
	walk_up
# 133 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 142 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1:
# 142 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
# 142 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 143 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2:
# 143 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 151 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3:
# 151 "data//maps/SSElegant/scripts.pory"
	walk_down
# 151 "data//maps/SSElegant/scripts.pory"
	walk_down
# 151 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 154 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4:
# 154 "data//maps/SSElegant/scripts.pory"
	walk_up
# 154 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 158 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5:
# 158 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 163 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6:
# 163 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
	step_end

# 179 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7:
# 179 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
	step_end

# 197 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8:
# 197 "data//maps/SSElegant/scripts.pory"
	jump_in_place_down
# 197 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 198 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9:
# 198 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
# 198 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 205 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10:
# 205 "data//maps/SSElegant/scripts.pory"
	face_up
	step_end

# 211 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11:
# 211 "data//maps/SSElegant/scripts.pory"
	walk_down
# 211 "data//maps/SSElegant/scripts.pory"
	walk_left
# 211 "data//maps/SSElegant/scripts.pory"
	walk_left
# 211 "data//maps/SSElegant/scripts.pory"
	walk_left
# 211 "data//maps/SSElegant/scripts.pory"
	walk_left
# 211 "data//maps/SSElegant/scripts.pory"
	walk_left
# 211 "data//maps/SSElegant/scripts.pory"
	walk_left
# 211 "data//maps/SSElegant/scripts.pory"
	walk_down
# 211 "data//maps/SSElegant/scripts.pory"
	walk_down
# 211 "data//maps/SSElegant/scripts.pory"
	walk_down
# 211 "data//maps/SSElegant/scripts.pory"
	walk_down
# 211 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 212 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12:
# 212 "data//maps/SSElegant/scripts.pory"
	walk_down
# 212 "data//maps/SSElegant/scripts.pory"
	walk_left
# 212 "data//maps/SSElegant/scripts.pory"
	walk_left
# 212 "data//maps/SSElegant/scripts.pory"
	walk_left
# 212 "data//maps/SSElegant/scripts.pory"
	walk_left
# 212 "data//maps/SSElegant/scripts.pory"
	walk_left
# 212 "data//maps/SSElegant/scripts.pory"
	walk_left
# 212 "data//maps/SSElegant/scripts.pory"
	walk_left
# 212 "data//maps/SSElegant/scripts.pory"
	walk_down
# 212 "data//maps/SSElegant/scripts.pory"
	walk_down
# 212 "data//maps/SSElegant/scripts.pory"
	walk_down
# 212 "data//maps/SSElegant/scripts.pory"
	walk_down
# 212 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 213 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13:
# 213 "data//maps/SSElegant/scripts.pory"
	walk_down
# 213 "data//maps/SSElegant/scripts.pory"
	walk_down
# 213 "data//maps/SSElegant/scripts.pory"
	walk_down
# 213 "data//maps/SSElegant/scripts.pory"
	walk_down
# 213 "data//maps/SSElegant/scripts.pory"
	walk_left
# 213 "data//maps/SSElegant/scripts.pory"
	walk_left
# 213 "data//maps/SSElegant/scripts.pory"
	walk_left
# 213 "data//maps/SSElegant/scripts.pory"
	walk_left
# 213 "data//maps/SSElegant/scripts.pory"
	walk_left
# 213 "data//maps/SSElegant/scripts.pory"
	walk_left
# 213 "data//maps/SSElegant/scripts.pory"
	walk_down
# 213 "data//maps/SSElegant/scripts.pory"
	walk_down
# 213 "data//maps/SSElegant/scripts.pory"
	walk_down
# 213 "data//maps/SSElegant/scripts.pory"
	walk_down
# 213 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 214 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14:
# 214 "data//maps/SSElegant/scripts.pory"
	walk_down
# 214 "data//maps/SSElegant/scripts.pory"
	walk_down
# 214 "data//maps/SSElegant/scripts.pory"
	walk_down
# 214 "data//maps/SSElegant/scripts.pory"
	walk_down
# 214 "data//maps/SSElegant/scripts.pory"
	walk_left
# 214 "data//maps/SSElegant/scripts.pory"
	walk_left
# 214 "data//maps/SSElegant/scripts.pory"
	walk_left
# 214 "data//maps/SSElegant/scripts.pory"
	walk_left
# 214 "data//maps/SSElegant/scripts.pory"
	walk_left
# 214 "data//maps/SSElegant/scripts.pory"
	walk_left
# 214 "data//maps/SSElegant/scripts.pory"
	walk_left
# 214 "data//maps/SSElegant/scripts.pory"
	walk_down
# 214 "data//maps/SSElegant/scripts.pory"
	walk_down
# 214 "data//maps/SSElegant/scripts.pory"
	walk_down
# 214 "data//maps/SSElegant/scripts.pory"
	walk_down
# 214 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 222 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15:
# 222 "data//maps/SSElegant/scripts.pory"
	walk_up
# 222 "data//maps/SSElegant/scripts.pory"
	walk_up
# 222 "data//maps/SSElegant/scripts.pory"
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
# 71 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER} received the Granite Badge\n"
	.string "from Raazi.$"

SSElegant_Raazi_Text_7:
# 77 "data//maps/SSElegant/scripts.pory"
	.string "The Granite Badge will let you use the\n"
	.string "HM Dive outside of battle. I'd also like\l"
	.string "to give you something we dug up in the\l"
	.string "quarry a while ago.$"

SSElegant_Raazi_Text_8:
# 81 "data//maps/SSElegant/scripts.pory"
	.string "And now you've collected all eight gym\n"
	.string "badges, {PLAYER}!\p"
	.string "The last mountain in your path is the\n"
	.string "Pokemon Championship. They're held\l"
	.string "every year at -$"

SSElegant_Raazi_Text_9:
# 91 "data//maps/SSElegant/scripts.pory"
	.string "S.S. Elegant$"

SSElegant_Raazi_Text_10:
# 91 "data//maps/SSElegant/scripts.pory"
	.string "ATTENTION ALL PASSENGERS.\p"
	.string "THE S.S. ELEGANT WILL NOW BE MAKING A\n"
	.string "BRIEF UNSCHEDULED STOP.\p"
	.string "ALL GYM LEADERS ARE REQUESTED TO MEET\n"
	.string "BY THE EXIT IMMEDIATELY.\p"
	.string "DUE TO SAFETY CONCERNS, PASSENGERS\n"
	.string "ARE NOT PERMITTED TO DEBOARD THE SHIP.$"

SSElegant_Raazi_Text_11:
# 98 "data//maps/SSElegant/scripts.pory"
	.string "You may be aware of where the Gym\n"
	.string "Leaders are going now.\p"
	.string "I must warn you, {PLAYER}.\p"
	.string "You're strong, but you're not equipped\n"
	.string "to deal with what's coming. Try not to\l"
	.string "get in our way. You'll do more harm than\l"
	.string "good.\p"
	.string "Stay on the ship.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_0:
# 127 "data//maps/SSElegant/scripts.pory"
	.string "Gabrielle$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_1:
# 127 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER}!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_2:
# 137 "data//maps/SSElegant/scripts.pory"
	.string "You heard the announcement, right?\n"
	.string "We've reached!\p"
	.string "The gym leaders are getting off, but\n"
	.string "the crew won't let the civilians leave!\p"
	.string "We've got to find a way past them\n"
	.string "somehow...but with just the two of us, I\l"
	.string "really don't know how we can do it...\p"
	.string "...$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_3:
# 141 "data//maps/SSElegant/scripts.pory"
	.string "Breech$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_4:
# 141 "data//maps/SSElegant/scripts.pory"
	.string "We'll help out!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_5:
# 161 "data//maps/SSElegant/scripts.pory"
	.string "It's you! The hiker with the Clefairy\n"
	.string "near Fennilahl Town!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_6:
# 166 "data//maps/SSElegant/scripts.pory"
	.string "You're the Team Somber grunt! You tried\n"
	.string "to take Clefable's everstone!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_7:
# 171 "data//maps/SSElegant/scripts.pory"
	.string "I-I uh...\p"
	.string "...\p"
	.string "Ahem.\p"
	.string "Zoroark and I are sorry for what we did\n"
	.string "to you two back there.\p"
	.string "We really are.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_8:
# 172 "data//maps/SSElegant/scripts.pory"
	.string "Why are you helping {PLAYER}? Are you\n"
	.string "still part of Team Somber?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_9:
# 173 "data//maps/SSElegant/scripts.pory"
	.string "No. I-uh...I got fired.\n"
	.string "For helping {PLAYER} sneak into our\l"
	.string "headquarters.\p"
	.string "And since then, Zoroark and I...we've\n"
	.string "been trying to do better. Trying to be\l"
	.string "more like {PLAYER}.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_10:
# 174 "data//maps/SSElegant/scripts.pory"
	.string "I guess both of us learned something\n"
	.string "from {PLAYER}.\p"
	.string "...\p"
	.string "What you did was really bad.\p"
	.string "But right now, we'd be bad for not\n"
	.string "helping you do a good thing!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_11:
# 176 "data//maps/SSElegant/scripts.pory"
	.string "So...we team up for now?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_12:
# 177 "data//maps/SSElegant/scripts.pory"
	.string "Yeah, we team up for now.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_13:
# 182 "data//maps/SSElegant/scripts.pory"
	.string "So what's the plan?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_14:
# 183 "data//maps/SSElegant/scripts.pory"
	.string "This is the plan!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_15:
# 187 "data//maps/SSElegant/scripts.pory"
	.string "Go on, Zoroark!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_16:
# 203 "data//maps/SSElegant/scripts.pory"
	.string "Zoroark and I will go down to the\n"
	.string "storage hold and distract the crew\l"
	.string "there!\p"
	.string "After that, you two try and find a way\n"
	.string "out through the hold.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_17:
# 204 "data//maps/SSElegant/scripts.pory"
	.string "Okay, we'll do what we can.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_18:
# 208 "data//maps/SSElegant/scripts.pory"
	.string "Got it, {PLAYER}?\n"
	.string "When you're ready, meet us at the\l"
	.string "storage hold. Make sure you have\l"
	.string "everything you need!$"

SSElegant_Aggron_Text_0:
# 266 "data//maps/SSElegant/scripts.pory"
	.string "Aggron glares at you.$"

SSElegant_Jania_Text_0:
# 271 "data//maps/SSElegant/scripts.pory"
	.string "What? A leader can't have any hobbies?$"

SSElegant_Jania_Text_1:
# 271 "data//maps/SSElegant/scripts.pory"
	.string "Back to drawing, Smeargle!$"

SSElegant_Jania_Text_2:
# 272 "data//maps/SSElegant/scripts.pory"
	.string "I don't get much free time, but when I\n"
	.string "do, I enjoy painting.$"

SSElegant_Minior_Text_0:
# 282 "data//maps/SSElegant/scripts.pory"
	.string "$"
