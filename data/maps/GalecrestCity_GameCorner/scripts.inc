GalecrestCity_GameCorner_MapScripts::
	.byte 0


GalecrestCity_GameCorner_Counter::
# 7 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Counter_Text_0, MSGBOX_NPC
	end


GalecrestCity_GameCorner_NPC1::
# 12 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_NPC1_Text_0, MSGBOX_NPC
	end


GalecrestCity_GameCorner_NPC2::
# 16 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_NPC2_Text_0, MSGBOX_NPC
	end


GalecrestCity_GameCorner_NPC3::
# 20 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_NPC3_Text_0, MSGBOX_NPC
	end


GalecrestCity_GameCorner_Gacha_Basic::
# 43 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	lockall
# 44 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_0
# 45 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 47 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 48 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_1, MSGBOX_YESNO
# 49 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 50 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Basic_2
# 55 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, GalecrestCity_GameCorner_Gacha_Basic_5
# 75 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 76 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_4
GalecrestCity_GameCorner_Gacha_Basic_4:
# 79 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Basic_2:
# 51 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
	end

GalecrestCity_GameCorner_Gacha_Basic_5:
# 57 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	checkitem ITEM_GACHA_TOKEN
# 59 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Basic_9
# 65 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 66 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_3, MSGBOX_YESNO
# 67 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 68 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Basic_12
# 69 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 70 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 71 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	special StartGacha
# 72 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	waitstate
# 73 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	removeitem ITEM_GACHA_TOKEN
	goto GalecrestCity_GameCorner_Gacha_Basic_4

GalecrestCity_GameCorner_Gacha_Basic_9:
# 60 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 61 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_2
# 62 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Basic_12:
	end


GalecrestCity_GameCorner_Gacha_Great::
# 85 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	lockall
# 86 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Great_Text_0
# 87 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 89 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 90 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_1, MSGBOX_YESNO
# 91 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 92 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Great_2
# 97 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, GalecrestCity_GameCorner_Gacha_Great_5
# 117 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 118 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Great_Text_1
GalecrestCity_GameCorner_Gacha_Great_4:
# 121 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Great_2:
# 93 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
	end

GalecrestCity_GameCorner_Gacha_Great_5:
# 99 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	checkitem ITEM_GACHA_TOKEN
# 101 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Great_9
# 107 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 108 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_3, MSGBOX_YESNO
# 109 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 110 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Great_12
# 111 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 112 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 113 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	special StartGacha
# 114 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	waitstate
# 115 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	removeitem ITEM_GACHA_TOKEN
	goto GalecrestCity_GameCorner_Gacha_Great_4

GalecrestCity_GameCorner_Gacha_Great_9:
# 102 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 103 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_2
# 104 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Great_12:
	end


GalecrestCity_GameCorner_Gacha_Ultra::
# 127 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	lockall
# 128 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Ultra_Text_0
# 129 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 131 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 132 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_1, MSGBOX_YESNO
# 133 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 134 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Ultra_2
# 139 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, GalecrestCity_GameCorner_Gacha_Ultra_5
# 159 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 160 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Ultra_Text_1
GalecrestCity_GameCorner_Gacha_Ultra_4:
# 163 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Ultra_2:
# 135 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
	end

GalecrestCity_GameCorner_Gacha_Ultra_5:
# 141 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	checkitem ITEM_GACHA_TOKEN
# 143 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Ultra_9
# 149 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 150 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_3, MSGBOX_YESNO
# 151 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 152 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Ultra_12
# 153 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 154 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 155 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	special StartGacha
# 156 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	waitstate
# 157 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	removeitem ITEM_GACHA_TOKEN
	goto GalecrestCity_GameCorner_Gacha_Ultra_4

GalecrestCity_GameCorner_Gacha_Ultra_9:
# 144 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 145 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_2
# 146 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Ultra_12:
	end


GalecrestCity_GameCorner_Gacha_Master::
# 169 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	lockall
# 170 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Master_Text_0
# 171 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 173 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 174 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_1, MSGBOX_YESNO
# 175 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 176 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Master_2
# 181 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, GalecrestCity_GameCorner_Gacha_Master_5
# 201 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 202 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Master_Text_1
GalecrestCity_GameCorner_Gacha_Master_4:
# 205 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Master_2:
# 177 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
	end

GalecrestCity_GameCorner_Gacha_Master_5:
# 183 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	checkitem ITEM_GACHA_TOKEN
# 185 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Master_9
# 191 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 192 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_3, MSGBOX_YESNO
# 193 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 194 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Master_12
# 195 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 196 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 197 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	special StartGacha
# 198 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	waitstate
# 199 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	removeitem ITEM_GACHA_TOKEN
	goto GalecrestCity_GameCorner_Gacha_Master_4

GalecrestCity_GameCorner_Gacha_Master_9:
# 186 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 187 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_2
# 188 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Master_12:
	end


GalecrestCity_GameCorner_Counter_Text_0:
# 7 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "Welcome to the Galecrest Game - hey!\n"
	.string "You're too young to be gambling!\l"
	.string "You can hang around if you want, but I'm\l"
	.string "not giving you any Tokens.$"

GalecrestCity_GameCorner_NPC1_Text_0:
# 12 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "Don't tell my wife I'm here!$"

GalecrestCity_GameCorner_NPC2_Text_0:
# 16 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "I dropped my last Gacha Token in\n"
	.string "one of the puddles outside!\p"
	.string "...\p"
	.string "Maybe it's a sign for me to quit!$"

GalecrestCity_GameCorner_NPC3_Text_0:
# 20 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "The good machines come with better\n"
	.string "rewards! But you need enough badges.$"

GalecrestCity_GameCorner_Gacha_Basic_Text_0:
# 44 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "It's an old Gacha Machine.\n"
	.string "There's a token slot by the lever.$"

GalecrestCity_GameCorner_Gacha_Basic_Text_1:
# 48 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "Swipe your Trainer Card?$"

GalecrestCity_GameCorner_Gacha_Basic_Text_2:
# 61 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "ERROR: GACHA TOKEN REQUIRED.$"

GalecrestCity_GameCorner_Gacha_Basic_Text_3:
# 66 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "Insert Gacha Token?$"

GalecrestCity_GameCorner_Gacha_Basic_Text_4:
# 76 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "ERROR: 3 BADGES REQUIRED.$"

GalecrestCity_GameCorner_Gacha_Great_Text_0:
# 86 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "It's a regular Gacha Machine.\n"
	.string "There's a token slot by the lever.$"

GalecrestCity_GameCorner_Gacha_Great_Text_1:
# 118 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "ERROR: 4 BADGES REQUIRED.$"

GalecrestCity_GameCorner_Gacha_Ultra_Text_0:
# 128 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "It's a nice Gacha Machine.\n"
	.string "There's a token slot by the lever.$"

GalecrestCity_GameCorner_Gacha_Ultra_Text_1:
# 160 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "ERROR: 6 BADGES REQUIRED.$"

GalecrestCity_GameCorner_Gacha_Master_Text_0:
# 170 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "It's a shiny new Gacha Machine!\n"
	.string "There's a token slot by the lever.$"

GalecrestCity_GameCorner_Gacha_Master_Text_1:
# 202 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "ERROR: 8 BADGES REQUIRED.$"
