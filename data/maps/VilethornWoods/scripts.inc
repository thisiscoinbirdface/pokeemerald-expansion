# 1 "data//maps/VilethornWoods/scripts.pory"

# 2 "data//maps/VilethornWoods/scripts.pory"
    .set LOCALID_GRUNT, 18
# 3 "data//maps/VilethornWoods/scripts.pory"
    .set LOCALID_PROF, 17

VilethornWoods_MapScripts::
	.byte 0


VilethornWoods_EventScript_TriggerProf::
# 15 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_PROF, VilethornWoods_EventScript_TriggerProf_2
# 19 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 22 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 23 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 24 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 25 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_0
# 26 "data//maps/VilethornWoods/scripts.pory"
	release
# 27 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_EventScript_TriggerProf_Movement_1
# 28 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 29 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 30 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_1
# 31 "data//maps/VilethornWoods/scripts.pory"
	release
# 34 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_EventScript_TriggerProf_Movement_2
# 35 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_2
# 36 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 37 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 38 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_3
# 39 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 40 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 41 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_4
# 42 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 43 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 44 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_5
# 45 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 46 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 47 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 48 "data//maps/VilethornWoods/scripts.pory"
	release
# 49 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_2
# 50 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 52 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 0, 0
# 53 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_PROF, 1, 0
# 54 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_GRUNT, 0, 0
# 55 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_PROF, 1, 0
# 57 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_PROF
# 58 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_EventScript_TriggerProf_2:
	end


VilethornWoods_Trainer_A::
# 72 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_SYS_EXP_ALL
# 73 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_A, VilethornWoods_Trainer_A_Text_0, VilethornWoods_Trainer_A_Text_1
# 74 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_A_Text_2
# 75 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_B::
# 80 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_B, VilethornWoods_Trainer_B_Text_0, VilethornWoods_Trainer_B_Text_1
# 81 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_B_Text_2
# 82 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_C::
# 87 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_C, VilethornWoods_Trainer_C_Text_0, VilethornWoods_Trainer_C_Text_1
# 88 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_C_Text_2
# 89 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_D::
# 94 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_D, VilethornWoods_Trainer_D_Text_0, VilethornWoods_Trainer_D_Text_1
# 95 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_D_Text_2
# 96 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_E::
# 101 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_E, VilethornWoods_Trainer_E_Text_0, VilethornWoods_Trainer_E_Text_1
# 102 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_E_Text_2
# 103 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F1::
# 108 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 109 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 110 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 111 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 112 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F2::
# 117 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 118 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 119 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 120 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F2_Text_0
# 121 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_G::
# 126 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_G, VilethornWoods_Trainer_G_Text_0, VilethornWoods_Trainer_G_Text_1
# 127 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_G_Text_2
# 128 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_H::
# 133 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_H, VilethornWoods_Trainer_H_Text_0, VilethornWoods_Trainer_H_Text_1
# 134 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_H_Text_2
# 135 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_NPC1::
# 142 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 143 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 144 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC1_Text_0
# 145 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_NPC2::
# 150 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 151 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 153 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_MUSHROOMS, VilethornWoods_NPC2_2
# 156 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_1, MSGBOX_YESNO
# 158 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC2_5
# 169 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_4
VilethornWoods_NPC2_1:
# 172 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_NPC2_2:
# 154 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_0
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_5:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VilethornWoods_NPC2_8
# 166 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_3
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_8:
# 161 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_2
# 162 "data//maps/VilethornWoods/scripts.pory"
	release
# 163 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_TWISTED_SPOON
# 164 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_MUSHROOMS
	goto VilethornWoods_NPC2_1


VilethornWoods_NPC3::
# 176 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 177 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 178 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_ITEM, VilethornWoods_NPC3_2
# 181 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_1
# 182 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 183 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_ITEM
VilethornWoods_NPC3_1:
# 186 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_NPC3_2:
# 179 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_0
	goto VilethornWoods_NPC3_1


# 22 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_0:
# 22 "data//maps/VilethornWoods/scripts.pory"
	jump_in_place_right
	step_end

# 27 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_1:
# 27 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 34 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_2:
# 34 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 34 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 34 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 34 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 34 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 34 "data//maps/VilethornWoods/scripts.pory"
	walk_up
	step_end

# 38 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_3:
# 38 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 38 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 38 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 38 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 38 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 38 "data//maps/VilethornWoods/scripts.pory"
	walk_down
	step_end

# 41 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_4:
# 41 "data//maps/VilethornWoods/scripts.pory"
	face_left
	step_end

# 44 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_5:
# 44 "data//maps/VilethornWoods/scripts.pory"
	face_right
	step_end

VilethornWoods_EventScript_TriggerProf_Text_0:
# 25 "data//maps/VilethornWoods/scripts.pory"
	.string "GRUNT: Move, Professor! Otherwise\n"
	.string "someone will see us.$"

VilethornWoods_EventScript_TriggerProf_Text_1:
# 30 "data//maps/VilethornWoods/scripts.pory"
	.string "PROF: Fine, fine! I'm moving. Don't\n"
	.string "manhandle me, you animal.$"

VilethornWoods_EventScript_TriggerProf_Text_2:
# 47 "data//maps/VilethornWoods/scripts.pory"
	.string "Must be a wild IMPIDIMP or something...$"

VilethornWoods_Trainer_A_Text_0:
# 73 "data//maps/VilethornWoods/scripts.pory"
	.string "PSYCHIC type {PKMN} are my natural\n"
	.string "enemies! That's why I'm training here.$"

VilethornWoods_Trainer_A_Text_1:
# 73 "data//maps/VilethornWoods/scripts.pory"
	.string "I like PSYCHIC types more than you!$"

VilethornWoods_Trainer_A_Text_2:
# 74 "data//maps/VilethornWoods/scripts.pory"
	.string "I like training but I don't want to go to\n"
	.string "deep into this forest...$"

VilethornWoods_Trainer_B_Text_0:
# 80 "data//maps/VilethornWoods/scripts.pory"
	.string "I thought these woods would have BUG\n"
	.string "type {PKMN}, but I can't find any. I'm so\l"
	.string "bummed! But beating you in battle will\l"
	.string "make me feel better!$"

VilethornWoods_Trainer_B_Text_1:
# 80 "data//maps/VilethornWoods/scripts.pory"
	.string "I don't feel better at all!$"

VilethornWoods_Trainer_B_Text_2:
# 81 "data//maps/VilethornWoods/scripts.pory"
	.string "This forest is weird...a dense fog, no\n"
	.string "BUG types...$"

VilethornWoods_Trainer_C_Text_0:
# 87 "data//maps/VilethornWoods/scripts.pory"
	.string "The sweet, delicious fog envelops\n"
	.string "us...we are one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_1:
# 87 "data//maps/VilethornWoods/scripts.pory"
	.string "You're not one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_2:
# 88 "data//maps/VilethornWoods/scripts.pory"
	.string "I want to go deeper...sink\n"
	.string "deeper...escape my real life...$"

VilethornWoods_Trainer_D_Text_0:
# 94 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a {PKMN} Breeder. Like all breeders, we\n"
	.string "specialise in certain {PKMN} forms. I'm a\l"
	.string "horse breeding expert!$"

VilethornWoods_Trainer_D_Text_1:
# 94 "data//maps/VilethornWoods/scripts.pory"
	.string "Well fought!$"

VilethornWoods_Trainer_D_Text_2:
# 95 "data//maps/VilethornWoods/scripts.pory"
	.string "I need to raise my horses to become\n"
	.string "stronger. Maybe some VITAMINS would\l"
	.string "help...$"

VilethornWoods_Trainer_E_Text_0:
# 101 "data//maps/VilethornWoods/scripts.pory"
	.string "Eek! These woods creep me out! I'm so\n"
	.string "scared of the DROWZEE - what if I get\l"
	.string "hypnotised?$"

VilethornWoods_Trainer_E_Text_1:
# 101 "data//maps/VilethornWoods/scripts.pory"
	.string "You creep me out too!$"

VilethornWoods_Trainer_E_Text_2:
# 102 "data//maps/VilethornWoods/scripts.pory"
	.string "I've been stuck here for hours. I need\n"
	.string "to get out of here...$"

VilethornWoods_Trainer_F1_Text_0:
# 110 "data//maps/VilethornWoods/scripts.pory"
	.string "We bonded over our love for battling! Do\n"
	.string "you want to battle?$"

VilethornWoods_Trainer_F1_Text_1:
# 110 "data//maps/VilethornWoods/scripts.pory"
	.string "We lost!$"

VilethornWoods_Trainer_F1_Text_2:
# 111 "data//maps/VilethornWoods/scripts.pory"
	.string "I met her at a {PKMN} Breeder festival.\n"
	.string "There was a battle competition and we\l"
	.string "were the two finalists!$"

VilethornWoods_Trainer_F2_Text_0:
# 120 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe one day you'll find your true love\n"
	.string "during a battle too!$"

VilethornWoods_Trainer_G_Text_0:
# 126 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm one of the best bug catchers\n"
	.string "around. I want to become a Gym Leader\l"
	.string "one day!$"

VilethornWoods_Trainer_G_Text_1:
# 126 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you a Gym Leader or something?$"

VilethornWoods_Trainer_G_Text_2:
# 127 "data//maps/VilethornWoods/scripts.pory"
	.string "As a Gym Leader to-be, my team needs to\n"
	.string "be able to handle a variety of threats.$"

VilethornWoods_Trainer_H_Text_0:
# 133 "data//maps/VilethornWoods/scripts.pory"
	.string "I wonder what's inside this\n"
	.string "house...maybe there's some loot!$"

VilethornWoods_Trainer_H_Text_1:
# 133 "data//maps/VilethornWoods/scripts.pory"
	.string "No loot for me!$"

VilethornWoods_Trainer_H_Text_2:
# 134 "data//maps/VilethornWoods/scripts.pory"
	.string "Fine, I'll just stand here and look while\n"
	.string "you loot everything...$"

VilethornWoods_NPC1_Text_0:
# 144 "data//maps/VilethornWoods/scripts.pory"
	.string "The MORELULL here in VILETHORN WOODS\n"
	.string "release spores when in danger. That's\l"
	.string "what creates this fog.$"

VilethornWoods_NPC2_Text_0:
# 154 "data//maps/VilethornWoods/scripts.pory"
	.string "These mushrooms are really rare, you\n"
	.string "know?$"

VilethornWoods_NPC2_Text_1:
# 156 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm here to collect mushrooms to create\n"
	.string "new recipes, but I can only find TINY\l"
	.string "MUSHROOMs! Say, why don't you help me?\l"
	.string "If you can get me a BIG MUSHROOM, I'll\l"
	.string "find something to pay you back!\p"
	.string "Have you got a BIG MUSHROOM?$"

VilethornWoods_NPC2_Text_2:
# 161 "data//maps/VilethornWoods/scripts.pory"
	.string "Perfect! This'll be a great addition to\n"
	.string "my collection. Thank you! Why don't you\l"
	.string "keep this with you?$"

VilethornWoods_NPC2_Text_3:
# 166 "data//maps/VilethornWoods/scripts.pory"
	.string "Hey, you don't have any! Are you trying\n"
	.string "to trick me? The DROWZEE and MORELULL\l"
	.string "doing enough of that!$"

VilethornWoods_NPC2_Text_4:
# 169 "data//maps/VilethornWoods/scripts.pory"
	.string "Come back when you do!$"

VilethornWoods_NPC3_Text_0:
# 179 "data//maps/VilethornWoods/scripts.pory"
	.string "I am well and truly lost...$"

VilethornWoods_NPC3_Text_1:
# 181 "data//maps/VilethornWoods/scripts.pory"
	.string "I am well and truly lost...even with this\n"
	.string "SCOPE LENS, I can't see a thing! Why\l"
	.string "don't you have it?$"
