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
# 17 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_NPC2_Text_0, MSGBOX_NPC
	end


GalecrestCity_GameCorner_Gacha_Basic::
# 40 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	lockall
# 41 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_0
# 42 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 44 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 45 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_1, MSGBOX_YESNO
# 46 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 47 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Basic_2
# 52 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, GalecrestCity_GameCorner_Gacha_Basic_5
# 72 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 73 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_4
GalecrestCity_GameCorner_Gacha_Basic_4:
# 76 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Basic_2:
# 48 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
	end

GalecrestCity_GameCorner_Gacha_Basic_5:
# 54 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	checkitem ITEM_GACHA_TOKEN
# 56 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Basic_9
# 62 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 63 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_3, MSGBOX_YESNO
# 64 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 65 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Basic_12
# 66 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 67 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 68 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	special StartGacha
# 69 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	waitstate
# 70 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	removeitem ITEM_GACHA_TOKEN
	goto GalecrestCity_GameCorner_Gacha_Basic_4

GalecrestCity_GameCorner_Gacha_Basic_9:
# 57 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 58 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_2
# 59 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Basic_12:
	end


GalecrestCity_GameCorner_Gacha_Great::
# 82 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	lockall
# 83 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Great_Text_0
# 84 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 86 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 87 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_1, MSGBOX_YESNO
# 88 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 89 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Great_2
# 94 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, GalecrestCity_GameCorner_Gacha_Great_5
# 114 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 115 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Great_Text_1
GalecrestCity_GameCorner_Gacha_Great_4:
# 118 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Great_2:
# 90 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
	end

GalecrestCity_GameCorner_Gacha_Great_5:
# 96 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	checkitem ITEM_GACHA_TOKEN
# 98 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Great_9
# 104 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 105 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_3, MSGBOX_YESNO
# 106 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 107 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Great_12
# 108 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 2
# 109 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 110 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	special StartGacha
# 111 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	waitstate
# 112 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	removeitem ITEM_GACHA_TOKEN
	goto GalecrestCity_GameCorner_Gacha_Great_4

GalecrestCity_GameCorner_Gacha_Great_9:
# 99 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 100 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_2
# 101 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Great_12:
	end


GalecrestCity_GameCorner_Gacha_Ultra::
# 124 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	lockall
# 125 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Ultra_Text_0
# 126 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 128 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 129 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_1, MSGBOX_YESNO
# 130 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 131 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Ultra_2
# 136 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, GalecrestCity_GameCorner_Gacha_Ultra_5
# 156 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 157 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Ultra_Text_1
GalecrestCity_GameCorner_Gacha_Ultra_4:
# 160 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Ultra_2:
# 132 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
	end

GalecrestCity_GameCorner_Gacha_Ultra_5:
# 138 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	checkitem ITEM_GACHA_TOKEN
# 140 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Ultra_9
# 146 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 147 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_3, MSGBOX_YESNO
# 148 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 149 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Ultra_12
# 150 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 3
# 151 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 152 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	special StartGacha
# 153 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	waitstate
# 154 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	removeitem ITEM_GACHA_TOKEN
	goto GalecrestCity_GameCorner_Gacha_Ultra_4

GalecrestCity_GameCorner_Gacha_Ultra_9:
# 141 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 142 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_2
# 143 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Ultra_12:
	end


GalecrestCity_GameCorner_Gacha_Master::
# 166 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	lockall
# 167 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Master_Text_0
# 168 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 170 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 171 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_1, MSGBOX_YESNO
# 172 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 173 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Master_2
# 178 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, GalecrestCity_GameCorner_Gacha_Master_5
# 198 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 199 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Master_Text_1
GalecrestCity_GameCorner_Gacha_Master_4:
# 202 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Master_2:
# 174 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
	end

GalecrestCity_GameCorner_Gacha_Master_5:
# 180 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	checkitem ITEM_GACHA_TOKEN
# 182 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Master_9
# 188 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 189 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_3, MSGBOX_YESNO
# 190 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 191 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Master_12
# 192 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 4
# 193 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 194 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	special StartGacha
# 195 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	waitstate
# 196 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	removeitem ITEM_GACHA_TOKEN
	goto GalecrestCity_GameCorner_Gacha_Master_4

GalecrestCity_GameCorner_Gacha_Master_9:
# 183 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	delay 8
# 184 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_2
# 185 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Master_12:
	end


GalecrestCity_GameCorner_Counter_Text_0:
# 7 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "Welcome to the Galecrest Game - hey!\n"
	.string "You're too young to be gambling! You\l"
	.string "can hang around if you want, but I'm not\l"
	.string "giving you any Tokens.$"

GalecrestCity_GameCorner_NPC1_Text_0:
# 12 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "Don't tell my wife I'm here!$"

GalecrestCity_GameCorner_NPC2_Text_0:
# 17 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "I dropped my last Gacha Token in the\n"
	.string "puddles outside!\p"
	.string "...\p"
	.string "Ah well, so be it. Maybe it's a sign for me\n"
	.string "to quit!$"

GalecrestCity_GameCorner_Gacha_Basic_Text_0:
# 41 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "It's an old Gacha Machine.\n"
	.string "There's a token slot by the lever.$"

GalecrestCity_GameCorner_Gacha_Basic_Text_1:
# 45 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "Swipe your Trainer Card?$"

GalecrestCity_GameCorner_Gacha_Basic_Text_2:
# 58 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "ERROR: GACHA TOKEN REQUIRED.$"

GalecrestCity_GameCorner_Gacha_Basic_Text_3:
# 63 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "Insert Gacha Token?$"

GalecrestCity_GameCorner_Gacha_Basic_Text_4:
# 73 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "ERROR: 3 BADGES REQUIRED.$"

GalecrestCity_GameCorner_Gacha_Great_Text_0:
# 83 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "It's a regular Gacha Machine.\n"
	.string "There's a token slot by the lever.$"

GalecrestCity_GameCorner_Gacha_Great_Text_1:
# 115 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "ERROR: 4 BADGES REQUIRED.$"

GalecrestCity_GameCorner_Gacha_Ultra_Text_0:
# 125 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "It's a nice Gacha Machine.\n"
	.string "There's a token slot by the lever.$"

GalecrestCity_GameCorner_Gacha_Ultra_Text_1:
# 157 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "ERROR: 6 BADGES REQUIRED.$"

GalecrestCity_GameCorner_Gacha_Master_Text_0:
# 167 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "It's a shiny new Gacha Machine!\n"
	.string "There's a token slot by the lever.$"

GalecrestCity_GameCorner_Gacha_Master_Text_1:
# 199 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "ERROR: 8 BADGES REQUIRED.$"
