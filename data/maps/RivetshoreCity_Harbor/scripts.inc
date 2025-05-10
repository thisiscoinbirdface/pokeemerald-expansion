RivetshoreCity_Harbor_MapScripts::
	.byte 0


RivetshoreCity_Harbor_LoadBox::
# 11 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	lockall
# 14 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Attendant::
# 19 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Attendant_Text_0, MSGBOX_NPC
	end


RivetshoreCity_Harbor_Inger::
# 29 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	lockall
# 30 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	speakername RivetshoreCity_Harbor_Inger_Text_0
# 31 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Inger_Text_1
# 32 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Minior::
# 36 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	lockall
# 37 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 38 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Minior_Text_0
# 39 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Ariana::
# 43 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	lockall
# 44 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	speakername RivetshoreCity_Harbor_Ariana_Text_0
# 45 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Ariana_Text_1
# 46 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Tauros::
# 50 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 51 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Tauros_Text_0
# 52 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Jania::
# 57 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	lockall
# 58 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	speakername RivetshoreCity_Harbor_Jania_Text_0
# 59 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Jania_Text_1
# 60 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Gloria::
# 64 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	lockall
# 65 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	speakername RivetshoreCity_Harbor_Gloria_Text_0
# 66 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Gloria_Text_1
# 67 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Attendant_Text_0:
# 19 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Sorry, you need a Cruise Ticket to board\n"
	.string "the ship.$"

RivetshoreCity_Harbor_Inger_Text_0:
# 30 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Inger$"

RivetshoreCity_Harbor_Inger_Text_1:
# 31 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Go Minior! Use Rollout!$"

RivetshoreCity_Harbor_Minior_Text_0:
# 38 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "miiiiii!!!\p"
	.string "Minior is curling up into a ball...but it's\n"
	.string "already a ball!\p"
	.string "How does that work?$"

RivetshoreCity_Harbor_Ariana_Text_0:
# 44 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Ariana$"

RivetshoreCity_Harbor_Ariana_Text_1:
# 45 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Tauros! Flame Charge right through the\n"
	.string "Rollout!$"

RivetshoreCity_Harbor_Tauros_Text_0:
# 51 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Tauros is huffing and releasing heat!$"

RivetshoreCity_Harbor_Jania_Text_0:
# 58 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Jania$"

RivetshoreCity_Harbor_Jania_Text_1:
# 59 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "...I heard your last performance was\n"
	.string "simply breathtaking!\p"
	.string "I wish I could have seen it live...$"

RivetshoreCity_Harbor_Gloria_Text_0:
# 65 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Gloria$"

RivetshoreCity_Harbor_Gloria_Text_1:
# 66 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "...Arsalan spoke very highly your work.\n"
	.string "You really must do an exhibition!$"
