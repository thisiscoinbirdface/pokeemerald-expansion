MirrohBaseCampGym_MapScripts::
	.byte 0


MirrohBaseCampGym_Leader::
# 5 "data//maps/MirrohBaseCampGym/scripts.pory"
	lockall
# 6 "data//maps/MirrohBaseCampGym/scripts.pory"
	faceplayer
# 8 "data//maps/MirrohBaseCampGym/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_LEADER, MirrohBaseCampGym_Leader_2
# 12 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_1
# 13 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 14 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 60
# 15 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_2
# 16 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 17 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 30
# 18 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_3
# 19 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 20 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement 1, MirrohBaseCampGym_Leader_Movement_0
# 21 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_4
# 22 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 23 "data//maps/MirrohBaseCampGym/scripts.pory"
	delay 60
# 24 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_5, MSGBOX_YESNO
# 25 "data//maps/MirrohBaseCampGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCampGym_Leader_5
# 73 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_13
# 74 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
MirrohBaseCampGym_Leader_1:
# 77 "data//maps/MirrohBaseCampGym/scripts.pory"
	releaseall
	return

MirrohBaseCampGym_Leader_2:
# 9 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_0
	goto MirrohBaseCampGym_Leader_1

MirrohBaseCampGym_Leader_5:
# 26 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_6
# 27 "data//maps/MirrohBaseCampGym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data//maps/MirrohBaseCampGym/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 1, 5
# 30 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SpawnCameraObject
# 31 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MirrohBaseCampGym_Leader_Movement_1
# 32 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 33 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 34 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_Leader_Movement_2
# 35 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement 1, MirrohBaseCampGym_Leader_Movement_3
# 36 "data//maps/MirrohBaseCampGym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 37 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_7
# 38 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 41 "data//maps/MirrohBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHBASECAMP_LEADER, MirrohBaseCampGym_Leader_Text_8
# 45 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_9
# 46 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 48 "data//maps/MirrohBaseCampGym/scripts.pory"
	special SpawnCameraObject
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_Leader_Movement_4
# 51 "data//maps/MirrohBaseCampGym/scripts.pory"
	waitmovement 0
# 52 "data//maps/MirrohBaseCampGym/scripts.pory"
	special RemoveCameraObject
# 61 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_10
# 62 "data//maps/MirrohBaseCampGym/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_LEADER
# 63 "data//maps/MirrohBaseCampGym/scripts.pory"
	giveitem ITEM_MEGA_RING
# 65 "data//maps/MirrohBaseCampGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 67 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_11
# 68 "data//maps/MirrohBaseCampGym/scripts.pory"
	giveitem ITEM_RARE_SHARD, 2
# 69 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_12
# 70 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
	goto MirrohBaseCampGym_Leader_1


# 20 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_0:
# 20 "data//maps/MirrohBaseCampGym/scripts.pory"
	emote_exclamation_mark
	step_end

# 31 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_1:
# 31 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
# 31 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_left
	step_end

# 34 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_2:
# 34 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_right
	step_end

# 35 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_3:
# 35 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_left
	step_end

# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_4:
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
	step_end

MirrohBaseCampGym_Leader_Text_0:
# 9 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CARONA: Use your power wisely. As for\n"
	.string "me, it's time to move on.$"

MirrohBaseCampGym_Leader_Text_1:
# 12 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "???: Hmm? A trainer? Welcome to the\n"
	.string "Mirroh Base Camp Gym...\p"
	.string "...\p"
	.string "...is what I would say if there was a Gym\n"
	.string "left.\p"
	.string "CARONA: My name is Carona, trainer. I am\n"
	.string "the former Leader of the Mirroh Base\l"
	.string "Camp Gym. The Pokémon League recently\l"
	.string "decomissioned this gym.$"

MirrohBaseCampGym_Leader_Text_2:
# 15 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CARONA: They took the entrance\n"
	.string "statues out first. Then they removed\l"
	.string "all the gym puzzle equipment.\p"
	.string "...\p"
	.string "Finally, one by one, all my trainers left.$"

MirrohBaseCampGym_Leader_Text_3:
# 18 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CARONA: And now it's just me in this\n"
	.string "empty warehouse. Like a ghost. Just\l"
	.string "like the rest of this little town of\l"
	.string "ours.$"

MirrohBaseCampGym_Leader_Text_4:
# 21 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CARONA: But I was a Gym Leader once!\n"
	.string "You understand? I was powerful and\l"
	.string "strong. I was something, someone!\l"
	.string "Countless trainers paid me their\l"
	.string "respects in battle, and to the chosen\l"
	.string "few destined for the top, I would award\l"
	.string "the coveted lapel pin known as the\l"
	.string "IRONFIRST BADGE!$"

MirrohBaseCampGym_Leader_Text_5:
# 24 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CARONA: But that's all in the past. Next\n"
	.string "week the construction crew will come to\l"
	.string "demolish this building. You were lucky\l"
	.string "you found me. I just dropped in to...just\l"
	.string "to be here again, and just...\p"
	.string "CARONA:...but something's missing.\p"
	.string "CARONA: You're a trainer, aren't you?\n"
	.string "Would you care to indulge me a little?\l"
	.string "I'd like to be challenged by a trainer.\l"
	.string "It would mean everything if I could ride\l"
	.string "that thrill just once more.$"

MirrohBaseCampGym_Leader_Text_6:
# 26 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CARONA: You are too kind, trainer. Come\n"
	.string "then, let us battle. Let these four\l"
	.string "empty walls be our spectators, this\l"
	.string "crooked floor our stadium, and the\l"
	.string "silence our cheers!$"

MirrohBaseCampGym_Leader_Text_7:
# 37 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CARONA: Now, trainer, feel the force of\n"
	.string "these iron fists!$"

MirrohBaseCampGym_Leader_Text_8:
# 41 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "A glorious battle!$"

MirrohBaseCampGym_Leader_Text_9:
# 45 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CARONA: What a beautiful display! What\n"
	.string "a thrill! This is why we do what we do,\l"
	.string "trainer!\p"
	.string "CARONA: Now come to me.$"

MirrohBaseCampGym_Leader_Text_10:
# 61 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CARONA: Unfortunately I don't have a\n"
	.string "badge to award you any more.\p"
	.string "CARONA: But I have something else.\p"
	.string "CARONA: I see the closure of this gym\n"
	.string "as destiny's way of telling Lucario and\l"
	.string "me to lay down our fists. It's time we\l"
	.string "explored new things. So I won't need\l"
	.string "this any more, and as my final opponent,\l"
	.string "I want you to have it.$"

MirrohBaseCampGym_Leader_Text_11:
# 67 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CARONA: The Mega Ring will allow you to\n"
	.string "Mega Evolve specific Pokémon as long as\l"
	.string "they hold their unique Mega Stone.\p"
	.string "CARONA: Please take these with you as\n"
	.string "well.$"

MirrohBaseCampGym_Leader_Text_12:
# 69 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CARONA: I feel satisfied. A fitting end\n"
	.string "- to have been defeated by a trainer of\l"
	.string "your caliber!\p"
	.string "CARONA: Carry on our legacy,\n"
	.string "{PLAYER}! Show the world your iron\l"
	.string "fists!$"

MirrohBaseCampGym_Leader_Text_13:
# 73 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CARONA: Haha! A fitting finale in a way.$"
