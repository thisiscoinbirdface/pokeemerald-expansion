# 1 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"

# 2 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
    .set LOCALID_KOHLA, 16

GalecrestCity_DetectiveAcademy_MapScripts::
	.byte 0


GalecrestCity_DetectiveAcademy_EventScript_Kohla::
# 11 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 15 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_0
# 16 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 18 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0
# 19 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 20 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	delay 24
# 21 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_1
# 22 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_1
# 26 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 27 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0
# 29 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_2
# 30 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement LOCALID_KOHLA, GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_2
# 33 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 34 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	removeobject LOCALID_KOHLA
# 35 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	setflag FLAG_DETECTIVE_ACAD_KOHLA
# 37 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_Breech::
# 44 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 45 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 46 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Breech_Text_0
# 47 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 13, GalecrestCity_DetectiveAcademy_Breech_Movement_0
# 48 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_Clefairy::
# 52 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 53 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Clefairy_Text_0
# 54 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_Receptionist::
# 67 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 68 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 69 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Receptionist_Text_0
# 70 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_Guard::
# 76 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 77 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 78 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Guard_Text_0
# 79 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Armarouge::
# 84 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 85 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 86 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_ARMAROUGE, CRY_MODE_NORMAL
# 87 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Armarouge_Text_0
# 88 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 22, GalecrestCity_DetectiveAcademy_Armarouge_Movement_0
# 89 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 90 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_NPC1::
# 96 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 97 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 98 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC1_Text_0
# 99 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC2::
# 103 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 104 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 105 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC2_Text_0
# 106 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC3::
# 110 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 111 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 112 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC3_Text_0
# 113 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC4::
# 117 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 118 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 119 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC4_Text_0
# 120 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC5::
# 124 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 125 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 126 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC5_Text_0
# 127 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC6::
# 133 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 134 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 135 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC6_Text_0
# 136 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC7::
# 143 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 144 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 145 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC7_Text_0
# 146 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 10, GalecrestCity_DetectiveAcademy_NPC7_Movement_0
# 147 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 148 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC8::
# 152 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 153 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 154 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	trainerbattle_single TRAINER_GALECREST_DETECTIVE_A, GalecrestCity_DetectiveAcademy_NPC8_Text_0, GalecrestCity_DetectiveAcademy_NPC8_Text_1
# 155 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC8_Text_2
# 156 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	release
# 157 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 11, GalecrestCity_DetectiveAcademy_Breech_Movement_0
# 158 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
	end


GalecrestCity_DetectiveAcademy_NPC9::
# 164 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 165 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 166 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC9_Text_0
# 167 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC10::
# 171 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 172 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC10_Text_0
# 173 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC11::
# 177 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 178 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 179 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC11_Text_0
# 180 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_NPC12::
# 184 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 185 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 186 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_NPC12_Text_0
# 187 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	return


GalecrestCity_DetectiveAcademy_Charcadet_Battle::
# 194 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 195 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 196 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 18, GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0
# 197 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 198 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Charcadet_Battle_Text_0
# 199 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Yamper_Battle::
# 204 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 205 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_YAMPER, CRY_MODE_NORMAL
# 206 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	applymovement 19, GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0
# 207 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	waitmovement 0
# 208 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Yamper_Battle_Text_0
# 209 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	releaseall
	end


GalecrestCity_DetectiveAcademy_Charcadet_A::
# 215 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	lockall
# 216 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	faceplayer
# 217 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	playmoncry SPECIES_CHARCADET, CRY_MODE_NORMAL
# 218 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	msgbox GalecrestCity_DetectiveAcademy_Charcadet_A_Text_0
	return


# 18 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_0:
# 18 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_up
	step_end

# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_1:
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_right
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_left
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 25 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_EventScript_Kohla_Movement_2:
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
# 32 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	walk_up
	step_end

# 47 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Breech_Movement_0:
# 47 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_left
	step_end

# 88 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Armarouge_Movement_0:
# 88 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_down
	step_end

# 146 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_NPC7_Movement_0:
# 146 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	face_right
	step_end

# 196 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
GalecrestCity_DetectiveAcademy_Charcadet_Battle_Movement_0:
# 196 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	jump_in_place_left
	step_end

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_0:
# 15 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "KOHLA: I'm an orphan. As a child I\n"
	.string "learned to rely on myself.\p"
	.string "I saw a lot of bad stuff growing up, so I\n"
	.string "wanted to become a detective.\p"
	.string "So I did.\p"
	.string "I graduated from this academy at the\n"
	.string "top of my class...\p"
	.string "...but it wasn't enough.$"

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_1:
# 21 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "{PLAYER}, it was you who stopped Team\n"
	.string "Somber from getting the dreamstone.\p"
	.string "Thanks to you, I learned something.\n"
	.string "Being the Ace Rookie isn't enough. To\l"
	.string "stop Team Somber - no, to stop all crime,\l"
	.string "I need to become stronger than the\l"
	.string "criminals.\p"
	.string "Stronger...at any cost.$"

GalecrestCity_DetectiveAcademy_EventScript_Kohla_Text_2:
# 29 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Silversun City is east of here, but the\n"
	.string "path is blocked by rocks. The Gym\l"
	.string "Leader here can teach your {PKMN} ROCK\l"
	.string "SMASH, which will let you pass.\p"
	.string "See you in Silversun City...or sooner\n"
	.string "than that, I think.$"

GalecrestCity_DetectiveAcademy_Breech_Text_0:
# 46 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "It's you {PLAYER}! How are you?\n"
	.string "CLEFAIRY and I are sitting in this class\l"
	.string "on {PKMN} battles. Yep, to be a good\l"
	.string "detective, you need to be a strong\l"
	.string "trainer too!$"

GalecrestCity_DetectiveAcademy_Clefairy_Text_0:
# 53 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "CLEFAIRY is listening intently to the\n"
	.string "teacher. A good student!$"

GalecrestCity_DetectiveAcademy_Receptionist_Text_0:
# 69 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Welcome to the Detective Academy!$"

GalecrestCity_DetectiveAcademy_Guard_Text_0:
# 78 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Dorm access is for students only. That\n"
	.string "ARMAROUGE won't let you in without a\l"
	.string "STUDENT ID!$"

GalecrestCity_DetectiveAcademy_Armarouge_Text_0:
# 87 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "ARMAROUGE leers down at you...and\n"
	.string "continues to look straight ahead.$"

GalecrestCity_DetectiveAcademy_NPC1_Text_0:
# 98 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Ooh! Ohh! Are the new class rankings\n"
	.string "out yet?$"

GalecrestCity_DetectiveAcademy_NPC2_Text_0:
# 105 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Every semester, the school ranks all\n"
	.string "the students. The top student is called\l"
	.string "the Ace Rookie! KOHLA held the title\l"
	.string "every semester, but he's graduated now,\l"
	.string "so the field is open again!$"

GalecrestCity_DetectiveAcademy_NPC3_Text_0:
# 112 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "All new students receive a CHARCADET\n"
	.string "as their first {PKMN}. It's the standard\l"
	.string "detective companion.$"

GalecrestCity_DetectiveAcademy_NPC4_Text_0:
# 119 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Since many rich folk live in GALECREST\n"
	.string "CITY, there's a lot of theft. New\l"
	.string "students are often handed smaller\l"
	.string "cases to solve as part of their field\l"
	.string "studies.$"

GalecrestCity_DetectiveAcademy_NPC5_Text_0:
# 126 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I'm going to join today! I'm so excited\n"
	.string "to get my CHARCADET and become an Ace\l"
	.string "Rookie!$"

GalecrestCity_DetectiveAcademy_NPC6_Text_0:
# 135 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Are you a student? You shouldn't be\n"
	.string "here if you aren't.$"

GalecrestCity_DetectiveAcademy_NPC7_Text_0:
# 145 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "We're battling to practice for our\n"
	.string "exams. It's very competitive here.\l"
	.string "Losers like you can't cut it.$"

GalecrestCity_DetectiveAcademy_NPC8_Text_0:
# 154 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "Hey, you look weak.\n"
	.string "You'd be a good training\n"
	.string "dummy for my CHARCADET!$"

GalecrestCity_DetectiveAcademy_NPC8_Text_1:
# 154 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "But you're not even a student!$"

GalecrestCity_DetectiveAcademy_NPC8_Text_2:
# 155 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "You may have beaten me, but I bet you\n"
	.string "can't beat KOHLA! He's the star of the\l"
	.string "Academy!$"

GalecrestCity_DetectiveAcademy_NPC9_Text_0:
# 166 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "These two only focus on battling. But\n"
	.string "true detectives can do a lot more! We\l"
	.string "have to investigate clues, interrogate\l"
	.string "suspects and disguise ourselves.$"

GalecrestCity_DetectiveAcademy_NPC10_Text_0:
# 172 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "...and as you can see here, according to\n"
	.string "the theory of...\p"
	.string "The teacher is engrossed in his lecture.$"

GalecrestCity_DetectiveAcademy_NPC11_Text_0:
# 179 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I love this teacher's style! I wish he\n"
	.string "taught a more interesting subject.$"

GalecrestCity_DetectiveAcademy_NPC12_Text_0:
# 186 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "I love the topic but this teacher is so\n"
	.string "boring!$"

GalecrestCity_DetectiveAcademy_Charcadet_Battle_Text_0:
# 198 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "CHARCADET is battling intensely!$"

GalecrestCity_DetectiveAcademy_Yamper_Battle_Text_0:
# 208 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "YAMPER's not backing down!$"

GalecrestCity_DetectiveAcademy_Charcadet_A_Text_0:
# 218 "data//maps/GalecrestCity_DetectiveAcademy/scripts.pory"
	.string "CHARCADET is also curious about the\n"
	.string "class rankings!$"
