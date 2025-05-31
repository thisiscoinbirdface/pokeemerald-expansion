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
# 37 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_RARE_BONE
# 38 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 39 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_7
# 40 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 42 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_6
# 43 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_HISTORIAN
# 44 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
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
# 51 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playmoncry SPECIES_HOUNDSTONE, CRY_MODE_NORMAL
# 52 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houndstone_Text_0, MSGBOX_NPC
	end


MirrohBaseCamp_Houses_MasterballGuy::
# 64 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_0, MSGBOX_NPC
	end


MirrohBaseCamp_Houses_MasterballFriend::
# 69 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	lockall
# 70 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	faceplayer
# 72 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_SKIP_BALL_CHANGER, MirrohBaseCamp_Houses_MasterballFriend_2
# 75 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_SKIP_BALL_CHANGER
# 76 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_0
MirrohBaseCamp_Houses_MasterballFriend_1:
# 79 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_1, MSGBOX_YESNO
# 82 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_6
# 124 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_16
MirrohBaseCamp_Houses_MasterballFriend_5:
# 127 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballFriend_2:
	goto MirrohBaseCamp_Houses_MasterballFriend_1

MirrohBaseCamp_Houses_MasterballFriend_6:
# 83 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	special ChoosePartyMon
# 84 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitstate
# 85 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	message MirrohBaseCamp_Houses_MasterballFriend_Text_2
# 87 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_3, ITEM_POKE_BALL
# 88 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_4, ITEM_GREAT_BALL
# 89 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_5, ITEM_ULTRA_BALL
# 90 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_6, ITEM_HEAL_BALL
# 91 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_7, ITEM_QUICK_BALL
# 92 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_8, ITEM_DUSK_BALL
# 93 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_9, ITEM_LUXURY_BALL
# 94 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_10, ITEM_MOON_BALL
# 95 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_11, ITEM_DREAM_BALL
# 96 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 98 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_10
MirrohBaseCamp_Houses_MasterballFriend_9:
# 99 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_13
MirrohBaseCamp_Houses_MasterballFriend_12:
# 100 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_16
MirrohBaseCamp_Houses_MasterballFriend_15:
# 101 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_19
MirrohBaseCamp_Houses_MasterballFriend_18:
# 102 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_22
MirrohBaseCamp_Houses_MasterballFriend_21:
# 103 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_25
MirrohBaseCamp_Houses_MasterballFriend_24:
# 104 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_28
MirrohBaseCamp_Houses_MasterballFriend_27:
# 105 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_31
MirrohBaseCamp_Houses_MasterballFriend_30:
# 106 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_34
MirrohBaseCamp_Houses_MasterballFriend_33:
# 109 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem VAR_0x8005
# 111 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_37
# 116 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem VAR_0x8005
# 117 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_13, MSGBOX_SIGN
# 118 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	special SetMonPokeball
# 119 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_14
# 120 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 121 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playse SE_BALL
# 122 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_15
	goto MirrohBaseCamp_Houses_MasterballFriend_5

MirrohBaseCamp_Houses_MasterballFriend_10:
# 98 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_POKE_BALL
# 98 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DUSK_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_9

MirrohBaseCamp_Houses_MasterballFriend_13:
# 99 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_GREAT_BALL
# 99 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREAT_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_12

MirrohBaseCamp_Houses_MasterballFriend_16:
# 100 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_ULTRA_BALL
# 100 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ULTRA_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_15

MirrohBaseCamp_Houses_MasterballFriend_19:
# 101 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_HEAL_BALL
# 101 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_18

MirrohBaseCamp_Houses_MasterballFriend_22:
# 102 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_QUICK_BALL
# 102 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_QUICK_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_21

MirrohBaseCamp_Houses_MasterballFriend_25:
# 103 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_DUSK_BALL
# 103 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DUSK_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_24

MirrohBaseCamp_Houses_MasterballFriend_28:
# 104 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_LUXURY_BALL
# 104 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_LUXURY_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_27

MirrohBaseCamp_Houses_MasterballFriend_31:
# 105 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_MOON_BALL
# 105 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_MOON_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_30

MirrohBaseCamp_Houses_MasterballFriend_34:
# 106 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_DREAM_BALL
# 106 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DREAM_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_33

MirrohBaseCamp_Houses_MasterballFriend_37:
# 112 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_12
# 113 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
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
	.string "No Pokémon we knew of could give us an\n"
	.string "answer. What kind of monstrous being\l"
	.string "could do something like that?$"

MirrohBaseCamp_Houses_Historian_Text_5:
# 28 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "For a while this mystery - the mystery\n"
	.string "of the Ancient Terror - remained\l"
	.string "unsolved. But then, deep inside Mt.\l"
	.string "Mirroh, we found an ancient cave\l"
	.string "painting depicting a beast that\l"
	.string "matched no fossil we had uncovered...\l"
	.string "although which Pokémon it is, we don't\l"
	.string "know as of today.\p"
	.string "...\p"
	.string "There's still much to solve, {PLAYER}.\p"
	.string "If I were to hazard a guess, this Team\n"
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
	.string "cave painting for yourself.\p"
	.string "Here - take this and give it to the\n"
	.string "Greavard playing outside. It'll distract\l"
	.string "them. Hopefully they'll come home.$"

MirrohBaseCamp_Houses_Historian_Text_7:
# 39 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "As for me, I must get back to my\n"
	.string "reading...$"

MirrohBaseCamp_Houndstone_Text_0:
# 52 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Houndstone is walking slowly.\n"
	.string "It's getting old now...$"

MirrohBaseCamp_Houses_MasterballGuy_Text_0:
# 64 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "A friend of Rue's?\p"
	.string "...\p"
	.string "Ah, you're his new assistant. Nice to\n"
	.string "meet you, {PLAYER}! Rue and I go long\l"
	.string "back. While he entered academia, I\l"
	.string "became a Poké Ball craftsman instead!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_0:
# 76 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "This man here is the only person in all\n"
	.string "of Cormoria who can make a Master Ball.\l"
	.string "A master of the craft!\p"
	.string "I'm not like him, but I've got a couple of\n"
	.string "tricks up my sleeve too!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_1:
# 79 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "I can change the Poké Balls of your\n"
	.string "Pokémon if you bring me the Poké Ball!\p"
	.string "Would you like me to?$"

MirrohBaseCamp_Houses_MasterballFriend_Text_2:
# 85 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Now which Poké Ball should I switch to?$"

MirrohBaseCamp_Houses_MasterballFriend_Text_3:
# 87 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Poké Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_4:
# 88 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Great Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_5:
# 89 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Ultra Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_6:
# 90 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Heal Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_7:
# 91 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Quick Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_8:
# 92 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Dusk Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_9:
# 93 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Luxury Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_10:
# 94 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Moon Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_11:
# 95 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Dream Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_12:
# 112 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You don't have a {STR_VAR_1}.\p"
	.string "I can switch Poké Balls but I can't make\n"
	.string "them appear out of thin air!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_13:
# 117 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "{PLAYER} handed a {STR_VAR_1}\n"
	.string "over to the craftsman.$"

MirrohBaseCamp_Houses_MasterballFriend_Text_14:
# 119 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "...\p"
	.string "...$"

MirrohBaseCamp_Houses_MasterballFriend_Text_15:
# 122 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "...and done! Come back if you need me to\n"
	.string "do any more!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_16:
# 124 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Come back any time!$"
