# 1 "data//maps/UnchartedIsland/scripts.pory"

# 2 "data//maps/UnchartedIsland/scripts.pory"
    .set LOCALID_MOXIE_1, 18

UnchartedIsland_MapScripts::
	.byte 0


UnchartedIsland_Leader_Caught_A::
# 12 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 13 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 6, 34
# 14 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Leader_Caught_B::
# 18 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Leader_Caught_A_Text_0
# 19 "data//maps/UnchartedIsland/scripts.pory"
	warp MAP_UNCHARTED_ISLAND, 37, 24
# 20 "data//maps/UnchartedIsland/scripts.pory"
	delay 60
	return


UnchartedIsland_Inger::
# 24 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Inger_Text_0
# 25 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Ariana::
# 28 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Ariana_Text_0
# 29 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Gloria::
# 32 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Gloria_Text_0
# 33 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_A
	return


UnchartedIsland_Carona::
# 36 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Carona_Text_0
# 37 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Jania::
# 43 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Jania_Text_0
# 44 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Raazi::
# 47 "data//maps/UnchartedIsland/scripts.pory"
	speakername UnchartedIsland_Raazi_Text_0
# 48 "data//maps/UnchartedIsland/scripts.pory"
	call UnchartedIsland_Leader_Caught_B
	return


UnchartedIsland_Grunt_A::
# 60 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_A, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_0
# 61 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_0, MSGBOX_NPC
	end


UnchartedIsland_Grunt_B::
# 65 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_B, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_0
# 66 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_0, MSGBOX_NPC
	end


UnchartedIsland_Grunt_C::
# 70 "data//maps/UnchartedIsland/scripts.pory"
	trainerbattle_single TRAINER_UNCHARTED_ISLAND_GRUNT_C, UnchartedIsland_Grunt_A_Text_0, UnchartedIsland_Grunt_A_Text_0
# 71 "data//maps/UnchartedIsland/scripts.pory"
	msgbox UnchartedIsland_Grunt_A_Text_0, MSGBOX_NPC
	end


UnchartedIsland_Moxie_Viewpoint_Trigger::
# 87 "data//maps/UnchartedIsland/scripts.pory"
	goto_if_set FLAG_ISLAND_MOXIE_VIEWPOINT, UnchartedIsland_Moxie_Viewpoint_Trigger_2
# 89 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 91 "data//maps/UnchartedIsland/scripts.pory"
	special SpawnCameraObject
# 92 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0
# 93 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 96 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1
# 97 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 98 "data//maps/UnchartedIsland/scripts.pory"
	delay 24
# 99 "data//maps/UnchartedIsland/scripts.pory"
	applymovement LOCALID_MOXIE_1, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_2
# 100 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 101 "data//maps/UnchartedIsland/scripts.pory"
	removeobject LOCALID_MOXIE_1
# 103 "data//maps/UnchartedIsland/scripts.pory"
	setflag FLAG_ISLAND_MOXIE_VIEWPOINT
# 105 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_3
# 106 "data//maps/UnchartedIsland/scripts.pory"
	waitmovement 0
# 107 "data//maps/UnchartedIsland/scripts.pory"
	special RemoveCameraObject
# 109 "data//maps/UnchartedIsland/scripts.pory"
	releaseall
	end

UnchartedIsland_Moxie_Viewpoint_Trigger_2:
	end


UnchartedIsland_Moxie_Trigger0::
# 116 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 117 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger0_Movement_0
# 119 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return


UnchartedIsland_Moxie_Trigger1::
# 122 "data//maps/UnchartedIsland/scripts.pory"
	lockall
# 123 "data//maps/UnchartedIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, UnchartedIsland_Moxie_Trigger1_Movement_0
# 125 "data//maps/UnchartedIsland/scripts.pory"
	goto UnchartedIsland_Moxie_Melea_Fight
	return


UnchartedIsland_Moxie_Melea_Fight::
	return


# 92 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_0:
# 92 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
# 92 "data//maps/UnchartedIsland/scripts.pory"
	walk_down
	step_end

# 96 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_1:
# 96 "data//maps/UnchartedIsland/scripts.pory"
	emote_exclamation_mark
	step_end

# 99 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_2:
# 99 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 99 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 99 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 99 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 105 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Viewpoint_Trigger_Movement_3:
# 105 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 105 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
	step_end

# 117 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger0_Movement_0:
# 117 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 117 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 117 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 117 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 117 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 117 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

# 123 "data//maps/UnchartedIsland/scripts.pory"
UnchartedIsland_Moxie_Trigger1_Movement_0:
# 123 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 123 "data//maps/UnchartedIsland/scripts.pory"
	walk_up
# 123 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 123 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 123 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 123 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
# 123 "data//maps/UnchartedIsland/scripts.pory"
	walk_right
	step_end

UnchartedIsland_Leader_Caught_A_Text_0:
# 12 "data//maps/UnchartedIsland/scripts.pory"
	.string "Hey! What are you doing here? You\n"
	.string "should be on the S.S. Elegant.$"

UnchartedIsland_Inger_Text_0:
# 24 "data//maps/UnchartedIsland/scripts.pory"
	.string "Inger$"

UnchartedIsland_Ariana_Text_0:
# 28 "data//maps/UnchartedIsland/scripts.pory"
	.string "Ariana$"

UnchartedIsland_Gloria_Text_0:
# 32 "data//maps/UnchartedIsland/scripts.pory"
	.string "Gloria$"

UnchartedIsland_Carona_Text_0:
# 36 "data//maps/UnchartedIsland/scripts.pory"
	.string "Carona$"

UnchartedIsland_Jania_Text_0:
# 43 "data//maps/UnchartedIsland/scripts.pory"
	.string "Jania$"

UnchartedIsland_Raazi_Text_0:
# 47 "data//maps/UnchartedIsland/scripts.pory"
	.string "Raazi$"

UnchartedIsland_Grunt_A_Text_0:
# 60 "data//maps/UnchartedIsland/scripts.pory"
	.string "$"
