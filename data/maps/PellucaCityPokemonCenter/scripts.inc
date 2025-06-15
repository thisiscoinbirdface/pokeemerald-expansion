# 1 "data//maps/PellucaCityPokemonCenter/scripts.pory"

# 2 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.set LOCALID_MAYOR, 3
# 3 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.set LOCALID_QWIL, 2

PellucaCityPokemonCenter_MapScripts::
# 7 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PellucaCity_PokemonCenter_OnTransition
# 9 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PellucaCityPokemonCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PellucaCityPokemonCenter_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	map_script_2 VAR_PELLUCA_MAYOR_QUEST, 9, PellucaCity_EventEnd
	.2byte 0


PellucaCity_EventEnd::
# 17 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	lockall
# 18 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PellucaCity_EventEnd_Movement_0
# 19 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_1
# 20 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 21 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 22 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 23 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_1
# 24 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 25 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 27 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_EventEnd_Movement_1
# 28 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 29 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 30 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_2
# 31 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_3
# 32 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 33 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 35 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_1
# 36 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 37 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 38 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 39 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_4
# 40 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 41 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 42 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_2
# 43 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 44 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 45 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 46 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_5
# 47 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 48 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 8
# 49 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 50 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	message PellucaCity_EventEnd_Text_6
# 51 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitfanfare
# 52 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 53 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 55 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 56 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_7
# 57 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 58 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_EventEnd_Movement_3
# 59 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 60 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 61 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_2
# 62 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_8
# 63 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 64 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	playse SE_M_BRICK_BREAK
# 65 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_9, MSGBOX_SIGN
# 66 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 67 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_4
# 68 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 69 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 70 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 71 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_10
# 72 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 73 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 74 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_EventEnd_Movement_5
# 75 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_2
# 76 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_11
# 77 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 78 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 79 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_EventEnd_Movement_6
# 80 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 81 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 82 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_2
# 83 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_12
# 84 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 85 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	giveitem ITEM_MEGA_RING
# 86 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 88 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_7
# 89 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 90 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 91 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 92 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_13
# 93 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 94 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 95 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_EventEnd_Movement_7
# 96 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 97 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 98 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_2
# 99 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_14
# 100 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 101 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 102 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_7
# 103 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 104 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 105 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 106 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_15
# 107 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 108 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 109 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_EventEnd_Movement_7
# 110 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 111 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_2
# 112 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_16
# 113 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 114 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_7
# 115 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 116 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 117 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 118 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_17
# 119 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_4
# 120 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 121 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 24
# 122 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 123 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_18
# 124 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 125 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 129 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_8
# 130 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_EventEnd_Movement_9
# 131 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 132 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	removeobject LOCALID_MAYOR
# 133 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_10
# 134 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 135 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	removeobject LOCALID_QWIL
# 137 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 1
# 139 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	clearflag FLAG_SYS_SURF_ENABLED
# 140 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	removeitem ITEM_HM03
# 141 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 1
# 144 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 10
# 145 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setflag FLAG_PELLUCA_PC_CHARS
# 146 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setflag FLAG_PELLUCA_QUEST_END
# 147 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	completequest QUEST_PELLUCA_CITY
# 149 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	releaseall
	end


PellucaCity_PokemonCenter_OnTransition::
# 165 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PELLUCA_CITY
	return


PellucaCity_PokemonCenter_EventScript_Nurse::
# 169 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	lockall
# 170 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 171 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 172 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmessage
# 173 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	releaseall
	return


PellucaCity_PokemonCenter_NPC1::
# 182 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	lockall
# 183 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	faceplayer
# 184 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	showmonpic SPECIES_QWILFISH_HISUI, 10, 3
# 185 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_NPC1_Text_0
# 186 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 187 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	hidemonpic
# 189 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_NPC1_Text_1, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_NPC2::
# 193 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_NPC2_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Nurse1::
# 202 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Nurse1_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Nurse2::
# 206 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Nurse2_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Nurse3::
# 210 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Nurse3_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Nurse4::
# 214 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Nurse4_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Chansey::
# 218 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 219 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Chansey_Text_0, MSGBOX_NPC
	end


# 18 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_0:
# 18 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	face_up
	step_end

# 19 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_1:
# 19 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	emote_exclamation_mark
	step_end

# 42 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_2:
# 42 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	emote_question_mark
	step_end

# 58 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_3:
# 58 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	emote_exclamation_mark
# 58 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	face_right
	step_end

# 67 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_4:
# 67 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	emote_exclamation_mark
# 67 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	jump_in_place_down
	step_end

# 74 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_5:
# 74 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	jump_in_place_right
	step_end

# 79 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_6:
# 79 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	face_down
	step_end

# 88 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_7:
# 88 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	jump_in_place_down
	step_end

# 129 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_8:
# 129 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_left
# 129 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_down
# 129 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_down
	step_end

# 130 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_9:
# 130 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_down
# 130 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_down
# 130 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_down
	step_end

# 133 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_10:
# 133 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_down
	step_end

PellucaCity_EventEnd_Text_0:
# 22 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Q-squad Boss$"

PellucaCity_EventEnd_Text_1:
# 23 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Well - that sure was something!$"

PellucaCity_EventEnd_Text_2:
# 30 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Mayor$"

PellucaCity_EventEnd_Text_3:
# 31 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Yeah, it certainly was!\p"
	.string "I don't know what we would've done\n"
	.string "without you, {PLAYER}.$"

PellucaCity_EventEnd_Text_4:
# 39 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Yeah - if you didn't surf across the\n"
	.string "river and save everyone...$"

PellucaCity_EventEnd_Text_5:
# 46 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Which reminds me - {PLAYER}, can you\n"
	.string "hand over your HM for a second?\p"
	.string "I'm going to teach my Overqwil Surf in\n"
	.string "case we ever need it for anything.$"

PellucaCity_EventEnd_Text_6:
# 50 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "{PLAYER} handed the Surf HM to the\n"
	.string "Qwilsquad Boss.$"

PellucaCity_EventEnd_Text_7:
# 56 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Oh yeah! Now with this -$"

PellucaCity_EventEnd_Text_8:
# 62 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "No, you - no, be careful -$"

PellucaCity_EventEnd_Text_9:
# 65 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "The HM snapped into two pieces in the\n"
	.string "Qwilsquad Boss' hand!$"

PellucaCity_EventEnd_Text_10:
# 71 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Ack! I'm sorry, {PLAYER}! My hands are\n"
	.string "too rough for such a fragile disk.\p"
	.string "I don't have a copy myself or I'd give\n"
	.string "you one...but wait! I'll figure out\l"
	.string "something I can repay you with!$"

PellucaCity_EventEnd_Text_11:
# 76 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Let me - on your behalf.$"

PellucaCity_EventEnd_Text_12:
# 83 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "{PLAYER} - we're sorry about the HM.\n"
	.string "Why don't you take this instead?\l"
	.string "It's very valuable...but not to me,\l"
	.string "since I'm not a trainer.\p"
	.string "It's the least we can do for you.$"

PellucaCity_EventEnd_Text_13:
# 92 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "This flooding has woken us up,\n"
	.string "{PLAYER}. Infighting and bullying will\l"
	.string "get us nowhere.$"

PellucaCity_EventEnd_Text_14:
# 99 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "And neither will laziness and inaction.\p"
	.string "We're going to work together...$"

PellucaCity_EventEnd_Text_15:
# 106 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "...the Mayor will actively enact some\n"
	.string "new policies...$"

PellucaCity_EventEnd_Text_16:
# 112 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "...and the Qwilsquad will start doing\n"
	.string "things by the book.\p"
	.string "You won't recognise Pelluca City the\n"
	.string "next time you visit - we promise!$"

PellucaCity_EventEnd_Text_17:
# 118 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "So where are you headed to next,\n"
	.string "{PLAYER}?\p"
	.string "...$"

PellucaCity_EventEnd_Text_18:
# 123 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Team Somber, eh?\p"
	.string "My boys told me about 'em. Something\n"
	.string "about an operation up in Mt. Mirroh.\p"
	.string "They're rotten to the core, they are.\n"
	.string "If I were you, I'd be extra careful!$"

PellucaCity_PokemonCenter_NPC1_Text_0:
# 185 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "The signature of the Qwilsquad is their\n"
	.string "Qwilfish! You need a Qwilfish to join the\l"
	.string "squad!$"

PellucaCity_PokemonCenter_NPC1_Text_1:
# 189 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Apparently the spikes represent their\n"
	.string "passion or something.$"

PellucaCity_PokemonCenter_NPC2_Text_0:
# 193 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "They're closing the gym in Mirroh Base\n"
	.string "Camp! I need to go and get the badge,\l"
	.string "but the Qwilsquad grunt outside won't\l"
	.string "let me.$"

PellucaCity_PokemonCenter_Nurse1_Text_0:
# 202 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "We've had enough of the Heal Pass\n"
	.string "system. We're unionising!$"

PellucaCity_PokemonCenter_Nurse2_Text_0:
# 206 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Down with Heal Passes! Or at least\n"
	.string "station us in decent spots!$"

PellucaCity_PokemonCenter_Nurse3_Text_0:
# 210 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "We've all got it bad, but the worst is\n"
	.string "the nurse up in Winterlily Hollow!\p"
	.string "I'm going up there with these Chanseys\n"
	.string "to help her out.$"

PellucaCity_PokemonCenter_Nurse4_Text_0:
# 214 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "The nurse in Winterlily Hollow requested\n"
	.string "for some extra help. Since the\l"
	.string "higher-ups don't care, we're going to\l"
	.string "look out for our sisters!$"

PellucaCity_PokemonCenter_Chansey_Text_0:
# 219 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Seeyyy!!\p"
	.string "Chansey wants to unionise too!$"
