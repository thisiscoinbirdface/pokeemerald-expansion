RivetshoreCity_Harbor_MapScripts::
	.byte 0


RivetshoreCity_Harbor_Inger::
# 7 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	lockall
# 8 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	speakername RivetshoreCity_Harbor_Inger_Text_0
# 9 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Inger_Text_1
# 10 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Minior::
# 14 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	lockall
# 15 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 16 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Minior_Text_0
# 17 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Ariana::
# 21 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	lockall
# 22 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	speakername RivetshoreCity_Harbor_Ariana_Text_0
# 23 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Ariana_Text_1
# 24 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Tauros::
# 28 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	playmoncry SPECIES_MINIOR, CRY_MODE_NORMAL
# 29 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Tauros_Text_0
# 30 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Jania::
# 35 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	lockall
# 36 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	speakername RivetshoreCity_Harbor_Jania_Text_0
# 37 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Jania_Text_1
# 38 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Gloria::
# 42 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	lockall
# 43 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	speakername RivetshoreCity_Harbor_Gloria_Text_0
# 44 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	msgbox RivetshoreCity_Harbor_Gloria_Text_1
# 45 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	releaseall
	end


RivetshoreCity_Harbor_Inger_Text_0:
# 8 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Inger$"

RivetshoreCity_Harbor_Inger_Text_1:
# 9 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Go Minior! Use Rollout!$"

RivetshoreCity_Harbor_Minior_Text_0:
# 16 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "miiiiii!!!\p"
	.string "Minior is curling up into a ball...but it's\n"
	.string "already a ball!\p"
	.string "How does that work?$"

RivetshoreCity_Harbor_Ariana_Text_0:
# 22 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Ariana$"

RivetshoreCity_Harbor_Ariana_Text_1:
# 23 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Tauros! Flame Charge right through the\n"
	.string "Rollout!$"

RivetshoreCity_Harbor_Tauros_Text_0:
# 29 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Tauros is huffing and releasing heat!$"

RivetshoreCity_Harbor_Jania_Text_0:
# 36 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Jania$"

RivetshoreCity_Harbor_Jania_Text_1:
# 37 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "...I heard your last performance was\n"
	.string "simply breathtaking!\p"
	.string "I wish I could have seen it live...$"

RivetshoreCity_Harbor_Gloria_Text_0:
# 43 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "Gloria$"

RivetshoreCity_Harbor_Gloria_Text_1:
# 44 "data//maps/RivetshoreCity_Harbor/scripts.pory"
	.string "...Arsalan spoke very highly your work.\n"
	.string "You really must do an exhibition!$"
