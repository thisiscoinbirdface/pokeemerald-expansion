SilversunCity_Sewers_MapScripts::
	.byte 0


SilversunCity_Sewers_NPC6::
# 19 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 20 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 21 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC6_Text_0
# 22 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_ManLostWife_Trigger0::
# 27 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 0
	goto_if_eq SilversunCity_Sewers_ManLostWife_Trigger0_1
	return

SilversunCity_Sewers_ManLostWife_Trigger0_1:
# 28 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 29 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_0
# 30 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 31 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 32 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 33 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_ManLostWife_Trigger0_Text_0
# 34 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
# 35 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return


SilversunCity_Sewers_ManLostWife_Trigger1::
# 40 "data//maps/SilversunCity_Sewers/scripts.pory"
	compare VAR_SEWERS_DUSKULL, 0
	goto_if_eq SilversunCity_Sewers_ManLostWife_Trigger1_1
	return

SilversunCity_Sewers_ManLostWife_Trigger1_1:
# 41 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 42 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_ManLostWife_Trigger1_Movement_0
# 43 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 44 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1
# 45 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 46 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_ManLostWife_Trigger1_Text_0
# 47 "data//maps/SilversunCity_Sewers/scripts.pory"
	setvar VAR_SEWERS_DUSKULL, 1
# 48 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 1, SilversunCity_Sewers_ManLostWife_Trigger1_Movement_1
# 49 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 50 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return


SilversunCity_Sewers_Duskull_Trigger0::
# 55 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 56 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger0_Movement_0
# 57 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Trigger1::
# 61 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 62 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger1_Movement_0
# 63 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Trigger2::
# 67 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 68 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilversunCity_Sewers_Duskull_Trigger2_Movement_0
# 69 "data//maps/SilversunCity_Sewers/scripts.pory"
	goto SilversunCity_Sewers_Duskull_Event
	return


SilversunCity_Sewers_Duskull_Event::
# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_0
# 76 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmovement 0
# 77 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_0
# 78 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 81 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 15, SilversunCity_Sewers_Duskull_Event_Movement_1
# 82 "data//maps/SilversunCity_Sewers/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 25
# 83 "data//maps/SilversunCity_Sewers/scripts.pory"
	dowildbattle
# 84 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 86 "data//maps/SilversunCity_Sewers/scripts.pory"
	removeobject 15
# 87 "data//maps/SilversunCity_Sewers/scripts.pory"
	setflag FLAG_SEWERS_DUSKULL
# 91 "data//maps/SilversunCity_Sewers/scripts.pory"
	applymovement 9, SilversunCity_Sewers_Duskull_Event_Movement_2
# 92 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Duskull_Event_Text_1
# 93 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
# 95 "data//maps/SilversunCity_Sewers/scripts.pory"
	fadescreen FADE_TO_BLACK
# 96 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectxyperm 9, 48, 46
# 97 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
# 98 "data//maps/SilversunCity_Sewers/scripts.pory"
	setobjectmovementtype OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_FACE_UP
# 99 "data//maps/SilversunCity_Sewers/scripts.pory"
	warp MAP_SILVERSUN_CITY_SEWERS, 49, 47
# 100 "data//maps/SilversunCity_Sewers/scripts.pory"
	facescreen FADE_FROM_BLACK
# 102 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	return


SilversunCity_Sewers_NPC1::
# 125 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 126 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 127 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC1_Text_0
# 128 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC2::
# 133 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 134 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC2_Text_0
# 135 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC3::
# 140 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 141 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 142 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC3_Text_0
# 143 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC4::
# 148 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 149 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 150 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC4_Text_0
# 151 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_NPC5::
# 157 "data//maps/SilversunCity_Sewers/scripts.pory"
	lockall
# 158 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 159 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_NPC5_Text_0
# 160 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_A::
# 178 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_A, SilversunCity_Sewers_Trainer_A_Text_0, SilversunCity_Sewers_Trainer_A_Text_1
# 179 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_A_Text_2
# 180 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Trainer_B::
# 185 "data//maps/SilversunCity_Sewers/scripts.pory"
	trainerbattle_single TRAINER_SEWERS_B, SilversunCity_Sewers_Trainer_B_Text_0, SilversunCity_Sewers_Trainer_B_Text_1
# 186 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Trainer_B_Text_2
# 187 "data//maps/SilversunCity_Sewers/scripts.pory"
	releaseall
	end


SilversunCity_Sewers_Market_A::
# 208 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 209 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 210 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_A_Text_0
# 211 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 212 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_A_Inventory
# 213 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_A_Text_1, MSGBOX_DEFAULT
# 214 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 218 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_A_Inventory:
# 219 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM16
# 220 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM21
# 221 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM36
# 222 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM41
# 223 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_TM46
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_B::
# 228 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 229 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 230 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_B_Text_0
# 231 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 232 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_B_Inventory
# 233 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_B_Text_1, MSGBOX_DEFAULT
# 234 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 238 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_B_Inventory:
# 239 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_ZINC
# 240 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CARBOS
# 241 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_IRON
# 242 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_CALCIUM
# 243 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_PROTEIN
# 244 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_HP_UP
	.2byte ITEM_NONE

SilversunCity_Sewers_Market_C::
# 249 "data//maps/SilversunCity_Sewers/scripts.pory"
	lock
# 250 "data//maps/SilversunCity_Sewers/scripts.pory"
	faceplayer
# 251 "data//maps/SilversunCity_Sewers/scripts.pory"
	message SilversunCity_Sewers_Market_C_Text_0
# 252 "data//maps/SilversunCity_Sewers/scripts.pory"
	waitmessage
# 253 "data//maps/SilversunCity_Sewers/scripts.pory"
	pokemart SilversunCity_Sewers_Market_C_Inventory
# 254 "data//maps/SilversunCity_Sewers/scripts.pory"
	msgbox SilversunCity_Sewers_Market_C_Text_1, MSGBOX_DEFAULT
# 255 "data//maps/SilversunCity_Sewers/scripts.pory"
	release
	end


	.align 2
# 259 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Market_C_Inventory:
# 260 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 261 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 262 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 263 "data//maps/SilversunCity_Sewers/scripts.pory"
	.2byte ITEM_FLOAT_STONE
	.2byte ITEM_NONE

# 29 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger0_Movement_0:
# 29 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
	step_end

# 31 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger0_Movement_1:
# 31 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_up
	step_end

# 42 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger1_Movement_0:
# 42 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
# 42 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 48 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_ManLostWife_Trigger1_Movement_1:
# 48 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 48 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 56 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger0_Movement_0:
# 56 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 56 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_left
# 56 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 62 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger1_Movement_0:
# 62 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
	step_end

# 68 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Trigger2_Movement_0:
# 68 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_down
# 68 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_right
# 68 "data//maps/SilversunCity_Sewers/scripts.pory"
	face_down
	step_end

# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_0:
# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
	jump_in_place_up
# 75 "data//maps/SilversunCity_Sewers/scripts.pory"
	emote_exclamation_mark
	step_end

# 81 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_1:
# 81 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 81 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

# 91 "data//maps/SilversunCity_Sewers/scripts.pory"
SilversunCity_Sewers_Duskull_Event_Movement_2:
# 91 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 91 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
# 91 "data//maps/SilversunCity_Sewers/scripts.pory"
	walk_up
	step_end

SilversunCity_Sewers_NPC6_Text_0:
# 21 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Please hurry. I don't want her to be\n"
	.string "attacked by the SEWER SKULL!$"

SilversunCity_Sewers_ManLostWife_Trigger0_Text_0:
# 33 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey - are you a trainer? Look, I need\n"
	.string "your help. My wife and I came down here\l"
	.string "to buy some illegal -\p"
	.string "I mean some furniture. We came down to\n"
	.string "buy some furniture but we got\l"
	.string "separated and now I can't find her at\l"
	.string "all!\p"
	.string "I'm really worried. What if the SEWEK\n"
	.string "SKULL gets her? Please help me find\l"
	.string "her!$"

SilversunCity_Sewers_ManLostWife_Trigger1_Text_0:
# 46 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Hey - are you a trainer? Look, I need\n"
	.string "your help. My wife and I came down here\l"
	.string "to buy some illegal -\p"
	.string "I mean some furniture. We came down to\n"
	.string "buy some furniture but we got\l"
	.string "separated and now I can't find her at\l"
	.string "all!\p"
	.string "I'm really worried because this place is\n"
	.string "teeming with dangerous {PKMN}. Please help\l"
	.string "me find her!$"

SilversunCity_Sewers_Duskull_Event_Text_0:
# 77 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Eek! Help me! The SEWER SKULL is\n"
	.string "attacking me!$"

SilversunCity_Sewers_Duskull_Event_Text_1:
# 92 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Is...is it gone?\p"
	.string "Oh my, you saved me! Thank you so much!\p"
	.string "I was so worried...I need to return to my\n"
	.string "husband quickly. He must be even more\l"
	.string "worried!\p"
	.string "He sent you?\p"
	.string "Okay, let's go to him together.$"

SilversunCity_Sewers_NPC1_Text_0:
# 127 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I bet there's no return policy on any\n"
	.string "defected products.$"

SilversunCity_Sewers_NPC2_Text_0:
# 134 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You see that giant filtration device? I\n"
	.string "was in charge of building it. My\l"
	.string "MAGNEMITE and I worked tirelessly to\l"
	.string "finish it in time. It's our biggest\l"
	.string "accomplishment!$"

SilversunCity_Sewers_NPC3_Text_0:
# 142 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "There are some creepy-looking fellows\n"
	.string "up ahead. I think they're selling\l"
	.string "something illegal.$"

SilversunCity_Sewers_NPC4_Text_0:
# 150 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Don't tell anyone I'm here! I came to\n"
	.string "find a way to evolve my SCYTHER.$"

SilversunCity_Sewers_NPC5_Text_0:
# 159 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "All this toxic runoff gets filtered\n"
	.string "before entering the HOYA RIVER. Then it\l"
	.string "goes south towards PELLUCA CITY.$"

SilversunCity_Sewers_Trainer_A_Text_0:
# 178 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I'm not like the other rich kids at\n"
	.string "school, because I'm not afraid to get my\l"
	.string "hands dirty!$"

SilversunCity_Sewers_Trainer_A_Text_1:
# 178 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Your hands are dirty too!$"

SilversunCity_Sewers_Trainer_A_Text_2:
# 179 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I came down here to catch some POISON\n"
	.string "type {PKMN} to round out my team, but I\l"
	.string "should go back up now. This place\l"
	.string "stinks.$"

SilversunCity_Sewers_Trainer_B_Text_0:
# 185 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The resonance is strong here...the\n"
	.string "toxic water vapour wafts through your\l"
	.string "nostril...you are suspended...and about\l"
	.string "to lose!$"

SilversunCity_Sewers_Trainer_B_Text_1:
# 185 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "The water stinks!$"

SilversunCity_Sewers_Trainer_B_Text_2:
# 186 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "I thought the toxicity would help me\n"
	.string "ascend.$"

SilversunCity_Sewers_Market_A_Text_0:
# 210 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Can't beat GLORIA? I'll hook you up with\n"
	.string "the best stuff.$"

SilversunCity_Sewers_Market_A_Text_1:
# 213 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Stay a loser then!$"

SilversunCity_Sewers_Market_B_Text_0:
# 230 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Psst! Hey, you! Check out these goods\n"
	.string "I've got!$"

SilversunCity_Sewers_Market_B_Text_1:
# 233 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Then scram!$"

SilversunCity_Sewers_Market_C_Text_0:
# 251 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "You look like you'd make good use of\n"
	.string "this stuff!$"

SilversunCity_Sewers_Market_C_Text_1:
# 254 "data//maps/SilversunCity_Sewers/scripts.pory"
	.string "Quit wasting my time!$"
