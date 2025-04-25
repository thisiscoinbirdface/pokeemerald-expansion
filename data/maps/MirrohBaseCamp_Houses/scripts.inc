MirrohBaseCamp_Houses_MapScripts::
	.byte 0


MirrohBaseCamp_Houses_Historian::
# 6 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	lockall
# 7 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	faceplayer
# 9 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_HISTORIAN, MirrohBaseCamp_Houses_Historian_2
# 13 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 14 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_2
# 15 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 16 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_0
# 17 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 18 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 19 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 20 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_3
# 21 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 22 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 30
# 23 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 24 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_4
# 25 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 30
# 27 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 28 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_5
# 29 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 30 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 31 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 32 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_0
# 33 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 34 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 35 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_6
# 36 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 38 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_6
# 39 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_HISTORIAN
# 40 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_HIDE_MIRROHBASECAMP_HISTORIAN
MirrohBaseCamp_Houses_Historian_1:
	end

MirrohBaseCamp_Houses_Historian_2:
# 10 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 11 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_1, MSGBOX_NPC
	goto MirrohBaseCamp_Houses_Historian_1


MirrohBaseCamp_Houndstone::
# 47 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playmoncry SPECIES_HOUNDSTONE, CRY_MODE_NORMAL
# 48 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houndstone_Text_0, MSGBOX_NPC
	end


MirrohBaseCamp_Houses_MasterballGuy::
# 61 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_0, MSGBOX_NPC
	end


MirrohBaseCamp_Houses_MasterballFriend::
# 66 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_0, MSGBOX_NPC
	end


# 16 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_0:
# 16 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	emote_exclamation_mark
	step_end

MirrohBaseCamp_Houses_Historian_Text_0:
# 10 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Martha$"

MirrohBaseCamp_Houses_Historian_Text_1:
# 11 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Hello child. How are you?$"

MirrohBaseCamp_Houses_Historian_Text_2:
# 14 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Yes, child. Tell me. What's the story?\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

MirrohBaseCamp_Houses_Historian_Text_3:
# 20 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "I see...so this Team Somber wants to\n"
	.string "re-enter the past using the\l"
	.string "dreamstones? How interesting. To think\l"
	.string "we've reached an age where humankind\l"
	.string "can control a dreamstone...incredible,\l"
	.string "but terrifying at the same time.$"

MirrohBaseCamp_Houses_Historian_Text_4:
# 24 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You must have seen it yourself,\n"
	.string "{PLAYER}. To the best of our\l"
	.string "knowledge, Ancient Cormoria was a\l"
	.string "harsh, barren and dangerous continent,\l"
	.string "ravaged by fearsome Pokémon that\l"
	.string "fought each other. Today, all we have\l"
	.string "are the damaged fossilised remains of\l"
	.string "those Pokémon. By analysing the fossils\l"
	.string "and comparing, say, a bite mark on one\l"
	.string "fossil to another's teeth, we can\l"
	.string "identify different Pokémon.\p"
	.string "...\p"
	.string "But there was one fossil we found that\n"
	.string "was damaged in ways...in ways so\l"
	.string "horrific they...well...\p"
	.string "No known Pokemon we could think of\n"
	.string "could give us an answer. What kind of\l"
	.string "monstrous being could do something like\l"
	.string "that?$"

MirrohBaseCamp_Houses_Historian_Text_5:
# 28 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "For a while this mystery - the mystery\n"
	.string "of the Ancient Terror - remained\l"
	.string "unsolved. But then, deep inside Mt.\l"
	.string "Mirroh, we found an ancient cave\l"
	.string "painting depicting a beast that\l"
	.string "matched no fossil we had\l"
	.string "uncovered...although which Pokémon it\l"
	.string "is, we don't know.\p"
	.string "...\p"
	.string "There is still much to solve, {PLAYER}.\n"
	.string "If I were to hazard a guess, this Team\l"
	.string "Somber outfit might be looking to do\l"
	.string "something with this Ancient Terror,\l"
	.string "although what exactly, I can't say.$"

MirrohBaseCamp_Houses_Historian_Text_6:
# 35 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Oh my! Would you look at the time? I've\n"
	.string "rambled on for too long. Apologies,\l"
	.string "{PLAYER}. I hope this information\l"
	.string "helps you in your journey.\p"
	.string "You should go to Mt. Mirroh and see the\n"
	.string "cave painting for yourself. As for me, I\l"
	.string "must get back to my reading...$"

MirrohBaseCamp_Houndstone_Text_0:
# 48 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Houndstone is walking slowly. It's\n"
	.string "getting old now...$"

MirrohBaseCamp_Houses_MasterballGuy_Text_0:
# 61 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "A friend of Rue's?\p"
	.string "...\p"
	.string "Ah, you're his new assistant. Nice to\n"
	.string "meet you, {PLAYER}! Rue and I go long\l"
	.string "back. While he entered academia, I\l"
	.string "became a Pokeball craftsman instead!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_0:
# 66 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "This man here is the only person in all\n"
	.string "of Cormoria who can make a master ball.\l"
	.string "A master of the craft!$"
