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
	compare VAR_MASTERBALL_QUEST, 2
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_2
MirrohBaseCamp_Houses_MasterballGuy_1:
# 68 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_MASTERBALL_QUEST, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_5
MirrohBaseCamp_Houses_MasterballGuy_4:
# 99 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_MASTERBALL_QUEST, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_8
MirrohBaseCamp_Houses_MasterballGuy_7:
# 117 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballGuy_2:
# 65 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_0
	goto MirrohBaseCamp_Houses_MasterballGuy_1

MirrohBaseCamp_Houses_MasterballGuy_5:
# 69 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_1, MSGBOX_NPC
# 71 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_CASTELIACONE
# 72 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_11
# 76 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_OLD_GATEAU
# 77 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_14
# 81 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_LAVA_COOKIE
# 82 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_17
# 88 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_CASTELIACONE
# 89 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_OLD_GATEAU
# 90 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_LAVA_COOKIE
# 92 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_5
# 93 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playse SE_BALL
# 94 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_6, MSGBOX_NPC
# 95 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 96 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_MASTERBALL_QUEST, 2
	goto MirrohBaseCamp_Houses_MasterballGuy_4

MirrohBaseCamp_Houses_MasterballGuy_8:
# 100 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_7, MSGBOX_NPC
# 101 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8006, ITEM_MASTER_BALL
# 102 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	showitemdescription
# 103 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_8, MSGBOX_NPC
# 104 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	hideitemdescription
# 105 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_9
# 106 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 107 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 108 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 2, MirrohBaseCamp_Houses_Historian_Movement_0
# 109 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 110 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 111 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_10
# 112 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 115 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_MASTERBALL_QUEST, 1
	goto MirrohBaseCamp_Houses_MasterballGuy_7

MirrohBaseCamp_Houses_MasterballGuy_11:
# 73 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_2, MSGBOX_NPC
	end

MirrohBaseCamp_Houses_MasterballGuy_14:
# 78 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_3, MSGBOX_NPC
	end

MirrohBaseCamp_Houses_MasterballGuy_17:
# 83 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_4, MSGBOX_NPC
	end


MirrohBaseCamp_Houses_MasterballFriend::
# 122 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	lockall
# 123 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	faceplayer
# 125 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_SKIP_BALL_CHANGER, MirrohBaseCamp_Houses_MasterballFriend_2
# 128 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_SKIP_BALL_CHANGER
# 129 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_0
MirrohBaseCamp_Houses_MasterballFriend_1:
# 132 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_1, MSGBOX_YESNO
# 135 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_6
# 165 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_10
MirrohBaseCamp_Houses_MasterballFriend_5:
# 168 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballFriend_2:
	goto MirrohBaseCamp_Houses_MasterballFriend_1

MirrohBaseCamp_Houses_MasterballFriend_6:
# 136 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	special ChoosePartyMon
# 137 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitstate
# 138 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	message MirrohBaseCamp_Houses_MasterballFriend_Text_2
# 140 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_3, ITEM_POKE_BALL
# 141 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_4, ITEM_GREAT_BALL
# 142 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_5, ITEM_ULTRA_BALL
# 143 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 145 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_10
MirrohBaseCamp_Houses_MasterballFriend_9:
# 146 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_13
MirrohBaseCamp_Houses_MasterballFriend_12:
# 147 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_16
MirrohBaseCamp_Houses_MasterballFriend_15:
# 150 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem VAR_0x8005
# 152 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_19
# 157 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem VAR_0x8005
# 158 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_7, MSGBOX_SIGN
# 159 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	special SetMonPokeball
# 160 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_8
# 161 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 162 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playse SE_BALL
# 163 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_9
	goto MirrohBaseCamp_Houses_MasterballFriend_5

MirrohBaseCamp_Houses_MasterballFriend_10:
# 145 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_POKE_BALL
# 145 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POKE_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_9

MirrohBaseCamp_Houses_MasterballFriend_13:
# 146 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_GREAT_BALL
# 146 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREAT_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_12

MirrohBaseCamp_Houses_MasterballFriend_16:
# 147 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_ULTRA_BALL
# 147 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ULTRA_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_15

MirrohBaseCamp_Houses_MasterballFriend_19:
# 153 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_6
# 154 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
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
# 65 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Hello {PLAYER}!$"

MirrohBaseCamp_Houses_MasterballGuy_Text_1:
# 69 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Did you get everything?$"

MirrohBaseCamp_Houses_MasterballGuy_Text_2:
# 73 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You didn't bring the Mirroh Cone!\p"
	.string "Come back with everything.$"

MirrohBaseCamp_Houses_MasterballGuy_Text_3:
# 78 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You didn't bring the Apple Pie!\p"
	.string "Come back with everything.$"

MirrohBaseCamp_Houses_MasterballGuy_Text_4:
# 83 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You didn't bring the Lava Cookie!\p"
	.string "Come back with everything.$"

MirrohBaseCamp_Houses_MasterballGuy_Text_5:
# 92 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Aha! We've got everything we need right\n"
	.string "here...\p"
	.string "...so first I need the crust of the\n"
	.string "pie...mmm, delicious...\p"
	.string "...the ice cream is actually a binding\n"
	.string "agent\n"
	.string "...bound to my mouth, yes...\p"
	.string "...and this cookie, you see, holds the\n"
	.string "shell...tasy shell...\p"
	.string "...$"

MirrohBaseCamp_Houses_MasterballGuy_Text_6:
# 94 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "And there we go! A brand-new Master\n"
	.string "Ball, just for you!\p"
	.string "No, I didn't pull it out of my pocket. Are\n"
	.string "you seeing things?$"

MirrohBaseCamp_Houses_MasterballGuy_Text_7:
# 100 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "A friend of Rue's?\p"
	.string "...\p"
	.string "Ah, you're his new assistant. Nice to\n"
	.string "meet you, {PLAYER}! Rue and I go long\l"
	.string "back. While he entered academia, I\l"
	.string "became a Poké Ball craftsman instead!$"

MirrohBaseCamp_Houses_MasterballGuy_Text_8:
# 103 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "A few years ago, I finally perfected my\n"
	.string "opus magnum - the Master Ball!\p"
	.string "Looks beautiful, doesn't it?$"

MirrohBaseCamp_Houses_MasterballGuy_Text_9:
# 105 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Since you're Rue's assistant and he's an\n"
	.string "old friend, how about I do you a favour?\p"
	.string "I can make you one...if you get me the\n"
	.string "right crafting components!\p"
	.string "Let's see...I'll need...\p"
	.string "...one Apple Pie...\p"
	.string "...one Lava Cookie...\p"
	.string "...and one Mirroh Cone!$"

MirrohBaseCamp_Houses_MasterballGuy_Text_10:
# 111 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Of course these aren't for me!\n"
	.string "These are for the Master Ball!\p"
	.string "Are you accusing me of using you?\p"
	.string "...\p"
	.string "Ahem. I'll be waiting here!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_0:
# 129 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "This man here is the only person in all\n"
	.string "of Cormoria who can make a Master Ball.\l"
	.string "A master of the craft!\p"
	.string "I'm not like him, but I've got a couple of\n"
	.string "tricks up my sleeve too!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_1:
# 132 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "I can change the Poké Balls of your\n"
	.string "Pokémon if you bring me the Poké Ball!\p"
	.string "Would you like me to?$"

MirrohBaseCamp_Houses_MasterballFriend_Text_2:
# 138 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Now which Poké Ball should I switch to?$"

MirrohBaseCamp_Houses_MasterballFriend_Text_3:
# 140 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Poké Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_4:
# 141 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Great Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_5:
# 142 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Ultra Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_6:
# 153 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You don't have a {STR_VAR_1}.\p"
	.string "I can switch Poké Balls but I can't make\n"
	.string "them appear out of thin air!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_7:
# 158 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "{PLAYER} handed a {STR_VAR_1}\n"
	.string "over to the craftsman.$"

MirrohBaseCamp_Houses_MasterballFriend_Text_8:
# 160 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "...\p"
	.string "...$"

MirrohBaseCamp_Houses_MasterballFriend_Text_9:
# 163 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "...and done! Come back if you need me to\n"
	.string "do any more!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_10:
# 165 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Come back any time!$"
