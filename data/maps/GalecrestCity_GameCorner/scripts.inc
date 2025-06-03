GalecrestCity_GameCorner_MapScripts::
	.byte 0


GalecrestCity_GameCorner_Gacha_Basic::
# 6 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	lockall
# 7 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_0, MSGBOX_YESNO
# 8 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
# 9 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GalecrestCity_GameCorner_Gacha_Basic_2
# 14 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, GalecrestCity_GameCorner_Gacha_Basic_5
# 20 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	msgbox GalecrestCity_GameCorner_Gacha_Basic_Text_1
GalecrestCity_GameCorner_Gacha_Basic_4:
# 23 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	releaseall
	end

GalecrestCity_GameCorner_Gacha_Basic_2:
# 10 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	release
	end

GalecrestCity_GameCorner_Gacha_Basic_5:
# 15 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	setvar VAR_0x8004, 1
# 16 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	playbgm MUS_RG_CINNABAR, FALSE
# 17 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	special StartGacha
# 18 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	waitstate
	goto GalecrestCity_GameCorner_Gacha_Basic_4


GalecrestCity_GameCorner_Gacha_Basic_Text_0:
# 7 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "Swipe your Trainer Card?$"

GalecrestCity_GameCorner_Gacha_Basic_Text_1:
# 20 "data//maps/GalecrestCity_GameCorner/scripts.pory"
	.string "ERROR: 3 BADGES REQUIRED.$"
