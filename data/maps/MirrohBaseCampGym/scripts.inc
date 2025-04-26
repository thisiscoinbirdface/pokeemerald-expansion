MirrohBaseCampGym_MapScripts::
# 2 "data//maps/MirrohBaseCampGym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MirrohBaseCampGym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MirrohBaseCampGym_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/MirrohBaseCampGym/scripts.pory"
	map_script_2 VAR_MIRROHBASECAMPGYM_STATE, 0, MirrohBaseCampGym_EventScript_Main
	.2byte 0


MirrohBaseCampGym_EventScript_Main::
# 8 "data//maps/MirrohBaseCampGym/scripts.pory"
	lockall
# 9 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SpawnCameraObject
# 10 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_EventScript_Main_Movement_0
# 11 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 13 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 15 "data//maps/MirrohBaseCampGym/scripts.pory"
	setvar VAR_MIRROHBASECAMPGYM_STATE, 1
# 16 "data//maps/MirrohBaseCampGym/scripts.pory"
	releaseall
	end


MirrohBaseCampGym_Leader::
# 25 "data//maps/MirrohBaseCampGym/scripts.pory"
	lockall
# 26 "data//maps/MirrohBaseCampGym/scripts.pory"
	faceplayer
# 28 "data//maps/MirrohBaseCampGym/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_LEADER, MirrohBaseCampGym_Leader_2
# 33 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_2
# 34 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_3
# 35 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 36 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 37 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 38 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_4
# 39 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 40 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 60
# 41 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 42 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_5
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 44 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 30
# 45 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 46 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_6
# 47 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 48 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement 1, MirrohBaseCampGym_Leader_Movement_0
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 50 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 12
# 51 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 52 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_7
# 53 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 54 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 60
# 55 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 56 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_8, MSGBOX_YESNO
# 57 "data//maps/MirrohBaseCampGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCampGym_Leader_5
# 112 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 113 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_16
# 114 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
MirrohBaseCampGym_Leader_1:
# 117 "data//maps/MirrohBaseCampGym/scripts.pory"
	releaseall
	return

MirrohBaseCampGym_Leader_2:
# 29 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 30 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_1
	goto MirrohBaseCampGym_Leader_1

MirrohBaseCampGym_Leader_5:
# 58 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 59 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_9
# 60 "data//maps/MirrohBaseCampGym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 61 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 62 "data//maps/MirrohBaseCampGym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 1, 5
# 64 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SpawnCameraObject
# 65 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_Leader_Movement_1
# 66 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 67 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 68 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_Leader_Movement_2
# 69 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement 1, MirrohBaseCampGym_Leader_Movement_3
# 70 "data//maps/MirrohBaseCampGym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 71 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 72 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_10
# 73 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 76 "data//maps/MirrohBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHBASECAMP_LEADER, MirrohBaseCampGym_Leader_Text_11
# 80 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 81 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_12
# 82 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 84 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SpawnCameraObject
# 85 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_Leader_Movement_1
# 86 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_Leader_Movement_4
# 87 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 88 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 97 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 98 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_13
# 99 "data//maps/MirrohBaseCampGym/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_LEADER
# 100 "data//maps/MirrohBaseCampGym/scripts.pory"
	giveitem ITEM_MEGA_RING
# 102 "data//maps/MirrohBaseCampGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 104 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 105 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_14
# 106 "data//maps/MirrohBaseCampGym/scripts.pory"
	giveitem ITEM_RARE_SHARD, 2
# 107 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 108 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_15
# 109 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
	goto MirrohBaseCampGym_Leader_1


# 10 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_EventScript_Main_Movement_0:
# 10 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_up
# 10 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_up
# 10 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_up
# 10 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_up
	step_end

# 48 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_0:
# 48 "data//maps/MirrohBaseCampGym/scripts.pory"
	emote_exclamation_mark
	step_end

# 65 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_1:
# 65 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 65 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
	step_end

# 68 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_2:
# 68 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_right
	step_end

# 69 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_3:
# 69 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_left
	step_end

# 86 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_4:
# 86 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 86 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 86 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 86 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 86 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 86 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
	step_end

MirrohBaseCampGym_Leader_Text_0:
# 29 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Carona$"

MirrohBaseCampGym_Leader_Text_1:
# 30 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Use your power wisely. As for me, it's\n"
	.string "time to move on.$"

MirrohBaseCampGym_Leader_Text_2:
# 33 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "???$"

MirrohBaseCampGym_Leader_Text_3:
# 34 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Hmm? A trainer? Welcome to the Mirroh\n"
	.string "Base Camp Gym...\p"
	.string "...\p"
	.string "...is what I would say if there was a Gym\n"
	.string "left.$"

MirrohBaseCampGym_Leader_Text_4:
# 38 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "My name is Carona, trainer. I am the\n"
	.string "former Leader of the Mirroh Base Camp\l"
	.string "Gym. The Pokémon League recently\l"
	.string "decomissioned this gym.$"

MirrohBaseCampGym_Leader_Text_5:
# 42 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "They took the entrance statues out\n"
	.string "first. Then they removed all the gym\l"
	.string "puzzle equipment.\p"
	.string "...\p"
	.string "Finally, one by one, all my trainers left.$"

MirrohBaseCampGym_Leader_Text_6:
# 46 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "And now it's just me in this empty\n"
	.string "warehouse. Like a ghost. Just like the\l"
	.string "rest of this little town of ours.$"

MirrohBaseCampGym_Leader_Text_7:
# 52 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "But I was a Gym Leader once! You\n"
	.string "understand? I was powerful and strong.\l"
	.string "I was something, someone! Countless\l"
	.string "trainers paid me their respects in\l"
	.string "battle, and to the chosen few destined\l"
	.string "for the top, I would award the coveted\l"
	.string "lapel pin known as the Ironfist Badge!$"

MirrohBaseCampGym_Leader_Text_8:
# 56 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "...but that's all in the past. Next week\n"
	.string "the construction crew will come to\l"
	.string "demolish this building. You were lucky\l"
	.string "you found me. I just dropped in to...just\l"
	.string "to be here again, and just...\p"
	.string "...but something's missing.\p"
	.string "You're a trainer, aren't you? Would you\n"
	.string "care to indulge me a little? I'd like to\l"
	.string "be challenged by a trainer. It would\l"
	.string "mean everything if I could ride that\l"
	.string "thrill just once more.$"

MirrohBaseCampGym_Leader_Text_9:
# 59 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "You are too kind, trainer. Come then, let\n"
	.string "us battle. Let these four empty walls\l"
	.string "be our spectators, this crooked floor\l"
	.string "our stadium, and the silence our cheers!$"

MirrohBaseCampGym_Leader_Text_10:
# 72 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Now, trainer, feel the force of these\n"
	.string "iron fists!$"

MirrohBaseCampGym_Leader_Text_11:
# 76 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "A glorious battle!$"

MirrohBaseCampGym_Leader_Text_12:
# 81 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "What a beautiful display! What a thrill!\n"
	.string "This is why we do what we do, trainer!\p"
	.string "Now come to me.$"

MirrohBaseCampGym_Leader_Text_13:
# 98 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Unfortunately I don't have a badge to\n"
	.string "award you any more.\p"
	.string "But I have something else.\p"
	.string "I see the closure of this gym as\n"
	.string "destiny's way of telling Lucario and me\l"
	.string "to lay down our fists. It's time we\l"
	.string "explored new things. So I won't need\l"
	.string "this any more, and as my final opponent,\l"
	.string "I want you to have it.$"

MirrohBaseCampGym_Leader_Text_14:
# 105 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "The Mega Ring will allow you to Mega\n"
	.string "Evolve specific Pokémon as long as they\l"
	.string "hold their unique Mega Stone.\p"
	.string "Please take these with you as well.$"

MirrohBaseCampGym_Leader_Text_15:
# 108 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I feel satisfied. A fitting end - to\n"
	.string "have been defeated by a trainer of your\l"
	.string "caliber!\p"
	.string "Carry on our legacy, {PLAYER}! Show\n"
	.string "the world your iron fists!$"

MirrohBaseCampGym_Leader_Text_16:
# 113 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Haha! A fitting finale in a way.$"
