# 1 "data//maps/RivetshoreCity/scripts.pory"

# 2 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_KOHLA, 21
# 3 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_DET1, 22
# 4 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_DET2, 23
# 5 "data//maps/RivetshoreCity/scripts.pory"

# 6 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_INGER, 15
# 7 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_ARIANA, 14
# 8 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_GLORIA, 16
# 9 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_CARONA, 17
# 10 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_VINIEL, 18
# 11 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_JANIA, 19
# 12 "data//maps/RivetshoreCity/scripts.pory"
    .set LOCALID_RAAZI, 20

RivetshoreCity_MapScripts::
	.byte 0


RivetshoreCity_Assembly_Trigger::
# 26 "data//maps/RivetshoreCity/scripts.pory"
	goto_if_set FLAG_RIVETSHORE_ASSEMBLY, RivetshoreCity_Assembly_Trigger_2
# 30 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_VINIEL
# 31 "data//maps/RivetshoreCity/scripts.pory"
	removeobject LOCALID_CARONA
# 34 "data//maps/RivetshoreCity/scripts.pory"
	special SpawnCameraObject
# 35 "data//maps/RivetshoreCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RivetshoreCity_Assembly_Trigger_Movement_0
# 36 "data//maps/RivetshoreCity/scripts.pory"
	waitmovement 0
# 40 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 41 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 42 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_1
# 44 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 45 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 46 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_2, RivetshoreCity_Assembly_Trigger_Text_3
# 47 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_2
# 48 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 49 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_4, RivetshoreCity_Assembly_Trigger_Text_5
# 50 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 51 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 52 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_7
# 55 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 56 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 57 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_8
# 58 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_3
# 59 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 60 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_10
# 65 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 66 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 67 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_11
# 68 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 69 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 70 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_12
# 71 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_2
# 72 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 73 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_13, RivetshoreCity_Assembly_Trigger_Text_14
# 74 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_2
# 75 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 76 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_16
# 78 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 79 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 80 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_17
# 81 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 82 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 83 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_18
# 84 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_1
# 85 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 86 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_19
# 87 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_4
# 88 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 89 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_20
# 90 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_1
# 91 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 92 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_21, RivetshoreCity_Assembly_Trigger_Text_22
# 94 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_GLORIA, RivetshoreCity_Assembly_Trigger_Movement_2
# 95 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 96 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_JANIA, RivetshoreCity_Assembly_Trigger_Movement_2
# 97 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_2
# 98 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_2
# 99 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 100 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_23
# 102 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_KOHLA, RivetshoreCity_Assembly_Trigger_Movement_1
# 103 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 104 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_21, RivetshoreCity_Assembly_Trigger_Text_24
# 106 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_ARIANA, RivetshoreCity_Assembly_Trigger_Movement_2
# 107 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 108 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_9, RivetshoreCity_Assembly_Trigger_Text_25
# 110 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_5
# 111 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 112 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_26
# 115 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_RAAZI, RivetshoreCity_Assembly_Trigger_Movement_2
# 116 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 117 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_27
# 118 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_DET1, RivetshoreCity_Assembly_Trigger_Movement_2
# 119 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 120 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_0, RivetshoreCity_Assembly_Trigger_Text_28
# 121 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_29
# 122 "data//maps/RivetshoreCity/scripts.pory"
	applymovement LOCALID_INGER, RivetshoreCity_Assembly_Trigger_Movement_6
# 123 "data//maps/RivetshoreCity/scripts.pory"
	movedelay
# 124 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_15, RivetshoreCity_Assembly_Trigger_Text_30
# 125 "data//maps/RivetshoreCity/scripts.pory"
	msgbox_delay RivetshoreCity_Assembly_Trigger_Text_6, RivetshoreCity_Assembly_Trigger_Text_31
# 129 "data//maps/RivetshoreCity/scripts.pory"
	setflag FLAG_RIVETSHORE_ASSEMBLY
# 130 "data//maps/RivetshoreCity/scripts.pory"
	releaseall
	end

RivetshoreCity_Assembly_Trigger_2:
	end


# 35 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_0:
# 35 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 35 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 35 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 35 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 35 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 35 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 35 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
# 35 "data//maps/RivetshoreCity/scripts.pory"
	walk_right
	step_end

# 40 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_1:
# 40 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_down
	step_end

# 44 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_2:
# 44 "data//maps/RivetshoreCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 58 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_3:
# 58 "data//maps/RivetshoreCity/scripts.pory"
	jump_in_place_left
	step_end

# 87 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_4:
# 87 "data//maps/RivetshoreCity/scripts.pory"
	face_right
	step_end

# 110 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_5:
# 110 "data//maps/RivetshoreCity/scripts.pory"
	face_down
	step_end

# 122 "data//maps/RivetshoreCity/scripts.pory"
RivetshoreCity_Assembly_Trigger_Movement_6:
# 122 "data//maps/RivetshoreCity/scripts.pory"
	emote_question_mark
	step_end

RivetshoreCity_Assembly_Trigger_Text_0:
# 42 "data//maps/RivetshoreCity/scripts.pory"
	.string "Detective$"

RivetshoreCity_Assembly_Trigger_Text_1:
# 42 "data//maps/RivetshoreCity/scripts.pory"
	.string "Thank you gym leaders for assembling\n"
	.string "here on such short notice.$"

RivetshoreCity_Assembly_Trigger_Text_2:
# 46 "data//maps/RivetshoreCity/scripts.pory"
	.string "???$"

RivetshoreCity_Assembly_Trigger_Text_3:
# 46 "data//maps/RivetshoreCity/scripts.pory"
	.string "It's our duty, detectives.\n"
	.string "No need to thank us.$"

RivetshoreCity_Assembly_Trigger_Text_4:
# 49 "data//maps/RivetshoreCity/scripts.pory"
	.string "Ariana$"

RivetshoreCity_Assembly_Trigger_Text_5:
# 49 "data//maps/RivetshoreCity/scripts.pory"
	.string "Easy for you to say, Raazi!\p"
	.string "You live here. Inger and I came all the\n"
	.string "way from the other side of Cormoria!$"

RivetshoreCity_Assembly_Trigger_Text_6:
# 52 "data//maps/RivetshoreCity/scripts.pory"
	.string "Raazi$"

RivetshoreCity_Assembly_Trigger_Text_7:
# 52 "data//maps/RivetshoreCity/scripts.pory"
	.string "Which is also your duty.$"

RivetshoreCity_Assembly_Trigger_Text_8:
# 57 "data//maps/RivetshoreCity/scripts.pory"
	.string "I don't see all of you, though.\n"
	.string "Who's missing?$"

RivetshoreCity_Assembly_Trigger_Text_9:
# 60 "data//maps/RivetshoreCity/scripts.pory"
	.string "Gloria$"

RivetshoreCity_Assembly_Trigger_Text_10:
# 60 "data//maps/RivetshoreCity/scripts.pory"
	.string "Viniel and Carona sent word - they're on\n"
	.string "their way.\n"
	.string "They'll take some time, considering how\l"
	.string "remote they are.$"

RivetshoreCity_Assembly_Trigger_Text_11:
# 67 "data//maps/RivetshoreCity/scripts.pory"
	.string "Unfortunately we don't have time to\n"
	.string "wait for them.\p"
	.string "Allow us to explain the situation as it\n"
	.string "stands.\p"
	.string "All of you know about the\n"
	.string "disappearance of Professor Tenebris in\l"
	.string "connection with the dreamstones and\l"
	.string "the involvement of Team Somber in this\l"
	.string "case.$"

RivetshoreCity_Assembly_Trigger_Text_12:
# 70 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes.$"

RivetshoreCity_Assembly_Trigger_Text_13:
# 73 "data//maps/RivetshoreCity/scripts.pory"
	.string "Jania$"

RivetshoreCity_Assembly_Trigger_Text_14:
# 73 "data//maps/RivetshoreCity/scripts.pory"
	.string "I hope the Professor is safe, wherever\n"
	.string "she is.$"

RivetshoreCity_Assembly_Trigger_Text_15:
# 76 "data//maps/RivetshoreCity/scripts.pory"
	.string "Inger$"

RivetshoreCity_Assembly_Trigger_Text_16:
# 76 "data//maps/RivetshoreCity/scripts.pory"
	.string "Just you watch - I'm going to teach\n"
	.string "Team Somber a lesson!$"

RivetshoreCity_Assembly_Trigger_Text_17:
# 80 "data//maps/RivetshoreCity/scripts.pory"
	.string "We regret to say that despite all our\n"
	.string "efforts, not a single trace of the\l"
	.string "Professor has yet been found. Nobody\l"
	.string "has seen her anywhere. Our working\l"
	.string "theory is that Team Somber is holding\l"
	.string "her captive somewhere...\p"
	.string "...and that leads us to today.\p"
	.string "A massive uptick in geological activity\n"
	.string "was recoded by the Pokemon Ranger\l"
	.string "Institute yesterday.\p"
	.string "The heat signatures were off the\n"
	.string "charts. I quote the Ranger Head\l"
	.string "verbatim here - it's like the beginning\l"
	.string "of a region-wide drought.\p"
	.string "The location?\p"
	.string "An uncharted island off the coast of\n"
	.string "Rivetshore City.$"

RivetshoreCity_Assembly_Trigger_Text_18:
# 83 "data//maps/RivetshoreCity/scripts.pory"
	.string "That explains the heatwave we had\n"
	.string "yesterday. It must be Team Somber's\l"
	.string "doing.$"

RivetshoreCity_Assembly_Trigger_Text_19:
# 86 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla here has been working the case.\n"
	.string "He's handed over his Gym Leader duties\l"
	.string "to the next Ace Rookie, and is now\l"
	.string "pursuing Team Somber with all his\l"
	.string "energy.$"

RivetshoreCity_Assembly_Trigger_Text_20:
# 89 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla - tell them about the Ancient\n"
	.string "Terror.$"

RivetshoreCity_Assembly_Trigger_Text_21:
# 92 "data//maps/RivetshoreCity/scripts.pory"
	.string "Kohla$"

RivetshoreCity_Assembly_Trigger_Text_22:
# 92 "data//maps/RivetshoreCity/scripts.pory"
	.string "Right, yes, well.\p"
	.string "Ahem.\p"
	.string "So,well...they've got the Ancient Terror.$"

RivetshoreCity_Assembly_Trigger_Text_23:
# 100 "data//maps/RivetshoreCity/scripts.pory"
	.string "What? How?$"

RivetshoreCity_Assembly_Trigger_Text_24:
# 104 "data//maps/RivetshoreCity/scripts.pory"
	.string "My ex-colleague and I chased them into\n"
	.string "Ancient Cormoria through a\l"
	.string "dreamstone...where I saw Melea, one of\l"
	.string "the admins, capture the Ancient Terror\l"
	.string "with a Master Ball.$"

RivetshoreCity_Assembly_Trigger_Text_25:
# 108 "data//maps/RivetshoreCity/scripts.pory"
	.string "They were strong enough without\n"
	.string "it...but with the Ancient Terror, they'll\l"
	.string "be unstoppable!$"

RivetshoreCity_Assembly_Trigger_Text_26:
# 112 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes...which is why we need the combined\n"
	.string "power of the eight strongest trainers\l"
	.string "in all of Cormoria.\p"
	.string "We think heatwave has something to do\n"
	.string "with the Ancient Terror...and we also\l"
	.string "have reason to believe worse is on the\l"
	.string "way.\p"
	.string "So we need to get to this uncharted\n"
	.string "island ASAP!$"

RivetshoreCity_Assembly_Trigger_Text_27:
# 117 "data//maps/RivetshoreCity/scripts.pory"
	.string "We should wait for Viniel and Carona\n"
	.string "however. Without Medicham and\l"
	.string "Ampharos, we'll lose a lot of our\l"
	.string "firepower.$"

RivetshoreCity_Assembly_Trigger_Text_28:
# 120 "data//maps/RivetshoreCity/scripts.pory"
	.string "Time is of the essence, Raazi. We need\n"
	.string "someone to go now.$"

RivetshoreCity_Assembly_Trigger_Text_29:
# 121 "data//maps/RivetshoreCity/scripts.pory"
	.string "Then I propose Kohla.\p"
	.string "He's a star and I can vouch for his\n"
	.string "strength.$"

RivetshoreCity_Assembly_Trigger_Text_30:
# 124 "data//maps/RivetshoreCity/scripts.pory"
	.string "Did he beat you, Raazi?$"

RivetshoreCity_Assembly_Trigger_Text_31:
# 125 "data//maps/RivetshoreCity/scripts.pory"
	.string "Yes. He's now got all eight badges and is\n"
	.string "a fearsome trainer.\p"
	.string "Not to mention - he's been fighting\n"
	.string "Team Somber from the start. His\l"
	.string "dedication to the cause is far beyond\l"
	.string "the rest of us.$"
