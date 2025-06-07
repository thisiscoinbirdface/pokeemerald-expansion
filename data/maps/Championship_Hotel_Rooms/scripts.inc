# 1 "data//maps/Championship_Hotel_Rooms/scripts.pory"

# 2 "data//maps/Championship_Hotel_Rooms/scripts.pory"
    .set LOCALID_MELEA, 7
# 3 "data//maps/Championship_Hotel_Rooms/scripts.pory"
    .set LOCALID_MOXIE, 8

Championship_Hotel_Rooms_MapScripts::
	.byte 0


Championship_Hotel_Rooms_NPC1::
# 17 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC1_Text_0, MSGBOX_NPC
	end


Championship_Hotel_Rooms_NPC2::
# 21 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC1_Text_0, MSGBOX_NPC
	end


Championship_Hotel_Rooms_Mon::
# 25 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	playmoncry SPECIES_TREECKO, CRY_MODE_NORMAL
# 26 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC1_Text_0, MSGBOX_NPC
	end


Championship_Hotel_Rooms_NPC3::
# 30 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC1_Text_0, MSGBOX_NPC
	end


Championship_Hotel_Rooms_NPC4::
# 34 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	msgbox Championship_Hotel_Rooms_NPC1_Text_0, MSGBOX_NPC
	end


Championship_Hotel_Rooms_Kohla::
	return


Championship_Hotel_Rooms_NPC1_Text_0:
# 17 "data//maps/Championship_Hotel_Rooms/scripts.pory"
	.string "$"
