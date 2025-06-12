# 1 "data//maps/RivetshoreCity_Construction/scripts.pory"

# 2 "data//maps/RivetshoreCity_Construction/scripts.pory"
    .set LOCALID_CEO, 11

RivetshoreCity_Construction_MapScripts::
	.byte 0


RivetshoreCity_Construction_Nurse::
# 10 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_Nurse_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Construction_NPC1::
# 14 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_NPC1_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Construction_NPC2::
# 18 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_NPC2_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Construction_NPC3::
# 22 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_NPC3_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Construction_NPC4::
# 28 "data//maps/RivetshoreCity_Construction/scripts.pory"
	lockall
# 29 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_NPC4_Text_0
# 30 "data//maps/RivetshoreCity_Construction/scripts.pory"
	releaseall
	end


RivetshoreCity_Construction_NPC5::
# 34 "data//maps/RivetshoreCity_Construction/scripts.pory"
	lockall
# 35 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_NPC5_Text_0
# 36 "data//maps/RivetshoreCity_Construction/scripts.pory"
	releaseall
	end


RivetshoreCity_Construction_NPC6::
# 40 "data//maps/RivetshoreCity_Construction/scripts.pory"
	lockall
# 41 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_NPC6_Text_0
# 42 "data//maps/RivetshoreCity_Construction/scripts.pory"
	releaseall
	end


RivetshoreCity_Construction_NPC7::
# 48 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_NPC7_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Construction_NPC8::
# 53 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_NPC8_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Construction_NPC9::
# 59 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_NPC9_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Construction_NPC10::
# 63 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_NPC10_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Construction_CEO::
# 75 "data//maps/RivetshoreCity_Construction/scripts.pory"
	lockall
# 76 "data//maps/RivetshoreCity_Construction/scripts.pory"
	faceplayer
# 78 "data//maps/RivetshoreCity_Construction/scripts.pory"
	compare VAR_RIVETSHORE_CEO_QUEST, 3
	goto_if_eq RivetshoreCity_Construction_CEO_2
RivetshoreCity_Construction_CEO_1:
# 82 "data//maps/RivetshoreCity_Construction/scripts.pory"
	compare VAR_RIVETSHORE_CEO_QUEST, 2
	goto_if_eq RivetshoreCity_Construction_CEO_5
RivetshoreCity_Construction_CEO_4:
# 90 "data//maps/RivetshoreCity_Construction/scripts.pory"
	compare VAR_RIVETSHORE_CEO_QUEST, 1
	goto_if_eq RivetshoreCity_Construction_CEO_8
# 96 "data//maps/RivetshoreCity_Construction/scripts.pory"
	compare VAR_RIVETSHORE_CEO_QUEST, 0
	goto_if_eq RivetshoreCity_Construction_CEO_11
RivetshoreCity_Construction_CEO_10:
# 121 "data//maps/RivetshoreCity_Construction/scripts.pory"
	releaseall
	end

RivetshoreCity_Construction_CEO_2:
# 79 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_CEO_Text_0
	goto RivetshoreCity_Construction_CEO_1

RivetshoreCity_Construction_CEO_5:
# 83 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox_delay RivetshoreCity_Construction_CEO_Text_1, RivetshoreCity_Construction_CEO_Text_2
# 84 "data//maps/RivetshoreCity_Construction/scripts.pory"
	completequest QUEST_RIVETSHORE_MIMIKYU
# 85 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox_delay RivetshoreCity_Construction_CEO_Text_1, RivetshoreCity_Construction_CEO_Text_3
# 86 "data//maps/RivetshoreCity_Construction/scripts.pory"
	giveitem ITEM_POKE_FLUTE
# 87 "data//maps/RivetshoreCity_Construction/scripts.pory"
	setvar VAR_RIVETSHORE_CEO_QUEST, 3
	goto RivetshoreCity_Construction_CEO_4

RivetshoreCity_Construction_CEO_8:
# 91 "data//maps/RivetshoreCity_Construction/scripts.pory"
	speakername RivetshoreCity_Construction_CEO_Text_1
# 92 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_CEO_Text_4, MSGBOX_NPC
	end

RivetshoreCity_Construction_CEO_11:
# 97 "data//maps/RivetshoreCity_Construction/scripts.pory"
	speakername RivetshoreCity_Construction_CEO_Text_1
# 98 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_CEO_Text_5
# 99 "data//maps/RivetshoreCity_Construction/scripts.pory"
	release
# 100 "data//maps/RivetshoreCity_Construction/scripts.pory"
	delay 16
# 101 "data//maps/RivetshoreCity_Construction/scripts.pory"
	applymovement LOCALID_CEO, RivetshoreCity_Construction_CEO_Movement_0
# 102 "data//maps/RivetshoreCity_Construction/scripts.pory"
	waitmovement 0
# 103 "data//maps/RivetshoreCity_Construction/scripts.pory"
	delay 16
# 105 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox_delay RivetshoreCity_Construction_CEO_Text_1, RivetshoreCity_Construction_CEO_Text_6
# 106 "data//maps/RivetshoreCity_Construction/scripts.pory"
	speakername RivetshoreCity_Construction_CEO_Text_1
# 107 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_CEO_Text_7, MSGBOX_YESNO
# 109 "data//maps/RivetshoreCity_Construction/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RivetshoreCity_Construction_CEO_14
# 114 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox_delay RivetshoreCity_Construction_CEO_Text_1, RivetshoreCity_Construction_CEO_Text_9
# 115 "data//maps/RivetshoreCity_Construction/scripts.pory"
	clearflag FLAG_HIDE_RIVETSHORE_PERCY
# 116 "data//maps/RivetshoreCity_Construction/scripts.pory"
	startquest QUEST_RIVETSHORE_MIMIKYU
# 117 "data//maps/RivetshoreCity_Construction/scripts.pory"
	setvar VAR_RIVETSHORE_CEO_QUEST, 1
	goto RivetshoreCity_Construction_CEO_10

RivetshoreCity_Construction_CEO_14:
# 110 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox_delay RivetshoreCity_Construction_CEO_Text_1, RivetshoreCity_Construction_CEO_Text_8
	end


# 101 "data//maps/RivetshoreCity_Construction/scripts.pory"
RivetshoreCity_Construction_CEO_Movement_0:
# 101 "data//maps/RivetshoreCity_Construction/scripts.pory"
	emote_exclamation_mark
	step_end

RivetshoreCity_Construction_Nurse_Text_0:
# 10 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Welcome to Rivetshore Construction!\n"
	.string "If you're here about the job, please\l"
	.string "head upstairs to speak to our CEO.$"

RivetshoreCity_Construction_NPC1_Text_0:
# 14 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "I came from Pelluca City. Our bridge was\n"
	.string "built by Rivetshore Construction!$"

RivetshoreCity_Construction_NPC2_Text_0:
# 18 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "I applied for a job here, but they\n"
	.string "haven't replied to me yet...$"

RivetshoreCity_Construction_NPC3_Text_0:
# 22 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Are you the contractor the CEO hired?\p"
	.string "No?\p"
	.string "The CEO was looking for a Pokémon\n"
	.string "trainer to help him out.$"

RivetshoreCity_Construction_NPC4_Text_0:
# 29 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "...so based on this years financial\n"
	.string "estimate, we're not likely to...\p"
	.string "Sounds like a important meeting.\n"
	.string "Better not disturb them!$"

RivetshoreCity_Construction_NPC5_Text_0:
# 35 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "...while I hear what you're saying, our\n"
	.string "stakeholders would never...\p"
	.string "Sounds like a important meeting.\n"
	.string "Better not disturb them!$"

RivetshoreCity_Construction_NPC6_Text_0:
# 41 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "...but the underlying factor here is the\n"
	.string "lack of any concrete...\p"
	.string "Sounds like a important meeting.\n"
	.string "Better not disturb them!$"

RivetshoreCity_Construction_NPC7_Text_0:
# 48 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Important meeting?\p"
	.string "Pah! All these business and marketing\n"
	.string "types do is sit and talk all day.$"

RivetshoreCity_Construction_NPC8_Text_0:
# 53 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "I heard we got a new investor. He's\n"
	.string "someone from the academic world.$"

RivetshoreCity_Construction_NPC9_Text_0:
# 59 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "I told the CEO he shouldn't use company\n"
	.string "assets for personal reasons. That's why\l"
	.string "he's hiring a contractor out of his own\l"
	.string "pocket.$"

RivetshoreCity_Construction_NPC10_Text_0:
# 63 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Even a big-time CEO has a weakness, and\n"
	.string "our CEO's weakness is his prized\l"
	.string "Perrserker.$"

RivetshoreCity_Construction_CEO_Text_0:
# 79 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "How are things, {PLAYER}?\p"
	.string "You're always welcome to work here if\n"
	.string "academia bores you.$"

RivetshoreCity_Construction_CEO_Text_1:
# 83 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "CEO$"

RivetshoreCity_Construction_CEO_Text_2:
# 83 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Oh you wonderful trainer! You've\n"
	.string "brought my dear Percy back!$"

RivetshoreCity_Construction_CEO_Text_3:
# 85 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Here, please take this. It's a very rare\n"
	.string "antique - it plays a beautiful melody\l"
	.string "that can wake sleeping Pokémon up!$"

RivetshoreCity_Construction_CEO_Text_4:
# 92 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Trainer! Have you found Percy?$"

RivetshoreCity_Construction_CEO_Text_5:
# 98 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Yes, child, come. You're here for the\n"
	.string "contract offer right?\p"
	.string "...\p"
	.string "No?\p"
	.string "A pity. You look reliable.\p"
	.string "My beautiful Percy has gone missing,\n"
	.string "you see. I'm looking for a strong\l"
	.string "trainer to bring Percy back!\p"
	.string "...\p"
	.string "Run away?$"

RivetshoreCity_Construction_CEO_Text_6:
# 105 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Absolutely not! I loved and cared for it\n"
	.string "since the day it was born.\l"
	.string "It would never run away!$"

RivetshoreCity_Construction_CEO_Text_7:
# 107 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Would you please find Percy for me?\n"
	.string "I'll make it worth your while!$"

RivetshoreCity_Construction_CEO_Text_8:
# 110 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "A shame. See you, trainer.$"

RivetshoreCity_Construction_CEO_Text_9:
# 114 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Brilliant! Percy must be somewhere in\n"
	.string "Rivetshore City. It can't swim!\p"
	.string "I'll be waiting here for my Percy.$"
