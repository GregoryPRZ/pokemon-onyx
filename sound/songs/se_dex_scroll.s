	.include "MPlayDef.s"

	.equ	se_dex_scroll_grp, voicegroup191
	.equ	se_dex_scroll_pri, 5
	.equ	se_dex_scroll_rev, 0
	.equ	se_dex_scroll_mvl, 100
	.equ	se_dex_scroll_key, 0
	.equ	se_dex_scroll_tbs, 1
	.equ	se_dex_scroll_exg, 1
	.equ	se_dex_scroll_cmp, 1

	.section .rodata
	.global	se_dex_scroll
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

se_dex_scroll_1:
	.byte	KEYSH , se_dex_scroll_key+0
@ 000   ----------------------------------------
	.byte	TEMPO , (100*se_dex_scroll_tbs+1)/2
	.byte		VOICE , 4
	.byte		VOL   , 127*se_dex_scroll_mvl/mxv
	.byte		BEND  , c_v+0
	.byte		N02   , Bn3 , v127
	.byte	W02
	.byte		N03   , Bn4 , v112
	.byte	W04
	.byte		N02   , Bn4 , v024
	.byte	W03
	.byte		        Bn4 , v048
	.byte	W03
	.byte		        Bn4 , v024
	.byte	W02
	.byte	FINE

@******************************************************@
	.align	2

se_dex_scroll:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	se_dex_scroll_pri	@ Priority
	.byte	se_dex_scroll_rev	@ Reverb.

	.word	se_dex_scroll_grp

	.word	se_dex_scroll_1

	.end
