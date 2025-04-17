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
	delay 16
# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_0
# 27 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 28 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_5
# 29 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 31 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_6
# 32 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_HISTORIAN
# 33 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_HIDE_MIRROHBASECAMP_HISTORIAN
MirrohBaseCamp_Houses_Historian_1:
# 36 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_2:
# 10 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_0
	goto MirrohBaseCamp_Houses_Historian_1


MirrohBaseCamp_Houndstone::
# 41 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playmoncry SPECIES_HOUNDSTONE, CRY_MODE_NORMAL
# 42 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houndstone_Text_0, MSGBOX_NPC
	end


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
	.string "knowledge, Ancient Cormoria was a\l"
	.string "harsh, barren and dangerous continent,\l"
	.string "ravaged by fearsome Pokémon that\l"
	.string "fought each other. Today, all we have\l"
	.string "are the fossilised remains of those\l"
	.string "Pokémon, often damaged due to the\l"
	.string "firce fighting. By analysing the fossils\l"
	.string "and comparing, say, a bite mark on one\l"
	.string "fossil to another's teeth, we can\l"
	.string "cross-reference different Pokémon.\l"
	.string "This is how we build a classification for\l"
	.string "all Fossil Pokémon.\p"
	.string "...\p"
	.string "MARTHA: But there was one fossil we\n"
	.string "found that was damaged in ways...in\l"
	.string "ways so horrific they...well...\p"
	.string "MARTHA: No known Pokemon, natural\n"
	.string "phenomena, or anything we could think\l"
	.string "of could give us an answer. What kind of\l"
	.string "monstrous being could do something like\l"
	.string "that?$"

MirrohBaseCamp_Houses_Historian_Text_4:
# 23 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "MARTHA: For a while this mystery - the\n"
	.string "mystery of the Ancient Terror -\l"
	.string "remained unsolved. But then, deep\l"
	.string "inside Mt. Mirroh, we found an ancient\l"
	.string "cave painting depicting a beast that\l"
	.string "matched no fossil we had\l"
	.string "uncovered...although which Pokémon it\l"
	.string "is, we don't know.\p"
	.string "...\p"
	.string "There is still much to solve, {PLAYER}.\n"
	.string "If I had to hazard a guess, this Team\l"
	.string "Somber outfit might be looking to do\l"
	.string "something with this Ancient Terror,\l"
	.string "although what exactly, I can't say.$"

MirrohBaseCamp_Houses_Historian_Text_5:
# 28 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "MARTHA: Oh my! Would you look at the\n"
	.string "time? I've rambled on for too long.\l"
	.string "Apologies, {PLAYER}. I hope this helps\l"
	.string "you in your journey.\p"
	.string "You should go to Mt. Mirroh and see the\n"
	.string "cave painting for yourself. As for me, I\l"
	.string "must get back to my reading...$"

MirrohBaseCamp_Houndstone_Text_0:
# 42 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Houndstone is walking slowly. It's\n"
	.string "getting old now.$"
