AncientMirroh_Caves_MapScripts::
# 2 "data//maps/AncientMirroh_Caves/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AncientMirroh_Caves_1F_SetHoleWarp
	.byte 0


AncientMirroh_Caves_1F_SetHoleWarp::
# 6 "data//maps/AncientMirroh_Caves/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 7 "data//maps/AncientMirroh_Caves/scripts.pory"
	setholewarp MAP_ANCIENT_MIRROH_CAVES_B1F
	end


AncientMirroh_Tenebris_Caves_Trigger::
# 13 "data//maps/AncientMirroh_Caves/scripts.pory"
	goto_if_set FLAG_ANCIENT_MIRROH_PROF_TENEBRIS_INSIDE, AncientMirroh_Tenebris_Caves_Trigger_2
# 15 "data//maps/AncientMirroh_Caves/scripts.pory"
	lockall
# 16 "data//maps/AncientMirroh_Caves/scripts.pory"
	special SpawnCameraObject
# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tenebris_Caves_Trigger_Movement_0
# 18 "data//maps/AncientMirroh_Caves/scripts.pory"
	waitmovement 0
# 19 "data//maps/AncientMirroh_Caves/scripts.pory"
	special RemoveCameraObject
# 21 "data//maps/AncientMirroh_Caves/scripts.pory"
	applymovement 2, AncientMirroh_Tenebris_Caves_Trigger_Movement_1
# 22 "data//maps/AncientMirroh_Caves/scripts.pory"
	waitmovement 0
# 24 "data//maps/AncientMirroh_Caves/scripts.pory"
	removeobject 2
# 26 "data//maps/AncientMirroh_Caves/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_PROF_TENEBRIS_INSIDE
# 28 "data//maps/AncientMirroh_Caves/scripts.pory"
	special SpawnCameraObject
# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, AncientMirroh_Tenebris_Caves_Trigger_Movement_2
# 30 "data//maps/AncientMirroh_Caves/scripts.pory"
	waitmovement 0
# 31 "data//maps/AncientMirroh_Caves/scripts.pory"
	special RemoveCameraObject
# 33 "data//maps/AncientMirroh_Caves/scripts.pory"
	releaseall
	end

AncientMirroh_Tenebris_Caves_Trigger_2:
	end


AncientMirroh_Aerodactyl::
# 39 "data//maps/AncientMirroh_Caves/scripts.pory"
	lockall
# 40 "data//maps/AncientMirroh_Caves/scripts.pory"
	msgbox AncientMirroh_Aerodactyl_Text_0, MSGBOX_YESNO
# 42 "data//maps/AncientMirroh_Caves/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AncientMirroh_Aerodactyl_2
# 44 "data//maps/AncientMirroh_Caves/scripts.pory"
	playmoncry SPECIES_AERODACTYL, CRY_MODE_NORMAL
# 46 "data//maps/AncientMirroh_Caves/scripts.pory"
	setwildbattle SPECIES_AERODACTYL, 35
# 47 "data//maps/AncientMirroh_Caves/scripts.pory"
	dowildbattle
# 50 "data//maps/AncientMirroh_Caves/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 51 "data//maps/AncientMirroh_Caves/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq AncientMirroh_Aerodactyl_5
AncientMirroh_Aerodactyl_4:
# 54 "data//maps/AncientMirroh_Caves/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq AncientMirroh_Aerodactyl_8
AncientMirroh_Aerodactyl_7:
# 57 "data//maps/AncientMirroh_Caves/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq AncientMirroh_Aerodactyl_11
AncientMirroh_Aerodactyl_10:
# 61 "data//maps/AncientMirroh_Caves/scripts.pory"
	releaseall
	end

AncientMirroh_Aerodactyl_2:
	end

AncientMirroh_Aerodactyl_5:
# 52 "data//maps/AncientMirroh_Caves/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_AERODACTYL
	goto AncientMirroh_Aerodactyl_4

AncientMirroh_Aerodactyl_8:
# 55 "data//maps/AncientMirroh_Caves/scripts.pory"
	setflag FLAG_ANCIENT_MIRROH_AERODACTYL
	goto AncientMirroh_Aerodactyl_7

AncientMirroh_Aerodactyl_11:
# 58 "data//maps/AncientMirroh_Caves/scripts.pory"
	msgbox AncientMirroh_Aerodactyl_Text_1
	goto AncientMirroh_Aerodactyl_10


AncientMirroh_Tenebris_Item::
# 71 "data//maps/AncientMirroh_Caves/scripts.pory"
	lockall
# 72 "data//maps/AncientMirroh_Caves/scripts.pory"
	removeobject 4
# 73 "data//maps/AncientMirroh_Caves/scripts.pory"
	giveitem ITEM_RARE_SHARD
# 74 "data//maps/AncientMirroh_Caves/scripts.pory"
	delay 16
# 75 "data//maps/AncientMirroh_Caves/scripts.pory"
	msgbox AncientMirroh_Tenebris_Item_Text_0
# 77 "data//maps/AncientMirroh_Caves/scripts.pory"
	setflag FLAG_ITEM_ANCIENTMIRROH_F
# 78 "data//maps/AncientMirroh_Caves/scripts.pory"
	releaseall
	end


# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
AncientMirroh_Tenebris_Caves_Trigger_Movement_0:
# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 17 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
	step_end

# 21 "data//maps/AncientMirroh_Caves/scripts.pory"
AncientMirroh_Tenebris_Caves_Trigger_Movement_1:
# 21 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 21 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 21 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
# 21 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_down
	step_end

# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
AncientMirroh_Tenebris_Caves_Trigger_Movement_2:
# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_up
# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_up
# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_up
# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_up
# 29 "data//maps/AncientMirroh_Caves/scripts.pory"
	walk_up
	step_end

AncientMirroh_Aerodactyl_Text_0:
# 40 "data//maps/AncientMirroh_Caves/scripts.pory"
	.string "It's an ancient Pokémon!\n"
	.string "It's roosting. Wake it up?$"

AncientMirroh_Aerodactyl_Text_1:
# 58 "data//maps/AncientMirroh_Caves/scripts.pory"
	.string "The Pokémon settles back into its\n"
	.string "sleep...$"

AncientMirroh_Tenebris_Item_Text_0:
# 75 "data//maps/AncientMirroh_Caves/scripts.pory"
	.string "Was this left behind by that lady?$"
