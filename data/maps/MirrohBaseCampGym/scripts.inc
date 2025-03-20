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
	delay 24
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
# 55 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_12
# 56 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
MirrohBaseCampGym_Leader_1:
# 59 "data//maps/MirrohBaseCampGym/scripts.pory"
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
# 29 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_Leader_Movement_1
# 30 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement 1, MirrohBaseCampGym_Leader_Movement_2
# 31 "data//maps/MirrohBaseCampGym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 32 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_7
# 33 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 36 "data//maps/MirrohBaseCampGym/scripts.pory"
	trainerbattle_no_intro TRAINER_MIRROHBASECAMP_LEADER, MirrohBaseCampGym_Leader_Text_8
# 40 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_9
# 41 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MirrohBaseCampGym_Leader_Movement_3
# 45 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_10
# 46 "data//maps/MirrohBaseCampGym/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_LEADER
# 47 "data//maps/MirrohBaseCampGym/scripts.pory"
	giveitem ITEM_MEGA_RING
# 49 "data//maps/MirrohBaseCampGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 51 "data//maps/MirrohBaseCampGym/scripts.pory"
	msgbox MirrohBaseCampGym_Leader_Text_11
# 52 "data//maps/MirrohBaseCampGym/scripts.pory"
	release
	goto MirrohBaseCampGym_Leader_1


# 20 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_0:
# 20 "data//maps/MirrohBaseCampGym/scripts.pory"
	emote_exclamation_mark
	step_end

# 29 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_1:
# 29 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_right
	step_end

# 30 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_2:
# 30 "data//maps/MirrohBaseCampGym/scripts.pory"
	face_left
	step_end

# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
MirrohBaseCampGym_Leader_Movement_3:
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
# 43 "data//maps/MirrohBaseCampGym/scripts.pory"
	walk_right
	step_end

MirrohBaseCampGym_Leader_Text_0:
# 9 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CAROLA: Use your power wisely. As for\n"
	.string "me, it's time to move on.$"

MirrohBaseCampGym_Leader_Text_1:
# 12 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "???: Hmm? A trainer? Welcome to the\n"
	.string "Mirroh Base Camp Gym...\p"
	.string "...\p"
	.string "...is what I would say if there was a Gym\n"
	.string "left.\p"
	.string "CARONA: My name is CARONA, trainer. I am\n"
	.string "the former Leader of the MIRROH BASE\l"
	.string "CAMP GYM. The {PKMN} league recently\l"
	.string "decomissioned this gym.$"

MirrohBaseCampGym_Leader_Text_2:
# 15 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "???: They took the entrance statues\n"
	.string "out first. Then they removed all the gym\l"
	.string "puzzle equipment. Finally, one bye one,\l"
	.string "all my trainers left.$"

MirrohBaseCampGym_Leader_Text_3:
# 18 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CAROLA: And now it's just me in this\n"
	.string "empty warehouse. Like a ghost.\p"
	.string "Just like the rest of this little town\n"
	.string "of ours.$"

MirrohBaseCampGym_Leader_Text_4:
# 21 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CAROLA: But I was a Gym Leader once!\n"
	.string "You understand? I was powerful and\l"
	.string "strong. I was something, someone!\l"
	.string "Countless trainers paid me their\l"
	.string "respects in battle, and to the chosen\l"
	.string "few destined for the top, I would award\l"
	.string "the coveted lapel pin known as the\l"
	.string "IRONFIRST BADGE!$"

MirrohBaseCampGym_Leader_Text_5:
# 24 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CAROLA: But that's all in the past. Next\n"
	.string "week the construction crew will come to\l"
	.string "demolish this building. You were lucky\l"
	.string "you found me. I just dropped in to...just\l"
	.string "to be here again, and feel...\p"
	.string "CAROLA: ...but something's missing.\p"
	.string "CAROLA: You're a trainer, aren't you?\n"
	.string "Would you care to indulge me a little?\l"
	.string "I'd like to be challenged by a trainer.\l"
	.string "It would mean everything if I could ride\l"
	.string "that thrill just once more.$"

MirrohBaseCampGym_Leader_Text_6:
# 26 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CAROLA: You are too kind, trainer. Come\n"
	.string "then, let us battle. Let these four\l"
	.string "empty walls be our spectators, let this\l"
	.string "crooked floor our stadium, and let the\l"
	.string "silence be our cheers!$"

MirrohBaseCampGym_Leader_Text_7:
# 32 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CAROLA: Now, trainer, feel the force of\n"
	.string "these iron fists!$"

MirrohBaseCampGym_Leader_Text_8:
# 36 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "A glorious battle!$"

MirrohBaseCampGym_Leader_Text_9:
# 40 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CAROLA: What a beautiful display! What\n"
	.string "a thrill! This is why we do what we do,\l"
	.string "trainer!\p"
	.string "Now come to me.$"

MirrohBaseCampGym_Leader_Text_10:
# 45 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CAROLA: Unfortunately I don't have a\n"
	.string "badge to award you any more.\p"
	.string "But I believe I have something better.\n"
	.string "You see, the closure of this gym is\l"
	.string "destiny's way of telling me and LUCARIO\l"
	.string "to lay down our fists. IT's time to\l"
	.string "explore new things. So I won't need this\l"
	.string "any more, and as my final opponent, I\l"
	.string "want you to have it.$"

MirrohBaseCampGym_Leader_Text_11:
# 51 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CAROLA: The MEGA RING will allow you to\n"
	.string "Mega Evolve specific {PKMN} as long as\l"
	.string "they hold their unique MEGA STONE.\l"
	.string "Carry on our legacy, trainer! Show the\l"
	.string "world your iron fists!$"

MirrohBaseCampGym_Leader_Text_12:
# 55 "data//maps/MirrohBaseCampGym/scripts.pory"
	.string "CAROLA: Haha! A fitting finale in a way.$"
