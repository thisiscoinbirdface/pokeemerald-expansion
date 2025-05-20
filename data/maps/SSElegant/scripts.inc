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
	addobject LOCALID_GAB
# 64 "data//maps/SSElegant/scripts.pory"
	addobject LOCALID_ZORO
# 66 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_GAB, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 67 "data//maps/SSElegant/scripts.pory"
	applymovement LOCALID_ZORO, SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0
# 68 "data//maps/SSElegant/scripts.pory"
	waitmovement 0
# 70 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Aggron::
# 105 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_AGGRON, CRY_MODE_NORMAL
# 106 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Aggron_Text_0, MSGBOX_NPC
	end


SSElegant_Jania::
# 111 "data//maps/SSElegant/scripts.pory"
	trainerbattle_single TRAINER_SSELEGANT_JANIA, SSElegant_Jania_Text_0, SSElegant_Jania_Text_1
# 112 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Jania_Text_2
# 113 "data//maps/SSElegant/scripts.pory"
	releaseall
	end


SSElegant_Inger::
	return


SSElegant_Minior::
# 121 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 122 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_Ariana::
	return


SSElegant_Tauros::
# 130 "data//maps/SSElegant/scripts.pory"
	playmoncry SPECIES_TAUROS_PALDEA_BLAZE, CRY_MODE_NORMAL
# 131 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC1::
# 137 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC2::
# 142 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC3::
# 147 "data//maps/SSElegant/scripts.pory"
	msgbox SSElegant_Minior_Text_0, MSGBOX_NPC
	end


SSElegant_NPC4::
# 152 "data//maps/SSElegant/scripts.pory"
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

# 66 "data//maps/SSElegant/scripts.pory"
SSElegant_Gab_Breech_TeamUp_Trigger_Movement_0:
# 66 "data//maps/SSElegant/scripts.pory"
	walk_up
# 66 "data//maps/SSElegant/scripts.pory"
	walk_up
# 66 "data//maps/SSElegant/scripts.pory"
	walk_up
# 66 "data//maps/SSElegant/scripts.pory"
	walk_up
# 66 "data//maps/SSElegant/scripts.pory"
	walk_up
	step_end

SSElegant_SailorBlocker_Text_0:
# 14 "data//maps/SSElegant/scripts.pory"
	.string "You can't get off now - are you crazy?\n"
	.string "We're in the middle of the ocean!$"

SSElegant_Aggron_Text_0:
# 106 "data//maps/SSElegant/scripts.pory"
	.string "Aggron glares at you.$"

SSElegant_Jania_Text_0:
# 111 "data//maps/SSElegant/scripts.pory"
	.string "What? A leader can't have any hobbies?$"

SSElegant_Jania_Text_1:
# 111 "data//maps/SSElegant/scripts.pory"
	.string "Back to drawing, Smeargle!$"

SSElegant_Jania_Text_2:
# 112 "data//maps/SSElegant/scripts.pory"
	.string "I don't get much free time, but when I\n"
	.string "do, I enjoy painting.$"

SSElegant_Minior_Text_0:
# 122 "data//maps/SSElegant/scripts.pory"
	.string "$"
