.set LOCALID_BLUE, 1

NavelRock_B1F_MapScripts::
	.byte 0

NavelRock_EventScript_Blue::
	lock
	goto_if_set FLAG_DEFEATED_NAVEL_ROCK_BLUE, NavelRock_BlueDefeated
	waitse
	playse SE_PIN
	applymovement LOCALID_BLUE, Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	applymovement LOCALID_BLUE, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_BLUE, Common_Movement_Delay48
	waitmovement 0
	msgbox NavelRock_Text_BlueIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_BLUE, NavelRock_Text_BlueDefeat
	msgbox NavelRock_Text_BlueDefeated, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_NAVEL_ROCK_BLUE
	release
	end

NavelRock_EventScript_BlueDefeated::
	applymovement LOCALID_BLUE, Common_Movement_FacePlayer
	waitmovement 0
	msgbox NavelRock_Text_BlueDefeat, MSGBOX_DEFAULT
	release
	end

NavelRock_BlueDefeated::
	lock
	waitse
	applymovement LOCALID_BLUE, Common_Movement_FacePlayer
	waitmovement 0
	msgbox NavelRock_Text_BlueDefeated, MSGBOX_DEFAULT
	release
	end

NavelRock_Text_BlueIntro:
	.string "Yo. The names BLUE. I'm the strongest\n"
	.string "trainer around, or, well, I was. Until\l"
	.string "that punk from JOHTO beat me. Still, I\l"
	.string "will be the strongest trainer ever! IT'S\l"
	.string "MY BURNING DESIRE!!$"

NavelRock_Text_BlueDefeat:
	.string "No!$"

NavelRock_Text_BlueDefeated:
	.string "Ugh, well, I guess some humility never\n"
	.string "hurts. Thanks for the battle.$"
