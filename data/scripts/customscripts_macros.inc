@ Macros
    @for messages with delays
	.macro msgbox_delay name:req, text:req
    speakername \name
    msgbox \text, MSGBOX_DEFAULT
    release
    delay 16
	.endm

    @quick movedelay
    .macro movedelay
    waitmovement 0
    delay 16
    .endm
