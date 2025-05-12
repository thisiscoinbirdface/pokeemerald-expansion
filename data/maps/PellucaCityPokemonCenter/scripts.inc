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
	msgbox PellucaCity_EventEnd_Text_6, MSGBOX_SIGN
# 50 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 51 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 53 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 54 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_7
# 55 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 56 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_EventEnd_Movement_3
# 57 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 58 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 59 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_2
# 60 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_8
# 61 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 62 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	playse SE_EXIT
# 63 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitse
# 64 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_9, MSGBOX_SIGN
# 65 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 66 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_4
# 67 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 68 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 69 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 70 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_10
# 71 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 72 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 73 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_EventEnd_Movement_5
# 74 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_2
# 75 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_11
# 76 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 77 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 78 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_EventEnd_Movement_6
# 79 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 80 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 81 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_2
# 82 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_12
# 83 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 84 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	giveitem ITEM_MEGA_RING
# 85 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 87 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 88 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_13
# 89 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 90 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 91 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_2
# 92 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_14
# 93 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 94 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 95 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 96 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_15
# 97 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 98 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 99 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_2
# 100 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_16
# 101 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 102 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 103 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	speakername PellucaCity_EventEnd_Text_0
# 104 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_EventEnd_Text_17
# 105 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	release
# 106 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	delay 16
# 110 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_7
# 111 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_MAYOR, PellucaCity_EventEnd_Movement_8
# 112 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 113 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	removeobject LOCALID_MAYOR
# 114 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	applymovement LOCALID_QWIL, PellucaCity_EventEnd_Movement_9
# 115 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmovement 0
# 116 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	removeobject LOCALID_QWIL
# 119 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	clearflag FLAG_SYS_SURF_ENABLED
# 120 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	removeitem ITEM_HM03
# 123 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setvar VAR_PELLUCA_MAYOR_QUEST, 10
# 124 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setflag FLAG_PELLUCA_PC_CHARS
# 125 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setflag FLAG_PELLUCA_QUEST_END
# 127 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	releaseall
	end


PellucaCity_PokemonCenter_OnTransition::
# 143 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_PELLUCA_CITY
	return


PellucaCity_PokemonCenter_EventScript_Nurse::
# 147 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	lockall
# 148 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 149 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 150 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	waitmessage
# 151 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	releaseall
	return


PellucaCity_PokemonCenter_NPC1::
# 160 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_NPC1_Text_0
	return


PellucaCity_PokemonCenter_NPC2::
# 163 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_NPC2_Text_0
	return


PellucaCity_PokemonCenter_Nurse1::
# 171 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Nurse1_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Nurse2::
# 175 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Nurse2_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Nurse3::
# 179 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Nurse3_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Nurse4::
# 183 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	msgbox PellucaCity_PokemonCenter_Nurse4_Text_0, MSGBOX_NPC
	end


PellucaCity_PokemonCenter_Chansey::
# 187 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 188 "data//maps/PellucaCityPokemonCenter/scripts.pory"
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

# 56 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_3:
# 56 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	emote_exclamation_mark
# 56 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	face_right
	step_end

# 66 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_4:
# 66 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	emote_exclamation_mark
# 66 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	jump_in_place_down
	step_end

# 73 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_5:
# 73 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	jump_in_place_right
	step_end

# 78 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_6:
# 78 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	face_down
	step_end

# 110 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_7:
# 110 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_left
# 110 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_down
# 110 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_down
	step_end

# 111 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_8:
# 111 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_down
# 111 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_down
# 111 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	walk_down
	step_end

# 114 "data//maps/PellucaCityPokemonCenter/scripts.pory"
PellucaCity_EventEnd_Movement_9:
# 114 "data//maps/PellucaCityPokemonCenter/scripts.pory"
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
# 49 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "{PLAYER} handed the Surf HM to the\n"
	.string "Qwilsquad Boss.$"

PellucaCity_EventEnd_Text_7:
# 54 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Oh yeah! Now with this -$"

PellucaCity_EventEnd_Text_8:
# 60 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "No, you - no, be careful -$"

PellucaCity_EventEnd_Text_9:
# 64 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "The HM snapped into two pieces in the\n"
	.string "Qwilsquad Boss' hand!$"

PellucaCity_EventEnd_Text_10:
# 70 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Ack! I'm sorry, {PLAYER}! My hands are\n"
	.string "too rough for such a fragile disk.\p"
	.string "I don't have a copy myself or I'd give\n"
	.string "you one...but wait! I'll figure out\l"
	.string "something I can repay you with!$"

PellucaCity_EventEnd_Text_11:
# 75 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Let me - on your behalf.$"

PellucaCity_EventEnd_Text_12:
# 82 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "{PLAYER} - sorry about the HM\n"
	.string "breaking. Instead, why don't you take\l"
	.string "this instead? It's very valuable...but\l"
	.string "not to me, since I'm not a trainer.\p"
	.string "It's the least we can do for you.$"

PellucaCity_EventEnd_Text_13:
# 88 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "This flooding has woken us up,\n"
	.string "{PLAYER}. Infighting and bullying will\l"
	.string "get us nowhere.$"

PellucaCity_EventEnd_Text_14:
# 92 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "And neither will laziness and inaction.\p"
	.string "We're going to work together...$"

PellucaCity_EventEnd_Text_15:
# 96 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "...the Mayor will actively enact some new\n"
	.string "policies...$"

PellucaCity_EventEnd_Text_16:
# 100 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "...and the Qwilsquad will start doing\n"
	.string "things by the book.\p"
	.string "You won't recognise Pelluca City the\n"
	.string "next time you visit - we promise!$"

PellucaCity_EventEnd_Text_17:
# 104 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "So where are you headed to next,\n"
	.string "{PLAYER}?\p"
	.string "...\p"
	.string "Team Somber, eh? One of my boys told me\n"
	.string "about 'em. Something about an operation\l"
	.string "up in Mt. Mirroh.\p"
	.string "They're rotten to the core, they are. If\n"
	.string "I were you, I'd be extra careful!$"

PellucaCity_PokemonCenter_NPC1_Text_0:
# 160 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "The signature mark of the Qwilsquad is\n"
	.string "their Qwilfish! Apparently the spikes\l"
	.string "represent their passion or something.$"

PellucaCity_PokemonCenter_NPC2_Text_0:
# 163 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "They're closing the gym in Mirroh Base\n"
	.string "Camp! I need to go and get the badge,\l"
	.string "but the Qwilsquad grunt outside won't\l"
	.string "let me.$"

PellucaCity_PokemonCenter_Nurse1_Text_0:
# 171 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "We've had enough of the Heal Pass\n"
	.string "system. We're unionising!$"

PellucaCity_PokemonCenter_Nurse2_Text_0:
# 175 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Down with Heal Passes! Or at least\n"
	.string "station us in decent spots!$"

PellucaCity_PokemonCenter_Nurse3_Text_0:
# 179 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "We've all got it bad, but the worst is\n"
	.string "the nurse up in Winterlily Hollow! I'm\l"
	.string "going up there with these Chanseys to\l"
	.string "help her out.$"

PellucaCity_PokemonCenter_Nurse4_Text_0:
# 183 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "The nurse in Winterlily Hollow requested\n"
	.string "for some extra help. Since the\l"
	.string "higher-ups don't care, we're going to\l"
	.string "look out for our sisters!$"

PellucaCity_PokemonCenter_Chansey_Text_0:
# 188 "data//maps/PellucaCityPokemonCenter/scripts.pory"
	.string "Seeyyy!!\p"
	.string "Chansey wants to unionise too!$"
