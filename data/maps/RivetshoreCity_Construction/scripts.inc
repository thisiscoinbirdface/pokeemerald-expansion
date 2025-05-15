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
# 76 "data//maps/RivetshoreCity_Construction/scripts.pory"
	compare VAR_RIVETSHORE_CEO_QUEST, 0
	goto_if_eq RivetshoreCity_Construction_CEO_2
RivetshoreCity_Construction_CEO_1:
# 90 "data//maps/RivetshoreCity_Construction/scripts.pory"
	releaseall
	end

RivetshoreCity_Construction_CEO_2:
# 77 "data//maps/RivetshoreCity_Construction/scripts.pory"
	speakername RivetshoreCity_Construction_CEO_Text_0
# 78 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_CEO_Text_1
# 79 "data//maps/RivetshoreCity_Construction/scripts.pory"
	release
# 80 "data//maps/RivetshoreCity_Construction/scripts.pory"
	delay 16
# 81 "data//maps/RivetshoreCity_Construction/scripts.pory"
	applymovement LOCALID_CEO, RivetshoreCity_Construction_CEO_Movement_0
# 82 "data//maps/RivetshoreCity_Construction/scripts.pory"
	waitmovement 0
# 83 "data//maps/RivetshoreCity_Construction/scripts.pory"
	delay 16
# 85 "data//maps/RivetshoreCity_Construction/scripts.pory"
	speakername RivetshoreCity_Construction_CEO_Text_0
# 86 "data//maps/RivetshoreCity_Construction/scripts.pory"
	msgbox RivetshoreCity_Construction_CEO_Text_2
	goto RivetshoreCity_Construction_CEO_1


# 81 "data//maps/RivetshoreCity_Construction/scripts.pory"
RivetshoreCity_Construction_CEO_Movement_0:
# 81 "data//maps/RivetshoreCity_Construction/scripts.pory"
	emote_exclamation_mark
	step_end

RivetshoreCity_Construction_Nurse_Text_0:
# 10 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Welcome to Rivetshore Construction!\n"
	.string "If you're here about the contract job,\l"
	.string "please head upstairs to speak to our\l"
	.string "CEO.$"

RivetshoreCity_Construction_NPC1_Text_0:
# 14 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "I came from Pelluca City. Our bridge was\n"
	.string "build by Rivetshore Construction!$"

RivetshoreCity_Construction_NPC2_Text_0:
# 18 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "I applied for a job here, but they\n"
	.string "haven't replied to me yet...$"

RivetshoreCity_Construction_NPC3_Text_0:
# 22 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Are you the contractor the CEO hired?\p"
	.string "No?\p"
	.string "The CEO was looking for a trainer to\n"
	.string "help him out.$"

RivetshoreCity_Construction_NPC4_Text_0:
# 29 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "...so based on this years financials,\n"
	.string "we're not likely to...\p"
	.string "Sounds like a important meeting.\n"
	.string "Better not disturb them!$"

RivetshoreCity_Construction_NPC5_Text_0:
# 35 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "...while I hear what you're saying, our\n"
	.string "clients would never...\p"
	.string "Sounds like a important meeting.\n"
	.string "Better not disturb them!$"

RivetshoreCity_Construction_NPC6_Text_0:
# 41 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "...but the underlying factor here is the\n"
	.string "lack of concrete...\p"
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
	.string "Even a big-time CEO has a weak point,\n"
	.string "and our CEO's weak point is his prized\l"
	.string "Perrserker.$"

RivetshoreCity_Construction_CEO_Text_0:
# 77 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "CEO$"

RivetshoreCity_Construction_CEO_Text_1:
# 78 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Yes, child, come. You're here for the\n"
	.string "contract offer right?\p"
	.string "...\p"
	.string "No?\p"
	.string "A pity. You look reliable.\p"
	.string "My beautiful Perrserker has gone\n"
	.string "missing, you see. I'm looking for a\l"
	.string "strong trainer to bring Perrserker\l"
	.string "back!\p"
	.string "...\p"
	.string "Run away?$"

RivetshoreCity_Construction_CEO_Text_2:
# 86 "data//maps/RivetshoreCity_Construction/scripts.pory"
	.string "Absolutely not! I loved and cared for it\n"
	.string "since the day it was born. It would\l"
	.string "never run away!$"
