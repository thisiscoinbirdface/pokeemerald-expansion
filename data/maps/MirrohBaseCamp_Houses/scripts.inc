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
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_0, MSGBOX_YESNO
# 69 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_2
MirrohBaseCamp_Houses_MasterballFriend_1:
# 95 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballFriend_2:
# 70 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	special ChoosePartyMon
# 71 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitstate
# 72 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	message MirrohBaseCamp_Houses_MasterballFriend_Text_1
# 74 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POKE_BALL
# 75 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_2, ITEM_POKE_BALL
# 76 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_GREAT_BALL
# 77 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_3, ITEM_GREAT_BALL
# 78 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_3, ITEM_ULTRA_BALL
# 79 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_4, ITEM_ULTRA_BALL
# 80 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 82 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_5
MirrohBaseCamp_Houses_MasterballFriend_4:
# 83 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_8
MirrohBaseCamp_Houses_MasterballFriend_7:
# 84 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_11
MirrohBaseCamp_Houses_MasterballFriend_10:
# 86 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_5
# 87 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 88 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playse SE_BALL
# 89 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_6
# 91 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	special SetMonPokeball
	goto MirrohBaseCamp_Houses_MasterballFriend_1

MirrohBaseCamp_Houses_MasterballFriend_5:
# 82 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_POKE_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_4

MirrohBaseCamp_Houses_MasterballFriend_8:
# 83 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_GREAT_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_7

MirrohBaseCamp_Houses_MasterballFriend_11:
# 84 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_ULTRA_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_10


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
	.string "of Cormoria who can make a Master Ball.\l"
	.string "A master of the craft!\p"
	.string "I'm not like him, but I've got a couple of\n"
	.string "tricks up my sleeve too! I can change\l"
	.string "the Pokeballs of any of your Pokemon.\l"
	.string "Would you like me to?$"

MirrohBaseCamp_Houses_MasterballFriend_Text_1:
# 72 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Now which Pokeball should I switch to?$"

MirrohBaseCamp_Houses_MasterballFriend_Text_2:
# 75 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "{STR_VAR_1}$"

MirrohBaseCamp_Houses_MasterballFriend_Text_3:
# 77 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "{STR_VAR_2}$"

MirrohBaseCamp_Houses_MasterballFriend_Text_4:
# 79 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "{STR_VAR_3}$"

MirrohBaseCamp_Houses_MasterballFriend_Text_5:
# 86 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "...\p"
	.string "...$"

MirrohBaseCamp_Houses_MasterballFriend_Text_6:
# 89 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "...and done! Come back if you need me to\n"
	.string "do any more!$"
