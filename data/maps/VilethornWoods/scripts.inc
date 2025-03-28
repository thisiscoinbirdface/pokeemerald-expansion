# 1 "data//maps/VilethornWoods/scripts.pory"

# 2 "data//maps/VilethornWoods/scripts.pory"
    .set LOCALID_GRUNT, 18
# 3 "data//maps/VilethornWoods/scripts.pory"
    .set LOCALID_PROF, 17

VilethornWoods_MapScripts::
	.byte 0


VilethornWoods_EventScript_NurseDemo::
# 10 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 11 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 12 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_NurseDemo_Text_0
# 13 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_EventScript_DemoEnd::
# 18 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 19 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 20 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_DemoEnd_Text_0
# 21 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_EventScript_TriggerProf::
# 50 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_PROF, VilethornWoods_EventScript_TriggerProf_2
# 54 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 57 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_0
# 58 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 59 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 60 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_0
# 61 "data//maps/VilethornWoods/scripts.pory"
	release
# 62 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_EventScript_TriggerProf_Movement_1
# 63 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 64 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 65 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_1
# 66 "data//maps/VilethornWoods/scripts.pory"
	release
# 69 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_PROF, VilethornWoods_EventScript_TriggerProf_Movement_2
# 70 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_2
# 71 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 72 "data//maps/VilethornWoods/scripts.pory"
	delay 16
# 73 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_3
# 74 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 75 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 76 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_4
# 77 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 78 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 79 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_5
# 80 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 81 "data//maps/VilethornWoods/scripts.pory"
	delay 36
# 82 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_EventScript_TriggerProf_Text_2
# 83 "data//maps/VilethornWoods/scripts.pory"
	release
# 84 "data//maps/VilethornWoods/scripts.pory"
	applymovement LOCALID_GRUNT, VilethornWoods_EventScript_TriggerProf_Movement_2
# 85 "data//maps/VilethornWoods/scripts.pory"
	waitmovement 0
# 87 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 0, 0
# 88 "data//maps/VilethornWoods/scripts.pory"
	setobjectxyperm LOCALID_PROF, 1, 0
# 89 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_GRUNT, 0, 0
# 90 "data//maps/VilethornWoods/scripts.pory"
	setobjectxy LOCALID_PROF, 1, 0
# 92 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_PROF
# 93 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_EventScript_TriggerProf_2:
	end


VilethornWoods_Trainer_A::
# 104 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_A, VilethornWoods_Trainer_A_Text_0, VilethornWoods_Trainer_A_Text_1
# 105 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_A_Text_2
# 106 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_B::
# 111 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_B, VilethornWoods_Trainer_B_Text_0, VilethornWoods_Trainer_B_Text_1
# 112 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_B_Text_2
# 113 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_C::
# 118 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_C, VilethornWoods_Trainer_C_Text_0, VilethornWoods_Trainer_C_Text_1
# 119 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_C_Text_2
# 120 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_D::
# 125 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_D, VilethornWoods_Trainer_D_Text_0, VilethornWoods_Trainer_D_Text_1
# 126 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_D_Text_2
# 127 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_E::
# 132 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_E, VilethornWoods_Trainer_E_Text_0, VilethornWoods_Trainer_E_Text_1
# 133 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_E_Text_2
# 134 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F1::
# 139 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 140 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 141 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 142 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F1_Text_2
# 143 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_F2::
# 148 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 149 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 150 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_F, VilethornWoods_Trainer_F1_Text_0, VilethornWoods_Trainer_F1_Text_1
# 151 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_F2_Text_0
# 152 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_G::
# 157 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_G, VilethornWoods_Trainer_G_Text_0, VilethornWoods_Trainer_G_Text_1
# 158 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_G_Text_2
# 159 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_Trainer_H::
# 164 "data//maps/VilethornWoods/scripts.pory"
	trainerbattle_single TRAINER_VILETHORN_H, VilethornWoods_Trainer_H_Text_0, VilethornWoods_Trainer_H_Text_1
# 165 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_Trainer_H_Text_2
# 166 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end


VilethornWoods_NPC1::
# 173 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 174 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 175 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC1_Text_0
# 176 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return


VilethornWoods_NPC2::
# 181 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 182 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 184 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_MUSHROOMS, VilethornWoods_NPC2_2
# 187 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_1, MSGBOX_YESNO
# 189 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VilethornWoods_NPC2_5
# 201 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_5
VilethornWoods_NPC2_1:
# 204 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	end

VilethornWoods_NPC2_2:
# 185 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_0
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_5:
	checkitem ITEM_BIG_MUSHROOM
# 0 "data//maps/VilethornWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne VilethornWoods_NPC2_8
# 198 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_4
	goto VilethornWoods_NPC2_1

VilethornWoods_NPC2_8:
# 192 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_2
# 193 "data//maps/VilethornWoods/scripts.pory"
	release
# 194 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_TWISTED_SPOON
# 195 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_MUSHROOMS
# 196 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC2_Text_3
	goto VilethornWoods_NPC2_1


VilethornWoods_NPC3::
# 209 "data//maps/VilethornWoods/scripts.pory"
	lockall
# 210 "data//maps/VilethornWoods/scripts.pory"
	faceplayer
# 211 "data//maps/VilethornWoods/scripts.pory"
	goto_if_set FLAG_VILETHORN_NPC_ITEM, VilethornWoods_NPC3_2
# 214 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_1
# 215 "data//maps/VilethornWoods/scripts.pory"
	giveitem ITEM_SCOPE_LENS
# 216 "data//maps/VilethornWoods/scripts.pory"
	setflag FLAG_VILETHORN_NPC_ITEM
VilethornWoods_NPC3_1:
# 219 "data//maps/VilethornWoods/scripts.pory"
	releaseall
	return

VilethornWoods_NPC3_2:
# 212 "data//maps/VilethornWoods/scripts.pory"
	msgbox VilethornWoods_NPC3_Text_0
	goto VilethornWoods_NPC3_1


# 57 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_0:
# 57 "data//maps/VilethornWoods/scripts.pory"
	jump_in_place_right
	step_end

# 62 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_1:
# 62 "data//maps/VilethornWoods/scripts.pory"
	emote_exclamation_mark
	step_end

# 69 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_2:
# 69 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 69 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 69 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 69 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 69 "data//maps/VilethornWoods/scripts.pory"
	walk_up
# 69 "data//maps/VilethornWoods/scripts.pory"
	walk_up
	step_end

# 73 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_3:
# 73 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 73 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 73 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 73 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 73 "data//maps/VilethornWoods/scripts.pory"
	walk_down
# 73 "data//maps/VilethornWoods/scripts.pory"
	walk_down
	step_end

# 76 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_4:
# 76 "data//maps/VilethornWoods/scripts.pory"
	face_left
	step_end

# 79 "data//maps/VilethornWoods/scripts.pory"
VilethornWoods_EventScript_TriggerProf_Movement_5:
# 79 "data//maps/VilethornWoods/scripts.pory"
	face_right
	step_end

VilethornWoods_EventScript_NurseDemo_Text_0:
# 12 "data//maps/VilethornWoods/scripts.pory"
	.string "This area is closed for the demo.$"

VilethornWoods_EventScript_DemoEnd_Text_0:
# 20 "data//maps/VilethornWoods/scripts.pory"
	.string "This is the end of the demo. Thank you\n"
	.string "for playing! I hope you had fun. Please\l"
	.string "let me know how your experience went in\l"
	.string "the Discord server!$"

VilethornWoods_EventScript_TriggerProf_Text_0:
# 60 "data//maps/VilethornWoods/scripts.pory"
	.string "GRUNT: Move, Professor! Otherwise\n"
	.string "someone will see us.$"

VilethornWoods_EventScript_TriggerProf_Text_1:
# 65 "data//maps/VilethornWoods/scripts.pory"
	.string "PROF: Fine, fine! I'm moving. Don't\n"
	.string "manhandle me, you animal.$"

VilethornWoods_EventScript_TriggerProf_Text_2:
# 82 "data//maps/VilethornWoods/scripts.pory"
	.string "Must be a wild IMPIDIMP or something...$"

VilethornWoods_Trainer_A_Text_0:
# 104 "data//maps/VilethornWoods/scripts.pory"
	.string "PSYCHIC type {PKMN} are my natural\n"
	.string "enemies! That's why I'm training here.$"

VilethornWoods_Trainer_A_Text_1:
# 104 "data//maps/VilethornWoods/scripts.pory"
	.string "I like PSYCHIC types more than you!$"

VilethornWoods_Trainer_A_Text_2:
# 105 "data//maps/VilethornWoods/scripts.pory"
	.string "I like training but I don't want to go to\n"
	.string "deep into this forest...$"

VilethornWoods_Trainer_B_Text_0:
# 111 "data//maps/VilethornWoods/scripts.pory"
	.string "I thought these woods would have BUG\n"
	.string "type {PKMN}, but I can't find any. I'm so\l"
	.string "bummed! But beating you in battle will\l"
	.string "make me feel better!$"

VilethornWoods_Trainer_B_Text_1:
# 111 "data//maps/VilethornWoods/scripts.pory"
	.string "I don't feel better at all!$"

VilethornWoods_Trainer_B_Text_2:
# 112 "data//maps/VilethornWoods/scripts.pory"
	.string "This forest is weird...a dense fog, no\n"
	.string "BUG types...$"

VilethornWoods_Trainer_C_Text_0:
# 118 "data//maps/VilethornWoods/scripts.pory"
	.string "The sweet, delicious fog envelops\n"
	.string "us...we are one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_1:
# 118 "data//maps/VilethornWoods/scripts.pory"
	.string "You're not one with the mindwaves!$"

VilethornWoods_Trainer_C_Text_2:
# 119 "data//maps/VilethornWoods/scripts.pory"
	.string "I want to go deeper...sink\n"
	.string "deeper...escape my real life...$"

VilethornWoods_Trainer_D_Text_0:
# 125 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a {PKMN} Breeder. Like all breeders, we\n"
	.string "specialise in certain {PKMN} forms. I'm a\l"
	.string "horse breeding expert!$"

VilethornWoods_Trainer_D_Text_1:
# 125 "data//maps/VilethornWoods/scripts.pory"
	.string "Well fought!$"

VilethornWoods_Trainer_D_Text_2:
# 126 "data//maps/VilethornWoods/scripts.pory"
	.string "I need to raise my horses to become\n"
	.string "stronger. Maybe some VITAMINS would\l"
	.string "help...$"

VilethornWoods_Trainer_E_Text_0:
# 132 "data//maps/VilethornWoods/scripts.pory"
	.string "Eek! These woods creep me out! I'm so\n"
	.string "scared of the DROWZEE - what if I get\l"
	.string "hypnotised?$"

VilethornWoods_Trainer_E_Text_1:
# 132 "data//maps/VilethornWoods/scripts.pory"
	.string "You creep me out too!$"

VilethornWoods_Trainer_E_Text_2:
# 133 "data//maps/VilethornWoods/scripts.pory"
	.string "I've been stuck here for hours. I need\n"
	.string "to get out of here...$"

VilethornWoods_Trainer_F1_Text_0:
# 141 "data//maps/VilethornWoods/scripts.pory"
	.string "We bonded over our love for battling! Do\n"
	.string "you want to battle?$"

VilethornWoods_Trainer_F1_Text_1:
# 141 "data//maps/VilethornWoods/scripts.pory"
	.string "We lost!$"

VilethornWoods_Trainer_F1_Text_2:
# 142 "data//maps/VilethornWoods/scripts.pory"
	.string "I met her at a {PKMN} Breeder festival.\n"
	.string "There was a battle competition and we\l"
	.string "were the two finalists!$"

VilethornWoods_Trainer_F2_Text_0:
# 151 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe one day you'll find your true love\n"
	.string "during a battle too!$"

VilethornWoods_Trainer_G_Text_0:
# 157 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm one of the best bug catchers\n"
	.string "around. I want to become a Gym Leader\l"
	.string "one day!$"

VilethornWoods_Trainer_G_Text_1:
# 157 "data//maps/VilethornWoods/scripts.pory"
	.string "Are you a Gym Leader or something?$"

VilethornWoods_Trainer_G_Text_2:
# 158 "data//maps/VilethornWoods/scripts.pory"
	.string "As a Gym Leader to-be, my team needs to\n"
	.string "be able to handle a variety of threats.$"

VilethornWoods_Trainer_H_Text_0:
# 164 "data//maps/VilethornWoods/scripts.pory"
	.string "I wonder what's inside this\n"
	.string "house...maybe there's some loot!$"

VilethornWoods_Trainer_H_Text_1:
# 164 "data//maps/VilethornWoods/scripts.pory"
	.string "No loot for me!$"

VilethornWoods_Trainer_H_Text_2:
# 165 "data//maps/VilethornWoods/scripts.pory"
	.string "Fine, I'll just stand here and look while\n"
	.string "you loot everything...$"

VilethornWoods_NPC1_Text_0:
# 175 "data//maps/VilethornWoods/scripts.pory"
	.string "The MORELULL here in VILETHORN WOODS\n"
	.string "release spores when in danger. That's\l"
	.string "what creates this fog.$"

VilethornWoods_NPC2_Text_0:
# 185 "data//maps/VilethornWoods/scripts.pory"
	.string "These mushrooms are really rare, you\n"
	.string "know?$"

VilethornWoods_NPC2_Text_1:
# 187 "data//maps/VilethornWoods/scripts.pory"
	.string "I'm a traveling chef! While I usually\n"
	.string "cook at the PELLUCA RESTAURANT, I'm\l"
	.string "here to collect mushrooms to create\l"
	.string "new recipes...but I can only find TINY\l"
	.string "MUSHROOMs! Say, why don't you help me?\l"
	.string "If you can get me a BIG MUSHROOM, I'll\l"
	.string "find something to give you in exchange!\p"
	.string "Have you got a BIG MUSHROOM?$"

VilethornWoods_NPC2_Text_2:
# 192 "data//maps/VilethornWoods/scripts.pory"
	.string "Perfect! This'll be a great addition to\n"
	.string "our pantry. Thank you! Now I must give\l"
	.string "you something in exchage...$"

VilethornWoods_NPC2_Text_3:
# 196 "data//maps/VilethornWoods/scripts.pory"
	.string "Maybe I'll see you somewhere else, since\n"
	.string "I travel all over CORMORIA. And if you\l"
	.string "ever visit PELLUCA CITY, be sure to\l"
	.string "drop by our restaurant!$"

VilethornWoods_NPC2_Text_4:
# 198 "data//maps/VilethornWoods/scripts.pory"
	.string "Hey, you don't have any! Are you trying\n"
	.string "to trick me? The DROWZEE and MORELULL\l"
	.string "doing enough of that!$"

VilethornWoods_NPC2_Text_5:
# 201 "data//maps/VilethornWoods/scripts.pory"
	.string "Come back when you do!$"

VilethornWoods_NPC3_Text_0:
# 212 "data//maps/VilethornWoods/scripts.pory"
	.string "I am well and truly lost...$"

VilethornWoods_NPC3_Text_1:
# 214 "data//maps/VilethornWoods/scripts.pory"
	.string "I am well and truly lost...even with this\n"
	.string "SCOPE LENS, I can't see a thing! Why\l"
	.string "don't you have it?$"
