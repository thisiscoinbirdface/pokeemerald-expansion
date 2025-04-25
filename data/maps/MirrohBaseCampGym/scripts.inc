MirrohBaseCampGym_MapScripts::
	.byte 0


MirrohBaseCampGym_Leader::
# 5 "data//maps/MirrohBaseCampGym/scripts.pory"
	lockall
# 6 "data//maps/MirrohBaseCampGym/scripts.pory"
	faceplayer
# 8 "data//maps/MirrohBaseCampGym/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_LEADER, MirrohBaseCampGym_Leader_2
# 13 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_2
# 14 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_3
# 15 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 16 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 16
# 17 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 18 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_4
# 19 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 20 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 60
# 21 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 22 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_5
# 23 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 24 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 30
# 25 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 26 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_6
# 27 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 28 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement 1, MirrohBaseCampGym_Leader_Movement_0
# 29 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 30 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 12
# 31 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 32 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_7
# 33 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 34 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 60
# 35 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 36 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_8, MSGBOX_YESNO
# 37 "data//maps/MirrohBaseCampGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCampGym_Leader_5
# 92 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 93 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_16
# 94 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
MirrohBaseCampGym_Leader_1:
# 97 "data//maps/MirrohBaseCampGym/scripts.pory"
	releaseall
	return

MirrohBaseCampGym_Leader_2:
# 9 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 10 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_1
	goto MirrohBaseCampGym_Leader_1

MirrohBaseCampGym_Leader_5:
# 38 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 39 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_9
# 40 "data//maps/MirrohBaseCampGym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 42 "data//maps/MirrohBaseCampGym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 1, 5
# 44 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SpawnCameraObject
# 45 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_Leader_Movement_1
# 46 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 47 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 48 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_Leader_Movement_2
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement 1, MirrohBaseCampGym_Leader_Movement_3
# 50 "data//maps/MirrohBaseCampGym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 51 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 52 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_10
# 53 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 56 "data//maps/MirrohBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHBASECAMP_LEADER, MirrohBaseCampGym_Leader_Text_11
# 60 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 61 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_12
# 62 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 64 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SpawnCameraObject
# 65 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_Leader_Movement_1
# 66 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_Leader_Movement_4
# 67 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 68 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 77 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 78 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_13
# 79 "data//maps/MirrohBaseCampGym/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_LEADER
# 80 "data//maps/MirrohBaseCampGym/scripts.pory"
	giveitem ITEM_MEGA_RING
# 82 "data//maps/MirrohBaseCampGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 84 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 85 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_14
# 86 "data//maps/MirrohBaseCampGym/scripts.pory"
	giveitem ITEM_RARE_SHARD, 2
# 87 "data//maps/MirrohBaseCampGym/scripts.pory"
	speakername MirrohBaseCampGym_Leader_Text_0
# 88 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_15
# 89 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
	goto MirrohBaseCampGym_Leader_1


# 28 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_0:
# 28 "data//maps/MirrohBaseCampGym/scripts.pory"
	emote_exclamation_mark
	step_end

# 45 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_1:
# 45 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 45 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
	step_end

# 48 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_2:
# 48 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_right
	step_end

# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_3:
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_left
	step_end

# 66 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_4:
# 66 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 66 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 66 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 66 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 66 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 66 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
	step_end

MirrohBaseCampGym_Leader_Text_0:
# 9 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Carona$"

MirrohBaseCampGym_Leader_Text_1:
# 10 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Use your power wisely. As for me, it's\n"
	.string "time to move on.$"

MirrohBaseCampGym_Leader_Text_2:
# 13 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "???$"

MirrohBaseCampGym_Leader_Text_3:
# 14 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Hmm? A trainer? Welcome to the Mirroh\n"
	.string "Base Camp Gym...\p"
	.string "...\p"
	.string "...is what I would say if there was a Gym\n"
	.string "left.$"

MirrohBaseCampGym_Leader_Text_4:
# 18 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "My name is Carona, trainer. I am the\n"
	.string "former Leader of the Mirroh Base Camp\l"
	.string "Gym. The Pokémon League recently\l"
	.string "decomissioned this gym.$"

MirrohBaseCampGym_Leader_Text_5:
# 22 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "They took the entrance statues out\n"
	.string "first. Then they removed all the gym\l"
	.string "puzzle equipment.\p"
	.string "...\p"
	.string "Finally, one by one, all my trainers left.$"

MirrohBaseCampGym_Leader_Text_6:
# 26 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "And now it's just me in this empty\n"
	.string "warehouse. Like a ghost. Just like the\l"
	.string "rest of this little town of ours.$"

MirrohBaseCampGym_Leader_Text_7:
# 32 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "But I was a Gym Leader once! You\n"
	.string "understand? I was powerful and strong.\l"
	.string "I was something, someone! Countless\l"
	.string "trainers paid me their respects in\l"
	.string "battle, and to the chosen few destined\l"
	.string "for the top, I would award the coveted\l"
	.string "lapel pin known as the Ironfist Badge!$"

MirrohBaseCampGym_Leader_Text_8:
# 36 "data//maps/MirrohBaseCampGym/scripts.pory"
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
# 39 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "You are too kind, trainer. Come then, let\n"
	.string "us battle. Let these four empty walls\l"
	.string "be our spectators, this crooked floor\l"
	.string "our stadium, and the silence our cheers!$"

MirrohBaseCampGym_Leader_Text_10:
# 52 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Now, trainer, feel the force of these\n"
	.string "iron fists!$"

MirrohBaseCampGym_Leader_Text_11:
# 56 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "A glorious battle!$"

MirrohBaseCampGym_Leader_Text_12:
# 61 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "What a beautiful display! What a thrill!\n"
	.string "This is why we do what we do, trainer!\p"
	.string "Now come to me.$"

MirrohBaseCampGym_Leader_Text_13:
# 78 "data//maps/MirrohBaseCampGym/scripts.pory"
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
# 85 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "The Mega Ring will allow you to Mega\n"
	.string "Evolve specific Pokémon as long as they\l"
	.string "hold their unique Mega Stone.\p"
	.string "Please take these with you as well.$"

MirrohBaseCampGym_Leader_Text_15:
# 88 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "I feel satisfied. A fitting end - to\n"
	.string "have been defeated by a trainer of your\l"
	.string "caliber!\p"
	.string "Carry on our legacy, {PLAYER}! Show\n"
	.string "the world your iron fists!$"

MirrohBaseCampGym_Leader_Text_16:
# 93 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "Haha! A fitting finale in a way.$"
