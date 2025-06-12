Championship_MapScripts::
# 2 "data//maps/Championship/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Championship_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Championship_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data//maps/Championship/scripts.pory"
	setflag FLAG_VISITED_VICTORY_CAPE
	return


VictoryCape_NPC1::
# 11 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC1_Text_0, MSGBOX_NPC
	end


VictoryCape_Mon1::
# 15 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_AMOONGUSS, CRY_MODE_NORMAL
# 16 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Mon1_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC2::
# 21 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC2_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC3::
# 25 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC3_Text_0, MSGBOX_NPC
	end


VictoryCape_Mon2::
# 29 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_PALPITOAD, CRY_MODE_NORMAL
# 30 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Mon2_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC4::
# 34 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC4_Text_0, MSGBOX_NPC
	end


VictoryCape_Mon3::
# 38 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_LOKIX, CRY_MODE_NORMAL
# 39 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Mon3_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC5::
# 43 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC5_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC6::
# 47 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC6_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC7::
# 51 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC7_Text_0, MSGBOX_NPC
	end


VictoryCape_Mon4::
# 55 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_YANMEGA, CRY_MODE_NORMAL
# 56 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Mon4_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC8::
# 60 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC8_Text_0, MSGBOX_NPC
	end


VictoryCape_Mon5::
# 64 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_CHIMECHO, CRY_MODE_NORMAL
# 65 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Mon5_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC10::
# 70 "data//maps/Championship/scripts.pory"
	lockall
# 71 "data//maps/Championship/scripts.pory"
	faceplayer
# 72 "data//maps/Championship/scripts.pory"
	msgbox_delay VictoryCape_NPC10_Text_0, VictoryCape_NPC10_Text_1
# 73 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_NPC11::
# 77 "data//maps/Championship/scripts.pory"
	lockall
# 78 "data//maps/Championship/scripts.pory"
	faceplayer
# 79 "data//maps/Championship/scripts.pory"
	msgbox_delay VictoryCape_NPC11_Text_0, VictoryCape_NPC11_Text_1
# 80 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_NPC12::
# 84 "data//maps/Championship/scripts.pory"
	lockall
# 85 "data//maps/Championship/scripts.pory"
	faceplayer
# 86 "data//maps/Championship/scripts.pory"
	msgbox_delay VictoryCape_NPC10_Text_0, VictoryCape_NPC12_Text_0
# 87 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Viniel::
# 96 "data//maps/Championship/scripts.pory"
	lockall
# 97 "data//maps/Championship/scripts.pory"
	speakername VictoryCape_Viniel_Text_0
# 98 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Viniel_Text_1
# 99 "data//maps/Championship/scripts.pory"
	speakername NULL
# 100 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Manectric::
# 104 "data//maps/Championship/scripts.pory"
	lockall
# 105 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_MANECTRIC, CRY_MODE_NORMAL
# 106 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Manectric_Text_0
# 107 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Viniel_Kids::
# 111 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Viniel_Kids_Text_0, MSGBOX_NPC
	end


VictoryCape_Viniel_Parent::
# 115 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Viniel_Parent_Text_0, MSGBOX_NPC
	end


VictoryCape_Gab::
# 123 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Gab_Text_0, MSGBOX_NPC
	end


VictoryCape_Zoroark::
# 127 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_ZOROARK, CRY_MODE_NORMAL
# 128 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Zoroark_Text_0, MSGBOX_NPC
	end


VictoryCape_NPC9::
# 141 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_NPC9_Text_0, MSGBOX_NPC
	end


VictoryCape_Trainer_A::
# 146 "data//maps/Championship/scripts.pory"
	lockall
# 147 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Trainer_A_Text_0
# 148 "data//maps/Championship/scripts.pory"
	faceplayer
# 149 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Trainer_A_Text_1, MSGBOX_YESNO
# 150 "data//maps/Championship/scripts.pory"
	release
# 151 "data//maps/Championship/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VictoryCape_Trainer_A_2
# 159 "data//maps/Championship/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORYCAPE_A, VictoryCape_Trainer_A_Text_3
# 160 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Trainer_A_Text_4, MSGBOX_NPC
# 161 "data//maps/Championship/scripts.pory"
	applymovement VAR_LAST_TALKED, VictoryCape_Trainer_A_Movement_0
# 162 "data//maps/Championship/scripts.pory"
	waitmovement 0
# 163 "data//maps/Championship/scripts.pory"
	releaseall
	end

VictoryCape_Trainer_A_2:
# 152 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Trainer_A_Text_2, MSGBOX_NPC
# 153 "data//maps/Championship/scripts.pory"
	applymovement VAR_LAST_TALKED, VictoryCape_Trainer_A_Movement_0
# 154 "data//maps/Championship/scripts.pory"
	waitmovement 0
# 155 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Shiinotic::
# 167 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_SHIINOTIC, CRY_MODE_NORMAL
# 168 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Shiinotic_Text_0
# 169 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Trainer_B::
# 174 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Trainer_B_Text_0, MSGBOX_NPC
# 175 "data//maps/Championship/scripts.pory"
	applymovement VAR_LAST_TALKED, VictoryCape_Trainer_B_Movement_0
# 176 "data//maps/Championship/scripts.pory"
	waitmovement 0
# 177 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Carbink::
# 182 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_CARBINK, CRY_MODE_NORMAL
# 183 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Carbink_Text_0
# 184 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Trainer_C::
# 189 "data//maps/Championship/scripts.pory"
	lockall
# 190 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Trainer_C_Text_0
# 191 "data//maps/Championship/scripts.pory"
	faceplayer
# 192 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Trainer_C_Text_1, MSGBOX_YESNO
# 193 "data//maps/Championship/scripts.pory"
	release
# 194 "data//maps/Championship/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq VictoryCape_Trainer_C_2
# 202 "data//maps/Championship/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORYCAPE_B, VictoryCape_Trainer_C_Text_3
# 203 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Trainer_C_Text_4, MSGBOX_NPC
# 204 "data//maps/Championship/scripts.pory"
	applymovement VAR_LAST_TALKED, VictoryCape_Trainer_A_Movement_0
# 205 "data//maps/Championship/scripts.pory"
	waitmovement 0
# 206 "data//maps/Championship/scripts.pory"
	releaseall
	end

VictoryCape_Trainer_C_2:
# 195 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Trainer_C_Text_2, MSGBOX_NPC
# 196 "data//maps/Championship/scripts.pory"
	applymovement VAR_LAST_TALKED, VictoryCape_Trainer_A_Movement_0
# 197 "data//maps/Championship/scripts.pory"
	waitmovement 0
# 198 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Cetitan::
# 210 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_CETITAN, CRY_MODE_NORMAL
# 211 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Cetitan_Text_0
# 212 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Trainer_D::
# 217 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Trainer_D_Text_0, MSGBOX_NPC
# 218 "data//maps/Championship/scripts.pory"
	applymovement VAR_LAST_TALKED, VictoryCape_Trainer_A_Movement_0
# 219 "data//maps/Championship/scripts.pory"
	waitmovement 0
# 220 "data//maps/Championship/scripts.pory"
	releaseall
	end


VictoryCape_Masquerain::
# 225 "data//maps/Championship/scripts.pory"
	playmoncry SPECIES_MASQUERAIN, CRY_MODE_NORMAL
# 226 "data//maps/Championship/scripts.pory"
	msgbox VictoryCape_Masquerain_Text_0
# 227 "data//maps/Championship/scripts.pory"
	releaseall
	end


# 153 "data//maps/Championship/scripts.pory"
VictoryCape_Trainer_A_Movement_0:
# 153 "data//maps/Championship/scripts.pory"
	face_right
	step_end

# 175 "data//maps/Championship/scripts.pory"
VictoryCape_Trainer_B_Movement_0:
# 175 "data//maps/Championship/scripts.pory"
	face_left
	step_end

VictoryCape_NPC1_Text_0:
# 11 "data//maps/Championship/scripts.pory"
	.string "What's that look? You think I'm too old\n"
	.string "to be a competitor?\p"
	.string "I'll have you know I had my eighth\n"
	.string "gym badge before you were born!$"

VictoryCape_Mon1_Text_0:
# 16 "data//maps/Championship/scripts.pory"
	.string "Amoonguss is pottering about!$"

VictoryCape_NPC2_Text_0:
# 21 "data//maps/Championship/scripts.pory"
	.string "They say the Ace Rookie from the\n"
	.string "Detective Academy is going to compete!\l"
	.string "I wish I don't draw him as an opponent.$"

VictoryCape_NPC3_Text_0:
# 25 "data//maps/Championship/scripts.pory"
	.string "This is my second time participating.\p"
	.string "I lost in the first round last time!$"

VictoryCape_Mon2_Text_0:
# 30 "data//maps/Championship/scripts.pory"
	.string "Palpitoad has a deadly glint in its eye.\n"
	.string "No first round exits this time!$"

VictoryCape_NPC4_Text_0:
# 34 "data//maps/Championship/scripts.pory"
	.string "Am I participating? No.\n"
	.string "I've just come to spectate!$"

VictoryCape_Mon3_Text_0:
# 39 "data//maps/Championship/scripts.pory"
	.string "Lokix seems downcast...\n"
	.string "Maybe it wanted to participate?$"

VictoryCape_NPC5_Text_0:
# 43 "data//maps/Championship/scripts.pory"
	.string "The Cormoria Pokémon Championship\n"
	.string "is big business, kid!\p"
	.string "I made a killing by shipping\n"
	.string "supplies to Victory Cape.$"

VictoryCape_NPC6_Text_0:
# 47 "data//maps/Championship/scripts.pory"
	.string "This never-ending downpour is such a\n"
	.string "damper on the event!$"

VictoryCape_NPC7_Text_0:
# 51 "data//maps/Championship/scripts.pory"
	.string "They say a former Team Somber grunt is\n"
	.string "in the Championship...\p"
	.string "I'm not sure if they should be letting\n"
	.string "criminals participate!$"

VictoryCape_Mon4_Text_0:
# 56 "data//maps/Championship/scripts.pory"
	.string "Yanmega looks unfazed. It could\n"
	.string "probably see through Zoroark's\l"
	.string "disguises with its many eyes!$"

VictoryCape_NPC8_Text_0:
# 60 "data//maps/Championship/scripts.pory"
	.string "As a spiritual being, I possess\n"
	.string "supernatural control over my emotions.\p"
	.string "...so why am I feeling so nervous?$"

VictoryCape_Mon5_Text_0:
# 65 "data//maps/Championship/scripts.pory"
	.string "Chimecho is psyching itself up!$"

VictoryCape_NPC10_Text_0:
# 72 "data//maps/Championship/scripts.pory"
	.string "Q-squad Boss$"

VictoryCape_NPC10_Text_1:
# 72 "data//maps/Championship/scripts.pory"
	.string "Hahaha! You thought we weren't gonna\n"
	.string "come cheer on the youngest Qwilsquad\l"
	.string "member?\l"
	.string "You better win - we got no place for\l"
	.string "losers!$"

VictoryCape_NPC11_Text_0:
# 79 "data//maps/Championship/scripts.pory"
	.string "Q-squad Grunt$"

VictoryCape_NPC11_Text_1:
# 79 "data//maps/Championship/scripts.pory"
	.string "Show 'em the Qwilsquad spirit,\n"
	.string "{PLAYER}!$"

VictoryCape_NPC12_Text_0:
# 86 "data//maps/Championship/scripts.pory"
	.string "You gotta make all of Cormoria know\n"
	.string "what the Qwilsquad is about!$"

VictoryCape_Viniel_Text_0:
# 97 "data//maps/Championship/scripts.pory"
	.string "Viniel$"

VictoryCape_Viniel_Text_1:
# 98 "data//maps/Championship/scripts.pory"
	.string "Think you rugrats are stronger than a\n"
	.string "Gym Leader? Manectric and I can take\l"
	.string "all four of you together! Hahaha!$"

VictoryCape_Manectric_Text_0:
# 106 "data//maps/Championship/scripts.pory"
	.string "Manectric is playing with the children!$"

VictoryCape_Viniel_Kids_Text_0:
# 111 "data//maps/Championship/scripts.pory"
	.string "Leader Viniel is so cool!\n"
	.string "I wanna be just like him!$"

VictoryCape_Viniel_Parent_Text_0:
# 115 "data//maps/Championship/scripts.pory"
	.string "It's really kind of a superstar like\n"
	.string "Viniel to spend time with our children.\l"
	.string "He's a great role model.\p"
	.string "...\p"
	.string "I should take them inside before they\n"
	.string "catch a cold in the rain.$"

VictoryCape_Gab_Text_0:
# 123 "data//maps/Championship/scripts.pory"
	.string "What a huge stadium...are we really\n"
	.string "going to battle inside this?$"

VictoryCape_Zoroark_Text_0:
# 128 "data//maps/Championship/scripts.pory"
	.string "Zoroark doesn't seem as scared as\n"
	.string "Gabrielle is.$"

VictoryCape_NPC9_Text_0:
# 141 "data//maps/Championship/scripts.pory"
	.string "These trainers are so cool.\n"
	.string "They're giving it their all!\p"
	.string "I wish I was one of them...$"

VictoryCape_Trainer_A_Text_0:
# 147 "data//maps/Championship/scripts.pory"
	.string "This isn't good enough, Shiinotic!\n"
	.string "We won't win at this rate!$"

VictoryCape_Trainer_A_Text_1:
# 149 "data//maps/Championship/scripts.pory"
	.string "Shiinotic and I are doing some\n"
	.string "last-minute training!\p"
	.string "Do you want to help us?$"

VictoryCape_Trainer_A_Text_2:
# 152 "data//maps/Championship/scripts.pory"
	.string "You'll regret not practicing!$"

VictoryCape_Trainer_A_Text_3:
# 159 "data//maps/Championship/scripts.pory"
	.string "We're just not there yet!$"

VictoryCape_Trainer_A_Text_4:
# 160 "data//maps/Championship/scripts.pory"
	.string "I'm so scared we'll get knocked out!\n"
	.string "Please practice with us again, okay?$"

VictoryCape_Shiinotic_Text_0:
# 168 "data//maps/Championship/scripts.pory"
	.string "Shiinotic's face is scrunched up!\n"
	.string "It's doing its utmost!$"

VictoryCape_Trainer_B_Text_0:
# 174 "data//maps/Championship/scripts.pory"
	.string "Nah chum, training with the likes of you\n"
	.string "is a waste of my time!$"

VictoryCape_Carbink_Text_0:
# 183 "data//maps/Championship/scripts.pory"
	.string "Carbink is about to use Guard Split!\n"
	.string "This trainer seems talented...$"

VictoryCape_Trainer_C_Text_0:
# 190 "data//maps/Championship/scripts.pory"
	.string "Yeah, that's the way Cetitan!\n"
	.string "We're going to be Pokémon Champions!$"

VictoryCape_Trainer_C_Text_1:
# 192 "data//maps/Championship/scripts.pory"
	.string "What are you looking at?\n"
	.string "Think you can take us on?$"

VictoryCape_Trainer_C_Text_2:
# 195 "data//maps/Championship/scripts.pory"
	.string "You need some fighting spirit!$"

VictoryCape_Trainer_C_Text_3:
# 202 "data//maps/Championship/scripts.pory"
	.string "No way!$"

VictoryCape_Trainer_C_Text_4:
# 203 "data//maps/Championship/scripts.pory"
	.string "That's it! We gotta train harder!\n"
	.string "Come back if you want another go!$"

VictoryCape_Cetitan_Text_0:
# 211 "data//maps/Championship/scripts.pory"
	.string "Cetitan's eyes are bleary, but it\n"
	.string "refuses to back down!$"

VictoryCape_Trainer_D_Text_0:
# 217 "data//maps/Championship/scripts.pory"
	.string "Before I fight you, I need to figure out\n"
	.string "how to beat this Cetitan!$"

VictoryCape_Masquerain_Text_0:
# 226 "data//maps/Championship/scripts.pory"
	.string "Masquerain is flying all around Cetitan!$"
