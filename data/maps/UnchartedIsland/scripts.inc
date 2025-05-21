# 1 "data//maps/UnchartedIsland/scripts.pory"

# 2 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_MOXIE_1, 18

UnchartedIsland_MapScripts::
# 7 "data//maps/UnchartedIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UnchartedIsland_OnTransition
	.byte 0


UnchartedIsland_OnTransition::
# 13 "data//maps/UnchartedIsland/scripts.pory"
	setrespawn HEAL_LOCATION_UNCHARTED_ISLAND
	end


UnchartedIsland_Leader_Caught_A::
# 21 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 22 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
# 23 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_B::
# 27 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 28 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 37, 24
# 29 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Inger::
# 33 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Inger_Text_0
# 34 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Ariana::
# 37 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Ariana_Text_0
# 38 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Gloria::
# 41 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Gloria_Text_0
# 42 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Carona::
# 45 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Carona_Text_0
# 46 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Jania::
# 52 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Jania_Text_0
# 53 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Raazi::
# 56 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Raazi_Text_0
# 57 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Grunt_A::
# 69 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_A, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_0
# 70 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_0, MSGBOX_NPC
	end


UnchartedIsland_Grunt_B::
# 74 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_B, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_0
# 75 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_0, MSGBOX_NPC
	end


UnchartedIsland_Grunt_C::
# 79 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_C, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_0
# 80 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_0, MSGBOX_NPC
	end


UnchartedIsland_Moxie_Viewpoint_Trigger::
# 96 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_2
# 98 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 100 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 101 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0
# 102 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 105 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1
# 106 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 107 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 108 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_2
# 109 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 110 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_1
# 112 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_VIEWPOINT
# 114 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_3
# 115 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 116 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 118 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end

UnchartedIsland_Moxie_Viewpoint_Trigger_2:
	end


UnchartedIsland_Moxie_Trigger0::
# 125 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 126 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger0_Movement_0
# 127 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return


UnchartedIsland_Moxie_Trigger1::
# 130 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 131 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger1_Movement_0
# 132 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return


UnchartedIsland_Moxie_Melea_Fight::
	return


# 101 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0:
# 101 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 101 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 105 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1:
# 105 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
	step_end

# 108 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_2:
# 108 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 108 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 108 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 108 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 114 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_3:
# 114 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 114 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 126 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger0_Movement_0:
# 126 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 126 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 126 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 126 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 126 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 126 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 131 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger1_Movement_0:
# 131 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 131 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 131 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 131 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 131 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 131 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 131 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

UnchartedIsland_Leader_Caught_A_Text_0:
# 21 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey! What are you doing here? You\n"
	.string "should be on the S.S. Elegant.$"

UnchartedIsland_Inger_Text_0:
# 33 "data//maps/UnchartedIsland/scripts.pory"
	.string "Inger$"

UnchartedIsland_Ariana_Text_0:
# 37 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ariana$"

UnchartedIsland_Gloria_Text_0:
# 41 "data//maps/UnchartedIsland/scripts.pory"
	.string "Gloria$"

UnchartedIsland_Carona_Text_0:
# 45 "data//maps/UnchartedIsland/scripts.pory"
	.string "Carona$"

UnchartedIsland_Jania_Text_0:
# 52 "data//maps/UnchartedIsland/scripts.pory"
	.string "Jania$"

UnchartedIsland_Raazi_Text_0:
# 56 "data//maps/UnchartedIsland/scripts.pory"
	.string "Raazi$"

UnchartedIsland_Grunt_A_Text_0:
# 69 "data//maps/UnchartedIsland/scripts.pory"
	.string "$"
