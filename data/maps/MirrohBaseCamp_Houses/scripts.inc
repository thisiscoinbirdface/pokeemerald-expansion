MirrohBaseCamp_Houses_MapScripts::
	.byte 0


MirrohBaseCamp_Houses_Historian::
# 6 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	lockall
# 7 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	faceplayer
# 9 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_MIRROHBASECAMP_HISTORIAN, MirrohBaseCamp_Houses_Historian_2
# 33 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 34 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_5
# 35 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 36 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_0
# 37 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 38 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 39 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 40 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_6
# 41 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 42 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 30
# 45 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_ANCIENT_STONE
# 46 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Houses_Historian_9
MirrohBaseCamp_Houses_Historian_8:
# 70 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 71 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_10
# 72 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 73 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 30
# 74 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 75 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_11
# 76 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 77 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 78 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 79 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_0
# 80 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 81 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 82 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_12
# 84 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MirrohBaseCamp_Houses_Historian_15
# 93 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 94 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_14
# 95 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
MirrohBaseCamp_Houses_Historian_14:
# 98 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	completesubquest QUEST_DREAMSTONE_MYSTERIES, SUB_QUEST_6
# 99 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROHBASECAMP_HISTORIAN
	end

MirrohBaseCamp_Houses_Historian_2:
# 10 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_MIRROH_GOT_OLD_BONE, MirrohBaseCamp_Houses_Historian_5
# 16 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, MirrohBaseCamp_Houses_Historian_11
# 26 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 27 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_4, MSGBOX_NPC
# 28 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_5:
# 11 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 12 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_1, MSGBOX_NPC
# 13 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_9:
# 47 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_1
# 48 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 49 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 50 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 51 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_7
# 52 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 53 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 8
# 54 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_ANCIENT_STONE
# 55 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 56 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	message MirrohBaseCamp_Houses_Historian_Text_8
# 57 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitfanfare
# 58 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 59 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 8
# 60 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 1, MirrohBaseCamp_Houses_Historian_Movement_0
# 61 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 62 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 63 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 64 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_9
# 65 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_AERODACTYLITE
# 66 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 67 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
	goto MirrohBaseCamp_Houses_Historian_8

MirrohBaseCamp_Houses_Historian_11:
# 17 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_2
# 18 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 19 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROH_GOT_OLD_BONE
# 20 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_RARE_BONE
# 21 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 22 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_3
# 23 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_Historian_15:
# 85 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_13
# 86 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 87 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_RARE_BONE
# 88 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_MIRROH_GOT_OLD_BONE
# 89 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	speakername MirrohBaseCamp_Houses_Historian_Text_0
# 90 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_Historian_Text_3
# 91 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
	goto MirrohBaseCamp_Houses_Historian_14


MirrohBaseCamp_Houndstone::
# 106 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playmoncry SPECIES_HOUNDSTONE, CRY_MODE_NORMAL
# 107 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houndstone_Text_0, MSGBOX_NPC
	end


MirrohBaseCamp_Houses_MasterballGuy::
# 119 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_MASTERBALL_QUEST, 2
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_2
MirrohBaseCamp_Houses_MasterballGuy_1:
# 123 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_MASTERBALL_QUEST, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_5
MirrohBaseCamp_Houses_MasterballGuy_4:
# 154 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_MASTERBALL_QUEST, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_8
MirrohBaseCamp_Houses_MasterballGuy_7:
# 172 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballGuy_2:
# 120 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_0
	goto MirrohBaseCamp_Houses_MasterballGuy_1

MirrohBaseCamp_Houses_MasterballGuy_5:
# 124 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_1, MSGBOX_NPC
# 126 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_CASTELIACONE
# 127 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_11
# 131 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_OLD_GATEAU
# 132 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_14
# 136 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem ITEM_LAVA_COOKIE
# 137 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballGuy_17
# 143 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_CASTELIACONE
# 144 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_OLD_GATEAU
# 145 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem ITEM_LAVA_COOKIE
# 147 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_5
# 148 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playse SE_BALL
# 149 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_6, MSGBOX_NPC
# 150 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 151 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_MASTERBALL_QUEST, 2
	goto MirrohBaseCamp_Houses_MasterballGuy_4

MirrohBaseCamp_Houses_MasterballGuy_8:
# 155 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_7, MSGBOX_NPC
# 156 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8006, ITEM_MASTER_BALL
# 157 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	showitemdescription
# 158 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_8, MSGBOX_NPC
# 159 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	hideitemdescription
# 160 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_9
# 161 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 162 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 163 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	applymovement 2, MirrohBaseCamp_Houses_Historian_Movement_0
# 164 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitmovement 0
# 165 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	delay 16
# 166 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_10
# 167 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 170 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_MASTERBALL_QUEST, 1
	goto MirrohBaseCamp_Houses_MasterballGuy_7

MirrohBaseCamp_Houses_MasterballGuy_11:
# 128 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_2, MSGBOX_NPC
	end

MirrohBaseCamp_Houses_MasterballGuy_14:
# 133 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_3, MSGBOX_NPC
	end

MirrohBaseCamp_Houses_MasterballGuy_17:
# 138 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballGuy_Text_4, MSGBOX_NPC
	end


MirrohBaseCamp_Houses_MasterballFriend::
# 177 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	lockall
# 178 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	faceplayer
# 180 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	goto_if_set FLAG_SKIP_BALL_CHANGER, MirrohBaseCamp_Houses_MasterballFriend_2
# 183 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setflag FLAG_SKIP_BALL_CHANGER
# 184 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_0
MirrohBaseCamp_Houses_MasterballFriend_1:
# 187 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_1, MSGBOX_YESNO
# 190 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_6
# 236 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_2
MirrohBaseCamp_Houses_MasterballFriend_5:
# 239 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballFriend_2:
	goto MirrohBaseCamp_Houses_MasterballFriend_1

MirrohBaseCamp_Houses_MasterballFriend_6:
# 191 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	special ChoosePartyMon
# 192 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	waitstate
# 193 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_10
# 199 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	message MirrohBaseCamp_Houses_MasterballFriend_Text_3
# 201 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_4, ITEM_POKE_BALL
# 202 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_5, ITEM_GREAT_BALL
# 203 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_6, ITEM_ULTRA_BALL
# 204 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_7, ITEM_DIVE_BALL
# 205 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_8, ITEM_HEAL_BALL
# 206 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_9, ITEM_QUICK_BALL
# 207 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_10, ITEM_LUXURY_BALL
# 208 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultipush MirrohBaseCamp_Houses_MasterballFriend_Text_11, ITEM_DREAM_BALL
# 209 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 211 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_POKE_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_13
MirrohBaseCamp_Houses_MasterballFriend_12:
# 212 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_GREAT_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_16
MirrohBaseCamp_Houses_MasterballFriend_15:
# 213 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_ULTRA_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_19
MirrohBaseCamp_Houses_MasterballFriend_18:
# 214 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_DIVE_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_22
MirrohBaseCamp_Houses_MasterballFriend_21:
# 215 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_HEAL_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_25
MirrohBaseCamp_Houses_MasterballFriend_24:
# 216 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_QUICK_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_28
MirrohBaseCamp_Houses_MasterballFriend_27:
# 217 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_LUXURY_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_31
MirrohBaseCamp_Houses_MasterballFriend_30:
# 218 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, ITEM_DREAM_BALL
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_34
MirrohBaseCamp_Houses_MasterballFriend_33:
# 221 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	checkitem VAR_0x8005
# 223 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MirrohBaseCamp_Houses_MasterballFriend_37
# 228 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	removeitem VAR_0x8005
# 229 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_13, MSGBOX_SIGN
# 230 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	special SetMonPokeball
# 231 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_14
# 232 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	release
# 233 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	playse SE_BALL
# 234 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_15
	goto MirrohBaseCamp_Houses_MasterballFriend_5

MirrohBaseCamp_Houses_MasterballFriend_10:
# 194 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_2
# 195 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end

MirrohBaseCamp_Houses_MasterballFriend_13:
# 211 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_POKE_BALL
# 211 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_POKE_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_12

MirrohBaseCamp_Houses_MasterballFriend_16:
# 212 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_GREAT_BALL
# 212 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_GREAT_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_15

MirrohBaseCamp_Houses_MasterballFriend_19:
# 213 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_ULTRA_BALL
# 213 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ULTRA_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_18

MirrohBaseCamp_Houses_MasterballFriend_22:
# 214 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_DIVE_BALL
# 214 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DIVE_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_21

MirrohBaseCamp_Houses_MasterballFriend_25:
# 215 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_HEAL_BALL
# 215 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_24

MirrohBaseCamp_Houses_MasterballFriend_28:
# 216 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_QUICK_BALL
# 216 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_QUICK_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_27

MirrohBaseCamp_Houses_MasterballFriend_31:
# 217 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_LUXURY_BALL
# 217 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_LUXURY_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_30

MirrohBaseCamp_Houses_MasterballFriend_34:
# 218 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	setvar VAR_0x8005, ITEM_DREAM_BALL
# 218 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DREAM_BALL
	goto MirrohBaseCamp_Houses_MasterballFriend_33

MirrohBaseCamp_Houses_MasterballFriend_37:
# 224 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	msgbox MirrohBaseCamp_Houses_MasterballFriend_Text_12
# 225 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	releaseall
	end


# 36 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_0:
# 36 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	emote_exclamation_mark
	step_end

# 47 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
MirrohBaseCamp_Houses_Historian_Movement_1:
# 47 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	emote_question_mark
	step_end

MirrohBaseCamp_Houses_Historian_Text_0:
# 11 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Martha$"

MirrohBaseCamp_Houses_Historian_Text_1:
# 12 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Hello child. How are you?$"

MirrohBaseCamp_Houses_Historian_Text_2:
# 17 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "I found it! Take this and give it to the\n"
	.string "Greavard playing outside. It'll distract\l"
	.string "them. Hopefully they'll come home.$"

MirrohBaseCamp_Houses_Historian_Text_3:
# 22 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "As for me, I must get back to my\n"
	.string "reading...$"

MirrohBaseCamp_Houses_Historian_Text_4:
# 27 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "How strange...I'm sure I had a bone for\n"
	.string "Greavard somewhere...$"

MirrohBaseCamp_Houses_Historian_Text_5:
# 34 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Yes, child. Tell me. What's the story?\p"
	.string "...\p"
	.string "...\p"
	.string "...$"

MirrohBaseCamp_Houses_Historian_Text_6:
# 40 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "I see...so this Team Somber wants to\n"
	.string "re-enter the past using the\l"
	.string "dreamstones? How interesting. To think\l"
	.string "we've reached an age where humankind\l"
	.string "can control a dreamstone...incredible,\l"
	.string "but terrifying at the same time.$"

MirrohBaseCamp_Houses_Historian_Text_7:
# 51 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You brought something back from there?\n"
	.string "Shall we take a look?$"

MirrohBaseCamp_Houses_Historian_Text_8:
# 56 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "{PLAYER} gave Martha the Ancient\n"
	.string "Stone.$"

MirrohBaseCamp_Houses_Historian_Text_9:
# 64 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Oh my! What a find!\p"
	.string "This is a Mega Stone, {PLAYER}. It's to\n"
	.string "be used by a rare ancient Pokémon\l"
	.string "called Aerodactyl.\p"
	.string "An incredible piece of ancient history.\n"
	.string "You must treasure it!$"

MirrohBaseCamp_Houses_Historian_Text_10:
# 71 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
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

MirrohBaseCamp_Houses_Historian_Text_11:
# 75 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
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

MirrohBaseCamp_Houses_Historian_Text_12:
# 82 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Oh my! Would you look at the time? I've\n"
	.string "rambled on for too long. Apologies,\l"
	.string "{PLAYER}. I hope this information\l"
	.string "helps you in your journey.\p"
	.string "You should go to Mt. Mirroh and see the\n"
	.string "cave painting for yourself.$"

MirrohBaseCamp_Houses_Historian_Text_13:
# 85 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Here - take this and give it to the\n"
	.string "Greavard playing outside. It'll distract\l"
	.string "them. Hopefully they'll come home.$"

MirrohBaseCamp_Houses_Historian_Text_14:
# 94 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Now, I must do something about the\n"
	.string "Greavard playing by the market.\l"
	.string "Perhaps one could distract them with a\l"
	.string "bone or something...I'm sure I had one\l"
	.string "lying around...\p"
	.string "Why don't you visit the Gym here\n"
	.string "meanwhile? You may still get a badge\l"
	.string "before they close.$"

MirrohBaseCamp_Houndstone_Text_0:
# 107 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Houndstone is walking slowly.\n"
	.string "It's getting old now...$"

MirrohBaseCamp_Houses_MasterballGuy_Text_0:
# 120 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Hello {PLAYER}!$"

MirrohBaseCamp_Houses_MasterballGuy_Text_1:
# 124 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Did you get everything?$"

MirrohBaseCamp_Houses_MasterballGuy_Text_2:
# 128 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You didn't bring the Mirroh Cone!\p"
	.string "Come back with everything.$"

MirrohBaseCamp_Houses_MasterballGuy_Text_3:
# 133 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You didn't bring the Apple Pie!\p"
	.string "Come back with everything.$"

MirrohBaseCamp_Houses_MasterballGuy_Text_4:
# 138 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You didn't bring the Lava Cookie!\p"
	.string "Come back with everything.$"

MirrohBaseCamp_Houses_MasterballGuy_Text_5:
# 147 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
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
# 149 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "And there we go! A brand-new Master\n"
	.string "Ball, just for you!\p"
	.string "No, I didn't pull it out of my pocket. Are\n"
	.string "you seeing things?$"

MirrohBaseCamp_Houses_MasterballGuy_Text_7:
# 155 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "A friend of Rue's?\p"
	.string "...\p"
	.string "Ah, you're his new assistant. Nice to\n"
	.string "meet you, {PLAYER}! Rue and I go long\l"
	.string "back. While he entered academia, I\l"
	.string "became a Poké Ball craftsman instead!$"

MirrohBaseCamp_Houses_MasterballGuy_Text_8:
# 158 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "A few years ago, I finally perfected my\n"
	.string "opus magnum - the Master Ball!\p"
	.string "Looks beautiful, doesn't it?$"

MirrohBaseCamp_Houses_MasterballGuy_Text_9:
# 160 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Since you're Rue's assistant and he's an\n"
	.string "old friend, how about I do you a favour?\p"
	.string "I can make you one...if you get me the\n"
	.string "right crafting components!\p"
	.string "Let's see...I'll need...\p"
	.string "...one Apple Pie...\p"
	.string "...one Lava Cookie...\p"
	.string "...and one Mirroh Cone!$"

MirrohBaseCamp_Houses_MasterballGuy_Text_10:
# 166 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Of course these aren't for me!\n"
	.string "These are for the Master Ball!\p"
	.string "Are you accusing me of using you?\p"
	.string "...\p"
	.string "Ahem. I'll be waiting here!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_0:
# 184 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "This man here is the only person in all\n"
	.string "of Cormoria who can make a Master Ball.\l"
	.string "A master of the craft!\p"
	.string "I'm not like him, but I've got a couple of\n"
	.string "tricks up my sleeve too!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_1:
# 187 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "I can change the Poké Balls of your\n"
	.string "Pokémon if you bring me the Poké Ball!\p"
	.string "Would you like me to?$"

MirrohBaseCamp_Houses_MasterballFriend_Text_2:
# 194 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Come back any time!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_3:
# 199 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Now which Poké Ball should I switch to?$"

MirrohBaseCamp_Houses_MasterballFriend_Text_4:
# 201 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Poké Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_5:
# 202 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Great Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_6:
# 203 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Ultra Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_7:
# 204 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Dive Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_8:
# 205 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Heal Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_9:
# 206 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Quick Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_10:
# 207 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Luxury Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_11:
# 208 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "Dream Ball$"

MirrohBaseCamp_Houses_MasterballFriend_Text_12:
# 224 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "You don't have a {STR_VAR_1}.\p"
	.string "I can switch Poké Balls but I can't make\n"
	.string "them appear out of thin air!$"

MirrohBaseCamp_Houses_MasterballFriend_Text_13:
# 229 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "{PLAYER} handed a {STR_VAR_1}\n"
	.string "over to the craftsman.$"

MirrohBaseCamp_Houses_MasterballFriend_Text_14:
# 231 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "...\p"
	.string "...$"

MirrohBaseCamp_Houses_MasterballFriend_Text_15:
# 234 "data//maps/MirrohBaseCamp_Houses/scripts.pory"
	.string "...and done! Come back if you need me to\n"
	.string "do any more!$"
