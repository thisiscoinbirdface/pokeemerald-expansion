MirrohBaseCamp_Houses_MapScripts::
	.byte 0


MirrohBaseCamp_Houses_Historian::
# 6 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	lockall
# 7 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	faceplayer
# 9 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_HISTORIAN, MirrohBaseCamp_Houses_Historian_2
# 12 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_1
# 13 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 14 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_0
# 15 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 16 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 17 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_2
# 18 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 19 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 30
# 20 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_3
# 21 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 22 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 30
# 23 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_4
# 24 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 25 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 30
# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_5
# 27 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 28 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 29 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_0
# 30 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 31 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_6
# 32 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 34 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_6
# 35 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_HISTORIAN
# 36 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_HIDE_GRAVEYARD_HISTORIAN
MirrohBaseCamp_Houses_Historian_1:
# 39 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_2:
# 10 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_0
	goto MirrohBaseCamp_Houses_Historian_1


# 14 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_0:
# 14 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	emote_exclamation_mark
	step_end

MirrohBaseCamp_Houses_Historian_Text_0:
# 10 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "MARTHA: Why hello child, how are you?$"

MirrohBaseCamp_Houses_Historian_Text_1:
# 12 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "MARTHA: Yes, child. Tell me. What's the\n"
	.string "story?\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

MirrohBaseCamp_Houses_Historian_Text_2:
# 17 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "MARTHA: I see...so this Team Somber\n"
	.string "wants to re-enter the past using the\l"
	.string "dreamstones? How interesting. To think\l"
	.string "we've reached an age where humankind\l"
	.string "can control a dreamstone...incredible,\l"
	.string "but terrifying at the same time.$"

MirrohBaseCamp_Houses_Historian_Text_3:
# 20 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "MARTHA: You must have seen it yourself,\n"
	.string "{PLAYER}. To the best of our\l"
	.string "knowledge, ANCIENT CORMORIA was a\l"
	.string "harsh, barren and dangerous continent.\l"
	.string "Fearsome {PKMN} fought each other to the\l"
	.string "death in the desolate wasteland, vying\l"
	.string "for control using brute force. Today,\l"
	.string "all we have are the fossilised remains\l"
	.string "of those {PKMN}, often damaged due to the\l"
	.string "firce fighting. By analysing the fossils\l"
	.string "and comparing, say, a bite mark on one\l"
	.string "fossil to another's teeth, we can\l"
	.string "identify who fought who.$"

MirrohBaseCamp_Houses_Historian_Text_4:
# 23 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "MARTHA: You must have seen it yourself,\n"
	.string "{PLAYER}. To the best of our\l"
	.string "knowledge, ANCIENT CORMORIA was a\l"
	.string "harsh, barren and dangerous continent,\l"
	.string "ravaged by fearsome {PKMN} that fought\l"
	.string "each other. Today, all we have are the\l"
	.string "fossilised remains of those {PKMN}, often\l"
	.string "damaged due to the firce fighting. By\l"
	.string "analysing the fossils and comparing,\l"
	.string "say, a bite mark on one fossil to\l"
	.string "another's teeth, we can\l"
	.string "cross-reference different {PKMN}. This is\l"
	.string "how we build a classification for all\l"
	.string "Fossil {PKMN}.\p"
	.string "...\p"
	.string "MARTHA: But there was one RAMPARDOS\n"
	.string "fossil we found that was damaged in\l"
	.string "ways...in ways so horrific they...well...\p"
	.string "MARTHA: No known {PKMN}, natural\n"
	.string "phenomena, or anything we could think\l"
	.string "of could give us an answer. What kind of\l"
	.string "monstrous being could do something like\l"
	.string "that?$"

MirrohBaseCamp_Houses_Historian_Text_5:
# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "MARTHA: For a while this mystery - the\n"
	.string "mystery of the ANCIENT TERROR -\l"
	.string "remained unsolved. But then, deep\l"
	.string "inside MT MIRROH, we found an ancient\l"
	.string "cave painting depicting a beast that\l"
	.string "matched no fossil we had\l"
	.string "uncovered...although which {PKMN} it is, we\l"
	.string "don't know.\p"
	.string "...\p"
	.string "There is still much to solve, {PLAYER}.\n"
	.string "If I had to hazard a guess, this Team\l"
	.string "Somber outfit might be looking to do\l"
	.string "something with this ANCIENT TERROR,\l"
	.string "although what exactly, I can't say.$"

MirrohBaseCamp_Houses_Historian_Text_6:
# 31 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "MARTHA: Oh my! Would you look at the\n"
	.string "time? I've rambled on for too long.\l"
	.string "Apologies, {PLAYER}. I hope this helps\l"
	.string "you in your journey.\p"
	.string "You should go to MT MIRROH and see the\n"
	.string "cave painting for yourself. As for me, I\l"
	.string "must get back to my reading...$"
