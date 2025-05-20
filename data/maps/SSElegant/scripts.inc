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
# 45 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_RAAZI, SSElegant_Raazi_Movement_0
# 46 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_AG, SSElegant_Raazi_Movement_0
# 47 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 49 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_RAAZI
# 50 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_AG
# 52 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_RAAZI_BEATEN
# 54 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Gab_Breech_TeamUp_Trigger::
# 59 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_GAB_BREECH_TEAMUP, SSElegant_Gab_Breech_TeamUp_Trigger_2
# 61 "data//maps/SSElegant/scripts.pory"
	goto_if_set FLAG_RAAZI_BEATEN, SSElegant_Gab_Breech_TeamUp_Trigger_5
	end

SSElegant_Gab_Breech_TeamUp_Trigger_2:
	end

SSElegant_Gab_Breech_TeamUp_Trigger_5:
# 62 "data//maps/SSElegant/scripts.pory"
	lockall
# 63 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_1
# 64 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_SPECIES ( ZOROARK_HISUI )
# 66 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_GAB
# 67 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 69 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 70 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 71 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 73 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_2
# 74 "data//maps/SSElegant/scripts.pory"
	delay 48
# 77 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_4
# 78 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1
# 79 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2
# 80 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 81 "data//maps/SSElegant/scripts.pory"
	delay 16
# 83 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_BREECH
# 84 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_CLEF
# 86 "data//maps/SSElegant/scripts.pory"
	special SpawnCameraObject
# 87 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3
# 88 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 90 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 91 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4
# 92 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 94 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 95 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 96 "data//maps/SSElegant/scripts.pory"
	delay 16
# 97 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_5
# 99 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6
# 100 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 101 "data//maps/SSElegant/scripts.pory"
	delay 16
# 102 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_6
# 104 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5
# 105 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 106 "data//maps/SSElegant/scripts.pory"
	delay 16
# 107 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_7
# 108 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_8
# 109 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_9
# 110 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_10
# 112 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_11
# 113 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_12
# 115 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7
# 116 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 117 "data//maps/SSElegant/scripts.pory"
	delay 16
# 118 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_13
# 119 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_14
# 120 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8
# 121 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 122 "data//maps/SSElegant/scripts.pory"
	delay 16
# 123 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_15
# 125 "data//maps/SSElegant/scripts.pory"
	playse SE_EXIT
# 127 "data//maps/SSElegant/scripts.pory"
	setvar VAR_OBJ_GFX_ID_A, OBJ_EVENT_GFX_LEADER_RAAZI
# 128 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 129 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 130 "data//maps/SSElegant/scripts.pory"
	setobjectxy LOCALID_ZORO, 22, 14
# 131 "data//maps/SSElegant/scripts.pory"
	delay 16
# 133 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9
# 134 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10
# 135 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10
# 136 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 137 "data//maps/SSElegant/scripts.pory"
	delay 16
# 139 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_16
# 140 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_3, SSElegant_Gab_Breech_TeamUp_Trigger_Text_17
# 141 "data//maps/SSElegant/scripts.pory"
	msgbox_delay SSElegant_Gab_Breech_TeamUp_Trigger_Text_0, SSElegant_Gab_Breech_TeamUp_Trigger_Text_18
# 144 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_BREECH, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11
# 145 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_CLEF, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12
# 146 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13
# 147 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14
# 148 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 150 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_BREECH
# 151 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_CLEF
# 152 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_GAB
# 153 "data//maps/SSElegant/scripts.pory"
	removeobject LOCALID_ZORO
# 155 "data//maps/SSElegant/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15
# 156 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 157 "data//maps/SSElegant/scripts.pory"
	special RemoveCameraObject
# 160 "data//maps/SSElegant/scripts.pory"
	setflag FLAG_GAB_BREECH_TEAMUP
# 161 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Aggron::
# 196 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_NORMAL
# 197 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Aggron_Text_0, MSGBOX_NPC
	end


SSElegant_Jania::
# 202 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_JANIA, SSElegant_Jania_Text_0, SSElegant_Jania_Text_1
# 203 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Jania_Text_2
# 204 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Inger::
	return


SSElegant_Minior::
# 212 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 213 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_Ariana::
	return


SSElegant_Tauros::
# 221 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 222 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC1::
# 228 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC2::
# 233 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC3::
# 238 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC4::
# 243 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


# 45 "data//maps/SSElegant/scripts.pory"
SSElegant_Raazi_Movement_0:
# 45 "data//maps/SSElegant/scripts.pory"
	walk_down
# 45 "data//maps/SSElegant/scripts.pory"
	walk_down
# 45 "data//maps/SSElegant/scripts.pory"
	walk_down
# 45 "data//maps/SSElegant/scripts.pory"
	walk_down
# 45 "data//maps/SSElegant/scripts.pory"
	walk_down
# 45 "data//maps/SSElegant/scripts.pory"
	walk_down
# 45 "data//maps/SSElegant/scripts.pory"
	walk_down
# 45 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 69 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0:
# 69 "data//maps/SSElegant/scripts.pory"
	walk_up
# 69 "data//maps/SSElegant/scripts.pory"
	walk_up
# 69 "data//maps/SSElegant/scripts.pory"
	walk_up
# 69 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 78 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_1:
# 78 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
# 78 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 79 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_2:
# 79 "data//maps/SSElegant/scripts.pory"
	face_down
	step_end

# 87 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_3:
# 87 "data//maps/SSElegant/scripts.pory"
	walk_down
# 87 "data//maps/SSElegant/scripts.pory"
	walk_down
# 87 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 90 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_4:
# 90 "data//maps/SSElegant/scripts.pory"
	walk_up
# 90 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

# 94 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_5:
# 94 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 99 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_6:
# 99 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
	step_end

# 115 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_7:
# 115 "data//maps/SSElegant/scripts.pory"
	emote_question_mark
	step_end

# 120 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_8:
# 120 "data//maps/SSElegant/scripts.pory"
	face_right
	step_end

# 133 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_9:
# 133 "data//maps/SSElegant/scripts.pory"
	jump_in_place_down
# 133 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 134 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_10:
# 134 "data//maps/SSElegant/scripts.pory"
	jump_in_place_up
# 134 "data//maps/SSElegant/scripts.pory"
	emote_exclamation_mark
	step_end

# 144 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_11:
# 144 "data//maps/SSElegant/scripts.pory"
	walk_down
# 144 "data//maps/SSElegant/scripts.pory"
	walk_left
# 144 "data//maps/SSElegant/scripts.pory"
	walk_left
# 144 "data//maps/SSElegant/scripts.pory"
	walk_left
# 144 "data//maps/SSElegant/scripts.pory"
	walk_left
# 144 "data//maps/SSElegant/scripts.pory"
	walk_left
# 144 "data//maps/SSElegant/scripts.pory"
	walk_left
# 144 "data//maps/SSElegant/scripts.pory"
	walk_down
# 144 "data//maps/SSElegant/scripts.pory"
	walk_down
# 144 "data//maps/SSElegant/scripts.pory"
	walk_down
# 144 "data//maps/SSElegant/scripts.pory"
	walk_down
# 144 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 145 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_12:
# 145 "data//maps/SSElegant/scripts.pory"
	walk_down
# 145 "data//maps/SSElegant/scripts.pory"
	walk_left
# 145 "data//maps/SSElegant/scripts.pory"
	walk_left
# 145 "data//maps/SSElegant/scripts.pory"
	walk_left
# 145 "data//maps/SSElegant/scripts.pory"
	walk_left
# 145 "data//maps/SSElegant/scripts.pory"
	walk_left
# 145 "data//maps/SSElegant/scripts.pory"
	walk_left
# 145 "data//maps/SSElegant/scripts.pory"
	walk_left
# 145 "data//maps/SSElegant/scripts.pory"
	walk_down
# 145 "data//maps/SSElegant/scripts.pory"
	walk_down
# 145 "data//maps/SSElegant/scripts.pory"
	walk_down
# 145 "data//maps/SSElegant/scripts.pory"
	walk_down
# 145 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 146 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_13:
# 146 "data//maps/SSElegant/scripts.pory"
	walk_down
# 146 "data//maps/SSElegant/scripts.pory"
	walk_down
# 146 "data//maps/SSElegant/scripts.pory"
	walk_down
# 146 "data//maps/SSElegant/scripts.pory"
	walk_down
# 146 "data//maps/SSElegant/scripts.pory"
	walk_left
# 146 "data//maps/SSElegant/scripts.pory"
	walk_left
# 146 "data//maps/SSElegant/scripts.pory"
	walk_left
# 146 "data//maps/SSElegant/scripts.pory"
	walk_left
# 146 "data//maps/SSElegant/scripts.pory"
	walk_left
# 146 "data//maps/SSElegant/scripts.pory"
	walk_left
# 146 "data//maps/SSElegant/scripts.pory"
	walk_down
# 146 "data//maps/SSElegant/scripts.pory"
	walk_down
# 146 "data//maps/SSElegant/scripts.pory"
	walk_down
# 146 "data//maps/SSElegant/scripts.pory"
	walk_down
# 146 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 147 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_14:
# 147 "data//maps/SSElegant/scripts.pory"
	walk_down
# 147 "data//maps/SSElegant/scripts.pory"
	walk_down
# 147 "data//maps/SSElegant/scripts.pory"
	walk_down
# 147 "data//maps/SSElegant/scripts.pory"
	walk_down
# 147 "data//maps/SSElegant/scripts.pory"
	walk_left
# 147 "data//maps/SSElegant/scripts.pory"
	walk_left
# 147 "data//maps/SSElegant/scripts.pory"
	walk_left
# 147 "data//maps/SSElegant/scripts.pory"
	walk_left
# 147 "data//maps/SSElegant/scripts.pory"
	walk_left
# 147 "data//maps/SSElegant/scripts.pory"
	walk_left
# 147 "data//maps/SSElegant/scripts.pory"
	walk_left
# 147 "data//maps/SSElegant/scripts.pory"
	walk_down
# 147 "data//maps/SSElegant/scripts.pory"
	walk_down
# 147 "data//maps/SSElegant/scripts.pory"
	walk_down
# 147 "data//maps/SSElegant/scripts.pory"
	walk_down
# 147 "data//maps/SSElegant/scripts.pory"
	walk_down
	step_end

# 155 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_15:
# 155 "data//maps/SSElegant/scripts.pory"
	walk_up
# 155 "data//maps/SSElegant/scripts.pory"
	walk_up
# 155 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

SSElegant_SailorBlocker_Text_0:
# 14 "data//maps/SSElegant/scripts.pory"
	.string "You can't get off now - are you crazy?\n"
	.string "We're in the middle of the ocean!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_0:
# 63 "data//maps/SSElegant/scripts.pory"
	.string "Gabrielle$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_1:
# 63 "data//maps/SSElegant/scripts.pory"
	.string "{PLAYER}!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_2:
# 73 "data//maps/SSElegant/scripts.pory"
	.string "You heard the announcement, right?\n"
	.string "We've reached!\p"
	.string "The gym leaders are getting off, but\n"
	.string "the crew won't let the civilians leave!\p"
	.string "We've got to find a way past them\n"
	.string "somehow...but with just the two of us, I\l"
	.string "really don't know how we can do it...\p"
	.string "...$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_3:
# 77 "data//maps/SSElegant/scripts.pory"
	.string "Breech$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_4:
# 77 "data//maps/SSElegant/scripts.pory"
	.string "We'll help out!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_5:
# 97 "data//maps/SSElegant/scripts.pory"
	.string "It's you! The hiker with the Clefairy\n"
	.string "near Fennilahl Town!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_6:
# 102 "data//maps/SSElegant/scripts.pory"
	.string "You're the Team Somber grunt! You tried\n"
	.string "to take Clefable's everstone!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_7:
# 107 "data//maps/SSElegant/scripts.pory"
	.string "I-I uh...\p"
	.string "...\p"
	.string "Ahem.\p"
	.string "Zoroark and I are sorry for what we did\n"
	.string "to you two back there.\p"
	.string "We really are.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_8:
# 108 "data//maps/SSElegant/scripts.pory"
	.string "Why are you helping {PLAYER}? Are you\n"
	.string "still part of Team Somber?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_9:
# 109 "data//maps/SSElegant/scripts.pory"
	.string "No. I-uh...I got fired.\n"
	.string "For helping {PLAYER} sneak into our\l"
	.string "headquarters.\p"
	.string "And since then, Zoroark and I...we've\n"
	.string "been trying to do better. Trying to be\l"
	.string "more like {PLAYER}.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_10:
# 110 "data//maps/SSElegant/scripts.pory"
	.string "I guess both of us learned something\n"
	.string "from {PLAYER}.\p"
	.string "...\p"
	.string "What you did was really bad.\p"
	.string "But right now, we'd be bad for not\n"
	.string "helping you do a good thing!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_11:
# 112 "data//maps/SSElegant/scripts.pory"
	.string "So...we team up for now?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_12:
# 113 "data//maps/SSElegant/scripts.pory"
	.string "Yeah, we team up for now.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_13:
# 118 "data//maps/SSElegant/scripts.pory"
	.string "So what's the plan?$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_14:
# 119 "data//maps/SSElegant/scripts.pory"
	.string "This is the plan!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_15:
# 123 "data//maps/SSElegant/scripts.pory"
	.string "Go on, Zoroark!$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_16:
# 139 "data//maps/SSElegant/scripts.pory"
	.string "Zoroark and I will go down to the\n"
	.string "storage hold and distract the crew\l"
	.string "there!\p"
	.string "After that, you two try and find a way\n"
	.string "out through the hold.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_17:
# 140 "data//maps/SSElegant/scripts.pory"
	.string "Okay, we'll do what we can.$"

SSElegant_Gab_Breech_TeamUp_Trigger_Text_18:
# 141 "data//maps/SSElegant/scripts.pory"
	.string "Got it, {PLAYER}?\n"
	.string "When you're ready, meet us at the\l"
	.string "storage hold. Make sure you have\l"
	.string "everything you need!$"

SSElegant_Aggron_Text_0:
# 197 "data//maps/SSElegant/scripts.pory"
	.string "Aggron glares at you.$"

SSElegant_Jania_Text_0:
# 202 "data//maps/SSElegant/scripts.pory"
	.string "What? A leader can't have any hobbies?$"

SSElegant_Jania_Text_1:
# 202 "data//maps/SSElegant/scripts.pory"
	.string "Back to drawing, Smeargle!$"

SSElegant_Jania_Text_2:
# 203 "data//maps/SSElegant/scripts.pory"
	.string "I don't get much free time, but when I\n"
	.string "do, I enjoy painting.$"

SSElegant_Minior_Text_0:
# 213 "data//maps/SSElegant/scripts.pory"
	.string "$"
